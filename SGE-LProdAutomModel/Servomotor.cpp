#pragma once
#include "Servomotor.h"

namespace SGELProdAutomModel {

    Servomotor::Servomotor() : Actuador() {
        this->torque = 0.0;
        this->anguloRotacion = 0.0;
    }

    Servomotor::Servomotor(double torque, double anguloRotacion) : Actuador() {
        this->torque = torque;
        this->anguloRotacion = anguloRotacion;
    }

    double Servomotor::getTorque() {
        return this->torque;
    }

    void Servomotor::setTorque(double torque) {
        this->torque = torque;
    }

    double Servomotor::getAnguloRotacion() {
        return this->anguloRotacion;
    }

    void Servomotor::setAnguloRotacion(double angulo) {
        this->anguloRotacion = angulo;
    }

    void Servomotor::Activar() {
        this->estado = "Activo";
        Console::WriteLine("Servomotor {0} activado.", this->id);
    }

    void Servomotor::Desactivar() {
        this->estado = "Inactivo";
        Console::WriteLine("Servomotor {0} desactivado.", this->id);
    }

    String^ Servomotor::ReportarConfiguracion() {
        return String::Format("Servomotor {0}: Torque:{1}Nm, Angulo:{2}°",
            this->id, this->torque, this->anguloRotacion);
    }

    void Servomotor::GirarAPosicion(double angulo) {
        this->anguloRotacion = angulo;
        Console::WriteLine("Servomotor {0} girado a {1} grados", this->id, angulo);
    }

    void Servomotor::AjustarTorque(double nuevoTorque) {
        this->torque = nuevoTorque;
        Console::WriteLine("Servomotor {0} torque ajustado a {1} Nm", this->id, nuevoTorque);
    }
}