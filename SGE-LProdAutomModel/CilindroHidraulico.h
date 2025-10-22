#pragma once
#include "Actuador.h"

namespace SGELProdAutomModel {
    using namespace System;

    public ref class CilindroHidraulico : public Actuador {
    private:
        double fuerzaEmpuje;
        double extensionActual;

    public:
        CilindroHidraulico();
        CilindroHidraulico(double fuerzaEmpuje, double extensionActual);

        double getFuerzaEmpuje();
        void setFuerzaEmpuje(double fuerza);

        double getExtensionActual();
        void setExtensionActual(double extension);

        virtual void Activar() override;
        virtual void Desactivar() override;
        virtual String^ ReportarConfiguracion() override;

        void Extender(double distancia);
        void Retraer(double distancia);
        void RegularFlujo(double porcentaje);
    };
}