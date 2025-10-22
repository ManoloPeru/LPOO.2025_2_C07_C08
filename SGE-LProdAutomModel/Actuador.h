#pragma once
#include "Elemento.h"

namespace SGELProdAutomModel {
    using namespace System;

    public ref class Actuador abstract : public Elemento {
    protected:
        String^ tipo;

    public:
        Actuador();
        Actuador(String^ tipo);

        void Detener();
    };
}