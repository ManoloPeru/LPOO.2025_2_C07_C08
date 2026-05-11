#include "Paquete.h"

using namespace SGELProdAutomModel;

Paquete::Paquete() {

}

Paquete::Paquete(int id, double largo, double ancho, double alto, String^ estado, String^ tipo, Maquina^ maquina) {
	this->id = id;
	this->largo = largo;
	this->ancho = ancho;
	this->alto = alto;
	this->estado = estado;
	this->tipo = tipo;
	this->maquina = maquina;
}

int Paquete::getId() {
	return this->id;
}
double Paquete::getLargo() {
	return this->largo;
}
double Paquete::getAncho() {
	return this->ancho;
}
double Paquete::getAlto() {
	return this->alto;
}
String^ Paquete::getEstado() {
	return this->estado;
}
String^ Paquete::getTipo() {
	return this->tipo;
}
Maquina^ Paquete::getMaquina() {
	return this->maquina;
}

void Paquete::setId(int id) {
	this->id = id;
}
void Paquete::setLargo(double largo) {
	this->largo = largo;
}
void Paquete::setAncho(double Ancho) {
	this->ancho = Ancho;
}
void Paquete::setAlto(double alto) {
	this->alto = alto;
}
void Paquete::setEstado(String^ Estado) {
	this->estado = Estado;
}
void Paquete::setTipo(String^ Tipo) {
	this->tipo = Tipo;
}
void Paquete::setMaquina(Maquina^ maquina) {
	this->maquina = maquina;
}