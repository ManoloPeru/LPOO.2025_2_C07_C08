#pragma once
#include "Elemento.h"

namespace SGELProdAutomModel {
    using namespace System;

    public ref class BrazoRobotico : public Elemento {
    private:
        double posicionX;
        double posicionY;
        double posicionZ;
        double capacidadAgarre;
        double velocidadMovimiento;

    public:
        BrazoRobotico();
        BrazoRobotico(int id, String^ estado, double posicionX, double posicionY, double posicionZ, double capacidadAgarre, double velocidadMovimiento);

        double getPosicionX();
        void setPosicionX(double x);

        double getPosicionY();
        void setPosicionY(double y);

        double getPosicionZ();
        void setPosicionZ(double z);

        double getCapacidadAgarre();
        void setCapacidadAgarre(double capacidad);

        double getVelocidadMovimiento();
        void setVelocidadMovimiento(double velocidad);

        virtual void Activar() override;
        virtual void Desactivar() override;
        virtual String^ ReportarConfiguracion() override;

        void Posicionar(double x, double y, double z);
        void RotarEfectorFinal(double angulo);
    };
}