#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MessageForm
	/// </summary>
	public ref class MessageForm : public System::Windows::Forms::Form
	{
	public:
		void freg_message() {
			reg_message->Visible = true;
			del_message->Visible = false;
			reg_error->Visible = false;
			del_error->Visible = false;
			change_message->Visible = false;
		}
		void fdel_message() {
			reg_message->Visible = false;
			del_message->Visible = true;
			reg_error->Visible = false;
			del_error->Visible = false;
			change_message->Visible = false;
		}
		void freg_error() {
			reg_message->Visible = false;
			del_message->Visible = false;
			reg_error->Visible = true;
			del_error->Visible = false;
			change_message->Visible = false;
		}
		void fdel_error() {
			reg_message->Visible = false;
			del_message->Visible = false;
			reg_error->Visible = false;
			del_error->Visible = true;
			change_message->Visible = false;
		}
		void fchange_message() {
			reg_message->Visible = false;
			del_message->Visible = false;
			reg_error->Visible = false;
			del_error->Visible = false;
			change_message->Visible = true;
		}

		MessageForm(void)
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
		~MessageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ change_message;
	protected:

	private: System::Windows::Forms::Label^ reg_error;

	private: System::Windows::Forms::Label^ del_error;

	private: System::Windows::Forms::Label^ del_message;

	private: System::Windows::Forms::Label^ reg_message;

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
			this->change_message = (gcnew System::Windows::Forms::Label());
			this->reg_error = (gcnew System::Windows::Forms::Label());
			this->del_error = (gcnew System::Windows::Forms::Label());
			this->del_message = (gcnew System::Windows::Forms::Label());
			this->reg_message = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// change_message
			// 
			this->change_message->AutoSize = true;
			this->change_message->Font = (gcnew System::Drawing::Font(L"Playbill", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change_message->Location = System::Drawing::Point(104, 75);
			this->change_message->Name = L"change_message";
			this->change_message->Size = System::Drawing::Size(247, 23);
			this->change_message->TabIndex = 3;
			this->change_message->Text = L"Данные успешно изменены!";
			// 
			// reg_error
			// 
			this->reg_error->AutoSize = true;
			this->reg_error->Font = (gcnew System::Drawing::Font(L"Playbill", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reg_error->Location = System::Drawing::Point(26, 75);
			this->reg_error->Name = L"reg_error";
			this->reg_error->Size = System::Drawing::Size(386, 23);
			this->reg_error->TabIndex = 4;
			this->reg_error->Text = L"Кандидат с таким именем уже существует!";
			// 
			// del_error
			// 
			this->del_error->AutoSize = true;
			this->del_error->Font = (gcnew System::Drawing::Font(L"Playbill", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_error->Location = System::Drawing::Point(3, 75);
			this->del_error->Name = L"del_error";
			this->del_error->Size = System::Drawing::Size(423, 23);
			this->del_error->TabIndex = 5;
			this->del_error->Text = L"Кандидата с таким именем уже не существует!";
			// 
			// del_message
			// 
			this->del_message->AutoSize = true;
			this->del_message->Font = (gcnew System::Drawing::Font(L"Playbill", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_message->Location = System::Drawing::Point(80, 75);
			this->del_message->Name = L"del_message";
			this->del_message->Size = System::Drawing::Size(244, 23);
			this->del_message->TabIndex = 6;
			this->del_message->Text = L"Кандидат успешно удален!";
			this->del_message->Click += gcnew System::EventHandler(this, &MessageForm::label4_Click);
			// 
			// reg_message
			// 
			this->reg_message->AutoSize = true;
			this->reg_message->Font = (gcnew System::Drawing::Font(L"Playbill", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reg_message->Location = System::Drawing::Point(41, 75);
			this->reg_message->Name = L"reg_message";
			this->reg_message->Size = System::Drawing::Size(330, 23);
			this->reg_message->TabIndex = 7;
			this->reg_message->Text = L"Кандидат успешно зарегистрирован!";
			this->reg_message->Click += gcnew System::EventHandler(this, &MessageForm::label5_Click);
			// 
			// MessageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 172);
			this->Controls->Add(this->reg_message);
			this->Controls->Add(this->del_message);
			this->Controls->Add(this->del_error);
			this->Controls->Add(this->reg_error);
			this->Controls->Add(this->change_message);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MessageForm";
			this->Text = L"Message";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
