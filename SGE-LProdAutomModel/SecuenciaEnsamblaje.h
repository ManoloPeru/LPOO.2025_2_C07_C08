#pragma once

namespace SGELProdAutomModel {
    using namespace System;

    public ref class SecuenciaEnsamblaje {
    private:
        int idSecuencia;
        String^ horaInicio;
        int duracion;
        String^ estado;

    public:
        SecuenciaEnsamblaje();
        SecuenciaEnsamblaje(int idSecuencia, String^ horaInicio, int duracion, String^ estado);

        int getIdSecuencia();
        void setIdSecuencia(int id);

        String^ getHoraInicio();
        void setHoraInicio(String^ hora);

        int getDuracion();
        void setDuracion(int duracion);

        String^ getEstado();
        void setEstado(String^ estado);

        void Iniciar();
        void Completar();
        void ProducirResumenAnalitico();
    };
}