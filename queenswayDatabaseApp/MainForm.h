#pragma once
#include <iostream>

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
	private: System::Windows::Forms::ComboBox^ viewByState;
	private: System::Windows::Forms::ComboBox^ viewByCity;
	private: System::Windows::Forms::ComboBox^ viewByHeadliner;
	private: System::Windows::Forms::ComboBox^ viewByEventType;









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
			this->viewByState = (gcnew System::Windows::Forms::ComboBox());
			this->viewByCity = (gcnew System::Windows::Forms::ComboBox());
			this->viewByHeadliner = (gcnew System::Windows::Forms::ComboBox());
			this->viewByEventType = (gcnew System::Windows::Forms::ComboBox());
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
			this->dataGridView->Location = System::Drawing::Point(18, 127);
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
			this->dataGridView->Size = System::Drawing::Size(516, 497);
			this->dataGridView->TabIndex = 10;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView_CellContentClick);
			// 
			// viewByState
			// 
			this->viewByState->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->viewByState->DisplayMember = L"View by State";
			this->viewByState->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->viewByState->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewByState->ForeColor = System::Drawing::SystemColors::Menu;
			this->viewByState->FormattingEnabled = true;
			this->viewByState->Location = System::Drawing::Point(431, 95);
			this->viewByState->Name = L"viewByState";
			this->viewByState->Size = System::Drawing::Size(103, 23);
			this->viewByState->TabIndex = 11;
			this->viewByState->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::viewByState_SelectedIndexChanged);
			// 
			// viewByCity
			// 
			this->viewByCity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->viewByCity->DisplayMember = L"View by City";
			this->viewByCity->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->viewByCity->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewByCity->ForeColor = System::Drawing::SystemColors::Menu;
			this->viewByCity->FormattingEnabled = true;
			this->viewByCity->Location = System::Drawing::Point(304, 95);
			this->viewByCity->Name = L"viewByCity";
			this->viewByCity->Size = System::Drawing::Size(121, 23);
			this->viewByCity->TabIndex = 12;
			this->viewByCity->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::viewByCity_SelectedIndexChanged);
			// 
			// viewByHeadliner
			// 
			this->viewByHeadliner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->viewByHeadliner->DisplayMember = L"View by Headliner";
			this->viewByHeadliner->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->viewByHeadliner->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewByHeadliner->ForeColor = System::Drawing::SystemColors::Menu;
			this->viewByHeadliner->FormattingEnabled = true;
			this->viewByHeadliner->Location = System::Drawing::Point(167, 95);
			this->viewByHeadliner->Name = L"viewByHeadliner";
			this->viewByHeadliner->Size = System::Drawing::Size(131, 23);
			this->viewByHeadliner->TabIndex = 13;
			this->viewByHeadliner->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::viewByHeadliner_SelectedIndexChanged);
			// 
			// viewByEventType
			// 
			this->viewByEventType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->viewByEventType->DisplayMember = L"View by Event Type";
			this->viewByEventType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->viewByEventType->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewByEventType->ForeColor = System::Drawing::SystemColors::Menu;
			this->viewByEventType->FormattingEnabled = true;
			this->viewByEventType->Location = System::Drawing::Point(18, 95);
			this->viewByEventType->Name = L"viewByEventType";
			this->viewByEventType->Size = System::Drawing::Size(143, 23);
			this->viewByEventType->TabIndex = 14;
			this->viewByEventType->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::viewByEventType_SelectedIndexChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(552, 636);
			this->Controls->Add(this->viewByEventType);
			this->Controls->Add(this->viewByHeadliner);
			this->Controls->Add(this->viewByCity);
			this->Controls->Add(this->viewByState);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->tutorialLbl);
			this->Controls->Add(this->welcomeLbl);
			this->MaximumSize = System::Drawing::Size(568, 675);
			this->MinimumSize = System::Drawing::Size(568, 675);
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

		// init viewByState
		String^ stateQuery = "SELECT DISTINCT(state) FROM shows";

		SqlDataAdapter^ stateAdapter = gcnew SqlDataAdapter(stateQuery, connString);
		DataTable^ stateTable = gcnew DataTable();
		stateAdapter->Fill(stateTable);

		DataRow^ stateRow = stateTable->NewRow();
		stateRow[0] = "View by State";
		stateTable->Rows->InsertAt(stateRow, 0);

		viewByState->DataSource = stateTable;
		viewByState->DisplayMember = "View by State";
		viewByState->ValueMember = "state";

		// init viewByCity
		String^ cityQuery = "SELECT DISTINCT(city) FROM shows";

		SqlDataAdapter^ cityAdapter = gcnew SqlDataAdapter(cityQuery, connString);
		DataTable^ cityTable = gcnew DataTable();
		cityAdapter->Fill(cityTable);

		DataRow^ cityRow = cityTable->NewRow();
		cityRow[0] = "View by City";
		cityTable->Rows->InsertAt(cityRow, 0);

		viewByCity->DataSource = cityTable;
		viewByCity->DisplayMember = "View by City";
		viewByCity->ValueMember = "city";

		// init viewByHeadliner
		String^ headlinerQuery = "SELECT DISTINCT(headliner) FROM events";

		SqlDataAdapter^ headlinerAdapter = gcnew SqlDataAdapter(headlinerQuery, connString);
		DataTable^ headlinerTable = gcnew DataTable();
		headlinerAdapter->Fill(headlinerTable);

		DataRow^ headlinerRow = headlinerTable->NewRow();
		headlinerRow[0] = "View by Headliner";
		headlinerTable->Rows->InsertAt(headlinerRow, 0);

		viewByHeadliner->DataSource = headlinerTable;
		viewByHeadliner->DisplayMember = "View by Headliner";
		viewByHeadliner->ValueMember = "headliner";

		// init viewByEventType
		String^ eventTypeQuery = "SELECT DISTINCT(event_type) FROM events";

		SqlDataAdapter^ eventTypeAdapter = gcnew SqlDataAdapter(eventTypeQuery, connString);
		DataTable^ eventTypeTable = gcnew DataTable();
		eventTypeAdapter->Fill(eventTypeTable);

		DataRow^ eventTypeRow = eventTypeTable->NewRow();
		eventTypeRow[0] = "View by Event Type";
		eventTypeTable->Rows->InsertAt(eventTypeRow, 0);

		viewByEventType->DataSource = eventTypeTable;
		viewByEventType->DisplayMember = "View by Event Type";
		viewByEventType->ValueMember = "event_type";
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to the database");
		MessageBoxButtons::OK;
	}
}

	private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

