#pragma once
#include "BrazoRobotico.h"

namespace SGELProdAutomModel {

    BrazoRobotico::BrazoRobotico() : Elemento() {
        this->posicionX = 0.0;
        this->posicionY = 0.0;
        this->posicionZ = 0.0;
        this->capacidadAgarre = 0.0;
        this->velocidadMovimiento = 0.0;
    }

    BrazoRobotico::BrazoRobotico(int id, String^ estado, double posicionX, double posicionY, double posicionZ, double capacidadAgarre, double velocidadMovimiento) : Elemento(id, estado) {
        this->posicionX = posicionX;
        this->posicionY = posicionY;
        this->posicionZ = posicionZ;
        this->capacidadAgarre = capacidadAgarre;
        this->velocidadMovimiento = velocidadMovimiento;
    }

    double BrazoRobotico::getPosicionX() {
        return this->posicionX;
    }

    void BrazoRobotico::setPosicionX(double x) {
        this->posicionX = x;
    }

    double BrazoRobotico::getPosicionY() {
        return this->posicionY;
    }

    void BrazoRobotico::setPosicionY(double y) {
        this->posicionY = y;
    }

    double BrazoRobotico::getPosicionZ() {
        return this->posicionZ;
    }

    void BrazoRobotico::setPosicionZ(double z) {
        this->posicionZ = z;
    }

    double BrazoRobotico::getCapacidadAgarre() {
        return this->capacidadAgarre;
    }

    void BrazoRobotico::setCapacidadAgarre(double capacidad) {
        this->capacidadAgarre = capacidad;
    }

    double BrazoRobotico::getVelocidadMovimiento() {
        return this->velocidadMovimiento;
    }

    void BrazoRobotico::setVelocidadMovimiento(double velocidad) {
        this->velocidadMovimiento = velocidad;
    }

    void BrazoRobotico::Activar() {
        this->estado = "Activo";
        Console::WriteLine("Brazo Robotico {0} activado.", this->id);
    }

    void BrazoRobotico::Desactivar() {
        this->estado = "Inactivo";
        Console::WriteLine("Brazo Robotico {0} desactivado.", this->id);
    }

    String^ BrazoRobotico::ReportarConfiguracion() {
        return String::Format("Brazo {0}: Pos({1},{2},{3}), Cap:{4}g, Vel:{5}cm/s",
            this->id, this->posicionX, this->posicionY, this->posicionZ,
            this->capacidadAgarre, this->velocidadMovimiento);
    }

    void BrazoRobotico::Posicionar(double x, double y, double z) {
        this->posicionX = x;
        this->posicionY = y;
        this->posicionZ = z;
        Console::WriteLine("Brazo {0} posicionado en ({1}, {2}, {3})", this->id, x, y, z);
    }

    void BrazoRobotico::RotarEfectorFinal(double angulo) {
        Console::WriteLine("Brazo {0} rotado a {1} grados", this->id, angulo);
    }
}