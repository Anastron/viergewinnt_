#include "viergewinntForm.h"
#include "Game.h"


using namespace System;
using namespace System::Windows::Forms;

viergewinnt::viergewinntForm::viergewinntForm(void)
{
	InitializeComponent();
	createShapes();

	newGame();
}

System::Void viergewinnt::viergewinntForm::viergewinntForm_Load(System::Object^  sender, System::EventArgs^  e) {

}

System::Void viergewinnt::viergewinntForm::exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

System::Void viergewinnt::viergewinntForm::newGameBnt_Click(System::Object^  sender, System::EventArgs^  e) {
	newGame();
}

std::string viergewinnt::viergewinntForm::getPlayer() {	
	if (game->getPlayer() == 1) {
		return "Rot";
	} else if (game->getPlayer() == -1) {
		return "Gelb";
	}
}

void viergewinnt::viergewinntForm::newGame()
{
	game = new Game();
	for (int i = 0; i < 42; i++)
	{
		ovals[i]->FillColor = SystemColors::ControlLight;
	}
}

System::Void viergewinnt::viergewinntForm::shape_Click(System::Object^  sender, System::EventArgs^  e) {
	OvalShape^  ovalsender = static_cast<OvalShape^>(sender);
	int x = getXForShape(ovalsender);
	int y = getYForShape(ovalsender);

	if(game->getPosition(x, y) != 0) return;

	setStone(x, y);
}

void viergewinnt::viergewinntForm::setStone(int x, int y) {
	if (y < 5 && game->getPosition(x, y+1) == 0) {
		setStone(x, y+1);
		return;
	}

	OvalShape^  ovalsender = getShape(x, y);

	if (game->getPlayer() == 1) {
		ovalsender->FillColor = System::Drawing::Color::Red;

	} else if (game->getPlayer() == -1) {
		ovalsender->FillColor = System::Drawing::Color::Yellow;
	}

	game->setPosition(x, y, game->getPlayer());
	int winplayer = game->testForWin();
	if(winplayer == 1)
	{	
		System::Windows::Forms::MessageBox::Show(this, "Spieler Rot hat gewonnen", "Gewonnen", MessageBoxButtons::OK);
		newGame();
	}
	else if (winplayer == -1) {
		{
			System::Windows::Forms::MessageBox::Show(this, "Spieler Gelb hat gewonnen", "Gewonnen", MessageBoxButtons::OK);
			newGame();
		}
	}

	game->switchPlayer();
	this->infoLbn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));

	this->infoLbn->Text = "Spieler ";
	this->infoLbn->Text += gcnew System::String(getPlayer().c_str());
	this->infoLbn->Text += L" ist an der Reihe";
}

System::Void viergewinnt::viergewinntForm::createShapes() {
	ovals.Clear();

	this->SuspendLayout();

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 7; x++) {
			OvalShape^  ovalShape;
			ovalShape = (gcnew OvalShape());

			this->shapeContainer1->Shapes->Add(ovalShape);

			ovalShape->FillColor = SystemColors::ControlLight;
			ovalShape->FillGradientColor = Color::Black;
			ovalShape->FillStyle = FillStyle::Solid;
			ovalShape->Location = Point(29 + 50 * x, 193 + 50 * y);
			ovalShape->Name = L"ovalShape" + x + L"_" + y;
			ovalShape->Size = System::Drawing::Size(40, 40);
			ovalShape->Click += gcnew EventHandler(this, &viergewinntForm::shape_Click);

			ovals.Add(ovalShape);
		}
	}

	this->ResumeLayout();
}

Microsoft::VisualBasic::PowerPacks::OvalShape^ viergewinnt::viergewinntForm::getShape(int x, int y) {
	return ovals[y*7 + x];
}

int viergewinnt::viergewinntForm::getXForShape(Microsoft::VisualBasic::PowerPacks::OvalShape^ shape) {
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 7; x++) {
			if (getShape(x, y) == shape) {
				return x;
			}
		}
	}
	return -1;
}

int viergewinnt::viergewinntForm::getYForShape(Microsoft::VisualBasic::PowerPacks::OvalShape^ shape) {
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 7; x++) {
			if (getShape(x, y) == shape) {
				return y;
			}
		}
	}
	return -1;
}