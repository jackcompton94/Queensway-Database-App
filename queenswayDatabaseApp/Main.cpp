#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {

	// implements LoginForm 
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	queenswayDatabaseApp::LoginForm form;
	
	form.ShowDialog();
	User^ user = form.user;

	if (user != nullptr) {
		MessageBox::Show("Success");
		MessageBoxButtons::OK;
	}
	else {
		MessageBox::Show("Unable to authenticate");
		MessageBoxButtons::OK;
	}

	return 0;
}