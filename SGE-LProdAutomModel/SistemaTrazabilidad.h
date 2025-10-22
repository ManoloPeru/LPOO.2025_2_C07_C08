#pragma once

namespace SGELProdAutomModel {
    using namespace System;

    public ref class SistemaTrazabilidad {
    private:
        int idTraza;
        String^ timestamp;
        String^ tipoEvento;
        double metricaRegistrada;

    public:
        SistemaTrazabilidad();
        SistemaTrazabilidad(int idTraza, String^ timestamp, String^ tipoEvento, double metricaRegistrada);

        int getIdTraza();
        void setIdTraza(int id);

        String^ getTimestamp();
        void setTimestamp(String^ timestamp);

        String^ getTipoEvento();
        void setTipoEvento(String^ tipoEvento);

        double getMetricaRegistrada();
        void setMetricaRegistrada(double metrica);

        void AlmacenarDatos(String^ evento, double metrica);
        void ConsultarTrazasPorPeriodo(String^ inicio, String^ fin);
        void GenerarInformeEficiencia();
    };
}