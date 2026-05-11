#pragma once
#include "MaquinaController.h"
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::IO;
using namespace SGELProdAutomController;

MaquinaController::MaquinaController() {
    this->listaMaquinas = gcnew List<Maquina^>();
	
    /* 
    TXT: Leer el archivo de texto y cargar los datos en la lista
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
    */

    // BIN: Leer el archivo binario y cargar los datos en la lista
    this->archivo = "maquina.bin";
    try {
        if (File::Exists(this->archivo)) {
            // El archivo existe, proceder con la lectura
            Stream^ stream = File::Open(this->archivo, FileMode::Open);
            BinaryFormatter^ formateador = gcnew BinaryFormatter();
            this->listaMaquinas = dynamic_cast<List<Maquina^>^>(formateador->Deserialize(stream));
            stream->Close();
        }
        else {
            // El archivo no existe, crear lista vacía
            Console::WriteLine("Archivo no encontrado. Creando nueva lista vacía.");
            this->listaMaquinas = gcnew List<Maquina^>();

            // Opcional: guardar lista vacía inmediatamente
            Stream^ stream = File::Create(this->archivo);
            BinaryFormatter^ formateador = gcnew BinaryFormatter();
            formateador->Serialize(stream, this->listaMaquinas);
            stream->Close();
        }
    }
    catch (Exception^ ex) {
        Console::WriteLine("Error: " + ex->Message);
        // En caso de cualquier error, crear lista vacía
        this->listaMaquinas = gcnew List<Maquina^>();
    }
}

List<Maquina^>^ MaquinaController::ObtenerTodosMaquinas() {
    return this->listaMaquinas;
}

void MaquinaController::AgregarMaquina(Maquina^ maquina) {
    if (!ExisteMaquina(maquina->getIdMaquina())) {
        this->listaMaquinas->Add(maquina);
        //escribirArchivo();
        escribirArchivoBIN();
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
        //escribirArchivo();
        escribirArchivoBIN();
        return true;
    }
    return false;

}

bool MaquinaController::EliminarMaquina(int id) {
    Maquina^ maquina = ConsultarMaquinaPorId(id);
    if (maquina != nullptr) {
        this->listaMaquinas->Remove(maquina);
        //escribirArchivo();
        escribirArchivoBIN();
        return true;
    }
    return false;
}

void MaquinaController::CloseMaquina() {
    this->listaMaquinas = nullptr;
}

// Método para escribir en el archivo BIN
void MaquinaController::escribirArchivoBIN() {
    //Creamos el archivo
    Stream^ stream = File::Open(this->archivo, FileMode::Create);
    BinaryFormatter^ formateador = gcnew BinaryFormatter();
    formateador->Serialize(stream, this->listaMaquinas);
    stream->Close();
}