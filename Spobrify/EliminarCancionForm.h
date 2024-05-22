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

	public ref class EliminarCancionForm : public System::Windows::Forms::Form
	{
	private:
		Lista* lista;		//puntero a lista original

	public:
		EliminarCancionForm(Lista* listaRef) : lista(listaRef) {
			this->lista = listaRef;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EliminarCancionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ Id;
	protected:
	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Label^ label_duracion;
	private: System::Windows::Forms::Label^ label_album;
	private: System::Windows::Forms::Label^ label_artista;
	private: System::Windows::Forms::Label^ label_nombre;
	private: System::Windows::Forms::MaskedTextBox^ Duracion;
	private: System::Windows::Forms::TextBox^ Album;
	private: System::Windows::Forms::TextBox^ Artista;
	private: System::Windows::Forms::TextBox^ Nombre;
	private: System::Windows::Forms::Button^ eliminar;

	private: System::Windows::Forms::Button^ buscar;



	private: System::Windows::Forms::Label^ label_idBuscar;
	private: System::Windows::Forms::Label^ label_NombreBuscar;



	private: System::Windows::Forms::TextBox^ nombre_Buscar;
	private: System::Windows::Forms::MaskedTextBox^ id_Buscar;
	private: System::Windows::Forms::Button^ nueva_busqueda_boton;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Id = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->label_duracion = (gcnew System::Windows::Forms::Label());
			this->label_album = (gcnew System::Windows::Forms::Label());
			this->label_artista = (gcnew System::Windows::Forms::Label());
			this->label_nombre = (gcnew System::Windows::Forms::Label());
			this->Duracion = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Album = (gcnew System::Windows::Forms::TextBox());
			this->Artista = (gcnew System::Windows::Forms::TextBox());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->buscar = (gcnew System::Windows::Forms::Button());
			this->label_idBuscar = (gcnew System::Windows::Forms::Label());
			this->label_NombreBuscar = (gcnew System::Windows::Forms::Label());
			this->nombre_Buscar = (gcnew System::Windows::Forms::TextBox());
			this->id_Buscar = (gcnew System::Windows::Forms::MaskedTextBox());
			this->nueva_busqueda_boton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->Location = System::Drawing::Point(12, 207);
			this->Id->Mask = L"99999";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Size = System::Drawing::Size(36, 20);
			this->Id->TabIndex = 21;
			this->Id->ValidatingType = System::Int32::typeid;
			this->Id->Visible = false;
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id->ForeColor = System::Drawing::Color::Maroon;
			this->label_id->Location = System::Drawing::Point(12, 184);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(25, 20);
			this->label_id->TabIndex = 20;
			this->label_id->Text = L"Id";
			this->label_id->Visible = false;
			// 
			// label_duracion
			// 
			this->label_duracion->AutoSize = true;
			this->label_duracion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_duracion->ForeColor = System::Drawing::Color::Maroon;
			this->label_duracion->Location = System::Drawing::Point(8, 368);
			this->label_duracion->Name = L"label_duracion";
			this->label_duracion->Size = System::Drawing::Size(86, 20);
			this->label_duracion->TabIndex = 19;
			this->label_duracion->Text = L"Duración.";
			this->label_duracion->Visible = false;
			// 
			// label_album
			// 
			this->label_album->AutoSize = true;
			this->label_album->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_album->ForeColor = System::Drawing::Color::Maroon;
			this->label_album->Location = System::Drawing::Point(8, 322);
			this->label_album->Name = L"label_album";
			this->label_album->Size = System::Drawing::Size(158, 20);
			this->label_album->TabIndex = 18;
			this->label_album->Text = L"Nombre del album.";
			this->label_album->Visible = false;
			// 
			// label_artista
			// 
			this->label_artista->AutoSize = true;
			this->label_artista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_artista->ForeColor = System::Drawing::Color::Maroon;
			this->label_artista->Location = System::Drawing::Point(8, 276);
			this->label_artista->Name = L"label_artista";
			this->label_artista->Size = System::Drawing::Size(182, 20);
			this->label_artista->TabIndex = 17;
			this->label_artista->Text = L"Nombre del artista(s).";
			this->label_artista->Visible = false;
			// 
			// label_nombre
			// 
			this->label_nombre->AutoSize = true;
			this->label_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nombre->ForeColor = System::Drawing::Color::Maroon;
			this->label_nombre->Location = System::Drawing::Point(12, 230);
			this->label_nombre->Name = L"label_nombre";
			this->label_nombre->Size = System::Drawing::Size(187, 20);
			this->label_nombre->TabIndex = 16;
			this->label_nombre->Text = L"Nombre de la canción.";
			this->label_nombre->Visible = false;
			// 
			// Duracion
			// 
			this->Duracion->Location = System::Drawing::Point(12, 391);
			this->Duracion->Mask = L"00:00";
			this->Duracion->Name = L"Duracion";
			this->Duracion->ReadOnly = true;
			this->Duracion->Size = System::Drawing::Size(36, 20);
			this->Duracion->TabIndex = 15;
			this->Duracion->ValidatingType = System::DateTime::typeid;
			this->Duracion->Visible = false;
			// 
			// Album
			// 
			this->Album->Location = System::Drawing::Point(12, 345);
			this->Album->Name = L"Album";
			this->Album->ReadOnly = true;
			this->Album->Size = System::Drawing::Size(256, 20);
			this->Album->TabIndex = 14;
			this->Album->Visible = false;
			// 
			// Artista
			// 
			this->Artista->Location = System::Drawing::Point(12, 299);
			this->Artista->Name = L"Artista";
			this->Artista->ReadOnly = true;
			this->Artista->Size = System::Drawing::Size(256, 20);
			this->Artista->TabIndex = 13;
			this->Artista->Visible = false;
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(12, 253);
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			this->Nombre->Size = System::Drawing::Size(256, 20);
			this->Nombre->TabIndex = 12;
			this->Nombre->Visible = false;
			// 
			// eliminar
			// 
			this->eliminar->BackColor = System::Drawing::Color::Maroon;
			this->eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminar->ForeColor = System::Drawing::Color::White;
			this->eliminar->Location = System::Drawing::Point(166, 416);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(106, 37);
			this->eliminar->TabIndex = 11;
			this->eliminar->Text = L"Eliminar";
			this->eliminar->UseVisualStyleBackColor = false;
			this->eliminar->Visible = false;
			this->eliminar->Click += gcnew System::EventHandler(this, &EliminarCancionForm::modificar_Click);
			// 
			// buscar
			// 
			this->buscar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscar->ForeColor = System::Drawing::Color::White;
			this->buscar->Location = System::Drawing::Point(16, 104);
			this->buscar->Name = L"buscar";
			this->buscar->Size = System::Drawing::Size(250, 37);
			this->buscar->TabIndex = 22;
			this->buscar->Text = L"Buscar Canción";
			this->buscar->UseVisualStyleBackColor = false;
			this->buscar->Click += gcnew System::EventHandler(this, &EliminarCancionForm::buscar_Click);
			// 
			// label_idBuscar
			// 
			this->label_idBuscar->AutoSize = true;
			this->label_idBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idBuscar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label_idBuscar->Location = System::Drawing::Point(8, 9);
			this->label_idBuscar->Name = L"label_idBuscar";
			this->label_idBuscar->Size = System::Drawing::Size(104, 20);
			this->label_idBuscar->TabIndex = 25;
			this->label_idBuscar->Text = L"Id a buscar.";
			// 
			// label_NombreBuscar
			// 
			this->label_NombreBuscar->AutoSize = true;
			this->label_NombreBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_NombreBuscar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->label_NombreBuscar->Location = System::Drawing::Point(8, 55);
			this->label_NombreBuscar->Name = L"label_NombreBuscar";
			this->label_NombreBuscar->Size = System::Drawing::Size(261, 20);
			this->label_NombreBuscar->TabIndex = 24;
			this->label_NombreBuscar->Text = L"Nombre de la canción a buscar.";
			// 
			// nombre_Buscar
			// 
			this->nombre_Buscar->Location = System::Drawing::Point(12, 78);
			this->nombre_Buscar->Name = L"nombre_Buscar";
			this->nombre_Buscar->Size = System::Drawing::Size(256, 20);
			this->nombre_Buscar->TabIndex = 23;
			// 
			// id_Buscar
			// 
			this->id_Buscar->Location = System::Drawing::Point(12, 32);
			this->id_Buscar->Mask = L"99999";
			this->id_Buscar->Name = L"id_Buscar";
			this->id_Buscar->Size = System::Drawing::Size(36, 20);
			this->id_Buscar->TabIndex = 26;
			this->id_Buscar->ValidatingType = System::Int32::typeid;
			// 
			// nueva_busqueda_boton
			// 
			this->nueva_busqueda_boton->BackColor = System::Drawing::Color::DarkGreen;
			this->nueva_busqueda_boton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nueva_busqueda_boton->ForeColor = System::Drawing::Color::White;
			this->nueva_busqueda_boton->Location = System::Drawing::Point(12, 417);
			this->nueva_busqueda_boton->Name = L"nueva_busqueda_boton";
			this->nueva_busqueda_boton->Size = System::Drawing::Size(148, 32);
			this->nueva_busqueda_boton->TabIndex = 27;
			this->nueva_busqueda_boton->Text = L"Nueva Busqueda";
			this->nueva_busqueda_boton->UseVisualStyleBackColor = false;
			this->nueva_busqueda_boton->Click += gcnew System::EventHandler(this, &EliminarCancionForm::nueva_busqueda_boton_Click);
			// 
			// EliminarCancionForm
			// 
			this->AcceptButton = this->eliminar;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->ClientSize = System::Drawing::Size(284, 461);
			this->Controls->Add(this->nueva_busqueda_boton);
			this->Controls->Add(this->id_Buscar);
			this->Controls->Add(this->label_idBuscar);
			this->Controls->Add(this->label_NombreBuscar);
			this->Controls->Add(this->nombre_Buscar);
			this->Controls->Add(this->buscar);
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
			this->Controls->Add(this->eliminar);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EliminarCancionForm";
			this->Opacity = 0.85;
			this->ShowIcon = false;
			this->Text = L"Eliminar canción";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		int oldId = 0;
		string oldNombre, oldArtista, oldAlbum, oldDuracion;

		// Obtener los datos de los TextBoxes de BUSQUEDA
		std::string idCrudo = msclr::interop::marshal_as<std::string>(this->id_Buscar->Text);
		string nombre_BUSQ = msclr::interop::marshal_as<std::string>(this->nombre_Buscar->Text);

		if (idCrudo != "" && lista->getContador()) {//Si el ID no está vacio y si el contador es mayor a 1
			int id_BUSQ = stoi(idCrudo);
			if (lista->buscarPorNombre(nombre_BUSQ) == nullptr) {		//SI NO LO ENCUENTRA
				//NO HACE NADA, insita al usuario a volver a buscar, ya que no hay resultado alguno
				this->Id->Text = "";
				this->Nombre->Text = "";
				this->Artista->Text = "";
				this->Album->Text = "";
				this->Duracion->Text = "";
				this->label_id->Visible = false;
				this->label_nombre->Visible = false;
				this->label_artista->Visible = false;
				this->label_album->Visible = false;
				this->label_duracion->Visible = false;
				this->Id->Visible = false;
				this->Nombre->Visible = false;
				this->Artista->Visible = false;
				this->Album->Visible = false;
				this->Duracion->Visible = false;
				this->eliminar->Visible = false;
			}
			else {
				//*******************OCULTAR********************
				this->label_idBuscar->Visible = false;
				this->label_NombreBuscar->Visible = false;
				this->nombre_Buscar->Visible = false;
				this->id_Buscar->Visible = false;
				this->buscar->Visible = false;
				//*******************MOSTRAR********************
				this->label_id->Visible = true;
				this->label_nombre->Visible = true;
				this->label_artista->Visible = true;
				this->label_album->Visible = true;
				this->label_duracion->Visible = true;
				this->Id->Visible = true;
				this->Nombre->Visible = true;
				this->Artista->Visible = true;
				this->Album->Visible = true;
				this->Duracion->Visible = true;
				this->eliminar->Visible = true;

				oldId = lista->buscarPorNombreYID(nombre_BUSQ, id_BUSQ)->cancion.getId();
				oldNombre = lista->buscarPorNombreYID(nombre_BUSQ, id_BUSQ)->cancion.getNombre();
				oldArtista = lista->buscarPorNombreYID(nombre_BUSQ, id_BUSQ)->cancion.getNombreArtista();
				oldAlbum = lista->buscarPorNombreYID(nombre_BUSQ, id_BUSQ)->cancion.getNombreAlbum();
				oldDuracion = lista->buscarPorNombreYID(nombre_BUSQ, id_BUSQ)->cancion.getDuracion();

				System::String^ id = oldId.ToString();
				System::String^ nombre = msclr::interop::marshal_as<System::String^>(oldNombre);
				System::String^ artista = msclr::interop::marshal_as<System::String^>(oldArtista);
				System::String^ album = msclr::interop::marshal_as<System::String^>(oldAlbum);
				System::String^ duracion = msclr::interop::marshal_as<System::String^>(oldDuracion);

				this->Id->Text = id;
				this->Nombre->Text = nombre;
				this->Artista->Text = artista;
				this->Album->Text = album;
				this->Duracion->Text = duracion;

			}
		}
	}
	private: System::Void nueva_busqueda_boton_Click(System::Object^ sender, System::EventArgs^ e) {

		//****************OCULTAR**********************
		this->label_id->Visible = false;
		this->label_nombre->Visible = false;
		this->label_artista->Visible = false;
		this->label_album->Visible = false;
		this->label_duracion->Visible = false;
		this->Id->Visible = false;
		this->Nombre->Visible = false;
		this->Artista->Visible = false;
		this->Album->Visible = false;
		this->Duracion->Visible = false;
		this->eliminar->Visible = false;

		//*******************REINICIA********************
		this->nombre_Buscar->Text = "";
		this->id_Buscar->Text = "";
		//*******************MOSTRAR********************
		this->label_idBuscar->Visible = true;
		this->label_NombreBuscar->Visible = true;
		this->nombre_Buscar->Visible = true;
		this->id_Buscar->Visible = true;
		this->buscar->Visible = true;

	}
	private: System::Void modificar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener los datos de los TextBoxs
		std::string idCrudo = msclr::interop::marshal_as<std::string>(this->id_Buscar->Text);
		string nombre_BUSQ = msclr::interop::marshal_as<std::string>(this->nombre_Buscar->Text);
		if (idCrudo != "" && lista->getContador()) {//Si el ID no está vacio y si el contador es mayor a 1
			int id_BUSQ = stoi(idCrudo);
			
			// Eliminar

			lista->eliminar(nombre_BUSQ, id_BUSQ);
		}



		// Cerrar el formulario
		this->Close();
	}
	};
}
