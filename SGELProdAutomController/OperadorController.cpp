#pragma once
#include "OperadorController.h"
using namespace System::IO;
using namespace SGELProdAutomController;

OperadorController::OperadorController() {
    this->listaOperadores = gcnew List<Operador^>();
    if (!File::Exists("operador.txt")) {
        File::WriteAllText("operador.txt", "");
    }
    array<String^>^ lineas = File::ReadAllLines("operador.txt");
    String^ separadores = ";";
    for each(String ^ linea in lineas) {
        array<String^>^ campos = linea->Split(separadores->ToCharArray());
        int id = Convert::ToInt32(campos[0]);
        String^ nombre = campos[1];
        String^ rol = campos[2];
        String^ turno = campos[3];
        String^ ubicacion = campos[4];

        Operador^ operador = gcnew Operador(id, nombre, rol, turno, ubicacion);
        this->listaOperadores->Add(operador);
    }
}

List<Operador^>^ OperadorController::ObtenerTodosOperadores() {
    return this->listaOperadores;
}

void OperadorController::AgregarOperador(Operador^ operador) {
    if (!ExisteOperador(operador->getIdOperador())) {
        this->listaOperadores->Add(operador);
        escribirArchivo();
    }
}

bool OperadorController::ExisteOperador(int id) {
    return ConsultarOperadorPorId(id) != nullptr;
}

Operador^ OperadorController::ConsultarOperadorPorId(int id) {
    for each (Operador ^ operador in this->listaOperadores) {
        if (operador->getIdOperador() == id) {
            return operador;
        }
    }
    return nullptr;
}

void OperadorController::escribirArchivo() {
    array<String^>^ lineasArchivo = gcnew array<String^>(this->listaOperadores->Count);
    for (int i = 0; i < this->listaOperadores->Count; i++) {
        Operador^ operador = this->listaOperadores[i];
        lineasArchivo[i] = operador->getIdOperador() + ";" + operador->getNombre() + ";" +
            operador->getRol() + ";" + operador->getTurno() + ";" + operador->getUbicacion();
    }
    File::WriteAllLines("operador.txt", lineasArchivo);
}

List<Operador^>^ OperadorController::ConsultarOperadorPorIdNombre(int id, String^ nombre)
{
    List<Operador^>^ resultados = gcnew List<Operador^>();
    for each(Operador ^ operador in this->listaOperadores) {
        bool coincideId = (id == 0 || operador->getIdOperador() == id); // 0 significa "cualquier ID"
        bool coincideNombre = (String::IsNullOrEmpty(nombre) || operador->getNombre()->Contains(nombre));

        if (coincideId && coincideNombre) {
            resultados->Add(operador);
        }
    }
    return resultados;
}

bool OperadorController::ModificarOperador(int id, String^ nombre, String^ rol, String^ turno, String^ ubicacion) {
    Operador^ operador = ConsultarOperadorPorId(id);
    if (operador != nullptr) {
        operador->setNombre(nombre);
        operador->setRol(rol);
        operador->setTurno(turno);
        operador->setUbicacion(ubicacion);
        escribirArchivo();
        return true;
    }
    return false;

}

bool OperadorController::EliminarOperador(int id) {
    Operador^ operador = ConsultarOperadorPorId(id);
    if (operador != nullptr) {
        this->listaOperadores->Remove(operador);
        escribirArchivo();
        return true;
    }
    return false;
}

void OperadorController::CloseOperador() {
    this->listaOperadores = nullptr;
}