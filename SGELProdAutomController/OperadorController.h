#pragma once

namespace SGELProdAutomController {
    using namespace System;
    using namespace Collections::Generic;
    using namespace SGELProdAutomModel;

    public ref class OperadorController {
    private:
        List<Operador^>^ listaOperadores;

    public:
        OperadorController();
        // Operaciones CRUD
        List<Operador^>^ ObtenerTodosOperadores();
        void AgregarOperador(Operador^ operador);
        bool ExisteOperador(int id);
        Operador^ ConsultarOperadorPorId(int id);
        void escribirArchivo();
        List<Operador^>^ ConsultarOperadorPorIdNombre(int id, String^ nombre);
        bool ModificarOperador(int id, String^ nombre, String^ rol, String^ turno, String^ ubicacion);
        bool EliminarOperador(int id);
        // Ultima acción para liberar memoria, conexiones
        void CloseOperador();
    };
}