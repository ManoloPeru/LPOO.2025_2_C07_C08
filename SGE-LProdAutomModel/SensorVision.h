#pragma once
#include "Sensor.h"

namespace SGELProdAutomModel {
    using namespace System;

    public ref class SensorVision : public Sensor {
    private:
        String^ imagenCapturada;

    public:
        SensorVision();
        SensorVision(String^ imagenCapturada);

        String^ getImagenCapturada();
        void setImagenCapturada(String^ imagen);

        virtual void Calibrar() override;
        virtual String^ ReportarConfiguracion() override;

        void EscanearComponente();
        String^ ReportarDefectos();
    };
}