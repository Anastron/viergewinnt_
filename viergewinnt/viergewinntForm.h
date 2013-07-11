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
	using namespace Microsoft::VisualBasic::PowerPacks;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Zusammenfassung für viergewinntForm
	/// </summary>
	public ref class viergewinntForm : public Form {
	public:
		Game *game;
		List<OvalShape^> ovals;

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
	private: ShapeContainer^  shapeContainer1;
	protected: 
	private: Button^  newGameBnt;
	private: Button^  exitBtn;
	private: Label^  infoLbn;
	private: OvalShape^  ovalShape1;


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
			this->shapeContainer1 = (gcnew ShapeContainer());
			this->newGameBnt = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->infoLbn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Size = System::Drawing::Size(599, 515);
			this->shapeContainer1->TabIndex = 0;
			this->shapeContainer1->TabStop = false;
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
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::White;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exitBtn->ForeColor = System::Drawing::Color::Red;
			this->exitBtn->Location = System::Drawing::Point(416, 262);
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
			this->infoLbn->Text = L"Infos";
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

	private: System::Void createShapes();
	private: System::Void viergewinntForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void newGameBnt_Click(System::Object^  sender, System::EventArgs^  e);
	private: virtual std::string getPlayer();
	private: virtual void newGame();
	private: System::Void shape_Click(System::Object^  sender, System::EventArgs^  e);

	private: OvalShape^ getShape(int x, int y);
	private: int getXForShape(OvalShape^ shape);
	private: int getYForShape(OvalShape^ shape);

	private: void setStone(int x, int y);
	};
}

