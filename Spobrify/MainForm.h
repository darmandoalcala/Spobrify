#pragma once
#include "Lista.h"
#include <windows.h>
#include <iostream>
#include "AgregarCancionForm.h"
#include "EditarCancionForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace Spobrify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		Lista* lista;
		Image^ PlayImage;
		Image^ PauseImage;

		Nodo* reproduciendo;
	public:
		MainForm(Lista* lista)
		{
			this->reproduciendo = nullptr;
			this->lista = lista;
			PlayImage = Image::FromFile("play.png");
			PauseImage = Image::FromFile("pause.png");

			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ titulo_label;

	private: System::Windows::Forms::PictureBox^ inicio_boton;
	private: System::Windows::Forms::PictureBox^ buscar_boton;
	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::PictureBox^ agregar_boton;
	private: System::Windows::Forms::PictureBox^ canciones_boton;
	private: System::Windows::Forms::PictureBox^ disco3;
	private: System::Windows::Forms::PictureBox^ disco2;
	private: System::Windows::Forms::PictureBox^ disco1;
	private: System::Windows::Forms::Label^ cancionesAgregadas_label;

	private: System::Windows::Forms::Label^ canciones_titulo;
	private: System::Windows::Forms::PictureBox^ canciones_img;
	private: System::Windows::Forms::PictureBox^ play_boton;
	private: System::Windows::Forms::PictureBox^ aleatorio_boton;
	private: System::Windows::Forms::PictureBox^ reproducir;
	private: System::Windows::Forms::PictureBox^ siguiente;
	private: System::Windows::Forms::PictureBox^ anterior;
	private: System::Windows::Forms::Label^ titulo_cancion_actual;

	private: System::Windows::Forms::PictureBox^ cover_imagen;
	private: System::Windows::Forms::PictureBox^ ordenar_boton;
	private: System::Windows::Forms::DataGridView^ cancionesFavoritasGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Artista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Album;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Duracion;
	private: System::Windows::Forms::TextBox^ buscarText;
	private: System::Windows::Forms::PictureBox^ buscarCancionBoton;
	private: System::Windows::Forms::Label^ encontradaLabel;

	private: System::Windows::Forms::PictureBox^ encontradaImagen;
	private: System::Windows::Forms::PictureBox^ editar_boton;
	private: System::Windows::Forms::PictureBox^ eliminar_boton;

	private: System::Windows::Forms::ProgressBar^ progressBar_reproduciendo;





	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->eliminar_boton = (gcnew System::Windows::Forms::PictureBox());
			this->disco3 = (gcnew System::Windows::Forms::PictureBox());
			this->disco2 = (gcnew System::Windows::Forms::PictureBox());
			this->disco1 = (gcnew System::Windows::Forms::PictureBox());
			this->editar_boton = (gcnew System::Windows::Forms::PictureBox());
			this->canciones_boton = (gcnew System::Windows::Forms::PictureBox());
			this->agregar_boton = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->buscar_boton = (gcnew System::Windows::Forms::PictureBox());
			this->inicio_boton = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->encontradaLabel = (gcnew System::Windows::Forms::Label());
			this->encontradaImagen = (gcnew System::Windows::Forms::PictureBox());
			this->buscarCancionBoton = (gcnew System::Windows::Forms::PictureBox());
			this->buscarText = (gcnew System::Windows::Forms::TextBox());
			this->cancionesFavoritasGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Artista = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Album = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Duracion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordenar_boton = (gcnew System::Windows::Forms::PictureBox());
			this->aleatorio_boton = (gcnew System::Windows::Forms::PictureBox());
			this->play_boton = (gcnew System::Windows::Forms::PictureBox());
			this->canciones_titulo = (gcnew System::Windows::Forms::Label());
			this->canciones_img = (gcnew System::Windows::Forms::PictureBox());
			this->cancionesAgregadas_label = (gcnew System::Windows::Forms::Label());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->titulo_label = (gcnew System::Windows::Forms::Label());
			this->reproducir = (gcnew System::Windows::Forms::PictureBox());
			this->siguiente = (gcnew System::Windows::Forms::PictureBox());
			this->anterior = (gcnew System::Windows::Forms::PictureBox());
			this->titulo_cancion_actual = (gcnew System::Windows::Forms::Label());
			this->cover_imagen = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar_reproduciendo = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eliminar_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->disco3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->disco2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->disco1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->editar_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canciones_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->agregar_boton))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buscar_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inicio_boton))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->encontradaImagen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buscarCancionBoton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cancionesFavoritasGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordenar_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aleatorio_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->play_boton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canciones_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reproducir))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->siguiente))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->anterior))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cover_imagen))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel1->Controls->Add(this->eliminar_boton);
			this->panel1->Controls->Add(this->disco3);
			this->panel1->Controls->Add(this->disco2);
			this->panel1->Controls->Add(this->disco1);
			this->panel1->Controls->Add(this->editar_boton);
			this->panel1->Controls->Add(this->canciones_boton);
			this->panel1->Controls->Add(this->agregar_boton);
			this->panel1->Location = System::Drawing::Point(2, 131);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(60, 478);
			this->panel1->TabIndex = 0;
			// 
			// eliminar_boton
			// 
			this->eliminar_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eliminar_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eliminar_boton.Image")));
			this->eliminar_boton->Location = System::Drawing::Point(7, 115);
			this->eliminar_boton->Name = L"eliminar_boton";
			this->eliminar_boton->Padding = System::Windows::Forms::Padding(5);
			this->eliminar_boton->Size = System::Drawing::Size(50, 50);
			this->eliminar_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->eliminar_boton->TabIndex = 15;
			this->eliminar_boton->TabStop = false;
			this->eliminar_boton->Click += gcnew System::EventHandler(this, &MainForm::eliminar_boton_Click);
			// 
			// disco3
			// 
			this->disco3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->disco3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->disco3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"disco3.Image")));
			this->disco3->Location = System::Drawing::Point(7, 339);
			this->disco3->Name = L"disco3";
			this->disco3->Padding = System::Windows::Forms::Padding(5);
			this->disco3->Size = System::Drawing::Size(50, 50);
			this->disco3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->disco3->TabIndex = 6;
			this->disco3->TabStop = false;
			// 
			// disco2
			// 
			this->disco2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->disco2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->disco2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"disco2.Image")));
			this->disco2->Location = System::Drawing::Point(7, 283);
			this->disco2->Name = L"disco2";
			this->disco2->Padding = System::Windows::Forms::Padding(5);
			this->disco2->Size = System::Drawing::Size(50, 50);
			this->disco2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->disco2->TabIndex = 5;
			this->disco2->TabStop = false;
			// 
			// disco1
			// 
			this->disco1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->disco1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->disco1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"disco1.Image")));
			this->disco1->Location = System::Drawing::Point(7, 227);
			this->disco1->Name = L"disco1";
			this->disco1->Padding = System::Windows::Forms::Padding(5);
			this->disco1->Size = System::Drawing::Size(50, 50);
			this->disco1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->disco1->TabIndex = 4;
			this->disco1->TabStop = false;
			this->disco1->Click += gcnew System::EventHandler(this, &MainForm::disco1_Click);
			// 
			// editar_boton
			// 
			this->editar_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editar_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editar_boton.Image")));
			this->editar_boton->Location = System::Drawing::Point(7, 59);
			this->editar_boton->Name = L"editar_boton";
			this->editar_boton->Padding = System::Windows::Forms::Padding(5);
			this->editar_boton->Size = System::Drawing::Size(50, 50);
			this->editar_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->editar_boton->TabIndex = 7;
			this->editar_boton->TabStop = false;
			this->editar_boton->Click += gcnew System::EventHandler(this, &MainForm::editar_boton_Click);
			// 
			// canciones_boton
			// 
			this->canciones_boton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->canciones_boton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->canciones_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->canciones_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"canciones_boton.Image")));
			this->canciones_boton->Location = System::Drawing::Point(7, 171);
			this->canciones_boton->Name = L"canciones_boton";
			this->canciones_boton->Padding = System::Windows::Forms::Padding(5);
			this->canciones_boton->Size = System::Drawing::Size(50, 50);
			this->canciones_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->canciones_boton->TabIndex = 3;
			this->canciones_boton->TabStop = false;
			this->canciones_boton->Tag = L"Canciones que te gustan";
			this->canciones_boton->Click += gcnew System::EventHandler(this, &MainForm::canciones_boton_Click);
			// 
			// agregar_boton
			// 
			this->agregar_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->agregar_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"agregar_boton.Image")));
			this->agregar_boton->Location = System::Drawing::Point(7, 3);
			this->agregar_boton->Name = L"agregar_boton";
			this->agregar_boton->Padding = System::Windows::Forms::Padding(5);
			this->agregar_boton->Size = System::Drawing::Size(50, 50);
			this->agregar_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->agregar_boton->TabIndex = 2;
			this->agregar_boton->TabStop = false;
			this->agregar_boton->Click += gcnew System::EventHandler(this, &MainForm::agregar_boton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel2->Controls->Add(this->buscar_boton);
			this->panel2->Controls->Add(this->inicio_boton);
			this->panel2->Location = System::Drawing::Point(2, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(60, 124);
			this->panel2->TabIndex = 1;
			// 
			// buscar_boton
			// 
			this->buscar_boton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->buscar_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buscar_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buscar_boton.Image")));
			this->buscar_boton->Location = System::Drawing::Point(7, 67);
			this->buscar_boton->Name = L"buscar_boton";
			this->buscar_boton->Padding = System::Windows::Forms::Padding(5);
			this->buscar_boton->Size = System::Drawing::Size(50, 52);
			this->buscar_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->buscar_boton->TabIndex = 1;
			this->buscar_boton->TabStop = false;
			this->buscar_boton->Click += gcnew System::EventHandler(this, &MainForm::buscar_boton_Click);
			// 
			// inicio_boton
			// 
			this->inicio_boton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inicio_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inicio_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"inicio_boton.Image")));
			this->inicio_boton->Location = System::Drawing::Point(7, 11);
			this->inicio_boton->Name = L"inicio_boton";
			this->inicio_boton->Padding = System::Windows::Forms::Padding(5);
			this->inicio_boton->Size = System::Drawing::Size(50, 52);
			this->inicio_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->inicio_boton->TabIndex = 0;
			this->inicio_boton->TabStop = false;
			this->inicio_boton->Click += gcnew System::EventHandler(this, &MainForm::inicio_boton_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->encontradaLabel);
			this->panel3->Controls->Add(this->encontradaImagen);
			this->panel3->Controls->Add(this->buscarCancionBoton);
			this->panel3->Controls->Add(this->buscarText);
			this->panel3->Controls->Add(this->cancionesFavoritasGridView);
			this->panel3->Controls->Add(this->ordenar_boton);
			this->panel3->Controls->Add(this->aleatorio_boton);
			this->panel3->Controls->Add(this->play_boton);
			this->panel3->Controls->Add(this->canciones_titulo);
			this->panel3->Controls->Add(this->canciones_img);
			this->panel3->Controls->Add(this->cancionesAgregadas_label);
			this->panel3->Controls->Add(this->logo);
			this->panel3->Controls->Add(this->titulo_label);
			this->panel3->Location = System::Drawing::Point(68, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1193, 608);
			this->panel3->TabIndex = 1;
			// 
			// encontradaLabel
			// 
			this->encontradaLabel->AutoSize = true;
			this->encontradaLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->encontradaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encontradaLabel->ForeColor = System::Drawing::Color::White;
			this->encontradaLabel->Location = System::Drawing::Point(362, 245);
			this->encontradaLabel->Name = L"encontradaLabel";
			this->encontradaLabel->Size = System::Drawing::Size(165, 46);
			this->encontradaLabel->TabIndex = 14;
			this->encontradaLabel->Text = L"Nombre";
			this->encontradaLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->encontradaLabel->Visible = false;
			// 
			// encontradaImagen
			// 
			this->encontradaImagen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->encontradaImagen->BackColor = System::Drawing::Color::Transparent;
			this->encontradaImagen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->encontradaImagen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"encontradaImagen.Image")));
			this->encontradaImagen->Location = System::Drawing::Point(119, 182);
			this->encontradaImagen->Name = L"encontradaImagen";
			this->encontradaImagen->Padding = System::Windows::Forms::Padding(5);
			this->encontradaImagen->Size = System::Drawing::Size(225, 225);
			this->encontradaImagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->encontradaImagen->TabIndex = 11;
			this->encontradaImagen->TabStop = false;
			this->encontradaImagen->Visible = false;
			// 
			// buscarCancionBoton
			// 
			this->buscarCancionBoton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->buscarCancionBoton->BackColor = System::Drawing::Color::Transparent;
			this->buscarCancionBoton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buscarCancionBoton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buscarCancionBoton.Image")));
			this->buscarCancionBoton->Location = System::Drawing::Point(673, 24);
			this->buscarCancionBoton->Name = L"buscarCancionBoton";
			this->buscarCancionBoton->Padding = System::Windows::Forms::Padding(5);
			this->buscarCancionBoton->Size = System::Drawing::Size(29, 29);
			this->buscarCancionBoton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->buscarCancionBoton->TabIndex = 2;
			this->buscarCancionBoton->TabStop = false;
			this->buscarCancionBoton->Visible = false;
			this->buscarCancionBoton->Click += gcnew System::EventHandler(this, &MainForm::buscarCancionBoton_Click);
			// 
			// buscarText
			// 
			this->buscarText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->buscarText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->buscarText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscarText->ForeColor = System::Drawing::Color::White;
			this->buscarText->Location = System::Drawing::Point(477, 24);
			this->buscarText->Name = L"buscarText";
			this->buscarText->Size = System::Drawing::Size(190, 29);
			this->buscarText->TabIndex = 13;
			this->buscarText->Visible = false;
			// 
			// cancionesFavoritasGridView
			// 
			this->cancionesFavoritasGridView->AllowUserToAddRows = false;
			this->cancionesFavoritasGridView->AllowUserToDeleteRows = false;
			this->cancionesFavoritasGridView->AllowUserToResizeColumns = false;
			this->cancionesFavoritasGridView->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(132)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			this->cancionesFavoritasGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->cancionesFavoritasGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cancionesFavoritasGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->cancionesFavoritasGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->cancionesFavoritasGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->cancionesFavoritasGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->cancionesFavoritasGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(125)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->cancionesFavoritasGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->cancionesFavoritasGridView->ColumnHeadersHeight = 40;
			this->cancionesFavoritasGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->cancionesFavoritasGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id,
					this->Titulo, this->Artista, this->Album, this->Duracion
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ButtonFace;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->cancionesFavoritasGridView->DefaultCellStyle = dataGridViewCellStyle3;
			this->cancionesFavoritasGridView->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->cancionesFavoritasGridView->EnableHeadersVisualStyles = false;
			this->cancionesFavoritasGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->cancionesFavoritasGridView->Location = System::Drawing::Point(0, 253);
			this->cancionesFavoritasGridView->MultiSelect = false;
			this->cancionesFavoritasGridView->Name = L"cancionesFavoritasGridView";
			this->cancionesFavoritasGridView->ReadOnly = true;
			this->cancionesFavoritasGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->cancionesFavoritasGridView->RowHeadersVisible = false;
			this->cancionesFavoritasGridView->RowHeadersWidth = 10;
			this->cancionesFavoritasGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->cancionesFavoritasGridView->RowTemplate->ReadOnly = true;
			this->cancionesFavoritasGridView->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->cancionesFavoritasGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->cancionesFavoritasGridView->ShowCellErrors = false;
			this->cancionesFavoritasGridView->ShowCellToolTips = false;
			this->cancionesFavoritasGridView->ShowEditingIcon = false;
			this->cancionesFavoritasGridView->Size = System::Drawing::Size(1190, 355);
			this->cancionesFavoritasGridView->StandardTab = true;
			this->cancionesFavoritasGridView->TabIndex = 12;
			this->cancionesFavoritasGridView->Visible = false;
			// 
			// Id
			// 
			this->Id->DividerWidth = 20;
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Id->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Titulo
			// 
			this->Titulo->DividerWidth = 20;
			this->Titulo->HeaderText = L"Titulo";
			this->Titulo->Name = L"Titulo";
			this->Titulo->ReadOnly = true;
			this->Titulo->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Titulo->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Artista
			// 
			this->Artista->DividerWidth = 20;
			this->Artista->HeaderText = L"Artista";
			this->Artista->Name = L"Artista";
			this->Artista->ReadOnly = true;
			this->Artista->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Album
			// 
			this->Album->DividerWidth = 20;
			this->Album->HeaderText = L"Album";
			this->Album->Name = L"Album";
			this->Album->ReadOnly = true;
			this->Album->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Duracion
			// 
			this->Duracion->DividerWidth = 20;
			this->Duracion->HeaderText = L"Duracion";
			this->Duracion->Name = L"Duracion";
			this->Duracion->ReadOnly = true;
			this->Duracion->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// ordenar_boton
			// 
			this->ordenar_boton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->ordenar_boton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ordenar_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ordenar_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ordenar_boton.Image")));
			this->ordenar_boton->Location = System::Drawing::Point(132, 197);
			this->ordenar_boton->Name = L"ordenar_boton";
			this->ordenar_boton->Padding = System::Windows::Forms::Padding(5);
			this->ordenar_boton->Size = System::Drawing::Size(50, 50);
			this->ordenar_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ordenar_boton->TabIndex = 11;
			this->ordenar_boton->TabStop = false;
			this->ordenar_boton->Visible = false;
			this->ordenar_boton->Click += gcnew System::EventHandler(this, &MainForm::ordenar_boton_Click);
			// 
			// aleatorio_boton
			// 
			this->aleatorio_boton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->aleatorio_boton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->aleatorio_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->aleatorio_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aleatorio_boton.Image")));
			this->aleatorio_boton->Location = System::Drawing::Point(76, 197);
			this->aleatorio_boton->Name = L"aleatorio_boton";
			this->aleatorio_boton->Padding = System::Windows::Forms::Padding(5);
			this->aleatorio_boton->Size = System::Drawing::Size(50, 50);
			this->aleatorio_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->aleatorio_boton->TabIndex = 8;
			this->aleatorio_boton->TabStop = false;
			this->aleatorio_boton->Tag = L"aleatorio";
			this->aleatorio_boton->Visible = false;
			this->aleatorio_boton->Click += gcnew System::EventHandler(this, &MainForm::aleatorio_boton_Click);
			// 
			// play_boton
			// 
			this->play_boton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->play_boton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->play_boton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play_boton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play_boton.Image")));
			this->play_boton->Location = System::Drawing::Point(20, 197);
			this->play_boton->Name = L"play_boton";
			this->play_boton->Padding = System::Windows::Forms::Padding(5);
			this->play_boton->Size = System::Drawing::Size(50, 50);
			this->play_boton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->play_boton->TabIndex = 7;
			this->play_boton->TabStop = false;
			this->play_boton->Tag = L"Play";
			this->play_boton->Visible = false;
			this->play_boton->Click += gcnew System::EventHandler(this, &MainForm::play_boton_Click);
			// 
			// canciones_titulo
			// 
			this->canciones_titulo->AutoSize = true;
			this->canciones_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->canciones_titulo->ForeColor = System::Drawing::Color::White;
			this->canciones_titulo->Location = System::Drawing::Point(176, 78);
			this->canciones_titulo->Name = L"canciones_titulo";
			this->canciones_titulo->Size = System::Drawing::Size(477, 86);
			this->canciones_titulo->TabIndex = 6;
			this->canciones_titulo->Text = L"Tus Me Gusta";
			this->canciones_titulo->Visible = false;
			// 
			// canciones_img
			// 
			this->canciones_img->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)));
			this->canciones_img->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->canciones_img->Cursor = System::Windows::Forms::Cursors::Hand;
			this->canciones_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"canciones_img.Image")));
			this->canciones_img->Location = System::Drawing::Point(20, 41);
			this->canciones_img->Name = L"canciones_img";
			this->canciones_img->Padding = System::Windows::Forms::Padding(5);
			this->canciones_img->Size = System::Drawing::Size(150, 150);
			this->canciones_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->canciones_img->TabIndex = 5;
			this->canciones_img->TabStop = false;
			this->canciones_img->Tag = L"Canciones que te gustan";
			this->canciones_img->Visible = false;
			// 
			// cancionesAgregadas_label
			// 
			this->cancionesAgregadas_label->AutoSize = true;
			this->cancionesAgregadas_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cancionesAgregadas_label->ForeColor = System::Drawing::Color::White;
			this->cancionesAgregadas_label->Location = System::Drawing::Point(183, 164);
			this->cancionesAgregadas_label->Name = L"cancionesAgregadas_label";
			this->cancionesAgregadas_label->Size = System::Drawing::Size(161, 19);
			this->cancionesAgregadas_label->TabIndex = 3;
			this->cancionesAgregadas_label->Text = L"1 canciones agregadas";
			this->cancionesAgregadas_label->Visible = false;
			// 
			// logo
			// 
			this->logo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logo->BackColor = System::Drawing::Color::Transparent;
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(1140, 3);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(50, 50);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo->TabIndex = 2;
			this->logo->TabStop = false;
			// 
			// titulo_label
			// 
			this->titulo_label->AutoSize = true;
			this->titulo_label->BackColor = System::Drawing::Color::Transparent;
			this->titulo_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titulo_label->ForeColor = System::Drawing::Color::White;
			this->titulo_label->Location = System::Drawing::Point(15, 12);
			this->titulo_label->Name = L"titulo_label";
			this->titulo_label->Size = System::Drawing::Size(294, 26);
			this->titulo_label->TabIndex = 0;
			this->titulo_label->Text = L"SPOBRIFY - PROYECTO FINAL";
			// 
			// reproducir
			// 
			this->reproducir->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->reproducir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reproducir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reproducir.Image")));
			this->reproducir->Location = System::Drawing::Point(615, 615);
			this->reproducir->Name = L"reproducir";
			this->reproducir->Padding = System::Windows::Forms::Padding(5);
			this->reproducir->Size = System::Drawing::Size(40, 40);
			this->reproducir->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->reproducir->TabIndex = 7;
			this->reproducir->TabStop = false;
			this->reproducir->Click += gcnew System::EventHandler(this, &MainForm::reproducir_Click);
			// 
			// siguiente
			// 
			this->siguiente->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->siguiente->Cursor = System::Windows::Forms::Cursors::Hand;
			this->siguiente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"siguiente.Image")));
			this->siguiente->Location = System::Drawing::Point(685, 615);
			this->siguiente->Name = L"siguiente";
			this->siguiente->Padding = System::Windows::Forms::Padding(5);
			this->siguiente->Size = System::Drawing::Size(40, 40);
			this->siguiente->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->siguiente->TabIndex = 8;
			this->siguiente->TabStop = false;
			this->siguiente->Click += gcnew System::EventHandler(this, &MainForm::siguiente_Click);
			// 
			// anterior
			// 
			this->anterior->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->anterior->Cursor = System::Windows::Forms::Cursors::Hand;
			this->anterior->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"anterior.Image")));
			this->anterior->Location = System::Drawing::Point(545, 615);
			this->anterior->Name = L"anterior";
			this->anterior->Padding = System::Windows::Forms::Padding(5);
			this->anterior->Size = System::Drawing::Size(40, 40);
			this->anterior->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->anterior->TabIndex = 9;
			this->anterior->TabStop = false;
			this->anterior->Click += gcnew System::EventHandler(this, &MainForm::anterior_Click);
			// 
			// titulo_cancion_actual
			// 
			this->titulo_cancion_actual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->titulo_cancion_actual->AutoSize = true;
			this->titulo_cancion_actual->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titulo_cancion_actual->ForeColor = System::Drawing::Color::White;
			this->titulo_cancion_actual->Location = System::Drawing::Point(83, 615);
			this->titulo_cancion_actual->Name = L"titulo_cancion_actual";
			this->titulo_cancion_actual->Size = System::Drawing::Size(13, 19);
			this->titulo_cancion_actual->TabIndex = 9;
			this->titulo_cancion_actual->Text = L".";
			// 
			// cover_imagen
			// 
			this->cover_imagen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->cover_imagen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cover_imagen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cover_imagen.Image")));
			this->cover_imagen->Location = System::Drawing::Point(12, 619);
			this->cover_imagen->Name = L"cover_imagen";
			this->cover_imagen->Padding = System::Windows::Forms::Padding(5);
			this->cover_imagen->Size = System::Drawing::Size(50, 50);
			this->cover_imagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cover_imagen->TabIndex = 10;
			this->cover_imagen->TabStop = false;
			// 
			// progressBar_reproduciendo
			// 
			this->progressBar_reproduciendo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->progressBar_reproduciendo->Location = System::Drawing::Point(545, 661);
			this->progressBar_reproduciendo->Name = L"progressBar_reproduciendo";
			this->progressBar_reproduciendo->Size = System::Drawing::Size(180, 11);
			this->progressBar_reproduciendo->TabIndex = 11;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->progressBar_reproduciendo);
			this->Controls->Add(this->cover_imagen);
			this->Controls->Add(this->titulo_cancion_actual);
			this->Controls->Add(this->siguiente);
			this->Controls->Add(this->reproducir);
			this->Controls->Add(this->anterior);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eliminar_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->disco3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->disco2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->disco1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->editar_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canciones_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->agregar_boton))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buscar_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inicio_boton))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->encontradaImagen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buscarCancionBoton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cancionesFavoritasGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordenar_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aleatorio_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->play_boton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canciones_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reproducir))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->siguiente))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->anterior))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cover_imagen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inicio_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//PANTALLA DE INICIO
		//**************OCULTAR********************
		this->panel3->BackgroundImage = nullptr;
		this->canciones_img->Visible = false;
		this->canciones_titulo->Visible = false;
		this->cancionesFavoritasGridView->Visible = false;
		this->cancionesAgregadas_label->Visible = false;
		this->play_boton->Visible = false;
		this->aleatorio_boton->Visible = false;
		this->ordenar_boton->Visible = false;
		this->buscarText->Visible = false;
		this->buscarCancionBoton->Visible = false;
		this->encontradaImagen->Visible = false;
		this->encontradaLabel->Visible = false;

		//**************CAMBIAR FONDO****************
		this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
			static_cast<System::Int32>(static_cast<System::Byte>(18)));
		this->titulo_label->Text = L"SPOBRIFY - PROYECTO FINAL";
		this->titulo_label->Visible = true;	
	}

	private: System::Void buscar_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//BUSCAR CANCION POR TITULO (PANTALLA)
		//**************OCULTAR********************
		this->canciones_img->Visible = false;
		this->canciones_titulo->Visible = false;
		this->cancionesFavoritasGridView->Visible = false;
		this->cancionesAgregadas_label->Visible = false;
		this->play_boton->Visible = false;
		this->aleatorio_boton->Visible = false;
		this->ordenar_boton->Visible = false;
		this->encontradaImagen->Visible = false;
		this->encontradaLabel->Visible = false;

		//**************CAMBIAR FONDO****************
		Image^ FondoBuscar = Image::FromFile("search_background.png");
		this->panel3->BackgroundImage = (FondoBuscar);
		this->titulo_label->Text = L"BUSCAR CANCIONES:\nIngrese el nombre de la canción";
		this->titulo_label->Visible = true;

		//**************MOSTRAR******************
		this->buscarText->Visible = true;
		this->buscarCancionBoton->Visible = true;

	}

	private: System::Void buscarCancionBoton_Click(System::Object^ sender, System::EventArgs^ e) {														//BUSCAR CANCION BOTON (UNA VEZ ESCRITO EL TITULO DE LA CANCION)
		std::string nombreABuscar = msclr::interop::marshal_as<std::string>(this->buscarText->Text);
		this->encontradaImagen->Visible = false;
		this->encontradaLabel->Visible = false;
		if (lista->buscarPorNombre(nombreABuscar) == nullptr) {		//SI NO LO ENCUENTRA
			this->encontradaLabel->Text = L"SIN RESULTADO :(";
			this->encontradaLabel->Visible = true;
			return;
		}
		else{														//SI SÍ LO ENCUENTRA
			stringstream ss;
			ss << lista->buscarPorNombre(nombreABuscar)->cancion.getId()
				<< ". "
				<< lista->buscarPorNombre(nombreABuscar)->cancion.getNombre()
				<< "\n"
				<< lista->buscarPorNombre(nombreABuscar)->cancion.getNombreArtista()
				<< "  "
				<< lista->buscarPorNombre(nombreABuscar)->cancion.getNombreAlbum()
				<< "  "
				<< lista->buscarPorNombre(nombreABuscar)->cancion.getDuracion();
			
			System::String^ infoEncontrada = msclr::interop::marshal_as<System::String^>(ss.str());

			this->encontradaImagen->Visible = true;
			this->encontradaLabel->Text = infoEncontrada;
			this->encontradaLabel->Visible = true;
		}

	}

	private: System::Void agregar_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//AGREGAR CANCION
		//Abre nueva ventana (parametro lista de referencia).
		AgregarCancionForm^ agregarForm = gcnew AgregarCancionForm(lista);
		agregarForm->ShowDialog();
	}

	private: System::Void canciones_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//CANCIONES FAVORITAS
		//**************OCULTAR********************
		this->panel3->BackgroundImage = nullptr;
		this->titulo_label->Visible = false;
		this->buscarText->Visible = false;
		this->buscarCancionBoton->Visible = false;
		this->encontradaImagen->Visible = false;
		this->encontradaLabel->Visible = false;

		//**************CAMBIAR FONDO****************
		this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
			static_cast<System::Int32>(static_cast<System::Byte>(132)));
		this->canciones_titulo->Text = "Tus Me Gusta";
		this->canciones_titulo->Visible = true;

		//**************MOSTRAR********************
		this->canciones_img->Visible = true;
		this->cancionesAgregadas_label->Visible = true;
		this->cancionesFavoritasGridView->Visible = true;
		this->play_boton->Visible = true;
		this->aleatorio_boton->Visible = true;
		this->ordenar_boton->Visible = true;

		llenarGridViewFavoritas();									//Actualizar pantalla favoritas

	}
	private: System::Void play_boton_Click(System::Object^ sender, System::EventArgs^ e) {																//PLAY (ME GUSTA)
		this->reproducir_Click(sender, e);
	}
	private: System::Void aleatorio_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//MODO ALEATORIO
		//DESORDENA, modo "shuffle"
		lista->shuffle();
		llenarGridViewFavoritas();									//Actualizar pantalla favoritas
	}
	private: System::Void ordenar_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//ORDENAR POR TITULO (BUBBLESORT)
		//ORDENA por nombre de canción "A" a la "Z"
		lista->ordenarPorNombre();
		llenarGridViewFavoritas();									//Actualizar pantalla favoritas
		
	}
	private: System::Void disco1_Click(System::Object^ sender, System::EventArgs^ e) {																	//PUSH DE PRUEBA
		//PRUEBA ***********
		//Inserta todo el disco "GENESIS - Peso Pluma"
		Cancion cancion1(1, "ROSA PASTEL", "Peso Pluma, Jasiel Nuñez", "GÉNESIS", "03:24");						lista->insertarFinal(cancion1);
		cancion1.modificar(2, "LUNA", "Peso Pluma, Junior H", "GÉNESIS", "02:43");								lista->insertarFinal(cancion1);
		cancion1.modificar(3, "77", "Peso Pluma, Eladio Carrion", "GÉNESIS", "03:35");							lista->insertarFinal(cancion1);
		cancion1.modificar(4, "RUBICON", "Peso Pluma", "GÉNESIS", "03:58");										lista->insertarFinal(cancion1);
		cancion1.modificar(5, "CARNAL", "Peso Pluma, Natanael Cano", "GÉNESIS", "02:54");						lista->insertarFinal(cancion1);
		cancion1.modificar(6, "LAS MORRAS", "Peso Pluma, Blessd", "GÉNESIS", "02:35");							lista->insertarFinal(cancion1);
		cancion1.modificar(7, "GAVILÁN II", "Peso Pluma, Tito Double P", "GÉNESIS", "03:45");					lista->insertarFinal(cancion1);
		cancion1.modificar(8, "VVS", "Peso Pluma, Edgardo N, Dareyes", "GÉNESIS", "02:42");						lista->insertarFinal(cancion1);
		cancion1.modificar(9, "SU CASA", "Peso Pluma, Luis R Conriquez", "GÉNESIS", "02:18");					lista->insertarFinal(cancion1);
		cancion1.modificar(10, "LADY GAGA", "Peso Pluma, Gabito Ballesteros, Junior H", "GÉNESIS", "03:32");	lista->insertarFinal(cancion1);
		cancion1.modificar(11, "ZAPATA", "Peso Pluma", "GÉNESIS", "03:40");										lista->insertarFinal(cancion1);
		cancion1.modificar(12, "PRC", "Peso Pluma, Natanael Cano", "GÉNESIS", "03:04");							lista->insertarFinal(cancion1);
		cancion1.modificar(13, "LA PEOPLE", "Peso Pluma, Tito Double P", "GÉNESIS", "02:33");					lista->insertarFinal(cancion1);
		cancion1.modificar(14, "NUEVA VIDA", "Peso Pluma", "GÉNESIS", "03:10");									lista->insertarFinal(cancion1);
		cancion1.modificar(15, "TULUM", "Peso Pluma, Grup Frontera", "GÉNESIS", "03:29");						lista->insertarFinal(cancion1);
		cancion1.modificar(16, "LAGUNAS", "Peso Pluma, Jasiel Nuñez", "GÉNESIS", "03:51");						lista->insertarFinal(cancion1);
		cancion1.modificar(17, "BYE", "Peso Pluma", "GÉNESIS", "03:32");										lista->insertarFinal(cancion1);
		llenarGridViewFavoritas();									//Actualizar pantalla favoritas
	}

	void llenarGridViewFavoritas() {																													//LLENAR GRID DE CANCIONES FAVORITAS (REQUEST)
		//LIMPIA COLUMNAS Y FILAS
		cancionesFavoritasGridView->Columns->Clear();
		cancionesFavoritasGridView->Rows->Clear();
		//Añade headers
		cancionesFavoritasGridView->Columns->Add("ID", "\tID\t");
		cancionesFavoritasGridView->Columns->Add("Titulo", "\tTITULO\t");
		cancionesFavoritasGridView->Columns->Add("Artista", "\tARTISTA\t");
		cancionesFavoritasGridView->Columns->Add("Album", "\tALBUM\t");
		cancionesFavoritasGridView->Columns->Add("Duracion", "\tDURACION\t");
		//itera en la lista, para recuperar todas las canciones y guardarlas en el gridview
		Nodo* actual = lista->header;
		while (actual != nullptr) {
			int rowIndex = cancionesFavoritasGridView->Rows->Add();
			cancionesFavoritasGridView->Rows[rowIndex]->Cells["ID"]->Value = actual->cancion.getId();
			cancionesFavoritasGridView->Rows[rowIndex]->Cells["Titulo"]->Value = gcnew System::String(actual->cancion.getNombre().c_str());
			cancionesFavoritasGridView->Rows[rowIndex]->Cells["Artista"]->Value = gcnew System::String(actual->cancion.getNombreArtista().c_str());
			cancionesFavoritasGridView->Rows[rowIndex]->Cells["Album"]->Value = gcnew System::String(actual->cancion.getNombreAlbum().c_str());
			cancionesFavoritasGridView->Rows[rowIndex]->Cells["Duracion"]->Value = gcnew System::String(actual->cancion.getDuracion().c_str());
			actual = actual->siguiente;
		}
		mostrarTotalCancionesFavoritas();
	}

	void mostrarTotalCancionesFavoritas() {																												//CONSEGUIR Y MOSTRAR CONTADOR DE LISTA
		//Consulta el total de nodos para mostrarlo en el label correspondiente en canciones favoritas
		this->cancionesAgregadas_label->Text = lista->getContador().ToString() + L" canciones favoritas";
	}
	
	private: System::Void editar_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//EDITAR CAMCION
		//Abre nueva ventana (parametro lista de referencia).
		EditarCancionForm^ editarForm = gcnew EditarCancionForm(lista);
		editarForm->ShowDialog();
		llenarGridViewFavoritas();									//Actualizar pantalla favoritas
	}

	private: System::Void eliminar_boton_Click(System::Object^ sender, System::EventArgs^ e) {															//ELIMINAR CAMCION
		//Abre nueva ventana (parametro lista de referencia).
	}
	private: System::Void reproducir_Click(System::Object^ sender, System::EventArgs^ e) {																//REPRODUCIR ACTUAL
		if (this->reproduciendo == nullptr) {//SI NO REPRODUCE NADA ACTUALMENTE
			this->reproduciendo = lista->obtenerPrimerNodo();//Consigue la primera canción

			if (this->reproduciendo == nullptr) {//Si no encuentra (se retorno nullptr de header
				this->progressBar_reproduciendo->Value = 0;//NO Reproduce, por lo tanto la barra se ve al 0%
				this->titulo_cancion_actual->Text = "";
			}
			else {//Si sí se encuentra el primer nodo
				this->progressBar_reproduciendo->Value = 50;//Reproduce, por lo tanto la barra se ve al 50%
				this->reproducir->Image = (PauseImage);				//IMAGEN PAUSE
				this->play_boton->Image = (PauseImage);

				//MOSTRAR TITULO DE CANCION ACTUAL:::
				stringstream ss;//flujo de cadena
				ss << this->reproduciendo->cancion.getId()
					<< ". "
					<< this->reproduciendo->cancion.getNombre()
					<< "\n"
					<< this->reproduciendo->cancion.getNombreArtista()
					<< "  "
					<< this->reproduciendo->cancion.getNombreAlbum()
					<< "  "
					<< this->reproduciendo->cancion.getDuracion();

				System::String^ infoReproduciendo = msclr::interop::marshal_as<System::String^>(ss.str());
				this->titulo_cancion_actual->Text = infoReproduciendo;
			}
		}
		else{
			//CAMBIA EL ICONO ENTRE PLAY Y PAUSE
			if (this->progressBar_reproduciendo->Value == 50) {     //Si esta en play, poner pause
				this->progressBar_reproduciendo->Value = 0;
				this->reproducir->Image = (PlayImage);				//IMAGEN PLAY
				this->play_boton->Image = (PlayImage);
			}
			else {													//Sino poner play
				this->progressBar_reproduciendo->Value = 50;
				this->reproducir->Image = (PauseImage);				//IMAGEN PAUSE
				this->play_boton->Image = (PauseImage);
			}
		}
	}
	private: System::Void siguiente_Click(System::Object^ sender, System::EventArgs^ e) {																//ACTUAL -> SIGUIENTE
		if (this->reproduciendo == nullptr) {//SI NO REPRODUCE NADA ACTUALMENTE
			//No hace nada.
		}
		else {
			if (this->reproduciendo->siguiente != nullptr) {		//Si hay cancion siguiente
				this->reproduciendo = this->reproduciendo->siguiente;//SE MUEVE EN LA LISTA
				//MOSTRAR TITULO DE CANCION ACTUAL:::
				stringstream ss;//flujo de cadena
				ss << this->reproduciendo->cancion.getId()
					<< ". "
					<< this->reproduciendo->cancion.getNombre()
					<< "\n"
					<< this->reproduciendo->cancion.getNombreArtista()
					<< "  "
					<< this->reproduciendo->cancion.getNombreAlbum()
					<< "  "
					<< this->reproduciendo->cancion.getDuracion();

				System::String^ infoReproduciendo = msclr::interop::marshal_as<System::String^>(ss.str());
				this->titulo_cancion_actual->Text = infoReproduciendo;
			}
		}
	}
	private: System::Void anterior_Click(System::Object^ sender, System::EventArgs^ e) {																//ACTUAL -> ANTERIOR
		if (this->reproduciendo == nullptr) {//SI NO REPRODUCE NADA ACTUALMENTE
			//No hace nada.
		}
		else {
			if (this->reproduciendo->anterior != nullptr) {		//Si hay cancion siguiente
				this->reproduciendo = this->reproduciendo->anterior;//SE MUEVE EN LA LISTA
				//MOSTRAR TITULO DE CANCION ACTUAL:::
				stringstream ss;//flujo de cadena
				ss << this->reproduciendo->cancion.getId()
					<< ". "
					<< this->reproduciendo->cancion.getNombre()
					<< "\n"
					<< this->reproduciendo->cancion.getNombreArtista()
					<< "  "
					<< this->reproduciendo->cancion.getNombreAlbum()
					<< "  "
					<< this->reproduciendo->cancion.getDuracion();

				System::String^ infoReproduciendo = msclr::interop::marshal_as<System::String^>(ss.str());
				this->titulo_cancion_actual->Text = infoReproduciendo;
			}
		}
	}
};
}
