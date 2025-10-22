#pragma once
#include "Elemento.h"

namespace SGELProdAutomModel {
    using namespace System;

    public ref class Sensor abstract : public Elemento {
    protected:
        int resolucion; // pixels (e.g., 1080)
        int rangoDeteccion; // cm

    public:
        Sensor();
        Sensor(int resolucion, int rangoDeteccion);

		int getResolucion();
		int getRangoDeteccion();

		void setResolucion(int resolucion);
		void setRangoDeteccion(int rango);

        virtual void Calibrar() = 0;
        virtual void Activar() override;
        virtual void Desactivar() override;
    };
}
