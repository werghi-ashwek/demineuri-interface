#pragma once
#include "about.h" 
#include "level1.h"
#include "level2.h"
#include "level3.h"

namespace test {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;


	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SkyBlue;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(35, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"player\'s name:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Proxima Nova Alt Rg", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(59, 251);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 57);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Proxima Nova Alt Rg", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SkyBlue;
			this->label2->Location = System::Drawing::Point(663, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"difficulty ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSlateGray;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(647, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 68);
			this->button2->TabIndex = 4;
			this->button2->Text = L"intermediate";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSlateGray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(656, 489);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 55);
			this->button3->TabIndex = 5;
			this->button3->Text = L"expert";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Beige;
			this->button4->Location = System::Drawing::Point(42, 528);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 41);
			this->button4->TabIndex = 6;
			this->button4->Text = L"About";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Beige;
			this->button5->Location = System::Drawing::Point(208, 528);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 41);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Begin";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(647, 215);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(162, 73);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Beginner";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(974, 619);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {



	}
	
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		about^ ab = gcnew about;
		this->Hide();
		ab->Show();

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (textBox1->Text == "")
		{
			MessageBox::Show("pleaser enter your name", "warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		if ((textBox1->Text != "") && (panel1))
		{
			level1^ lv = gcnew level1;
			this->Hide();
			lv->Show();

			if ((textBox1->Text != "") && (button2))
			{


				level2^ lv2 = gcnew level2;
				this->Hide();
				lv->Hide();
				lv2->Show();


				if ((textBox1->Text != "") && (button3))
				{


					level3^ lv3 = gcnew level3;
					this->Hide();
					lv->Hide();
					lv2->Hide();
					lv3->Show();
				}
			}

		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		{
		 if (button2)
		panel1->Enabled = false;
		button3->Enabled = false;

		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (button3)
		{
		panel1->Enabled = false;
		button2->Enabled = false;


		}
	}



private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	if (panel1)
	{
		button2->Enabled = false;
		button3->Enabled = false;
	}
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};


};


