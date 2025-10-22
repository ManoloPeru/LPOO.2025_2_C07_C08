#pragma once
#include "CilindroHidraulico.h"

namespace SGELProdAutomModel {

    CilindroHidraulico::CilindroHidraulico() : Actuador() {
        this->fuerzaEmpuje = 0.0;
        this->extensionActual = 0.0;
    }

    CilindroHidraulico::CilindroHidraulico(double fuerzaEmpuje, double extensionActual) : Actuador() {
        this->fuerzaEmpuje = fuerzaEmpuje;
        this->extensionActual = extensionActual;
    }

    double CilindroHidraulico::getFuerzaEmpuje() {
        return this->fuerzaEmpuje;
    }

    void CilindroHidraulico::setFuerzaEmpuje(double fuerza) {
        this->fuerzaEmpuje = fuerza;
    }

    double CilindroHidraulico::getExtensionActual() {
        return this->extensionActual;
    }

    void CilindroHidraulico::setExtensionActual(double extension) {
        this->extensionActual = extension;
    }

    void CilindroHidraulico::Activar() {
        this->estado = "Activo";
        Console::WriteLine("Cilindro Hidraulico {0} activado.", this->id);
    }

    void CilindroHidraulico::Desactivar() {
        this->estado = "Inactivo";
        Console::WriteLine("Cilindro Hidraulico {0} desactivado.", this->id);
    }

    String^ CilindroHidraulico::ReportarConfiguracion() {
        return String::Format("CilindroHidraulico {0}: Fuerza:{1}kN, Extension:{2}mm",
            this->id, this->fuerzaEmpuje, this->extensionActual);
    }

    void CilindroHidraulico::Extender(double distancia) {
        this->extensionActual += distancia;
        Console::WriteLine("Cilindro {0} extendido {1} mm", this->id, distancia);
    }

    void CilindroHidraulico::Retraer(double distancia) {
        this->extensionActual -= distancia;
        Console::WriteLine("Cilindro {0} retraido {1} mm", this->id, distancia);
    }

    void CilindroHidraulico::RegularFlujo(double porcentaje) {
        Console::WriteLine("Cilindro {0} flujo regulado a {1}%", this->id, porcentaje);
    }
}