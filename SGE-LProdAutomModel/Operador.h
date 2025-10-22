#pragma once

namespace SGELProdAutomModel {
    using namespace System;

    public ref class Operador {
    private:
        int idOperador;
        String^ nombre;
        String^ rol;
        String^ turno;
        String^ ubicacion;

    public:
        Operador();
        Operador(int idOperador, String^ nombre, String^ rol, String^ turno, String^ ubicacion);

        int getIdOperador();
        void setIdOperador(int id);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getRol();
        void setRol(String^ rol);

        String^ getTurno();
        void setTurno(String^ turno);

        String^ getUbicacion();
        void setUbicacion(String^ ubicacion);

        String^ ToString() override;
    };
}