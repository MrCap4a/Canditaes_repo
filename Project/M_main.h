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
			this->Candidates_box = (gcnew System::Windows::Forms::RichTextBox());
			this->Save_list_button = (gcnew System::Windows::Forms::Button());
			this->Back_button = (gcnew System::Windows::Forms::Button());
			this->Main_panel->SuspendLayout();
			this->Candidates_list_panel->SuspendLayout();
			this->Add_candidate_panel->SuspendLayout();
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
			this->Change_date_button->Click += gcnew System::EventHandler(this, &M_main::button2_Click);
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
			this->Birthday_date->Click += gcnew System::EventHandler(this, &M_main::label1_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker->Location = System::Drawing::Point(29, 147);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(260, 34);
			this->dateTimePicker->TabIndex = 2;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &M_main::dateTimePicker1_ValueChanged);
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
			this->Name_label->Click += gcnew System::EventHandler(this, &M_main::Name_label_Click);
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
			// M_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 553);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
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
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Name_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_candidate_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_candidate_panel->Visible = true;
	Main_panel->Visible = false;
}
};
}
