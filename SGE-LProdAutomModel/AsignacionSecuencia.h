#pragma once

namespace SGELProdAutomModel {
    using namespace System;

    public ref class AsignacionSecuencia {
    private:
        int idAsignacion;
        String^ horaAsignacion;
        String^ rol;

    public:
        AsignacionSecuencia();
        AsignacionSecuencia(int idAsignacion, String^ horaAsignacion, String^ rol);

        int getIdAsignacion();
        void setIdAsignacion(int id);

        String^ getHoraAsignacion();
        void setHoraAsignacion(String^ hora);

        String^ getRol();
        void setRol(String^ rol);

        String^ ObtenerDetallesAsignacion();
    };
}