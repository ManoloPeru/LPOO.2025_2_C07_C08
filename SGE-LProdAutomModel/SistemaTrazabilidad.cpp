#pragma once
#include "SistemaTrazabilidad.h"

namespace SGELProdAutomModel {

    SistemaTrazabilidad::SistemaTrazabilidad() {
        this->idTraza = 0;
        this->timestamp = "01/01/2022 00:00:00";
        this->tipoEvento = "Ninguno";
        this->metricaRegistrada = 0.0;
    }

    SistemaTrazabilidad::SistemaTrazabilidad(int idTraza, String^ timestamp, String^ tipoEvento, double metricaRegistrada) {
        this->idTraza = idTraza;
        this->timestamp = timestamp;
        this->tipoEvento = tipoEvento;
        this->metricaRegistrada = metricaRegistrada;
    }

    int SistemaTrazabilidad::getIdTraza() {
        return this->idTraza;
    }

    void SistemaTrazabilidad::setIdTraza(int id) {
        this->idTraza = id;
    }

    String^ SistemaTrazabilidad::getTimestamp() {
        return this->timestamp;
    }

    void SistemaTrazabilidad::setTimestamp(String^ timestamp) {
        this->timestamp = timestamp;
    }

    String^ SistemaTrazabilidad::getTipoEvento() {
        return this->tipoEvento;
    }

    void SistemaTrazabilidad::setTipoEvento(String^ tipoEvento) {
        this->tipoEvento = tipoEvento;
    }

    double SistemaTrazabilidad::getMetricaRegistrada() {
        return this->metricaRegistrada;
    }

    void SistemaTrazabilidad::setMetricaRegistrada(double metrica) {
        this->metricaRegistrada = metrica;
    }

    void SistemaTrazabilidad::AlmacenarDatos(String^ evento, double metrica) {
        this->tipoEvento = evento;
        this->metricaRegistrada = metrica;
        Console::WriteLine("Datos almacenados: Evento={0}, Metrica={1}", evento, metrica);
    }

    void SistemaTrazabilidad::ConsultarTrazasPorPeriodo(String^ inicio, String^ fin) {
        Console::WriteLine("Consultando trazas desde {0} hasta {1}", inicio, fin);
    }

    void SistemaTrazabilidad::GenerarInformeEficiencia() {
        Console::WriteLine("Generando informe de eficiencia...");
    }
}