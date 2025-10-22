#pragma once
#include "SecuenciaEnsamblaje.h"

namespace SGELProdAutomModel {

    SecuenciaEnsamblaje::SecuenciaEnsamblaje() {
        this->idSecuencia = 0;
        this->horaInicio = "00:00:00";
        this->duracion = 0;
        this->estado = "Pendiente";
    }

    SecuenciaEnsamblaje::SecuenciaEnsamblaje(int idSecuencia, String^ horaInicio, int duracion, String^ estado) {
        this->idSecuencia = idSecuencia;
        this->horaInicio = horaInicio;
        this->duracion = duracion;
        this->estado = estado;
    }

    int SecuenciaEnsamblaje::getIdSecuencia() {
        return this->idSecuencia;
    }

    void SecuenciaEnsamblaje::setIdSecuencia(int id) {
        this->idSecuencia = id;
    }

    String^ SecuenciaEnsamblaje::getHoraInicio() {
        return this->horaInicio;
    }

    void SecuenciaEnsamblaje::setHoraInicio(String^ hora) {
        this->horaInicio = hora;
    }

    int SecuenciaEnsamblaje::getDuracion() {
        return this->duracion;
    }

    void SecuenciaEnsamblaje::setDuracion(int duracion) {
        this->duracion = duracion;
    }

    String^ SecuenciaEnsamblaje::getEstado() {
        return this->estado;
    }

    void SecuenciaEnsamblaje::setEstado(String^ estado) {
        this->estado = estado;
    }

    void SecuenciaEnsamblaje::Iniciar() {
        this->estado = "En Progreso";
        Console::WriteLine("Secuencia {0} iniciada.", this->idSecuencia);
    }

    void SecuenciaEnsamblaje::Completar() {
        this->estado = "Completado";
        Console::WriteLine("Secuencia {0} completada.", this->idSecuencia);
    }

    void SecuenciaEnsamblaje::ProducirResumenAnalitico() {
        Console::WriteLine("Generando resumen analitico para secuencia {0}", this->idSecuencia);
    }
}