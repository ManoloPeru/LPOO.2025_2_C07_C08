#pragma once
#include "ConsolaSupervision.h"

namespace SGELProdAutomModel {

    ConsolaSupervision::ConsolaSupervision() {
        this->idConsola = 0;
        this->estado = "No Funcional";
    }

    ConsolaSupervision::ConsolaSupervision(int idConsola, String^ estado) {
        this->idConsola = idConsola;
        this->estado = estado;
    }

    int ConsolaSupervision::getIdConsola() {
        return this->idConsola;
    }

    void ConsolaSupervision::setIdConsola(int id) {
        this->idConsola = id;
    }

    String^ ConsolaSupervision::getEstado() {
        return this->estado;
    }

    void ConsolaSupervision::setEstado(String^ estado) {
        this->estado = estado;
    }

    void ConsolaSupervision::IniciarSecuencia() {
        Console::WriteLine("Consola {0} iniciando secuencia...", this->idConsola);
    }

    void ConsolaSupervision::PausarSecuencia() {
        Console::WriteLine("Consola {0} pausando secuencia...", this->idConsola);
    }

    void ConsolaSupervision::AsignarOperacion() {
        Console::WriteLine("Consola {0} asignando operacion...", this->idConsola);
    }

    void ConsolaSupervision::SupervisarRendimiento() {
        Console::WriteLine("Consola {0} supervisando rendimiento...", this->idConsola);
    }

    void ConsolaSupervision::ReportarEstado() {
        Console::WriteLine("Consola {0} - Estado: {1}", this->idConsola, this->estado);
    }
}