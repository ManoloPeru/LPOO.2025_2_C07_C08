#pragma once
#include "Maquina.h"

namespace SGELProdAutomModel {

	using namespace System;

	public ref class Paquete {
		private:
			int id;
			double largo;
			double ancho;
			double alto;
			String^ estado;
			String^ tipo;
			Maquina^ maquina; /*Se da por la asociacion*/

		public:
			Paquete();
			Paquete(int id, double largo, double ancho, double alto, String^ estado, String^ tipo, Maquina^ maquina);
			int getId();
			double getLargo();
			double getAncho();
			double getAlto();
			String^ getEstado();
			String^ getTipo();
			Maquina^ getMaquina();

			void setId(int id);
			void setLargo(double largo);
			void setAncho(double ancho);
			void setAlto(double alto);
			void setEstado(String^ estado);
			void setTipo(String^ tipo);
			void setMaquina(Maquina^ maquina);
	};
}

