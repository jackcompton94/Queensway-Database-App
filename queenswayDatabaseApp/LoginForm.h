#pragma once

namespace queenswayDatabaseApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Button^ signInButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;





	protected:


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
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->signInButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::SystemColors::Menu;
			this->usernameLabel->Location = System::Drawing::Point(42, 82);
			this->usernameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(71, 20);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"Username";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::Color::Transparent;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::SystemColors::Menu;
			this->passwordLabel->Location = System::Drawing::Point(44, 134);
			this->passwordLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(69, 20);
			this->passwordLabel->TabIndex = 1;
			this->passwordLabel->Text = L"Password";
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
			this->usernameTextBox->Location = System::Drawing::Point(44, 104);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(236, 25);
			this->usernameTextBox->TabIndex = 2;
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
			this->passwordTextBox->Location = System::Drawing::Point(44, 157);
			this->passwordTextBox->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(236, 25);
			this->passwordTextBox->TabIndex = 3;
			this->passwordTextBox->Text = L"Password";
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// signInButton
			// 
			this->signInButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->signInButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signInButton.BackgroundImage")));
			this->signInButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->signInButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->signInButton->FlatAppearance->BorderSize = 0;
			this->signInButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signInButton->ForeColor = System::Drawing::SystemColors::Menu;
			this->signInButton->Location = System::Drawing::Point(44, 255);
			this->signInButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(236, 29);
			this->signInButton->TabIndex = 4;
			this->signInButton->Text = L"Sign in";
			this->signInButton->UseVisualStyleBackColor = true;
			this->signInButton->Click += gcnew System::EventHandler(this, &LoginForm::signInClicked);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->signInButton);
			this->panel1->Controls->Add(this->passwordTextBox);
			this->panel1->Controls->Add(this->usernameLabel);
			this->panel1->Controls->Add(this->usernameTextBox);
			this->panel1->Controls->Add(this->passwordLabel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(267, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(331, 334);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->registerButton);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(280, 334);
			this->panel2->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 90);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Menu;
			this->label1->Location = System::Drawing::Point(92, 236);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"No Account\?";
			// 
			// registerButton
			// 
			this->registerButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registerButton.BackgroundImage")));
			this->registerButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->registerButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->registerButton->FlatAppearance->BorderSize = 0;
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerButton->ForeColor = System::Drawing::SystemColors::Menu;
			this->registerButton->Location = System::Drawing::Point(17, 255);
			this->registerButton->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(236, 29);
			this->registerButton->TabIndex = 5;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &LoginForm::registerClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Menu;
			this->label2->Location = System::Drawing::Point(30, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 34);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Database of Queensway shows \r\npulled from IG @queenswayband";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Menu;
			this->label3->Location = System::Drawing::Point(19, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Sign in";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(598, 334);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(614, 373);
			this->MinimumSize = System::Drawing::Size(614, 373);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in to the Queensway Database";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void registerClicked(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void signInClicked(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
