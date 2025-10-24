#pragma once

namespace SGELProdAutomModel {
    using namespace System;

    public ref class Maquina {
    private:
        int idMaquina;
        String^ nombre;
        String^ tipo;
        String^ estado;
        String^ ubicacion;

    public:
        Maquina();
        Maquina(int idMaquina, String^ nombre, String^ rol, String^ turno, String^ ubicacion);

        int getIdMaquina();
        void setIdMaquina(int id);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getTipo();
        void setTipo(String^ rol);

        String^ getEstado();
        void setEstado(String^ turno);

        String^ getUbicacion();
        void setUbicacion(String^ ubicacion);

        String^ ToString() override;
    };
}