#pragma once
#include "Operador.h"

namespace SGELProdAutomModel {

    Operador::Operador() {
        this->idOperador = 0;
        this->nombre = "Sin nombre";
        this->rol = "Sin rol";
        this->turno = "Sin turno";
        this->ubicacion = "Sin ubicacion";
    }

    Operador::Operador(int idOperador, String^ nombre, String^ rol, String^ turno, String^ ubicacion) {
        this->idOperador = idOperador;
        this->nombre = nombre;
        this->rol = rol;
        this->turno = turno;
        this->ubicacion = ubicacion;
    }

    int Operador::getIdOperador() {
        return this->idOperador;
    }

    void Operador::setIdOperador(int id) {
        this->idOperador = id;
    }

    String^ Operador::getNombre() {
        return this->nombre;
    }

    void Operador::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    String^ Operador::getRol() {
        return this->rol;
    }

    void Operador::setRol(String^ rol) {
        this->rol = rol;
    }

    String^ Operador::getTurno() {
        return this->turno;
    }

    void Operador::setTurno(String^ turno) {
        this->turno = turno;
    }

    String^ Operador::getUbicacion() {
        return this->ubicacion;
    }

    void Operador::setUbicacion(String^ ubicacion) {
        this->ubicacion = ubicacion;
    }

    String^ Operador::ToString() {
        return String::Format("ID: {0}, Nombre: {1}, Rol: {2}, Turno: {3}, Ubicacion: {4}",
            this->idOperador, this->nombre, this->rol, this->turno, this->ubicacion);
    }
}