private: System::Void viewByHeadliner_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ headlinerSelection = viewByHeadliner->Text;

	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=queensway;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT date AS 'Date', city AS 'City', state AS 'State', headliner AS 'Headliner', event_type AS 'Event Type' FROM shows JOIN events ON shows.show_id = events.show_id WHERE headliner = @headliner";

	SqlCommand command(sqlQuery, % sqlConn);

	// Add the selected headliner to the command/query
	command.Parameters->AddWithValue("@headliner", headlinerSelection);

	SqlDataReader^ reader = command.ExecuteReader();

	// Create a new DataTable to store the results of the query
	DataTable^ dataTable = gcnew DataTable();

	// DataTable columns
	dataTable->Columns->Add("Date", DateTime::typeid);
	dataTable->Columns->Add("City", String::typeid);
	dataTable->Columns->Add("State", String::typeid);
	dataTable->Columns->Add("Headliner", String::typeid);
	dataTable->Columns->Add("Event Type", String::typeid);

	while (reader->Read()) {
		DateTime date = reader->GetDateTime(0);
		String^ city = reader->GetString(1);
		String^ state = reader->GetString(2);
		String^ headliner = reader->GetString(3);
		String^ eventType = reader->GetString(4);

		// Add new rows to the Table
		DataRow^ row = dataTable->NewRow();
		row["Date"] = date;
		row["City"] = city;
		row["State"] = state;
		row["Headliner"] = headliner;
		row["Event Type"] = eventType;
		dataTable->Rows->Add(row);
	}

	// Sets the DataSource of the DataGrid to the dataTable
	dataGridView->DataSource = dataTable;

	reader->Close();
}
private: System::Void viewByEventType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ eventTypeSelection = viewByEventType->Text;

	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=queensway;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT date AS 'Date', city AS 'City', state AS 'State', headliner AS 'Headliner', event_type AS 'Event Type' FROM shows JOIN events ON shows.show_id = events.show_id WHERE event_type = @eventType";

	SqlCommand command(sqlQuery, % sqlConn);

	// Add the selected headliner to the command/query
	command.Parameters->AddWithValue("@eventType", eventTypeSelection);

	SqlDataReader^ reader = command.ExecuteReader();

	// Create a new DataTable to store the results of the query
	DataTable^ dataTable = gcnew DataTable();

	// DataTable columns
	dataTable->Columns->Add("Date", DateTime::typeid);
	dataTable->Columns->Add("City", String::typeid);
	dataTable->Columns->Add("State", String::typeid);
	dataTable->Columns->Add("Headliner", String::typeid);
	dataTable->Columns->Add("Event Type", String::typeid);

	while (reader->Read()) {
		DateTime date = reader->GetDateTime(0);
		String^ city = reader->GetString(1);
		String^ state = reader->GetString(2);
		String^ headliner = reader->GetString(3);
		String^ eventType = reader->GetString(4);

		// Add new rows to the Table
		DataRow^ row = dataTable->NewRow();
		row["Date"] = date;
		row["City"] = city;
		row["State"] = state;
		row["Headliner"] = headliner;
		row["Event Type"] = eventType;
		dataTable->Rows->Add(row);
	}

	// Sets the DataSource of the DataGrid to the dataTable
	dataGridView->DataSource = dataTable;

	reader->Close();
}
private: System::Void viewByCity_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ citySelection = viewByCity->Text;

	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=queensway;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT date AS 'Date', city AS 'City', state AS 'State', headliner AS 'Headliner', event_type AS 'Event Type' FROM shows JOIN events ON shows.show_id = events.show_id WHERE city = @city";

	SqlCommand command(sqlQuery, % sqlConn);

	// Add the selected headliner to the command/query
	command.Parameters->AddWithValue("@city", citySelection);

	SqlDataReader^ reader = command.ExecuteReader();

	// Create a new DataTable to store the results of the query
	DataTable^ dataTable = gcnew DataTable();

	// DataTable columns
	dataTable->Columns->Add("Date", DateTime::typeid);
	dataTable->Columns->Add("City", String::typeid);
	dataTable->Columns->Add("State", String::typeid);
	dataTable->Columns->Add("Headliner", String::typeid);
	dataTable->Columns->Add("Event Type", String::typeid);

	while (reader->Read()) {
		DateTime date = reader->GetDateTime(0);
		String^ city = reader->GetString(1);
		String^ state = reader->GetString(2);
		String^ headliner = reader->GetString(3);
		String^ eventType = reader->GetString(4);

		// Add new rows to the Table
		DataRow^ row = dataTable->NewRow();
		row["Date"] = date;
		row["City"] = city;
		row["State"] = state;
		row["Headliner"] = headliner;
		row["Event Type"] = eventType;
		dataTable->Rows->Add(row);
	}

	// Sets the DataSource of the DataGrid to the dataTable
	dataGridView->DataSource = dataTable;

	reader->Close();
}
private: System::Void viewByState_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ stateSelection = viewByState->Text;

	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=queensway;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT date AS 'Date', city AS 'City', state AS 'State', headliner AS 'Headliner', event_type AS 'Event Type' FROM shows JOIN events ON shows.show_id = events.show_id WHERE state = @state";

	SqlCommand command(sqlQuery, % sqlConn);

	// Add the selected headliner to the command/query
	command.Parameters->AddWithValue("@state", stateSelection);

	SqlDataReader^ reader = command.ExecuteReader();

	// Create a new DataTable to store the results of the query
	DataTable^ dataTable = gcnew DataTable();

	// DataTable columns
	dataTable->Columns->Add("Date", DateTime::typeid);
	dataTable->Columns->Add("City", String::typeid);
	dataTable->Columns->Add("State", String::typeid);
	dataTable->Columns->Add("Headliner", String::typeid);
	dataTable->Columns->Add("Event Type", String::typeid);

	while (reader->Read()) {
		DateTime date = reader->GetDateTime(0);
		String^ city = reader->GetString(1);
		String^ state = reader->GetString(2);
		String^ headliner = reader->GetString(3);
		String^ eventType = reader->GetString(4);

		// Add new rows to the Table
		DataRow^ row = dataTable->NewRow();
		row["Date"] = date;
		row["City"] = city;
		row["State"] = state;
		row["Headliner"] = headliner;
		row["Event Type"] = eventType;
		dataTable->Rows->Add(row);
	}

	// Sets the DataSource of the DataGrid to the dataTable
	dataGridView->DataSource = dataTable;

	reader->Close();
}
};
}
