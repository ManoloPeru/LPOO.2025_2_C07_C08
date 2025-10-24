#pragma once
#include "MaquinaController.h"
using namespace System::IO;
using namespace SGELProdAutomController;

MaquinaController::MaquinaController() {
    this->listaMaquinas = gcnew List<Maquina^>();
    if (!File::Exists("maquina.txt")) {
        File::WriteAllText("maquina.txt", "");
    }
    array<String^>^ lineas = File::ReadAllLines("maquina.txt");
    String^ separadores = ";";
    for each(String ^ linea in lineas) {
        array<String^>^ campos = linea->Split(separadores->ToCharArray());
        int id = Convert::ToInt32(campos[0]);
        String^ nombre = campos[1];
        String^ tipo = campos[2];
        String^ turno = campos[3];
        String^ ubicacion = campos[4];

        Maquina^ maquina = gcnew Maquina(id, nombre, tipo, turno, ubicacion);
        this->listaMaquinas->Add(maquina);
    }
}

List<Maquina^>^ MaquinaController::ObtenerTodosMaquinas() {
    return this->listaMaquinas;
}

void MaquinaController::AgregarMaquina(Maquina^ maquina) {
    if (!ExisteMaquina(maquina->getIdMaquina())) {
        this->listaMaquinas->Add(maquina);
        escribirArchivo();
    }
}

bool MaquinaController::ExisteMaquina(int id) {
    return ConsultarMaquinaPorId(id) != nullptr;
}

Maquina^ MaquinaController::ConsultarMaquinaPorId(int id) {
    for each (Maquina ^ maquina in this->listaMaquinas) {
        if (maquina->getIdMaquina() == id) {
            return maquina;
        }
    }
    return nullptr;
}

void MaquinaController::escribirArchivo() {
    array<String^>^ lineasArchivo = gcnew array<String^>(this->listaMaquinas->Count);
    for (int i = 0; i < this->listaMaquinas->Count; i++) {
        Maquina^ maquina = this->listaMaquinas[i];
        lineasArchivo[i] = maquina->getIdMaquina() + ";" + maquina->getNombre() + ";" +
            maquina->getTipo() + ";" + maquina->getEstado() + ";" + maquina->getUbicacion();
    }
    File::WriteAllLines("maquina.txt", lineasArchivo);
}

List<Maquina^>^ MaquinaController::ConsultarMaquinaPorIdNombre(int id, String^ nombre)
{
    List<Maquina^>^ resultados = gcnew List<Maquina^>();
    for each(Maquina ^ maquina in this->listaMaquinas) {
        bool coincideId = (id == 0 || maquina->getIdMaquina() == id); // 0 significa "cualquier ID"
        bool coincideNombre = (String::IsNullOrEmpty(nombre) || maquina->getNombre()->Contains(nombre));

        if (coincideId && coincideNombre) {
            resultados->Add(maquina);
        }
    }
    return resultados;
}

bool MaquinaController::ModificarMaquina(int id, String^ nombre, String^ rol, String^ turno, String^ ubicacion) {
    Maquina^ maquina = ConsultarMaquinaPorId(id);
    if (maquina != nullptr) {
        maquina->setNombre(nombre);
        maquina->setTipo(rol);
        maquina->setEstado(turno);
        maquina->setUbicacion(ubicacion);
        escribirArchivo();
        return true;
    }
    return false;

}

bool MaquinaController::EliminarMaquina(int id) {
    Maquina^ maquina = ConsultarMaquinaPorId(id);
    if (maquina != nullptr) {
        this->listaMaquinas->Remove(maquina);
        escribirArchivo();
        return true;
    }
    return false;
}

void MaquinaController::CloseMaquina() {
    this->listaMaquinas = nullptr;
}