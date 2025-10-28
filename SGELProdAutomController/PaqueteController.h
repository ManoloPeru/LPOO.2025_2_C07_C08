#pragma once

namespace SGELProdAutomController {

	using namespace System::Collections::Generic;
	using namespace SGELProdAutomModel;

	public ref class PaqueteController {

		public:
			PaqueteController();
			List<Paquete^>^ buscarTodos();
			List<Paquete^>^ buscarxMaquina(int codigo);
			int obtenerCantidadPaquetesxMaquina(int codigo);
	};

}