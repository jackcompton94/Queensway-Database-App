#pragma once

namespace queenswayDatabaseApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcomeLbl;
	private: System::Windows::Forms::Label^ tutorialLbl;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->welcomeLbl = (gcnew System::Windows::Forms::Label());
			this->tutorialLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// welcomeLbl
			// 
			this->welcomeLbl->AutoSize = true;
			this->welcomeLbl->BackColor = System::Drawing::Color::Transparent;
			this->welcomeLbl->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->welcomeLbl->Location = System::Drawing::Point(12, 9);
			this->welcomeLbl->Name = L"welcomeLbl";
			this->welcomeLbl->Size = System::Drawing::Size(135, 32);
			this->welcomeLbl->TabIndex = 8;
			this->welcomeLbl->Text = L"Welcome";
			// 
			// tutorialLbl
			// 
			this->tutorialLbl->AutoSize = true;
			this->tutorialLbl->BackColor = System::Drawing::Color::Transparent;
			this->tutorialLbl->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tutorialLbl->ForeColor = System::Drawing::SystemColors::Menu;
			this->tutorialLbl->Location = System::Drawing::Point(15, 41);
			this->tutorialLbl->Name = L"tutorialLbl";
			this->tutorialLbl->Size = System::Drawing::Size(719, 34);
			this->tutorialLbl->TabIndex = 9;
			this->tutorialLbl->Text = L"This application allows you to view details on over 100 different shows including"
				L" video, fliers, photos and more.\r\n\r\n";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(858, 488);
			this->Controls->Add(this->tutorialLbl);
			this->Controls->Add(this->welcomeLbl);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
