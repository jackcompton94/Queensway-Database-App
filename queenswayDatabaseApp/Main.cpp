#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {

	// implements LoginForm 
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	queenswayDatabaseApp::LoginForm form;
	queenswayDatabaseApp::MainForm mainForm;
	
	form.ShowDialog();
	User^ user = form.user;

	if (user != nullptr) {
		mainForm.ShowDialog();
	}

	return 0;
}