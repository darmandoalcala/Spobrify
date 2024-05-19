#include "MainForm.h"
#include "Lista.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Lista lista;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Spobrify::MainForm form;
	//Application::Run(% form);


	Application::Run(gcnew Spobrify::MainForm(&lista));

	return 0;
}
