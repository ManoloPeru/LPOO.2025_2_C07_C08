#pragma once
#include "frmNuevaMaquina.h"
#include "frmEditarMaquina.h"
#include "frmMantMantenimiento.h"

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
	/// Resumen de frmMantMaquina
	/// </summary>
	public ref class frmMantMaquina : public System::Windows::Forms::Form
	{
	public:
		frmMantMaquina(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->maquinaController = gcnew MaquinaController();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantMaquina()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::Button^ btnNuevo;
	private: System::Windows::Forms::DataGridView^ dgvLista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colUbicacion;
	private: MaquinaController^ maquinaController;
	private: System::Windows::Forms::Button^ btnMantenimiento;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colUbicacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnMantenimiento = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtId);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->btnLimpiar);
			this->groupBox1->Controls->Add(this->btnBuscar);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(13, 22);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1065, 94);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Busqueda";
			// 
			// txtId
			// 
			this->txtId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtId->Location = System::Drawing::Point(64, 46);
			this->txtId->Margin = System::Windows::Forms::Padding(4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(116, 28);
			this->txtId->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 46);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Id :";
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnLimpiar->Location = System::Drawing::Point(929, 40);
			this->btnLimpiar->Margin = System::Windows::Forms::Padding(4);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(98, 34);
			this->btnLimpiar->TabIndex = 3;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &frmMantMaquina::btnLimpiar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBuscar->Location = System::Drawing::Point(823, 40);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(4);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(98, 34);
			this->btnBuscar->TabIndex = 2;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &frmMantMaquina::btnBuscar_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(356, 43);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(420, 28);
			this->txtNombre->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(259, 47);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre :";
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnEliminar->Location = System::Drawing::Point(597, 546);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(4);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(98, 34);
			this->btnEliminar->TabIndex = 10;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmMantMaquina::btnEliminar_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnEditar->Location = System::Drawing::Point(379, 546);
			this->btnEditar->Margin = System::Windows::Forms::Padding(4);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(98, 34);
			this->btnEditar->TabIndex = 8;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &frmMantMaquina::btnEditar_Click);
			// 
			// btnNuevo
			// 
			this->btnNuevo->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnNuevo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNuevo->ForeColor = System::Drawing::SystemColors::Control;
			this->btnNuevo->Location = System::Drawing::Point(165, 546);
			this->btnNuevo->Margin = System::Windows::Forms::Padding(4);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(98, 34);
			this->btnNuevo->TabIndex = 7;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = false;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmMantMaquina::btnNuevo_Click);
			// 
			// dgvLista
			// 
			this->dgvLista->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colId, this->colNombre,
					this->colTipo, this->colEstado, this->colUbicacion
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvLista->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvLista->Location = System::Drawing::Point(13, 136);
			this->dgvLista->Margin = System::Windows::Forms::Padding(4);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->RowHeadersWidth = 51;
			this->dgvLista->RowTemplate->Height = 24;
			this->dgvLista->Size = System::Drawing::Size(1065, 357);
			this->dgvLista->TabIndex = 11;
			// 
			// colId
			// 
			this->colId->HeaderText = L"Id";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre de Maquina";
			this->colNombre->MinimumWidth = 6;
			this->colNombre->Name = L"colNombre";
			this->colNombre->Width = 350;
			// 
			// colTipo
			// 
			this->colTipo->HeaderText = L"Tipo";
			this->colTipo->MinimumWidth = 6;
			this->colTipo->Name = L"colTipo";
			this->colTipo->Width = 120;
			// 
			// colEstado
			// 
			this->colEstado->HeaderText = L"Estado";
			this->colEstado->MinimumWidth = 6;
			this->colEstado->Name = L"colEstado";
			this->colEstado->Width = 120;
			// 
			// colUbicacion
			// 
			this->colUbicacion->HeaderText = L"Ubicacion";
			this->colUbicacion->Name = L"colUbicacion";
			this->colUbicacion->Width = 150;
			// 
			// btnMantenimiento
			// 
			this->btnMantenimiento->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnMantenimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMantenimiento->ForeColor = System::Drawing::SystemColors::Control;
			this->btnMantenimiento->Location = System::Drawing::Point(799, 546);
			this->btnMantenimiento->Margin = System::Windows::Forms::Padding(4);
			this->btnMantenimiento->Name = L"btnMantenimiento";
			this->btnMantenimiento->Size = System::Drawing::Size(146, 34);
			this->btnMantenimiento->TabIndex = 12;
			this->btnMantenimiento->Text = L"Mantenimientos";
			this->btnMantenimiento->UseVisualStyleBackColor = false;
			this->btnMantenimiento->Click += gcnew System::EventHandler(this, &frmMantMaquina::btnMantenimiento_Click);
			// 
			// frmMantMaquina
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1111, 625);
			this->Controls->Add(this->btnMantenimiento);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->dgvLista);
			this->Name = L"frmMantMaquina";
			this->Text = L"Mantenimiento de Maquinas";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantMaquina::frmMantMaquina_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantMaquina::frmMantMaquina_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMantMaquina_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Maquina^>^ listaMaquinas = this->maquinaController->ObtenerTodosMaquinas();
		mostrarGrilla(listaMaquinas);
	}
