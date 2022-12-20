#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {

	// implements MainForm 
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	queenswayDatabaseApp::LoginForm form;
	Application::Run(% form);

	return 0;
}