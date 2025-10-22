#pragma once
#include "SensorFuerza.h"

namespace SGELProdAutomModel {

    SensorFuerza::SensorFuerza() : Sensor() {
        this->sensibilidad = 0.0;
        this->fuerzaAplicada = 0.0;
    }

    SensorFuerza::SensorFuerza(double sensibilidad, double fuerzaAplicada) : Sensor(resolucion, rangoDeteccion) {
        this->sensibilidad = sensibilidad;
        this->fuerzaAplicada = fuerzaAplicada;
    }

    double SensorFuerza::getSensibilidad() {
        return this->sensibilidad;
    }

    void SensorFuerza::setSensibilidad(double sensibilidad) {
        this->sensibilidad = sensibilidad;
    }

    double SensorFuerza::getFuerzaAplicada() {
        return this->fuerzaAplicada;
    }

    void SensorFuerza::setFuerzaAplicada(double fuerza) {
        this->fuerzaAplicada = fuerza;
    }

    void SensorFuerza::Calibrar() {
        Console::WriteLine("Sensor de Fuerza {0} calibrado.", this->id);
    }

    String^ SensorFuerza::ReportarConfiguracion() {
        return String::Format("SensorFuerza {0}: Sens:{1}N, Rango:{2}N, Fuerza:{3}N",
            this->id, this->sensibilidad, this->rangoDeteccion, this->fuerzaAplicada);
    }

    double SensorFuerza::MedirImpacto() {
        return this->fuerzaAplicada;
    }

    void SensorFuerza::AlertarSobrecarga() {
        if (this->fuerzaAplicada > this->rangoDeteccion) {
            Console::WriteLine("ALERTA: Sensor de Fuerza {0} en sobrecarga!", this->id);
        }
    }
}