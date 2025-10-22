#pragma once
#include "Sensor.h"

namespace SGELProdAutomModel {

    Sensor::Sensor() : Elemento() {
        this->resolucion = 0;
        this->rangoDeteccion = 0;
    }

    Sensor::Sensor(int resolucion, int rangoDeteccion) : Elemento(id, estado) {
		this->resolucion = resolucion;
		this->rangoDeteccion = rangoDeteccion;
    }

	int Sensor::getResolucion() {
		return this->resolucion;
	}

	int Sensor::getRangoDeteccion() {
		return this->rangoDeteccion;
	}

	void Sensor::setResolucion(int resolucion) {
		this->resolucion = resolucion;
	}
	
    void Sensor::setRangoDeteccion(int rango) {
		this->rangoDeteccion = rango;
	}

    void Sensor::Activar() {
        this->estado = "Encendido";
        Console::WriteLine("Sensor {0} activado.", this->id);
    }

    void Sensor::Desactivar() {
        this->estado = "Apagado";
        Console::WriteLine("Sensor {0} desactivado.", this->id);
    }
}