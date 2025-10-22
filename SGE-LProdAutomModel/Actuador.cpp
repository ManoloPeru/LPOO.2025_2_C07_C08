#pragma once
#include "Actuador.h"

namespace SGELProdAutomModel {

    Actuador::Actuador() : Elemento() {
        this->tipo = "";
    }

    Actuador::Actuador(String^ tipo) : Elemento(id, estado) {
        this->tipo = tipo;
    }

    void Actuador::Detener() {
        Console::WriteLine("ALERTA: Elemtos {0} detenido!", this->id);
    }
}