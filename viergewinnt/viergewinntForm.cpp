#include "viergewinntForm.h"
#include "Game.h"


using namespace System;
using namespace System::Windows::Forms;

viergewinnt::viergewinntForm::viergewinntForm(void)
{
	InitializeComponent();

	newGame();
}

System::Void viergewinnt::viergewinntForm::viergewinntForm_Load(System::Object^  sender, System::EventArgs^  e) {

}

System::Void viergewinnt::viergewinntForm::exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

System::Void viergewinnt::viergewinntForm::newGameBnt_Click(System::Object^  sender, System::EventArgs^  e) {

}

std::string viergewinnt::viergewinntForm::getPlayer()
{	
	bool chooseColor;

	chooseColor = game->getPlayer();
	if(chooseColor){
		return "Red";
	} else {
		return "Yellow";
	}
}
void viergewinnt::viergewinntForm::newGame()
{
	game = new Game();
}

System::Void viergewinnt::viergewinntForm::shape_Click(System::Object^  sender, System::EventArgs^  e) {
	Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalsender = static_cast<Microsoft::VisualBasic::PowerPacks::OvalShape^>(sender);

	if(game->getPlayer()) {
		ovalsender->FillColor = System::Drawing::Color::Red;
	} else {
		ovalsender->FillColor = System::Drawing::Color::Yellow;
	}

	game->switchPlayer();
}