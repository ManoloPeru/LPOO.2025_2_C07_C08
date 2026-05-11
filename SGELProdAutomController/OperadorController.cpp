#pragma once
#include "OperadorController.h"
using namespace System::IO;
using namespace SGELProdAutomController;

OperadorController::OperadorController(String^ pathArchivo) {
    //Paso 1: Construye la ruta completa del archivo de operadores
    this->pathArchivo = Path::Combine(pathArchivo, "operador.txt");
	//Paso 2: Asegura que el directorio exista y carga los operadores desde el archivo
	String^ dir = Path::GetDirectoryName(this->pathArchivo); 
	//Paso3: Si el directorio no existe, lo crea (no falla si ya existe)
    Directory::CreateDirectory(dir); 
    this->listaOperadores = gcnew List<Operador^>();
	//Paso 4: Si el archivo no existe, lo crea vacío. Luego lee las líneas del archivo y carga los operadores en la lista
    if (!File::Exists(this->pathArchivo)) {
		// Si el archivo no existe, lo crea vacío
        File::WriteAllText(this->pathArchivo, "");
    }
	// Lee las líneas del archivo y carga los operadores en la lista
    array<String^>^ lineas = File::ReadAllLines(this->pathArchivo);
	// Define el separador para dividir los campos en cada línea
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
        lineasArchivo[i] = operador->getIdOperador() + ";" + 
            operador->getNombre() + ";" +
            operador->getRol() + ";" + 
            operador->getTurno() + ";" + 
            operador->getUbicacion();
    }
	// Escribe todas las líneas al archivo, sobrescribiendo el contenido anterior
    File::WriteAllLines(this->pathArchivo, lineasArchivo);
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