#pragma once

namespace SGELProdAutomController {
    using namespace System;
    using namespace Collections::Generic;
    using namespace SGELProdAutomModel;

    public ref class MaquinaController {
    private:
        List<Maquina^>^ listaMaquinas;

    public:
        MaquinaController();
        // Operaciones CRUD
        List<Maquina^>^ ObtenerTodosMaquinas();
        void AgregarMaquina(Maquina^ maquina);
        bool ExisteMaquina(int id);
        Maquina^ ConsultarMaquinaPorId(int id);
        void escribirArchivo();
        List<Maquina^>^ ConsultarMaquinaPorIdNombre(int id, String^ nombre);
        bool ModificarMaquina(int id, String^ nombre, String^ tipo, String^ estado, String^ ubicacion);
        bool EliminarMaquina(int id);
        // Ultima acción para liberar memoria, conexiones
        void CloseMaquina();
    };
}