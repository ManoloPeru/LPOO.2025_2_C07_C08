#pragma once
#include "SensorVision.h"

namespace SGELProdAutomModel {

    SensorVision::SensorVision() : Sensor() {
        
        this->imagenCapturada = "";
    }

    SensorVision::SensorVision(String^ imagenCapturada) : Sensor(resolucion, rangoDeteccion) {
        
        this->imagenCapturada = imagenCapturada;
	}

    String^ SensorVision::getImagenCapturada() {
        return this->imagenCapturada;
    }

    void SensorVision::setImagenCapturada(String^ imagen) {
        this->imagenCapturada = imagen;
    }

    void SensorVision::Calibrar() {
        Console::WriteLine("Sensor de Vision {0} calibrado.", this->id);
    }

    String^ SensorVision::ReportarConfiguracion() {
        return String::Format("SensorVision {0}: Res:{1}, Rango:{2}cm, Imagen:{3}",
            this->id, this->resolucion, this->rangoDeteccion, this->imagenCapturada);
    }

    void SensorVision::EscanearComponente() {
        Console::WriteLine("Sensor de Vision {0} escaneando componente.", this->id);
    }

    String^ SensorVision::ReportarDefectos() {
        return "No se encontraron defectos";
    }
}