private: System::Void btnNuevo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaMaquina^ nuevoMaquinaForm = gcnew frmNuevaMaquina(this->maquinaController);
	nuevoMaquinaForm->ShowDialog(this);
	// Llamar al método para cargar la lista de maquinas nuevamente
	List<Maquina^>^ listaMaquinas = this->maquinaController->ObtenerTodosMaquinas();
	mostrarGrilla(listaMaquinas);
}
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dgvLista->SelectedRows->Count > 0)
	{
		int filaSeleccionada = this->dgvLista->SelectedRows[0]->Index;
		int idMaquina = Convert::ToInt32(this->dgvLista->Rows[filaSeleccionada]->Cells[0]->Value);

		Maquina^ operadorSeleccionado = this->maquinaController->ConsultarMaquinaPorId(idMaquina);
		if (operadorSeleccionado == nullptr)
		{
			MessageBox::Show("No se encontró el operador seleccionado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// Crear una nueva instancia del formulario de nuevo operador
		// y mostrarlo como un formulario hijo dentro del contenedor MDI
		frmEditarMaquina^ editarMaquinaForm = gcnew frmEditarMaquina(this->maquinaController, operadorSeleccionado);
		editarMaquinaForm->ShowDialog();
		// Llamar al m�todo para cargar la lista de maquinas nuevamente
		List<Maquina^>^ listaMaquinas = this->maquinaController->ObtenerTodosMaquinas();
		mostrarGrilla(listaMaquinas);
	}
	else
	{
		MessageBox::Show("Por favor, seleccione un operador para editar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verificar si se ha seleccionado una fila en el DataGridView
	if (this->dgvLista->SelectedRows->Count > 0)
	{

		// Preguntar al usuario si est� seguro de eliminar el registro
		System::Windows::Forms::DialogResult resultado = MessageBox::Show("¿Está seguro de que desea eliminar el registro seleccionado?",
			"Confirmación de eliminación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		// Si el usuario selecciona "No", cancelar la operaci�n
		if (resultado == System::Windows::Forms::DialogResult::No)
		{
			return; // Salir del evento si el usuario cancela
		}

		int selectedRowIndex = this->dgvLista->SelectedRows[0]->Index;
		int idMaquina = Convert::ToInt32(this->dgvLista->Rows[selectedRowIndex]->Cells[0]->Value);
		// Crear una instancia del controlador y eliminar el operador
		this->maquinaController->EliminarMaquina(idMaquina);
		// Actualizar la lista de maquinas en el DataGridView
		List<Maquina^>^ listaMaquinas = this->maquinaController->ObtenerTodosMaquinas();
		mostrarGrilla(listaMaquinas);
	}
	else
	{
		MessageBox::Show("Por favor, seleccione un operador para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = 0;
	String^ nombreMaquina = "";
	if (!txtId->Text->Equals(""))
	{
		//Obterne el id del operador a buscar
		id = Convert::ToInt32(txtId->Text);
	}
	if (!txtNombre->Text->Equals(""))
	{
		// Obtener el nombre del operador a buscar
		nombreMaquina = txtNombre->Text;
	}
	// Crear una instancia del controlador y buscar el operador por nombre
	List<Maquina^>^ listaMaquinas = this->maquinaController->ConsultarMaquinaPorIdNombre(id, nombreMaquina);
	// Mostrar los resultados en el DataGridView
	mostrarGrilla(listaMaquinas);
}
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	txtId->Text = "";
	txtNombre->Text = "";
	List<Maquina^>^ listaMaquinas = this->maquinaController->ObtenerTodosMaquinas();
	mostrarGrilla(listaMaquinas);
}
private: System::Void frmMantMaquina_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->maquinaController->CloseMaquina();
}
	   /*METODOSPERSONALES*/
	public:	void mostrarGrilla(List<Maquina^>^ listaMaquinas)
	{
		this->dgvLista->Rows->Clear();
		for (int i = 0; i < listaMaquinas->Count; i++)
		{
			Maquina^ operador = listaMaquinas[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = Convert::ToString(operador->getIdMaquina());
			filaGrilla[1] = operador->getNombre();
			filaGrilla[2] = operador->getTipo();
			filaGrilla[3] = operador->getEstado();
			filaGrilla[4] = operador->getUbicacion();
			this->dgvLista->Rows->Add(filaGrilla);
		}
		this->dgvLista->AutoGenerateColumns = false; // Desactivar la generaci�n autom�tica de columnas
		this->dgvLista->AllowUserToAddRows = false;	 // Evitar que el usuario pueda agregar filas manualmente
	}
private: System::Void btnMantenimiento_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verificar si se ha seleccionado una fila en el DataGridView
	if (this->dgvLista->SelectedRows->Count > 0)
	{
		int selectedRowIndex = this->dgvLista->SelectedRows[0]->Index;
		int idMaquina = Convert::ToInt32(this->dgvLista->Rows[selectedRowIndex]->Cells[0]->Value);
		Maquina^ maquinaSeleccionada = this->maquinaController->ConsultarMaquinaPorId(idMaquina);
		frmMantMantenimiento^ ventanaMantMantenimiento = gcnew frmMantMantenimiento(maquinaSeleccionada);
		ventanaMantMantenimiento->ShowDialog();
	}
	else
	{
		MessageBox::Show("Por favor, seleccione un operador para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
