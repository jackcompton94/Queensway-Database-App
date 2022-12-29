#pragma once
#include "User.h"
#include "RegisterForm.h"

namespace queenswayDatabaseApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ queenswayLogo;
	private: System::Windows::Forms::Label^ noAccountLbl;
	protected:
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::Label^ databaseLbl;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ passwordLbl;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ usernameLbl;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Button^ signInButton;
	private: System::Windows::Forms::Label^ signInLbl;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::LinkLabel^ igLinkLbl;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->queenswayLogo = (gcnew System::Windows::Forms::PictureBox());
			this->noAccountLbl = (gcnew System::Windows::Forms::Label());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->databaseLbl = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->igLinkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameLbl = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->signInButton = (gcnew System::Windows::Forms::Button());
			this->signInLbl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->queenswayLogo))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// queenswayLogo
			// 
			this->queenswayLogo->BackColor = System::Drawing::Color::Transparent;
			this->queenswayLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"queenswayLogo.Image")));
			this->queenswayLogo->Location = System::Drawing::Point(22, 12);
			this->queenswayLogo->Name = L"queenswayLogo";
			this->queenswayLogo->Size = System::Drawing::Size(250, 90);
			this->queenswayLogo->TabIndex = 0;
			this->queenswayLogo->TabStop = false;
			// 
			// noAccountLbl
			// 
			this->noAccountLbl->AutoSize = true;
			this->noAccountLbl->BackColor = System::Drawing::Color::Transparent;
			this->noAccountLbl->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noAccountLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->noAccountLbl->Location = System::Drawing::Point(106, 263);
			this->noAccountLbl->Name = L"noAccountLbl";
			this->noAccountLbl->Size = System::Drawing::Size(81, 16);
			this->noAccountLbl->TabIndex = 1;
			this->noAccountLbl->Text = L"No Account\?";
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
			this->registerButton->Location = System::Drawing::Point(49, 282);
			this->registerButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(198, 29);
			this->registerButton->TabIndex = 5;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &LoginForm::registerClicked);
			// 
			// databaseLbl
			// 
			this->databaseLbl->AutoSize = true;
			this->databaseLbl->BackColor = System::Drawing::Color::Transparent;
			this->databaseLbl->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->databaseLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->databaseLbl->Location = System::Drawing::Point(30, 137);
			this->databaseLbl->Name = L"databaseLbl";
			this->databaseLbl->Size = System::Drawing::Size(228, 17);
			this->databaseLbl->TabIndex = 6;
			this->databaseLbl->Text = L"Database of shows pulled from IG";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->igLinkLbl);
			this->panel2->Controls->Add(this->databaseLbl);
			this->panel2->Controls->Add(this->registerButton);
			this->panel2->Controls->Add(this->noAccountLbl);
			this->panel2->Controls->Add(this->queenswayLogo);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(293, 334);
			this->panel2->TabIndex = 6;
			// 
			// igLinkLbl
			// 
			this->igLinkLbl->ActiveLinkColor = System::Drawing::Color::DimGray;
			this->igLinkLbl->AutoSize = true;
			this->igLinkLbl->BackColor = System::Drawing::Color::Transparent;
			this->igLinkLbl->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->igLinkLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->igLinkLbl->LinkColor = System::Drawing::SystemColors::Menu;
			this->igLinkLbl->Location = System::Drawing::Point(68, 157);
			this->igLinkLbl->Name = L"igLinkLbl";
			this->igLinkLbl->Size = System::Drawing::Size(157, 17);
			this->igLinkLbl->TabIndex = 7;
			this->igLinkLbl->TabStop = true;
			this->igLinkLbl->Text = L"@queenswaybaltimore";
			this->igLinkLbl->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->igLinkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::igClicked);
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->BackColor = System::Drawing::Color::Transparent;
			this->passwordLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->passwordLbl->Location = System::Drawing::Point(79, 134);
			this->passwordLbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(69, 20);
			this->passwordLbl->TabIndex = 1;
			this->passwordLbl->Text = L"Password";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->usernameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->usernameTextBox->Location = System::Drawing::Point(79, 104);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(240, 25);
			this->usernameTextBox->TabIndex = 2;
			// 
			// usernameLbl
			// 
			this->usernameLbl->AutoSize = true;
			this->usernameLbl->BackColor = System::Drawing::Color::Transparent;
			this->usernameLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->usernameLbl->Location = System::Drawing::Point(77, 82);
			this->usernameLbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->usernameLbl->Name = L"usernameLbl";
			this->usernameLbl->Size = System::Drawing::Size(71, 20);
			this->usernameLbl->TabIndex = 0;
			this->usernameLbl->Text = L"Username";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->passwordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordTextBox->ForeColor = System::Drawing::SystemColors::Menu;
			this->passwordTextBox->Location = System::Drawing::Point(79, 157);
			this->passwordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(240, 25);
			this->passwordTextBox->TabIndex = 3;
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// signInButton
			// 
			this->signInButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->signInButton->BackColor = System::Drawing::SystemColors::Control;
			this->signInButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signInButton.BackgroundImage")));
			this->signInButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->signInButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signInButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->signInButton->FlatAppearance->BorderSize = 0;
			this->signInButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signInButton->ForeColor = System::Drawing::SystemColors::Menu;
			this->signInButton->Location = System::Drawing::Point(79, 282);
			this->signInButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(240, 29);
			this->signInButton->TabIndex = 4;
			this->signInButton->Text = L"Sign in";
			this->signInButton->UseVisualStyleBackColor = false;
			this->signInButton->Click += gcnew System::EventHandler(this, &LoginForm::signInClicked);
			// 
			// signInLbl
			// 
			this->signInLbl->AutoSize = true;
			this->signInLbl->BackColor = System::Drawing::Color::Transparent;
			this->signInLbl->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signInLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->signInLbl->Location = System::Drawing::Point(26, 28);
			this->signInLbl->Name = L"signInLbl";
			this->signInLbl->Size = System::Drawing::Size(107, 32);
			this->signInLbl->TabIndex = 7;
			this->signInLbl->Text = L"Sign in";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->signInLbl);
			this->panel1->Controls->Add(this->signInButton);
			this->panel1->Controls->Add(this->passwordTextBox);
			this->panel1->Controls->Add(this->usernameLbl);
			this->panel1->Controls->Add(this->usernameTextBox);
			this->panel1->Controls->Add(this->passwordLbl);
			this->panel1->Location = System::Drawing::Point(289, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(380, 353);
			this->panel1->TabIndex = 5;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(667, 334);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(683, 373);
			this->MinimumSize = System::Drawing::Size(683, 373);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in to the Queensway Database";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->queenswayLogo))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		User^ user = nullptr;

	private: 
		System::Void registerClicked(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			RegisterForm^ registerForm = gcnew RegisterForm(this);
			registerForm->ShowDialog();
	}

	private: 
		System::Void signInClicked(System::Object^ sender, System::EventArgs^ e) {
			
			// sets username & password to what is entered in the text boxes
		String^ username = this->usernameTextBox->Text;
		String^ password = this->passwordTextBox->Text;

		
		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter a username and password");
			MessageBoxButtons::OK;
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=queensway;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@password";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@password", password);

				// checks if the created user matches with the input
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->user_id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->password = reader->GetString(2);

				this->Close();
			}
			else {
				MessageBox::Show("Username or Password is incorrect");
				MessageBoxButtons::OK;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to the database");
			MessageBoxButtons::OK;
		}
	}

	private: 
		System::Void igClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start("https://www.instagram.com/queenswaybaltimore");
	}

	private: 
		System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
