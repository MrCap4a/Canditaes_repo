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
			this->SuspendLayout();
			// 
			// Show_candidates_button
			// 
			this->Show_candidates_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Show_candidates_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Show_candidates_button->Location = System::Drawing::Point(133, 87);
			this->Show_candidates_button->Name = L"Show_candidates_button";
			this->Show_candidates_button->Size = System::Drawing::Size(317, 91);
			this->Show_candidates_button->TabIndex = 0;
			this->Show_candidates_button->Text = L"Посмотреть список кандидатов";
			this->Show_candidates_button->UseVisualStyleBackColor = true;
			this->Show_candidates_button->Click += gcnew System::EventHandler(this, &M_main::button1_Click);
			// 
			// Change_date_button
			// 
			this->Change_date_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Change_date_button->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Change_date_button->Location = System::Drawing::Point(133, 184);
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
			this->add_candidate_button->Location = System::Drawing::Point(133, 281);
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
			this->delete_candidate_button->Location = System::Drawing::Point(133, 378);
			this->delete_candidate_button->Name = L"delete_candidate_button";
			this->delete_candidate_button->Size = System::Drawing::Size(317, 91);
			this->delete_candidate_button->TabIndex = 3;
			this->delete_candidate_button->Text = L"Удалить кандидата";
			this->delete_candidate_button->UseVisualStyleBackColor = true;
			// 
			// M_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 550);
			this->Controls->Add(this->delete_candidate_button);
			this->Controls->Add(this->add_candidate_button);
			this->Controls->Add(this->Change_date_button);
			this->Controls->Add(this->Show_candidates_button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"M_main";
			this->Text = L"Программа учёта кандидатов";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
