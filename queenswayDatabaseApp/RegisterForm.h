#pragma once
#include "User.h"

namespace queenswayDatabaseApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{

	public:
		Form^ loginForm;
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// overloaded constructor that takes in a pointer from the login form to allow BACK button to work (switch screens)
		RegisterForm(Form^ loginForm)
		{
			this->loginForm = loginForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ createLbl;
	protected:
	private: System::Windows::Forms::TextBox^ confirmPasswordTextBox;
	private: System::Windows::Forms::Label^ firstNameLbl;
	private: System::Windows::Forms::TextBox^ firstNameTextBox;
	private: System::Windows::Forms::Label^ confirmPasswordLbl;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Label^ usernameLbl;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ passwordLbl;
	private: System::Windows::Forms::Label^ lastNameLbl;
	private: System::Windows::Forms::TextBox^ lastNameTextBox;
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::Button^ backButton;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->createLbl = (gcnew System::Windows::Forms::Label());
			this->confirmPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->firstNameLbl = (gcnew System::Windows::Forms::Label());
			this->firstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->confirmPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameLbl = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->lastNameLbl = (gcnew System::Windows::Forms::Label());
			this->lastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// createLbl
			// 
			this->createLbl->AutoSize = true;
			this->createLbl->BackColor = System::Drawing::Color::Transparent;
			this->createLbl->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->createLbl->Location = System::Drawing::Point(16, 40);
			this->createLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->createLbl->Name = L"createLbl";
			this->createLbl->Size = System::Drawing::Size(255, 32);
			this->createLbl->TabIndex = 0;
			this->createLbl->Text = L"Create an Account";
			// 
			// confirmPasswordTextBox
			// 
			this->confirmPasswordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->confirmPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->confirmPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmPasswordTextBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->confirmPasswordTextBox->Location = System::Drawing::Point(18, 322);
			this->confirmPasswordTextBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->confirmPasswordTextBox->Name = L"confirmPasswordTextBox";
			this->confirmPasswordTextBox->Size = System::Drawing::Size(193, 25);
			this->confirmPasswordTextBox->TabIndex = 10;
			this->confirmPasswordTextBox->UseSystemPasswordChar = true;
			// 
			// firstNameLbl
			// 
			this->firstNameLbl->AutoSize = true;
			this->firstNameLbl->BackColor = System::Drawing::Color::Transparent;
			this->firstNameLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNameLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->firstNameLbl->Location = System::Drawing::Point(18, 104);
			this->firstNameLbl->Name = L"firstNameLbl";
			this->firstNameLbl->Size = System::Drawing::Size(76, 20);
			this->firstNameLbl->TabIndex = 4;
			this->firstNameLbl->Text = L"First Name";
			// 
			// firstNameTextBox
			// 
			this->firstNameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->firstNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->firstNameTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNameTextBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->firstNameTextBox->Location = System::Drawing::Point(19, 129);
			this->firstNameTextBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->firstNameTextBox->Name = L"firstNameTextBox";
			this->firstNameTextBox->Size = System::Drawing::Size(190, 25);
			this->firstNameTextBox->TabIndex = 6;
			// 
			// confirmPasswordLbl
			// 
			this->confirmPasswordLbl->AutoSize = true;
			this->confirmPasswordLbl->BackColor = System::Drawing::Color::Transparent;
			this->confirmPasswordLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmPasswordLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->confirmPasswordLbl->Location = System::Drawing::Point(18, 297);
			this->confirmPasswordLbl->Name = L"confirmPasswordLbl";
			this->confirmPasswordLbl->Size = System::Drawing::Size(123, 20);
			this->confirmPasswordLbl->TabIndex = 5;
			this->confirmPasswordLbl->Text = L"Confirm Password";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordTextBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->passwordTextBox->Location = System::Drawing::Point(19, 257);
			this->passwordTextBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(193, 25);
			this->passwordTextBox->TabIndex = 9;
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// usernameLbl
			// 
			this->usernameLbl->AutoSize = true;
			this->usernameLbl->BackColor = System::Drawing::Color::Transparent;
			this->usernameLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->usernameLbl->Location = System::Drawing::Point(15, 167);
			this->usernameLbl->Name = L"usernameLbl";
			this->usernameLbl->Size = System::Drawing::Size(71, 20);
			this->usernameLbl->TabIndex = 8;
			this->usernameLbl->Text = L"Username";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->usernameTextBox->Location = System::Drawing::Point(18, 192);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(193, 25);
			this->usernameTextBox->TabIndex = 8;
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->BackColor = System::Drawing::Color::Transparent;
			this->passwordLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->passwordLbl->Location = System::Drawing::Point(18, 232);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(69, 20);
			this->passwordLbl->TabIndex = 9;
			this->passwordLbl->Text = L"Password";
			// 
			// lastNameLbl
			// 
			this->lastNameLbl->AutoSize = true;
			this->lastNameLbl->BackColor = System::Drawing::Color::Transparent;
			this->lastNameLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->lastNameLbl->Location = System::Drawing::Point(224, 104);
			this->lastNameLbl->Name = L"lastNameLbl";
			this->lastNameLbl->Size = System::Drawing::Size(74, 20);
			this->lastNameLbl->TabIndex = 12;
			this->lastNameLbl->Text = L"Last Name";
			// 
			// lastNameTextBox
			// 
			this->lastNameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->lastNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastNameTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastNameTextBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->lastNameTextBox->Location = System::Drawing::Point(226, 129);
			this->lastNameTextBox->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->lastNameTextBox->Name = L"lastNameTextBox";
			this->lastNameTextBox->Size = System::Drawing::Size(190, 25);
			this->lastNameTextBox->TabIndex = 7;
			// 
			// registerButton
			// 
			this->registerButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registerButton.BackgroundImage")));
			this->registerButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->registerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->registerButton->FlatAppearance->BorderSize = 0;
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerButton->ForeColor = System::Drawing::SystemColors::Menu;
			this->registerButton->Location = System::Drawing::Point(233, 381);
			this->registerButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(198, 29);
			this->registerButton->TabIndex = 11;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &RegisterForm::registerClicked);
			// 
			// backButton
			// 
			this->backButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.BackgroundImage")));
			this->backButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->backButton->FlatAppearance->BorderSize = 0;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->ForeColor = System::Drawing::SystemColors::Menu;
			this->backButton->Location = System::Drawing::Point(11, 381);
			this->backButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(198, 29);
			this->backButton->TabIndex = 13;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &RegisterForm::backClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(442, 426);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->lastNameLbl);
			this->Controls->Add(this->lastNameTextBox);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->usernameLbl);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->passwordLbl);
			this->Controls->Add(this->confirmPasswordTextBox);
			this->Controls->Add(this->firstNameLbl);
			this->Controls->Add(this->firstNameTextBox);
			this->Controls->Add(this->confirmPasswordLbl);
			this->Controls->Add(this->createLbl);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(458, 465);
			this->MinimumSize = System::Drawing::Size(458, 465);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		User^ user = nullptr;

	private:
		System::Void backClicked(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			loginForm->Show();
		}

	private:
		System::Void registerClicked(System::Object^ sender, System::EventArgs^ e) {
			String^ firstName = firstNameTextBox->Text;
			String^ lastName = lastNameTextBox->Text;
			String^ username = usernameTextBox->Text;
			String^ password = passwordTextBox->Text;
			String^ confirmPassword = confirmPasswordTextBox->Text;

			if (username->Length == 0 || password->Length == 0) {
				MessageBox::Show("Please enter a username and password");
				MessageBoxButtons::OK;
				return;
			}

			if (firstName->Length == 0 || lastName->Length == 0) {
				MessageBox::Show("Please enter your first and last name");
				MessageBoxButtons::OK;
				return;
			}

			if (password != confirmPassword) {
				MessageBox::Show("Passwords do not match");
				MessageBoxButtons::OK;
				return;
			}

			try {
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=queensway;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "INSERT INTO users(username, password, first_name, last_name) VALUES(@username, @password, @firstname, @lastname)";

				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@username", username);
				command.Parameters->AddWithValue("@password", password);
				command.Parameters->AddWithValue("@firstname", firstName);
				command.Parameters->AddWithValue("@lastname", lastName);

				command.ExecuteNonQuery();
				user = gcnew User;
				user->username = username;
				user->password = password;
				user->firstName = firstName;
				user->lastName = lastName;

				this->Close();
				loginForm->Show();
			}
			catch (Exception^ e) {
				MessageBox::Show("Failed to connect to the database");
				MessageBoxButtons::OK;
			}

		MessageBox::Show("Thanks for registering. Please log in.");
		}
	};
}
