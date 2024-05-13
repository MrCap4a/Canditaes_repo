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
			this->Main_panel->SuspendLayout();
			this->Candidates_list_panel->SuspendLayout();
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
			this->add_candidate_button->Click += gcnew System::EventHandler(this, &M_main::button3_Click);
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
			// Candidates_box
			// 
			this->Candidates_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Candidates_box->Location = System::Drawing::Point(12, 12);
			this->Candidates_box->Name = L"Candidates_box";
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
			this->Back_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->Controls->Add(this->Candidates_list_panel);
			this->Controls->Add(this->Main_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"M_main";
			this->Text = L"Программа учёта кандидатов";
			this->Main_panel->ResumeLayout(false);
			this->Candidates_list_panel->ResumeLayout(false);
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
}
};
}
