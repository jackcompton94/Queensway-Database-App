#pragma once

namespace queenswayDatabaseApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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
	private: System::Windows::Forms::DataGridView^ dataGridView;







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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->welcomeLbl = (gcnew System::Windows::Forms::Label());
			this->tutorialLbl = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
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
			this->tutorialLbl->Size = System::Drawing::Size(459, 51);
			this->tutorialLbl->TabIndex = 9;
			this->tutorialLbl->Text = L"This application allows you to view details on over 100 different shows\r\n includi"
				L"ng video, fliers, photos and more.\r\n\r\n";
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->AllowUserToResizeRows = false;
			this->dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView->GridColor = System::Drawing::SystemColors::Window;
			this->dataGridView->Location = System::Drawing::Point(11, 145);
			this->dataGridView->MultiSelect = false;
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Window;
			this->dataGridView->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView->Size = System::Drawing::Size(516, 479);
			this->dataGridView->TabIndex = 10;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView_CellContentClick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(539, 636);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->tutorialLbl);
			this->Controls->Add(this->welcomeLbl);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=queensway;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT date AS 'Date', city AS 'City', state AS 'State', headliner AS 'Headliner', event_type AS 'Event Type' FROM shows JOIN events ON shows.show_id = events.show_id";
		
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
		DataSet^ shows = gcnew DataSet();
		adapter->Fill(shows, "Shows");

		dataGridView->DataSource = shows;
		dataGridView->DataMember = "Shows";
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to the database");
		MessageBoxButtons::OK;
	}
}
private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
