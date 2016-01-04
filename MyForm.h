#pragma once

namespace PrimaFinestra
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form 
	{
	public:
		MyForm(void) 
		{
			InitializeComponent();
		}

	protected:
		~MyForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private:
		System::ComponentModel::Container ^components;

		void InitializeComponent(void) 
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();

			this->button1->Location = System::Drawing::Point(92, 111);
			this->button1->Name = L"bottone";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Clik per uscire";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Visual C++ GUI";
			this->ResumeLayout(false);
		}

	private:
		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Application::Exit();
		}
	};
}
