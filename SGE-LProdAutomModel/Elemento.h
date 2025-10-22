#pragma once

namespace SGELProdAutomModel {
    using namespace System;

    public ref class Elemento {
    protected:
        int id;
        String^ estado;

    public:
        Elemento();
        Elemento(int id, String^ estado);

        int getId();
        void setId(int id);

        String^ getEstado();
        void setEstado(String^ estado);

        virtual void Activar() = 0;
        virtual void Desactivar() = 0;
        virtual String^ ReportarConfiguracion() = 0;
    };
}