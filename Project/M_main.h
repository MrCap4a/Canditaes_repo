#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для M_main
	/// </summary>
	public ref class M_main : public System::Windows::Forms::Form
	{
	public:
		M_main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			show_menu();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~M_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Show_candidates_button;
	protected:

	private: System::Windows::Forms::Button^ Change_date_button;
	private: System::Windows::Forms::Button^ add_candidate_button;
	private: System::Windows::Forms::Button^ delete_candidate_button;
	private: System::Windows::Forms::Panel^ Main_panel;
	private: System::Windows::Forms::Panel^ Candidates_list_panel;

	private: System::Windows::Forms::RichTextBox^ Candidates_box;
	private: System::Windows::Forms::Button^ Save_list_button;
	private: System::Windows::Forms::Button^ Back_button;
	private: System::Windows::Forms::TextBox^ Input_name_box;
	private: System::Windows::Forms::Panel^ Add_candidate_panel;
	private: System::Windows::Forms::Label^ Name_label;
	private: System::Windows::Forms::Label^ Birthday_date;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::Button^ Back;


	private: System::Windows::Forms::Label^ Popularity_index;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ Birth_city;
	private: System::Windows::Forms::TextBox^ Birth_city_box;
	private: System::Windows::Forms::Button^ Register;
	private: System::Windows::Forms::Panel^ Delete_candidate_panel;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ Go_back;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ Change_candidate_panel;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Button^ button2;







	protected:




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(M_main::typeid));
			this->Show_candidates_button = (gcnew System::Windows::Forms::Button());
			this->Change_date_button = (gcnew System::Windows::Forms::Button());
			this->add_candidate_button = (gcnew System::Windows::Forms::Button());
			this->delete_candidate_button = (gcnew System::Windows::Forms::Button());
			this->Main_panel = (gcnew System::Windows::Forms::Panel());
			this->Candidates_list_panel = (gcnew System::Windows::Forms::Panel());
			this->Candidates_box = (gcnew System::Windows::Forms::RichTextBox());
			this->Save_list_button = (gcnew System::Windows::Forms::Button());
			this->Back_button = (gcnew System::Windows::Forms::Button());
			this->Add_candidate_panel = (gcnew System::Windows::Forms::Panel());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Popularity_index = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->Birth_city = (gcnew System::Windows::Forms::Label());
			this->Birth_city_box = (gcnew System::Windows::Forms::TextBox());
			this->Birthday_date = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->Name_label = (gcnew System::Windows::Forms::Label());
			this->Input_name_box = (gcnew System::Windows::Forms::TextBox());
			this->Delete_candidate_panel = (gcnew System::Windows::Forms::Panel());
			this->Go_back = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Change_candidate_panel = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->Main_panel->SuspendLayout();
			this->Candidates_list_panel->SuspendLayout();
			this->Add_candidate_panel->SuspendLayout();
			this->Delete_candidate_panel->SuspendLayout();
			this->Change_candidate_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Show_candidates_button
			// 
			this->Show_candidates_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Show_candidates_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Show_candidates_button->Location = System::Drawing::Point(126, 118);
			this->Show_candidates_button->Name = L"Show_candidates_button";
			this->Show_candidates_button->Size = System::Drawing::Size(317, 91);
			this->Show_candidates_button->TabIndex = 0;
			this->Show_candidates_button->Text = L"Посмотреть список кандидатов";
			this->Show_candidates_button->UseVisualStyleBackColor = true;
			this->Show_candidates_button->Click += gcnew System::EventHandler(this, &M_main::show_candidates_Click);
			// 
			// Change_date_button
			// 
			this->Change_date_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Change_date_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Change_date_button->Location = System::Drawing::Point(126, 215);
			this->Change_date_button->Name = L"Change_date_button";
			this->Change_date_button->Size = System::Drawing::Size(317, 91);
			this->Change_date_button->TabIndex = 1;
			this->Change_date_button->Text = L"Изменить данные о кандидате";
			this->Change_date_button->UseVisualStyleBackColor = true;
			this->Change_date_button->Click += gcnew System::EventHandler(this, &M_main::Change_date_button_Click);
			// 
			// add_candidate_button
			// 
			this->add_candidate_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add_candidate_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->add_candidate_button->Location = System::Drawing::Point(126, 312);
			this->add_candidate_button->Name = L"add_candidate_button";
			this->add_candidate_button->Size = System::Drawing::Size(317, 91);
			this->add_candidate_button->TabIndex = 2;
			this->add_candidate_button->Text = L"Добавить кандидата";
			this->add_candidate_button->UseVisualStyleBackColor = true;
			this->add_candidate_button->Click += gcnew System::EventHandler(this, &M_main::add_candidate_button_Click);
			// 
			// delete_candidate_button
			// 
			this->delete_candidate_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delete_candidate_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->delete_candidate_button->Location = System::Drawing::Point(126, 409);
			this->delete_candidate_button->Name = L"delete_candidate_button";
			this->delete_candidate_button->Size = System::Drawing::Size(317, 91);
			this->delete_candidate_button->TabIndex = 3;
			this->delete_candidate_button->Text = L"Удалить кандидата";
			this->delete_candidate_button->UseVisualStyleBackColor = true;
			this->delete_candidate_button->Click += gcnew System::EventHandler(this, &M_main::delete_candidate_button_Click);
			// 
			// Main_panel
			// 
			this->Main_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Main_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Main_panel->Controls->Add(this->Show_candidates_button);
			this->Main_panel->Controls->Add(this->delete_candidate_button);
			this->Main_panel->Controls->Add(this->Change_date_button);
			this->Main_panel->Controls->Add(this->add_candidate_button);
			this->Main_panel->Location = System::Drawing::Point(0, 0);
			this->Main_panel->Name = L"Main_panel";
			this->Main_panel->Size = System::Drawing::Size(580, 550);
			this->Main_panel->TabIndex = 4;
			// 
			// Candidates_list_panel
			// 
			this->Candidates_list_panel->Controls->Add(this->Candidates_box);
			this->Candidates_list_panel->Controls->Add(this->Save_list_button);
			this->Candidates_list_panel->Controls->Add(this->Back_button);
			this->Candidates_list_panel->Location = System::Drawing::Point(0, 0);
			this->Candidates_list_panel->Name = L"Candidates_list_panel";
			this->Candidates_list_panel->Size = System::Drawing::Size(580, 550);
			this->Candidates_list_panel->TabIndex = 5;
			// 
			// Candidates_box
			// 
			this->Candidates_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Candidates_box->Location = System::Drawing::Point(12, 12);
			this->Candidates_box->Name = L"Candidates_box";
			this->Candidates_box->ReadOnly = true;
			this->Candidates_box->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->Candidates_box->Size = System::Drawing::Size(556, 463);
			this->Candidates_box->TabIndex = 5;
			this->Candidates_box->Text = L"Это выводимый текст, который можно прокручивать!";
			// 
			// Save_list_button
			// 
			this->Save_list_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Save_list_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Save_list_button->Location = System::Drawing::Point(357, 483);
			this->Save_list_button->Name = L"Save_list_button";
			this->Save_list_button->Size = System::Drawing::Size(211, 59);
			this->Save_list_button->TabIndex = 4;
			this->Save_list_button->Text = L"Сохранить список";
			this->Save_list_button->UseVisualStyleBackColor = true;
			// 
			// Back_button
			// 
			this->Back_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Back_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Back_button->Location = System::Drawing::Point(12, 483);
			this->Back_button->Name = L"Back_button";
			this->Back_button->Size = System::Drawing::Size(151, 59);
			this->Back_button->TabIndex = 3;
			this->Back_button->Text = L"Назад";
			this->Back_button->UseVisualStyleBackColor = true;
			this->Back_button->Click += gcnew System::EventHandler(this, &M_main::Back_button_Click);
			// 
			// Add_candidate_panel
			// 
			this->Add_candidate_panel->Controls->Add(this->Register);
			this->Add_candidate_panel->Controls->Add(this->Back);
			this->Add_candidate_panel->Controls->Add(this->Popularity_index);
			this->Add_candidate_panel->Controls->Add(this->radioButton4);
			this->Add_candidate_panel->Controls->Add(this->radioButton3);
			this->Add_candidate_panel->Controls->Add(this->radioButton2);
			this->Add_candidate_panel->Controls->Add(this->radioButton1);
			this->Add_candidate_panel->Controls->Add(this->Birth_city);
			this->Add_candidate_panel->Controls->Add(this->Birth_city_box);
			this->Add_candidate_panel->Controls->Add(this->Birthday_date);
			this->Add_candidate_panel->Controls->Add(this->dateTimePicker);
			this->Add_candidate_panel->Controls->Add(this->Name_label);
			this->Add_candidate_panel->Controls->Add(this->Input_name_box);
			this->Add_candidate_panel->Location = System::Drawing::Point(0, 0);
			this->Add_candidate_panel->Name = L"Add_candidate_panel";
			this->Add_candidate_panel->Size = System::Drawing::Size(580, 550);
			this->Add_candidate_panel->TabIndex = 6;
			// 
			// Register
			// 
			this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Register->Location = System::Drawing::Point(296, 476);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(272, 65);
			this->Register->TabIndex = 12;
			this->Register->Text = L"Зарегистрировать";
			this->Register->UseVisualStyleBackColor = true;
			// 
			// Back
			// 
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Back->Location = System::Drawing::Point(29, 476);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(208, 65);
			this->Back->TabIndex = 11;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &M_main::Back_button_Click);
			// 
			// Popularity_index
			// 
			this->Popularity_index->AutoSize = true;
			this->Popularity_index->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Popularity_index->Location = System::Drawing::Point(24, 305);
			this->Popularity_index->Name = L"Popularity_index";
			this->Popularity_index->Size = System::Drawing::Size(264, 29);
			this->Popularity_index->TabIndex = 10;
			this->Popularity_index->Text = L"Индекс популярности:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(29, 418);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(143, 29);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(29, 391);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(143, 29);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(29, 364);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(143, 29);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(29, 337);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(143, 29);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// Birth_city
			// 
			this->Birth_city->AutoSize = true;
			this->Birth_city->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Birth_city->Location = System::Drawing::Point(24, 207);
			this->Birth_city->Name = L"Birth_city";
			this->Birth_city->Size = System::Drawing::Size(213, 29);
			this->Birth_city->TabIndex = 5;
			this->Birth_city->Text = L"Место рождения:";
			// 
			// Birth_city_box
			// 
			this->Birth_city_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Birth_city_box->Location = System::Drawing::Point(29, 239);
			this->Birth_city_box->Name = L"Birth_city_box";
			this->Birth_city_box->Size = System::Drawing::Size(261, 34);
			this->Birth_city_box->TabIndex = 4;
			// 
			// Birthday_date
			// 
			this->Birthday_date->AutoSize = true;
			this->Birthday_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Birthday_date->Location = System::Drawing::Point(24, 115);
			this->Birthday_date->Name = L"Birthday_date";
			this->Birthday_date->Size = System::Drawing::Size(199, 29);
			this->Birthday_date->TabIndex = 3;
			this->Birthday_date->Text = L"Дата рождения:";
			//this->Birthday_date->Click += gcnew System::EventHandler(this, &M_main::label1_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker->Location = System::Drawing::Point(29, 147);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(260, 34);
			this->dateTimePicker->TabIndex = 2;
			//this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &M_main::dateTimePicker1_ValueChanged);
			// 
			// Name_label
			// 
			this->Name_label->AutoSize = true;
			this->Name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name_label->Location = System::Drawing::Point(24, 25);
			this->Name_label->Name = L"Name_label";
			this->Name_label->Size = System::Drawing::Size(266, 29);
			this->Name_label->TabIndex = 1;
			this->Name_label->Text = L"Фамилия и инициалы:";
			//this->Name_label->Click += gcnew System::EventHandler(this, &M_main::Name_label_Click);
			// 
			// Input_name_box
			// 
			this->Input_name_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Input_name_box->Location = System::Drawing::Point(29, 57);
			this->Input_name_box->Name = L"Input_name_box";
			this->Input_name_box->Size = System::Drawing::Size(260, 34);
			this->Input_name_box->TabIndex = 0;
			// 
			// Delete_candidate_panel
			// 
			this->Delete_candidate_panel->Controls->Add(this->Go_back);
			this->Delete_candidate_panel->Controls->Add(this->Delete);
			this->Delete_candidate_panel->Controls->Add(this->label1);
			this->Delete_candidate_panel->Controls->Add(this->comboBox1);
			this->Delete_candidate_panel->Location = System::Drawing::Point(0, 0);
			this->Delete_candidate_panel->Name = L"Delete_candidate_panel";
			this->Delete_candidate_panel->Size = System::Drawing::Size(580, 550);
			this->Delete_candidate_panel->TabIndex = 13;
			// 
			// Go_back
			// 
			this->Go_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Go_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Go_back->Location = System::Drawing::Point(12, 481);
			this->Go_back->Name = L"Go_back";
			this->Go_back->Size = System::Drawing::Size(161, 54);
			this->Go_back->TabIndex = 3;
			this->Go_back->Text = L"Назад";
			this->Go_back->UseVisualStyleBackColor = true;
			this->Go_back->Click += gcnew System::EventHandler(this, &M_main::Back_button_Click);
			// 
			// Delete
			// 
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delete->Location = System::Drawing::Point(409, 481);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(159, 54);
			this->Delete->TabIndex = 2;
			this->Delete->Text = L"Удалить";
			this->Delete->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите кандидата:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(29, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(250, 33);
			this->comboBox1->TabIndex = 0;
			// 
			// Change_candidate_panel
			// 
			this->Change_candidate_panel->Controls->Add(this->button2);
			this->Change_candidate_panel->Controls->Add(this->button1);
			this->Change_candidate_panel->Controls->Add(this->radioButton8);
			this->Change_candidate_panel->Controls->Add(this->radioButton7);
			this->Change_candidate_panel->Controls->Add(this->radioButton6);
			this->Change_candidate_panel->Controls->Add(this->radioButton5);
			this->Change_candidate_panel->Controls->Add(this->label5);
			this->Change_candidate_panel->Controls->Add(this->textBox1);
			this->Change_candidate_panel->Controls->Add(this->label4);
			this->Change_candidate_panel->Controls->Add(this->dateTimePicker1);
			this->Change_candidate_panel->Controls->Add(this->label3);
			this->Change_candidate_panel->Controls->Add(this->label2);
			this->Change_candidate_panel->Controls->Add(this->comboBox2);
			this->Change_candidate_panel->Location = System::Drawing::Point(0, 0);
			this->Change_candidate_panel->Name = L"Change_candidate_panel";
			this->Change_candidate_panel->Size = System::Drawing::Size(580, 550);
			this->Change_candidate_panel->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(420, 486);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 52);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Изменить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 486);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 52);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &M_main::Back_button_Click);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->Location = System::Drawing::Point(34, 418);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(143, 29);
			this->radioButton8->TabIndex = 10;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"radioButton8";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(34, 391);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(143, 29);
			this->radioButton7->TabIndex = 9;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"radioButton7";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(34, 364);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(143, 29);
			this->radioButton6->TabIndex = 8;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"radioButton6";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(34, 337);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(143, 29);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(29, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Место рождения:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(29, 247);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(261, 30);
			this->textBox1->TabIndex = 5;
			//this->textBox1->TextChanged += gcnew System::EventHandler(this, &M_main::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(29, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Место рождения:";
			//this->label4->Click += gcnew System::EventHandler(this, &M_main::label4_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(29, 150);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(261, 30);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(29, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Дата рождения:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(29, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(257, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Выберите кандидата:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(29, 66);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(261, 33);
			this->comboBox2->TabIndex = 0;
			// 
			// M_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->Change_candidate_panel);
			this->Controls->Add(this->Delete_candidate_panel);
			this->Controls->Add(this->Add_candidate_panel);
			this->Controls->Add(this->Candidates_list_panel);
			this->Controls->Add(this->Main_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"M_main";
			this->Text = L"Программа учёта кандидатов";
			this->Main_panel->ResumeLayout(false);
			this->Candidates_list_panel->ResumeLayout(false);
			this->Add_candidate_panel->ResumeLayout(false);
			this->Add_candidate_panel->PerformLayout();
			this->Delete_candidate_panel->ResumeLayout(false);
			this->Delete_candidate_panel->PerformLayout();
			this->Change_candidate_panel->ResumeLayout(false);
			this->Change_candidate_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void show_candidates_Click(System::Object^ sender, System::EventArgs^ e) {
	Candidates_list_panel->Visible=true;
	Main_panel->Visible=false;
}
private: System::Void Back_button_Click(System::Object^ sender, System::EventArgs^ e) {
	show_menu();
}
	   void show_menu() {
		   Main_panel->Visible = true;
		   Candidates_list_panel->Visible=false;
		   Add_candidate_panel->Visible = false;
		   Delete_candidate_panel->Visible = false;
		   Change_candidate_panel->Visible = false;
}
private: System::Void add_candidate_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_candidate_panel->Visible = true;
	Main_panel->Visible = false;
}
private: System::Void delete_candidate_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Delete_candidate_panel->Visible = true;
	Main_panel->Visible = false;
}

private: System::Void Change_date_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Change_candidate_panel->Visible = true;
	Main_panel->Visible = false;
}
};
}
