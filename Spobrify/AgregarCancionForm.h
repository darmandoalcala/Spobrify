#pragma once
#include "Lista.h"
#include <msclr/marshal_cppstd.h>

namespace Spobrify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AgregarCancionForm
	/// </summary>
	public ref class AgregarCancionForm : public System::Windows::Forms::Form
	{
	private:
		Lista* lista;		//puntero a lista original

	public:
		AgregarCancionForm(Lista* listaRef) : lista(listaRef) {
			this->lista = listaRef;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AgregarCancionForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ agregar;
	private: System::Windows::Forms::TextBox^ Nombre;
	private: System::Windows::Forms::TextBox^ Artista;
	private: System::Windows::Forms::TextBox^ Album;
	private: System::Windows::Forms::MaskedTextBox^ Duracion;
	private: System::Windows::Forms::Label^ label_nombre;
	private: System::Windows::Forms::Label^ label_artista;
	private: System::Windows::Forms::Label^ label_album;
	private: System::Windows::Forms::Label^ label_duracion;
	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::MaskedTextBox^ Id;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->agregar = (gcnew System::Windows::Forms::Button());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Artista = (gcnew System::Windows::Forms::TextBox());
			this->Album = (gcnew System::Windows::Forms::TextBox());
			this->Duracion = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_nombre = (gcnew System::Windows::Forms::Label());
			this->label_artista = (gcnew System::Windows::Forms::Label());
			this->label_album = (gcnew System::Windows::Forms::Label());
			this->label_duracion = (gcnew System::Windows::Forms::Label());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// agregar
			// 
			this->agregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregar->ForeColor = System::Drawing::Color::White;
			this->agregar->Location = System::Drawing::Point(166, 312);
			this->agregar->Name = L"agregar";
			this->agregar->Size = System::Drawing::Size(106, 37);
			this->agregar->TabIndex = 0;
			this->agregar->Text = L"Agregar";
			this->agregar->UseVisualStyleBackColor = false;
			this->agregar->Click += gcnew System::EventHandler(this, &AgregarCancionForm::agregar_Click);
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(16, 88);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(256, 20);
			this->Nombre->TabIndex = 1;
			// 
			// Artista
			// 
			this->Artista->Location = System::Drawing::Point(16, 134);
			this->Artista->Name = L"Artista";
			this->Artista->Size = System::Drawing::Size(256, 20);
			this->Artista->TabIndex = 2;
			// 
			// Album
			// 
			this->Album->Location = System::Drawing::Point(16, 180);
			this->Album->Name = L"Album";
			this->Album->Size = System::Drawing::Size(256, 20);
			this->Album->TabIndex = 3;
			// 
			// Duracion
			// 
			this->Duracion->Location = System::Drawing::Point(16, 226);
			this->Duracion->Mask = L"00:00";
			this->Duracion->Name = L"Duracion";
			this->Duracion->Size = System::Drawing::Size(36, 20);
			this->Duracion->TabIndex = 4;
			this->Duracion->ValidatingType = System::DateTime::typeid;
			// 
			// label_nombre
			// 
			this->label_nombre->AutoSize = true;
			this->label_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nombre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label_nombre->Location = System::Drawing::Point(12, 65);
			this->label_nombre->Name = L"label_nombre";
			this->label_nombre->Size = System::Drawing::Size(187, 20);
			this->label_nombre->TabIndex = 5;
			this->label_nombre->Text = L"Nombre de la canción.";
			// 
			// label_artista
			// 
			this->label_artista->AutoSize = true;
			this->label_artista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_artista->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label_artista->Location = System::Drawing::Point(12, 111);
			this->label_artista->Name = L"label_artista";
			this->label_artista->Size = System::Drawing::Size(182, 20);
			this->label_artista->TabIndex = 6;
			this->label_artista->Text = L"Nombre del artista(s).";
			// 
			// label_album
			// 
			this->label_album->AutoSize = true;
			this->label_album->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_album->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label_album->Location = System::Drawing::Point(12, 157);
			this->label_album->Name = L"label_album";
			this->label_album->Size = System::Drawing::Size(158, 20);
			this->label_album->TabIndex = 7;
			this->label_album->Text = L"Nombre del album.";
			// 
			// label_duracion
			// 
			this->label_duracion->AutoSize = true;
			this->label_duracion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_duracion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label_duracion->Location = System::Drawing::Point(12, 203);
			this->label_duracion->Name = L"label_duracion";
			this->label_duracion->Size = System::Drawing::Size(86, 20);
			this->label_duracion->TabIndex = 8;
			this->label_duracion->Text = L"Duración.";
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label_id->Location = System::Drawing::Point(12, 18);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(25, 20);
			this->label_id->TabIndex = 9;
			this->label_id->Text = L"Id";
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(16, 41);
			this->Id->Mask = L"99999";
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(36, 20);
			this->Id->TabIndex = 10;
			this->Id->ValidatingType = System::Int32::typeid;
			// 
			// AgregarCancionForm
			// 
			this->AcceptButton = this->agregar;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->ClientSize = System::Drawing::Size(284, 361);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->label_duracion);
			this->Controls->Add(this->label_album);
			this->Controls->Add(this->label_artista);
			this->Controls->Add(this->label_nombre);
			this->Controls->Add(this->Duracion);
			this->Controls->Add(this->Album);
			this->Controls->Add(this->Artista);
			this->Controls->Add(this->Nombre);
			this->Controls->Add(this->agregar);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AgregarCancionForm";
			this->Opacity = 0.85;
			this->ShowIcon = false;
			this->Text = L"AgregarCancionForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void agregar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener los datos de los TextBoxes
		std::string idCrudo = msclr::interop::marshal_as<std::string>(this->Id->Text);
		int id = stoi(idCrudo);
		std::string nombre = msclr::interop::marshal_as<std::string>(this->Nombre->Text);
		std::string artista = msclr::interop::marshal_as<std::string>(this->Artista->Text);
		std::string album = msclr::interop::marshal_as<std::string>(this->Album->Text);
		std::string duracion = msclr::interop::marshal_as<std::string>(this->Duracion->Text);

		// Crear una nueva canción y agregarla a la lista
		Cancion nuevaCancion(id, nombre, artista, album, duracion);
		lista->insertarFinal(nuevaCancion);

		// Cerrar el formulario
		this->Close();
	}
};
}
