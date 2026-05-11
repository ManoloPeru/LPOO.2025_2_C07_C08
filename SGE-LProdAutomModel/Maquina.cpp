#pragma once
#include "Maquina.h"

namespace SGELProdAutomModel {

    Maquina::Maquina() {
        this->idMaquina = 0;
        this->nombre = "Sin nombre";
        this->tipo = "Sin tipo";
        this->estado = "Sin estado";
        this->ubicacion = "Sin ubicacion";
    }

    Maquina::Maquina(int idMaquina, String^ nombre, String^ tipo, String^ estado, String^ ubicacion) {
        this->idMaquina = idMaquina;
        this->nombre = nombre;
        this->tipo = tipo;
        this->estado = estado;
        this->ubicacion = ubicacion;
    }

    int Maquina::getIdMaquina() {
        return this->idMaquina;
    }

    void Maquina::setIdMaquina(int id) {
        this->idMaquina = id;
    }

    String^ Maquina::getNombre() {
        return this->nombre;
    }

    void Maquina::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    String^ Maquina::getTipo() {
        return this->tipo;
    }

    void Maquina::setTipo(String^ tipo) {
        this->tipo = tipo;
    }

    String^ Maquina::getEstado() {
        return this->estado;
    }

    void Maquina::setEstado(String^ estado) {
        this->estado = estado;
    }

    String^ Maquina::getUbicacion() {
        return this->ubicacion;
    }

    void Maquina::setUbicacion(String^ ubicacion) {
        this->ubicacion = ubicacion;
    }

    String^ Maquina::ToString() {
        return String::Format("ID: {0}, Nombre: {1}, Tipo: {2}, Estado: {3}, Ubicacion: {4}",
            this->idMaquina, this->nombre, this->tipo, this->estado, this->ubicacion);
    }
}