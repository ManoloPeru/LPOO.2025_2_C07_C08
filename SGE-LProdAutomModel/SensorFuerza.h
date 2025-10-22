#pragma once
#include "Sensor.h"

namespace SGELProdAutomModel {
    using namespace System;

    public ref class SensorFuerza : public Sensor {
    private:
        double sensibilidad;
        double fuerzaAplicada;

    public:
        SensorFuerza();
        SensorFuerza(double sensibilidad, double fuerzaAplicada);

        double getSensibilidad();
        void setSensibilidad(double sensibilidad);

        double getFuerzaAplicada();
        void setFuerzaAplicada(double fuerza);

        virtual void Calibrar() override;
        virtual String^ ReportarConfiguracion() override;

        double MedirImpacto();
        void AlertarSobrecarga();
    };
}