#pragma once

#include "Game.h"
#include <string>

namespace viergewinnt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Zusammenfassung für viergewinntForm
	/// </summary>
	public ref class viergewinntForm : public Form
	{
		Game *game;

	public:
		viergewinntForm(void);

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~viergewinntForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	protected: 
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape2;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape4;


	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape5;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape6;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape3;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape29;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape30;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape31;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape34;


	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape33;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape32;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape35;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape42;


	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape39;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape40;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape41;



	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape38;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape37;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape36;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape15;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape16;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape17;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape20;




	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape19;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape18;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape21;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape28;



	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape25;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape26;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape27;







	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape24;


	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape23;


	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape22;



	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape8;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape9;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape10;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape13;

	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape12;







	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape11;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape14;





	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape7;
	private: System::Windows::Forms::Button^  newGameBnt;
	private: System::Windows::Forms::Button^  surrBtn;
	private: System::Windows::Forms::Button^  exitBtn;
	private: System::Windows::Forms::Label^  infoLbn;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(viergewinntForm::typeid));
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape29 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape30 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape31 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape34 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape33 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape32 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape35 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape42 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape39 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape40 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape41 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape38 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape37 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape36 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape15 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape16 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape17 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape20 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape19 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape18 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape21 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape28 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape25 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape26 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape27 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape24 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape23 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape22 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape8 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape9 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape10 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape13 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape12 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape11 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape14 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape7 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->newGameBnt = (gcnew System::Windows::Forms::Button());
			this->surrBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->infoLbn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(42) {this->ovalShape29, 
				this->ovalShape30, this->ovalShape31, this->ovalShape34, this->ovalShape33, this->ovalShape32, this->ovalShape35, this->ovalShape42, 
				this->ovalShape39, this->ovalShape40, this->ovalShape41, this->ovalShape38, this->ovalShape37, this->ovalShape36, this->ovalShape15, 
				this->ovalShape16, this->ovalShape17, this->ovalShape20, this->ovalShape19, this->ovalShape18, this->ovalShape21, this->ovalShape28, 
				this->ovalShape25, this->ovalShape26, this->ovalShape27, this->ovalShape24, this->ovalShape23, this->ovalShape22, this->ovalShape8, 
				this->ovalShape9, this->ovalShape10, this->ovalShape13, this->ovalShape12, this->ovalShape11, this->ovalShape14, this->ovalShape7, 
				this->ovalShape4, this->ovalShape5, this->ovalShape6, this->ovalShape3, this->ovalShape2, this->ovalShape1});
			this->shapeContainer1->Size = System::Drawing::Size(599, 515);
			this->shapeContainer1->TabIndex = 0;
			this->shapeContainer1->TabStop = false;
			// 
			// ovalShape29
			// 
			this->ovalShape29->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape29->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape29->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape29->Location = System::Drawing::Point(29, 243);
			this->ovalShape29->Name = L"ovalShape29";
			this->ovalShape29->Size = System::Drawing::Size(40, 40);
			this->ovalShape29->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape30
			// 
			this->ovalShape30->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape30->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape30->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape30->Location = System::Drawing::Point(79, 243);
			this->ovalShape30->Name = L"ovalShape30";
			this->ovalShape30->Size = System::Drawing::Size(40, 40);
			this->ovalShape30->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape31
			// 
			this->ovalShape31->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape31->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape31->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape31->Location = System::Drawing::Point(129, 243);
			this->ovalShape31->Name = L"ovalShape31";
			this->ovalShape31->Size = System::Drawing::Size(40, 40);
			this->ovalShape31->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape34
			// 
			this->ovalShape34->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape34->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape34->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape34->Location = System::Drawing::Point(279, 243);
			this->ovalShape34->Name = L"ovalShape34";
			this->ovalShape34->Size = System::Drawing::Size(40, 40);
			this->ovalShape34->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape33
			// 
			this->ovalShape33->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape33->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape33->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape33->Location = System::Drawing::Point(229, 243);
			this->ovalShape33->Name = L"ovalShape33";
			this->ovalShape33->Size = System::Drawing::Size(40, 40);
			this->ovalShape33->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape32
			// 
			this->ovalShape32->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape32->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape32->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape32->Location = System::Drawing::Point(179, 243);
			this->ovalShape32->Name = L"ovalShape32";
			this->ovalShape32->Size = System::Drawing::Size(40, 40);
			this->ovalShape32->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape35
			// 
			this->ovalShape35->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape35->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape35->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape35->Location = System::Drawing::Point(329, 243);
			this->ovalShape35->Name = L"ovalShape35";
			this->ovalShape35->Size = System::Drawing::Size(40, 40);
			this->ovalShape35->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape42
			// 
			this->ovalShape42->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape42->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape42->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape42->Location = System::Drawing::Point(329, 193);
			this->ovalShape42->Name = L"ovalShape42";
			this->ovalShape42->Size = System::Drawing::Size(40, 40);
			this->ovalShape42->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape39
			// 
			this->ovalShape39->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape39->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape39->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape39->Location = System::Drawing::Point(179, 193);
			this->ovalShape39->Name = L"ovalShape39";
			this->ovalShape39->Size = System::Drawing::Size(40, 40);
			this->ovalShape39->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape40
			// 
			this->ovalShape40->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape40->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape40->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape40->Location = System::Drawing::Point(229, 193);
			this->ovalShape40->Name = L"ovalShape40";
			this->ovalShape40->Size = System::Drawing::Size(40, 40);
			this->ovalShape40->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape41
			// 
			this->ovalShape41->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape41->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape41->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape41->Location = System::Drawing::Point(279, 193);
			this->ovalShape41->Name = L"ovalShape41";
			this->ovalShape41->Size = System::Drawing::Size(40, 40);
			this->ovalShape41->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape38
			// 
			this->ovalShape38->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape38->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape38->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape38->Location = System::Drawing::Point(129, 193);
			this->ovalShape38->Name = L"ovalShape38";
			this->ovalShape38->Size = System::Drawing::Size(40, 40);
			this->ovalShape38->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape37
			// 
			this->ovalShape37->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape37->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape37->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape37->Location = System::Drawing::Point(79, 193);
			this->ovalShape37->Name = L"ovalShape37";
			this->ovalShape37->Size = System::Drawing::Size(40, 40);
			this->ovalShape37->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape36
			// 
			this->ovalShape36->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape36->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape36->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape36->Location = System::Drawing::Point(29, 193);
			this->ovalShape36->Name = L"ovalShape36";
			this->ovalShape36->Size = System::Drawing::Size(40, 40);
			this->ovalShape36->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape15
			// 
			this->ovalShape15->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape15->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape15->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape15->Location = System::Drawing::Point(29, 343);
			this->ovalShape15->Name = L"ovalShape15";
			this->ovalShape15->Size = System::Drawing::Size(40, 40);
			this->ovalShape15->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape16
			// 
			this->ovalShape16->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape16->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape16->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape16->Location = System::Drawing::Point(79, 343);
			this->ovalShape16->Name = L"ovalShape16";
			this->ovalShape16->Size = System::Drawing::Size(40, 40);
			this->ovalShape16->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape17
			// 
			this->ovalShape17->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape17->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape17->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape17->Location = System::Drawing::Point(129, 343);
			this->ovalShape17->Name = L"ovalShape17";
			this->ovalShape17->Size = System::Drawing::Size(40, 40);
			this->ovalShape17->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape20
			// 
			this->ovalShape20->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape20->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape20->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape20->Location = System::Drawing::Point(279, 343);
			this->ovalShape20->Name = L"ovalShape20";
			this->ovalShape20->Size = System::Drawing::Size(40, 40);
			this->ovalShape20->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape19
			// 
			this->ovalShape19->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape19->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape19->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape19->Location = System::Drawing::Point(229, 343);
			this->ovalShape19->Name = L"ovalShape19";
			this->ovalShape19->Size = System::Drawing::Size(40, 40);
			this->ovalShape19->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape18
			// 
			this->ovalShape18->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape18->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape18->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape18->Location = System::Drawing::Point(179, 343);
			this->ovalShape18->Name = L"ovalShape18";
			this->ovalShape18->Size = System::Drawing::Size(40, 40);
			this->ovalShape18->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape21
			// 
			this->ovalShape21->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape21->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape21->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape21->Location = System::Drawing::Point(329, 343);
			this->ovalShape21->Name = L"ovalShape21";
			this->ovalShape21->Size = System::Drawing::Size(40, 40);
			this->ovalShape21->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape28
			// 
			this->ovalShape28->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape28->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape28->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape28->Location = System::Drawing::Point(329, 293);
			this->ovalShape28->Name = L"ovalShape28";
			this->ovalShape28->Size = System::Drawing::Size(40, 40);
			this->ovalShape28->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape25
			// 
			this->ovalShape25->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape25->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape25->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape25->Location = System::Drawing::Point(179, 293);
			this->ovalShape25->Name = L"ovalShape25";
			this->ovalShape25->Size = System::Drawing::Size(40, 40);
			this->ovalShape25->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape26
			// 
			this->ovalShape26->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape26->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape26->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape26->Location = System::Drawing::Point(229, 293);
			this->ovalShape26->Name = L"ovalShape26";
			this->ovalShape26->Size = System::Drawing::Size(40, 40);
			this->ovalShape26->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape27
			// 
			this->ovalShape27->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape27->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape27->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape27->Location = System::Drawing::Point(279, 293);
			this->ovalShape27->Name = L"ovalShape27";
			this->ovalShape27->Size = System::Drawing::Size(40, 40);
			this->ovalShape27->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape24
			// 
			this->ovalShape24->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape24->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape24->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape24->Location = System::Drawing::Point(129, 293);
			this->ovalShape24->Name = L"ovalShape24";
			this->ovalShape24->Size = System::Drawing::Size(40, 40);
			this->ovalShape24->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape23
			// 
			this->ovalShape23->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape23->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape23->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape23->Location = System::Drawing::Point(79, 293);
			this->ovalShape23->Name = L"ovalShape23";
			this->ovalShape23->Size = System::Drawing::Size(40, 40);
			this->ovalShape23->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape22
			// 
			this->ovalShape22->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape22->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape22->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape22->Location = System::Drawing::Point(29, 293);
			this->ovalShape22->Name = L"ovalShape22";
			this->ovalShape22->Size = System::Drawing::Size(40, 40);
			this->ovalShape22->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape8
			// 
			this->ovalShape8->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape8->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape8->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape8->Location = System::Drawing::Point(29, 393);
			this->ovalShape8->Name = L"ovalShape8";
			this->ovalShape8->Size = System::Drawing::Size(40, 40);
			this->ovalShape8->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape9
			// 
			this->ovalShape9->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape9->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape9->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape9->Location = System::Drawing::Point(79, 393);
			this->ovalShape9->Name = L"ovalShape9";
			this->ovalShape9->Size = System::Drawing::Size(40, 40);
			this->ovalShape9->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape10
			// 
			this->ovalShape10->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape10->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape10->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape10->Location = System::Drawing::Point(129, 393);
			this->ovalShape10->Name = L"ovalShape10";
			this->ovalShape10->Size = System::Drawing::Size(40, 40);
			this->ovalShape10->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape13
			// 
			this->ovalShape13->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape13->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape13->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape13->Location = System::Drawing::Point(279, 393);
			this->ovalShape13->Name = L"ovalShape13";
			this->ovalShape13->Size = System::Drawing::Size(40, 40);
			this->ovalShape13->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape12
			// 
			this->ovalShape12->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape12->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape12->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape12->Location = System::Drawing::Point(229, 393);
			this->ovalShape12->Name = L"ovalShape12";
			this->ovalShape12->Size = System::Drawing::Size(40, 40);
			this->ovalShape12->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape11
			// 
			this->ovalShape11->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape11->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape11->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape11->Location = System::Drawing::Point(179, 393);
			this->ovalShape11->Name = L"ovalShape11";
			this->ovalShape11->Size = System::Drawing::Size(40, 40);
			this->ovalShape11->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape14
			// 
			this->ovalShape14->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape14->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape14->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape14->Location = System::Drawing::Point(329, 393);
			this->ovalShape14->Name = L"ovalShape14";
			this->ovalShape14->Size = System::Drawing::Size(40, 40);
			this->ovalShape14->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape7
			// 
			this->ovalShape7->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape7->FillGradientColor = System::Drawing::Color::Transparent;
			this->ovalShape7->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape7->Location = System::Drawing::Point(329, 443);
			this->ovalShape7->Name = L"ovalShape7";
			this->ovalShape7->Size = System::Drawing::Size(40, 40);
			this->ovalShape7->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape4
			// 
			this->ovalShape4->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape4->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape4->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape4->Location = System::Drawing::Point(179, 443);
			this->ovalShape4->Name = L"ovalShape4";
			this->ovalShape4->Size = System::Drawing::Size(40, 40);
			this->ovalShape4->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape5
			// 
			this->ovalShape5->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape5->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape5->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape5->Location = System::Drawing::Point(229, 443);
			this->ovalShape5->Name = L"ovalShape5";
			this->ovalShape5->Size = System::Drawing::Size(40, 40);
			this->ovalShape5->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape6
			// 
			this->ovalShape6->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape6->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape6->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape6->Location = System::Drawing::Point(279, 443);
			this->ovalShape6->Name = L"ovalShape6";
			this->ovalShape6->Size = System::Drawing::Size(40, 40);
			this->ovalShape6->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape3
			// 
			this->ovalShape3->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape3->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape3->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape3->Location = System::Drawing::Point(129, 443);
			this->ovalShape3->Name = L"ovalShape3";
			this->ovalShape3->Size = System::Drawing::Size(40, 40);
			this->ovalShape3->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape2
			// 
			this->ovalShape2->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape2->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape2->Location = System::Drawing::Point(79, 443);
			this->ovalShape2->Name = L"ovalShape2";
			this->ovalShape2->Size = System::Drawing::Size(40, 40);
			this->ovalShape2->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// ovalShape1
			// 
			this->ovalShape1->BackColor = System::Drawing::Color::MediumBlue;
			this->ovalShape1->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape1->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape1->Location = System::Drawing::Point(29, 443);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->SelectionColor = System::Drawing::SystemColors::ActiveBorder;
			this->ovalShape1->Size = System::Drawing::Size(40, 40);
			this->ovalShape1->Click += gcnew System::EventHandler(this, &viergewinntForm::shape_Click);
			// 
			// newGameBnt
			// 
			this->newGameBnt->BackColor = System::Drawing::Color::White;
			this->newGameBnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->newGameBnt->ForeColor = System::Drawing::Color::Black;
			this->newGameBnt->Location = System::Drawing::Point(416, 193);
			this->newGameBnt->Name = L"newGameBnt";
			this->newGameBnt->Size = System::Drawing::Size(141, 59);
			this->newGameBnt->TabIndex = 1;
			this->newGameBnt->Text = L"Neues Spiel";
			this->newGameBnt->UseVisualStyleBackColor = false;
			this->newGameBnt->Click += gcnew System::EventHandler(this, &viergewinntForm::newGameBnt_Click);
			// 
			// surrBtn
			// 
			this->surrBtn->BackColor = System::Drawing::Color::White;
			this->surrBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->surrBtn->ForeColor = System::Drawing::Color::Red;
			this->surrBtn->Location = System::Drawing::Point(416, 311);
			this->surrBtn->Name = L"surrBtn";
			this->surrBtn->Size = System::Drawing::Size(141, 59);
			this->surrBtn->TabIndex = 2;
			this->surrBtn->Text = L"Aufgeben";
			this->surrBtn->UseVisualStyleBackColor = false;
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::White;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exitBtn->ForeColor = System::Drawing::Color::Yellow;
			this->exitBtn->Location = System::Drawing::Point(416, 425);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(141, 59);
			this->exitBtn->TabIndex = 3;
			this->exitBtn->Text = L"Verlassen";
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &viergewinntForm::exitBtn_Click);
			// 
			// infoLbn
			// 
			this->infoLbn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->infoLbn->Location = System::Drawing::Point(65, 55);
			this->infoLbn->Name = L"infoLbn";
			this->infoLbn->Size = System::Drawing::Size(264, 99);
			this->infoLbn->TabIndex = 4;
			this->infoLbn->Text = L"Info";
			this->infoLbn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// viergewinntForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumBlue;
			this->ClientSize = System::Drawing::Size(599, 515);
			this->Controls->Add(this->infoLbn);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->surrBtn);
			this->Controls->Add(this->newGameBnt);
			this->Controls->Add(this->shapeContainer1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"viergewinntForm";
			this->Text = L"Vier Gewinnt";
			this->Load += gcnew System::EventHandler(this, &viergewinntForm::viergewinntForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void viergewinntForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void newGameBnt_Click(System::Object^  sender, System::EventArgs^  e);
	private: virtual std::string getPlayer();
	private: virtual void newGame();
	private: System::Void shape_Click(System::Object^  sender, System::EventArgs^  e);
	};
}

