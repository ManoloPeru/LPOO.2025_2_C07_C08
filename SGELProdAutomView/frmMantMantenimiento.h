#pragma once
#include "frmVerDatosMantenimiento.h"

namespace SGELProdAutomView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SGELProdAutomModel;
	using namespace SGELProdAutomController;

	/// <summary>
	/// Resumen de frmMantMantenimiento
	/// </summary>
	public ref class frmMantMantenimiento : public System::Windows::Forms::Form
	{
	public:
		frmMantMantenimiento(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmMantMantenimiento(Maquina^ objMaquina)
		{
			InitializeComponent();
			this->objMaquina = objMaquina;
			this->listaPaquetes = gcnew List<Paquete^>();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantMantenimiento()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Panel^ pnlCardListado;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUbicacion;
	private: System::Windows::Forms::TextBox^ txtTipo;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: Maquina^ objMaquina;
	private: List<Paquete^>^ listaPaquetes;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnlCardListado = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUbicacion = (gcnew System::Windows::Forms::TextBox());
			this->txtTipo = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// pnlCardListado
			// 
			this->pnlCardListado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlCardListado->Location = System::Drawing::Point(11, 201);
			this->pnlCardListado->Margin = System::Windows::Forms::Padding(2);
			this->pnlCardListado->Name = L"pnlCardListado";
			this->pnlCardListado->Size = System::Drawing::Size(874, 420);
			this->pnlCardListado->TabIndex = 2;
			this->pnlCardListado->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMantMantenimiento::pnlCardListado_Paint);
			this->pnlCardListado->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMantMantenimiento::pnlCardListado_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 146);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 24);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Ubicación:";
			// 
			// txtUbicacion
			// 
			this->txtUbicacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtUbicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUbicacion->Location = System::Drawing::Point(197, 142);
			this->txtUbicacion->Margin = System::Windows::Forms::Padding(5);
			this->txtUbicacion->Name = L"txtUbicacion";
			this->txtUbicacion->Size = System::Drawing::Size(403, 29);
			this->txtUbicacion->TabIndex = 13;
			// 
			// txtTipo
			// 
			this->txtTipo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtTipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTipo->Location = System::Drawing::Point(197, 96);
			this->txtTipo->Margin = System::Windows::Forms::Padding(5);
			this->txtTipo->Name = L"txtTipo";
			this->txtTipo->Size = System::Drawing::Size(403, 29);
			this->txtTipo->TabIndex = 10;
			// 
			// txtNombre
			// 
			this->txtNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(197, 48);
			this->txtNombre->Margin = System::Windows::Forms::Padding(5);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(403, 29);
			this->txtNombre->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 94);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Tipo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 48);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 24);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Nombre:";
			// 
			// frmMantMantenimiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(907, 632);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtUbicacion);
			this->Controls->Add(this->txtTipo);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pnlCardListado);
			this->Name = L"frmMantMantenimiento";
			this->Text = L"frmMantMantenimiento";
			this->Load += gcnew System::EventHandler(this, &frmMantMantenimiento::frmMantMantenimiento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmMantMantenimiento_Load(System::Object^ sender, System::EventArgs^ e) {
		this->txtNombre->Text = this->objMaquina->getNombre();
		this->txtTipo->Text = this->objMaquina->getTipo();
		this->txtUbicacion->Text = this->objMaquina->getUbicacion();
		PaqueteController^ controladorPaquete = gcnew PaqueteController();
		this->listaPaquetes = controladorPaquete->buscarxMaquina(this->objMaquina->getIdMaquina());
	}


	private: System::Void pnlCardListado_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ graphics = e->Graphics;
		int x = 30, y = 30;

		for (int i = 0; i < this->listaPaquetes->Count; i++) {
			Paquete^ paquete = this->listaPaquetes[i];
			SolidBrush^ brocha;
			if (paquete->getEstado()->Equals("Por recoger")) {
				brocha = gcnew SolidBrush(Color::Red);
			}
			else {
				if (paquete->getEstado()->Equals("Registrado")) {
					brocha = gcnew SolidBrush(Color::Blue);
				}
				else {
					brocha = gcnew SolidBrush(Color::Green);
				}
			}
			graphics->FillRectangle(brocha, x, y, 50, 50);
			x = x + 80; //80 porque es 50 de ancho y 50 de separación entre uno y otro
			/*Voy a cambiar de fila, cuando ya coloque 4 paquetes en una familia*/
			if (i > 0 && (i % 3 == 0)) {
				y = y + 80;
				x = 30;
			}
		}

	}
private: System::Void pnlCardListado_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	int x = e->X;
	int y = e->Y;
	int columna = -1, fila = -1, indice;
	/*Vamos a determinar el indice segun el X*/
	if (x >= 30 && x <= 80) {
		columna = 0;
	}
	else {
		if (x >= 110 && x <= 160) {
			columna = 1;
		}
		else {
			if (x >= 190 && x <= 240) {
				columna = 2;
			}
			else {
				if (x >= 270 && x <= 320) {
					columna = 3;
				}
			}
		}
	}
	/*Vamos a determinar la fila segun el y*/
	if (y >= 30 && y <= 80) {
		fila = 0;
	}
	else {
		if (y >= 110 && y <= 160) {
			fila = 1;
		}
	}
	if (fila != -1 && columna != -1) {
		indice = fila * 4 + columna;
		if (indice < this->listaPaquetes->Count) {
			Paquete^ paquete = this->listaPaquetes[indice];
			frmVerDatosMantenimiento^ ventanaVerDatos = gcnew frmVerDatosMantenimiento(paquete);
			ventanaVerDatos->ShowDialog();
		}
	}
}
};
}