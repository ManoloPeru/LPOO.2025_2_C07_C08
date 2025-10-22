#pragma once

namespace SGELProdAutomModel {
    using namespace System;
    using namespace Collections::Generic;

    public ref class ConsolaSupervision {
    private:
        int idConsola;
        String^ estado;

    public:
        ConsolaSupervision();
        ConsolaSupervision(int idConsola, String^ estado);

        int getIdConsola();
        void setIdConsola(int id);

        String^ getEstado();
        void setEstado(String^ estado);

        void IniciarSecuencia();
        void PausarSecuencia();
        void AsignarOperacion();
        void SupervisarRendimiento();
        void ReportarEstado();
    };
}