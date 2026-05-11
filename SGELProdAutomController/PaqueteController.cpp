#include "PaqueteController.h"
#include "MaquinaController.h"

using namespace SGELProdAutomController;
using namespace System;
using namespace System::IO;

PaqueteController::PaqueteController() {

}

List<Paquete^>^ PaqueteController::buscarTodos() {
	List<Paquete^>^ listaPaquetes = gcnew List<Paquete^>();
	array<String^>^ lineas = File::ReadAllLines("paquetes.txt");
	String^ separadores = ";";
	for each (String ^ linea in lineas) {
		array<String^>^ campos = linea->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(campos[0]);
		double largo = Convert::ToDouble(campos[1]);
		double ancho = Convert::ToDouble(campos[2]);
		double alto = Convert::ToDouble(campos[3]);
		String^ estado = campos[4];
		String^ tipo = campos[5];
		int codigoMaquina = Convert::ToInt32(campos[6]);
		MaquinaController^ maquinaController = gcnew MaquinaController();
		Maquina^ maquina = maquinaController->ConsultarMaquinaPorId(codigoMaquina);
		Paquete^ paquete = gcnew Paquete(codigo, largo, ancho, alto, estado, tipo, maquina);
		listaPaquetes->Add(paquete);
	}
	return listaPaquetes;
}

List<Paquete^>^ PaqueteController::buscarxMaquina(int codigoMaquina) {
	List<Paquete^>^ listaPaquetes = buscarTodos();
	List<Paquete^>^ listPaquetexMaquina = gcnew List<Paquete^>();
	for (int i = 0; i < listaPaquetes->Count; i++) {
		Paquete^ paquete = listaPaquetes[i];
		if (paquete->getMaquina()->getIdMaquina() == codigoMaquina) {
			listPaquetexMaquina->Add(paquete);
		}
	}
	return listPaquetexMaquina;
}

int PaqueteController::obtenerCantidadPaquetesxMaquina(int codigoMaquina) {
	List<Paquete^>^ listaPaquetes = buscarTodos();
	int contador = 0;
	for (int i = 0; i < listaPaquetes->Count; i++) {
		Paquete^ paquete = listaPaquetes[i];
		if (paquete->getMaquina()->getIdMaquina() == codigoMaquina) {
			contador++;
		}
	}
	return contador;
}