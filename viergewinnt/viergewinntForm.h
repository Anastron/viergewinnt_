#pragma once

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
	public ref class viergewinntForm : public System::Windows::Forms::Form
	{
	public:
		viergewinntForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

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
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape6;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape5;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape4;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape3;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape56;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape55;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape54;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape53;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape52;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape51;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape50;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape49;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape48;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape47;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape46;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape45;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape44;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape43;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape28;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape27;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape26;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape25;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape24;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape23;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape22;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape21;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape20;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape19;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape18;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape17;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape16;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape15;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape14;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape13;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape12;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape11;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape10;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape9;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape8;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape7;

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
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape7 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape8 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape9 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape10 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape11 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape12 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape13 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape14 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape15 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape16 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape17 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape18 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape19 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape20 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape21 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape22 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape23 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape24 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape25 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape26 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape27 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape28 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape43 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape44 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape45 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape46 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape47 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape48 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape49 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape50 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape51 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape52 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape53 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape54 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape55 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape56 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->SuspendLayout();
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(42) {this->ovalShape56, 
				this->ovalShape55, this->ovalShape54, this->ovalShape53, this->ovalShape52, this->ovalShape51, this->ovalShape50, this->ovalShape49, 
				this->ovalShape48, this->ovalShape47, this->ovalShape46, this->ovalShape45, this->ovalShape44, this->ovalShape43, this->ovalShape28, 
				this->ovalShape27, this->ovalShape26, this->ovalShape25, this->ovalShape24, this->ovalShape23, this->ovalShape22, this->ovalShape21, 
				this->ovalShape20, this->ovalShape19, this->ovalShape18, this->ovalShape17, this->ovalShape16, this->ovalShape15, this->ovalShape14, 
				this->ovalShape13, this->ovalShape12, this->ovalShape11, this->ovalShape10, this->ovalShape9, this->ovalShape8, this->ovalShape7, 
				this->ovalShape6, this->ovalShape5, this->ovalShape4, this->ovalShape3, this->ovalShape2, this->ovalShape1});
			this->shapeContainer1->Size = System::Drawing::Size(588, 527);
			this->shapeContainer1->TabIndex = 0;
			this->shapeContainer1->TabStop = false;
			// 
			// ovalShape1
			// 
			this->ovalShape1->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape1->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape1->Location = System::Drawing::Point(30, 450);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape2
			// 
			this->ovalShape2->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape2->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape2->Location = System::Drawing::Point(80, 450);
			this->ovalShape2->Name = L"ovalShape2";
			this->ovalShape2->Size = System::Drawing::Size(40, 40);
			this->ovalShape2->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape3
			// 
			this->ovalShape3->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape3->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape3->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape3->Location = System::Drawing::Point(130, 450);
			this->ovalShape3->Name = L"ovalShape3";
			this->ovalShape3->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape4
			// 
			this->ovalShape4->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape4->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape4->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape4->Location = System::Drawing::Point(280, 450);
			this->ovalShape4->Name = L"ovalShape4";
			this->ovalShape4->Size = System::Drawing::Size(40, 40);
			this->ovalShape4->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape5
			// 
			this->ovalShape5->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape5->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape5->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape5->Location = System::Drawing::Point(230, 450);
			this->ovalShape5->Name = L"ovalShape5";
			this->ovalShape5->Size = System::Drawing::Size(40, 40);
			this->ovalShape5->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape6
			// 
			this->ovalShape6->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape6->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape6->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape6->Location = System::Drawing::Point(180, 450);
			this->ovalShape6->Name = L"ovalShape6";
			this->ovalShape6->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape7
			// 
			this->ovalShape7->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape7->FillGradientColor = System::Drawing::Color::Transparent;
			this->ovalShape7->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape7->Location = System::Drawing::Point(330, 450);
			this->ovalShape7->Name = L"ovalShape7";
			this->ovalShape7->Size = System::Drawing::Size(40, 40);
			this->ovalShape7->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape8
			// 
			this->ovalShape8->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape8->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape8->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape8->Location = System::Drawing::Point(330, 400);
			this->ovalShape8->Name = L"ovalShape8";
			this->ovalShape8->Size = System::Drawing::Size(40, 40);
			this->ovalShape8->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape9
			// 
			this->ovalShape9->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape9->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape9->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape9->Location = System::Drawing::Point(180, 400);
			this->ovalShape9->Name = L"ovalShape9";
			this->ovalShape9->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape10
			// 
			this->ovalShape10->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape10->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape10->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape10->Location = System::Drawing::Point(230, 400);
			this->ovalShape10->Name = L"ovalShape10";
			this->ovalShape10->Size = System::Drawing::Size(40, 40);
			this->ovalShape10->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape11
			// 
			this->ovalShape11->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape11->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape11->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape11->Location = System::Drawing::Point(280, 400);
			this->ovalShape11->Name = L"ovalShape11";
			this->ovalShape11->Size = System::Drawing::Size(40, 40);
			this->ovalShape11->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape12
			// 
			this->ovalShape12->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape12->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape12->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape12->Location = System::Drawing::Point(130, 400);
			this->ovalShape12->Name = L"ovalShape12";
			this->ovalShape12->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape13
			// 
			this->ovalShape13->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape13->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape13->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape13->Location = System::Drawing::Point(80, 400);
			this->ovalShape13->Name = L"ovalShape13";
			this->ovalShape13->Size = System::Drawing::Size(40, 40);
			this->ovalShape13->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape14
			// 
			this->ovalShape14->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape14->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape14->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape14->Location = System::Drawing::Point(30, 400);
			this->ovalShape14->Name = L"ovalShape14";
			this->ovalShape14->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape15
			// 
			this->ovalShape15->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape15->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape15->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape15->Location = System::Drawing::Point(30, 300);
			this->ovalShape15->Name = L"ovalShape15";
			this->ovalShape15->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape16
			// 
			this->ovalShape16->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape16->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape16->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape16->Location = System::Drawing::Point(80, 300);
			this->ovalShape16->Name = L"ovalShape16";
			this->ovalShape16->Size = System::Drawing::Size(40, 40);
			this->ovalShape16->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape17
			// 
			this->ovalShape17->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape17->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape17->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape17->Location = System::Drawing::Point(130, 300);
			this->ovalShape17->Name = L"ovalShape17";
			this->ovalShape17->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape18
			// 
			this->ovalShape18->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape18->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape18->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape18->Location = System::Drawing::Point(280, 300);
			this->ovalShape18->Name = L"ovalShape18";
			this->ovalShape18->Size = System::Drawing::Size(40, 40);
			this->ovalShape18->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape19
			// 
			this->ovalShape19->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape19->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape19->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape19->Location = System::Drawing::Point(230, 300);
			this->ovalShape19->Name = L"ovalShape19";
			this->ovalShape19->Size = System::Drawing::Size(40, 40);
			this->ovalShape19->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape20
			// 
			this->ovalShape20->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape20->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape20->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape20->Location = System::Drawing::Point(180, 300);
			this->ovalShape20->Name = L"ovalShape20";
			this->ovalShape20->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape21
			// 
			this->ovalShape21->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape21->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape21->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape21->Location = System::Drawing::Point(330, 300);
			this->ovalShape21->Name = L"ovalShape21";
			this->ovalShape21->Size = System::Drawing::Size(40, 40);
			this->ovalShape21->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape22
			// 
			this->ovalShape22->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape22->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape22->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape22->Location = System::Drawing::Point(330, 350);
			this->ovalShape22->Name = L"ovalShape22";
			this->ovalShape22->Size = System::Drawing::Size(40, 40);
			this->ovalShape22->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape23
			// 
			this->ovalShape23->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape23->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape23->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape23->Location = System::Drawing::Point(180, 350);
			this->ovalShape23->Name = L"ovalShape23";
			this->ovalShape23->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape24
			// 
			this->ovalShape24->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape24->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape24->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape24->Location = System::Drawing::Point(230, 350);
			this->ovalShape24->Name = L"ovalShape24";
			this->ovalShape24->Size = System::Drawing::Size(40, 40);
			this->ovalShape24->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape25
			// 
			this->ovalShape25->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape25->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape25->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape25->Location = System::Drawing::Point(280, 350);
			this->ovalShape25->Name = L"ovalShape25";
			this->ovalShape25->Size = System::Drawing::Size(40, 40);
			this->ovalShape25->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape26
			// 
			this->ovalShape26->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape26->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape26->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape26->Location = System::Drawing::Point(130, 350);
			this->ovalShape26->Name = L"ovalShape26";
			this->ovalShape26->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape27
			// 
			this->ovalShape27->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape27->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape27->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape27->Location = System::Drawing::Point(80, 350);
			this->ovalShape27->Name = L"ovalShape27";
			this->ovalShape27->Size = System::Drawing::Size(40, 40);
			this->ovalShape27->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape28
			// 
			this->ovalShape28->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape28->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape28->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape28->Location = System::Drawing::Point(30, 350);
			this->ovalShape28->Name = L"ovalShape28";
			this->ovalShape28->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape43
			// 
			this->ovalShape43->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape43->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape43->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape43->Location = System::Drawing::Point(30, 200);
			this->ovalShape43->Name = L"ovalShape43";
			this->ovalShape43->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape44
			// 
			this->ovalShape44->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape44->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape44->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape44->Location = System::Drawing::Point(80, 200);
			this->ovalShape44->Name = L"ovalShape44";
			this->ovalShape44->Size = System::Drawing::Size(40, 40);
			this->ovalShape44->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape45
			// 
			this->ovalShape45->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape45->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape45->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape45->Location = System::Drawing::Point(130, 200);
			this->ovalShape45->Name = L"ovalShape45";
			this->ovalShape45->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape46
			// 
			this->ovalShape46->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape46->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape46->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape46->Location = System::Drawing::Point(280, 200);
			this->ovalShape46->Name = L"ovalShape46";
			this->ovalShape46->Size = System::Drawing::Size(40, 40);
			this->ovalShape46->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape47
			// 
			this->ovalShape47->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape47->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape47->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape47->Location = System::Drawing::Point(230, 200);
			this->ovalShape47->Name = L"ovalShape47";
			this->ovalShape47->Size = System::Drawing::Size(40, 40);
			this->ovalShape47->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape48
			// 
			this->ovalShape48->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape48->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape48->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape48->Location = System::Drawing::Point(180, 200);
			this->ovalShape48->Name = L"ovalShape48";
			this->ovalShape48->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape49
			// 
			this->ovalShape49->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape49->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape49->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape49->Location = System::Drawing::Point(330, 200);
			this->ovalShape49->Name = L"ovalShape49";
			this->ovalShape49->Size = System::Drawing::Size(40, 40);
			this->ovalShape49->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape50
			// 
			this->ovalShape50->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape50->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape50->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape50->Location = System::Drawing::Point(330, 250);
			this->ovalShape50->Name = L"ovalShape50";
			this->ovalShape50->Size = System::Drawing::Size(40, 40);
			this->ovalShape50->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape51
			// 
			this->ovalShape51->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape51->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape51->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape51->Location = System::Drawing::Point(180, 250);
			this->ovalShape51->Name = L"ovalShape51";
			this->ovalShape51->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape52
			// 
			this->ovalShape52->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape52->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape52->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape52->Location = System::Drawing::Point(230, 250);
			this->ovalShape52->Name = L"ovalShape52";
			this->ovalShape52->Size = System::Drawing::Size(40, 40);
			this->ovalShape52->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape53
			// 
			this->ovalShape53->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape53->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape53->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape53->Location = System::Drawing::Point(280, 250);
			this->ovalShape53->Name = L"ovalShape53";
			this->ovalShape53->Size = System::Drawing::Size(40, 40);
			this->ovalShape53->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape4_Click);
			// 
			// ovalShape54
			// 
			this->ovalShape54->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape54->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape54->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape54->Location = System::Drawing::Point(130, 250);
			this->ovalShape54->Name = L"ovalShape54";
			this->ovalShape54->Size = System::Drawing::Size(40, 40);
			// 
			// ovalShape55
			// 
			this->ovalShape55->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape55->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape55->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape55->Location = System::Drawing::Point(80, 250);
			this->ovalShape55->Name = L"ovalShape55";
			this->ovalShape55->Size = System::Drawing::Size(40, 40);
			this->ovalShape55->Click += gcnew System::EventHandler(this, &viergewinntForm::ovalShape2_Click);
			// 
			// ovalShape56
			// 
			this->ovalShape56->FillColor = System::Drawing::SystemColors::ControlLight;
			this->ovalShape56->FillGradientColor = System::Drawing::Color::Black;
			this->ovalShape56->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->ovalShape56->Location = System::Drawing::Point(30, 250);
			this->ovalShape56->Name = L"ovalShape56";
			this->ovalShape56->Size = System::Drawing::Size(40, 40);
			// 
			// viergewinntForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumBlue;
			this->ClientSize = System::Drawing::Size(588, 527);
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
	private: System::Void ovalShape2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void ovalShape4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void viergewinntForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
