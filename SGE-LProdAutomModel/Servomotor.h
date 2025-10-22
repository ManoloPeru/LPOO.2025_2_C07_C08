#pragma once
#include "Actuador.h"

namespace SGELProdAutomModel {
    using namespace System;

    public ref class Servomotor : public Actuador {
    private:
        double torque;
        double anguloRotacion;

    public:
        Servomotor();
        Servomotor(double torque, double anguloRotacion);

        double getTorque();
        void setTorque(double torque);

        double getAnguloRotacion();
        void setAnguloRotacion(double angulo);

        virtual void Activar() override;
        virtual void Desactivar() override;
        virtual String^ ReportarConfiguracion() override;

        void GirarAPosicion(double angulo);
        void AjustarTorque(double nuevoTorque);
    };
}