#pragma once
#include "Elemento.h"

namespace SGELProdAutomModel {

    Elemento::Elemento() {
        this->id = 0;
        this->estado = "Inactivo";
    }

    Elemento::Elemento(int id, String^ estado) {
        this->id = id;
        this->estado = estado;
    }

    int Elemento::getId() {
        return this->id;
    }

    void Elemento::setId(int id) {
        this->id = id;
    }

    String^ Elemento::getEstado() {
        return this->estado;
    }

    void Elemento::setEstado(String^ estado) {
        this->estado = estado;
    }
}