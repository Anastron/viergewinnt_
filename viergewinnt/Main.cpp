#include "viergewinntForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	viergewinnt::viergewinntForm form;
	Application::Run(%form);
}