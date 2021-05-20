#pragma once

#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <cliext\vector>
namespace test {
	//#include "demineurboard.h" 


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace cliext;
	

	/// <summary>
	/// Description résumée de level1
	/// </summary>
	public ref class level1 : public System::Windows::Forms::Form
	{

		static int Second = 0;
		static int Minute = 0;
		String^ sec;
		String^ min;
		static int move = 0;
		static int bomb = 0;
		vector<int> data;
	
		
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::ImageList^ imageList3;
	private: System::Windows::Forms::ImageList^ imageList4;
	private: System::Windows::Forms::Button^ button37;


	private: System::Windows::Forms::Button^ button38;



	public:
		level1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			for (int i = 0; i < 40; i++)
			{
				data.push_back(0);
			}






		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~level1()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level1::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList4 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"bomb.png");
			this->imageList1->Images->SetKeyName(1, L"flag (4).png");
			this->imageList1->Images->SetKeyName(2, L"happy.png");
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Thistle;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button9);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->flowLayoutPanel1->Controls->Add(this->button11);
			this->flowLayoutPanel1->Controls->Add(this->button12);
			this->flowLayoutPanel1->Controls->Add(this->button13);
			this->flowLayoutPanel1->Controls->Add(this->button14);
			this->flowLayoutPanel1->Controls->Add(this->button15);
			this->flowLayoutPanel1->Controls->Add(this->button16);
			this->flowLayoutPanel1->Controls->Add(this->button17);
			this->flowLayoutPanel1->Controls->Add(this->button18);
			this->flowLayoutPanel1->Controls->Add(this->button19);
			this->flowLayoutPanel1->Controls->Add(this->button20);
			this->flowLayoutPanel1->Controls->Add(this->button21);
			this->flowLayoutPanel1->Controls->Add(this->button22);
			this->flowLayoutPanel1->Controls->Add(this->button23);
			this->flowLayoutPanel1->Controls->Add(this->button24);
			this->flowLayoutPanel1->Controls->Add(this->button25);
			this->flowLayoutPanel1->Controls->Add(this->button26);
			this->flowLayoutPanel1->Controls->Add(this->button27);
			this->flowLayoutPanel1->Controls->Add(this->button28);
			this->flowLayoutPanel1->Controls->Add(this->button29);
			this->flowLayoutPanel1->Controls->Add(this->button30);
			this->flowLayoutPanel1->Controls->Add(this->button31);
			this->flowLayoutPanel1->Controls->Add(this->button32);
			this->flowLayoutPanel1->Controls->Add(this->button33);
			this->flowLayoutPanel1->Controls->Add(this->button34);
			this->flowLayoutPanel1->Controls->Add(this->button35);
			this->flowLayoutPanel1->Controls->Add(this->button36);
			this->flowLayoutPanel1->Location = System::Drawing::Point(271, 188);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(348, 333);
			this->flowLayoutPanel1->TabIndex = 6;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &level1::flowLayoutPanel1_Paint_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 49);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &level1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 49);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &level1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(119, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 49);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &level1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(177, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 49);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &level1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(235, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 49);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &level1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(293, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(52, 49);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &level1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(3, 58);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(52, 49);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &level1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(61, 58);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 49);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &level1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(119, 58);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 49);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &level1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(177, 58);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(52, 49);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &level1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(235, 58);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(52, 49);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &level1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(293, 58);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(52, 49);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &level1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(3, 113);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(52, 49);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &level1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(61, 113);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(52, 49);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &level1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(119, 113);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(52, 49);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &level1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(177, 113);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(52, 49);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &level1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(235, 113);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(52, 49);
			this->button17->TabIndex = 16;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &level1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(293, 113);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(52, 49);
			this->button18->TabIndex = 17;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &level1::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(3, 168);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(52, 49);
			this->button19->TabIndex = 18;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &level1::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(61, 168);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(52, 49);
			this->button20->TabIndex = 19;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &level1::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(119, 168);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(52, 49);
			this->button21->TabIndex = 20;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &level1::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(177, 168);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(52, 49);
			this->button22->TabIndex = 21;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &level1::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(235, 168);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(52, 49);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &level1::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(293, 168);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(52, 49);
			this->button24->TabIndex = 23;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &level1::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(3, 223);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(52, 49);
			this->button25->TabIndex = 24;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &level1::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(61, 223);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(52, 49);
			this->button26->TabIndex = 25;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &level1::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(119, 223);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(52, 49);
			this->button27->TabIndex = 26;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &level1::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(177, 223);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(52, 49);
			this->button28->TabIndex = 27;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &level1::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(235, 223);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(52, 49);
			this->button29->TabIndex = 28;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &level1::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(293, 223);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(52, 49);
			this->button30->TabIndex = 29;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &level1::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(3, 278);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(52, 49);
			this->button31->TabIndex = 30;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &level1::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(61, 278);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(52, 49);
			this->button32->TabIndex = 31;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &level1::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(119, 278);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(52, 49);
			this->button33->TabIndex = 32;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &level1::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(177, 278);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(52, 49);
			this->button34->TabIndex = 33;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &level1::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(235, 278);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(52, 49);
			this->button35->TabIndex = 34;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &level1::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(293, 278);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(52, 49);
			this->button36->TabIndex = 35;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &level1::button36_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox1.BackgroundImage")));
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(668, 367);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(262, 21);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"check to set the flag";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &level1::checkBox1_CheckedChanged);
			// 
			// button38
			// 
			this->button38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.BackgroundImage")));
			this->button38->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(668, 457);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(262, 37);
			this->button38->TabIndex = 9;
			this->button38->Text = L"restart the game";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &level1::button38_Click);
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"bomb.png");
			this->imageList2->Images->SetKeyName(1, L"flag (4).png");
			// 
			// imageList3
			// 
			this->imageList3->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList3->ImageSize = System::Drawing::Size(16, 16);
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList4
			// 
			this->imageList4->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList4->ImageSize = System::Drawing::Size(16, 16);
			this->imageList4->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// button37
			// 
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button37->ForeColor = System::Drawing::Color::LightBlue;
			this->button37->Location = System::Drawing::Point(346, 582);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(188, 39);
			this->button37->TabIndex = 7;
			this->button37->Text = L"start the game";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &level1::button37_Click);
			// 
			// level1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(953, 661);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"level1";
			this->Text = L"level1";
			this->Load += gcnew System::EventHandler(this, &level1::level1_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	

#pragma endregion


		public: Void Lose()
		{
			button38->Visible = true;
			if (button1->Enabled == true)
			{
				button1->Enabled = false;
				button1->Text = "";
				if (data[1] == 1)
					//button1->BackColor = System::Drawing::Color::Red;
				    button1->BackgroundImage = imageList2->Images[0];
				button1->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button2->Enabled == true)
			{
				button2->Enabled = false;
				button2->Text = "";
				if (data[2] == 1)
					//button2->BackColor = System::Drawing::Color::Red;
					button2->BackgroundImage = imageList2->Images[0];
				button2->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button3->Enabled == true)
			{
				button3->Enabled = false;
				button3->Text = "";
				if (data[3] == 1)
					//button3->BackColor = System::Drawing::Color::Red;
					button3->BackgroundImage = imageList2->Images[0];
				button3->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button4->Enabled == true)
			{
				button4->Enabled = false;
				button4->Text = "";
				if (data[4] == 1)
					//button4->BackColor = System::Drawing::Color::Red;
					button4->BackgroundImage = imageList2->Images[0];
				button4->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button5->Enabled == true)
			{
				button5->Enabled = false;
				button5->Text = "";
				if (data[5] == 1)
				//	button5->BackColor = System::Drawing::Color::Red;
					button5->BackgroundImage = imageList2->Images[0];
				button5->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button6->Enabled == true)
			{
				button6->Enabled = false;
				button6->Text = "";
				if (data[6] == 1)
					//button6->BackColor = System::Drawing::Color::Red;
					button6->BackgroundImage = imageList2->Images[0];
				button6->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button7->Enabled == true)
			{
				button7->Enabled = false;
				button7->Text = "";
				if (data[7] == 1)
					//button7->BackColor = System::Drawing::Color::Red;
					button7->BackgroundImage = imageList2->Images[0];
				button7->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button8->Enabled == true)
			{
				button8->Enabled = false;
				button8->Text = "";
				if (data[8] == 1)
					//button8->BackColor = System::Drawing::Color::Red;
					button8->BackgroundImage = imageList2->Images[0];
				button8->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button9->Enabled == true)
			{
				button9->Enabled = false;
				button9->Text = "";
				if (data[9] == 1)
					//button9->BackColor = System::Drawing::Color::Red;
					button9->BackgroundImage = imageList2->Images[0];
				button9->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button10->Enabled == true)
			{
				button10->Enabled = false;
				button10->Text = "";
				if (data[10] == 1)
					//button10->BackColor = System::Drawing::Color::Red;
					button10->BackgroundImage = imageList2->Images[0];
				button10->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button11->Enabled == true)
			{
				button11->Enabled = false;
				button11->Text = "";
				if (data[11] == 1)
					//button11->BackColor = System::Drawing::Color::Red;
					button11->BackgroundImage = imageList2->Images[0];
				button11->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button12->Enabled == true)
			{
				button12->Enabled = false;
				button12->Text = "";
				if (data[12] == 1)
					//button12->BackColor = System::Drawing::Color::Red;
					button12->BackgroundImage = imageList2->Images[0];
				button12->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button13->Enabled == true)
			{
				button13->Enabled = false;
				button13->Text = "";
				if (data[13] == 1)
				//	button13->BackColor = System::Drawing::Color::Red;
					button13->BackgroundImage = imageList2->Images[0];
				button13->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button14->Enabled == true)
			{
				button14->Enabled = false;
				button14->Text = "";
				if (data[14] == 1)
				//	button14->BackColor = System::Drawing::Color::Red;
					button14->BackgroundImage = imageList2->Images[0];
				button14->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button15->Enabled == true)
			{
				button15->Enabled = false;
				button15->Text = "";
				if (data[15] == 1)
				//	button15->BackColor = System::Drawing::Color::Red;
					button15->BackgroundImage = imageList2->Images[0];
				button15->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button16->Enabled == true)
			{
				button16->Enabled = false;
				button16->Text = "";
				if (data[16] == 1)
					//button16->BackColor = System::Drawing::Color::Red;
					button16->BackgroundImage = imageList2->Images[0];
				button16->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button17->Enabled == true)
			{
				button17->Enabled = false;
				button17->Text = "";
				if (data[17] == 1)
					//button17->BackColor = System::Drawing::Color::Red;
					button17->BackgroundImage = imageList2->Images[0];
				button17->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button18->Enabled == true)
			{
				button18->Enabled = false;
				button18->Text = "";
				if (data[18] == 1)
					//button18->BackColor = System::Drawing::Color::Red;
					button18->BackgroundImage = imageList2->Images[0];
				button18->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button19->Enabled == true)
			{
				button19->Enabled = false;
				button19->Text = "";
				if (data[19] == 1)
					//button19->BackColor = System::Drawing::Color::Red;
					button19->BackgroundImage = imageList2->Images[0];
				button19->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button20->Enabled == true)
			{
				button20->Enabled = false;
				button20->Text = "";
				if (data[20] == 1)
					//button20->BackColor = System::Drawing::Color::Red;
					button20->BackgroundImage = imageList2->Images[0];
				button20->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button21->Enabled == true)
			{
				button21->Enabled = false;
				button21->Text = "";
				if (data[21] == 1)
					//button21->BackColor = System::Drawing::Color::Red;
					button21->BackgroundImage = imageList2->Images[0];
				button21->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button22->Enabled == true)
			{
				button22->Enabled = false;
				button22->Text = "";
				if (data[22] == 1)
					//button22->BackColor = System::Drawing::Color::Red;
					button22->BackgroundImage = imageList2->Images[0];
				button22->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button23->Enabled == true)
			{
				button23->Enabled = false;
				button23->Text = "";
				if (data[23] == 1)
				//	button23->BackColor = System::Drawing::Color::Red;
					button23->BackgroundImage = imageList2->Images[0];
				button23->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button24->Enabled == true)
			{
				button24->Enabled = false;
				button24->Text = "";
				if (data[24] == 1)
					//button24->BackColor = System::Drawing::Color::Red;
					button24->BackgroundImage = imageList2->Images[0];
				button24->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button25->Enabled == true)
			{
				button25->Enabled = false;
				button25->Text = "";
				if (data[25] == 1)
					//button25->BackColor = System::Drawing::Color::Red;
					button25->BackgroundImage = imageList2->Images[0];
				button25->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button26->Enabled == true)
			{
				button26->Enabled = false;
				button26->Text = "";
				if (data[26] == 1)
					//button26->BackColor = System::Drawing::Color::Red;
					button26->BackgroundImage = imageList2->Images[0];
				button26->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button27->Enabled == true)
			{
				button27->Enabled = false;
				button27->Text = "";
				if (data[27] == 1)
					//button27->BackColor = System::Drawing::Color::Red;
					button27->BackgroundImage = imageList2->Images[0];
				button27->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button28->Enabled == true)
			{
				button28->Enabled = false;
				button28->Text = "";
				if (data[28] == 1)
					//button28->BackColor = System::Drawing::Color::Red;
					button28->BackgroundImage = imageList2->Images[0];
				button28->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button29->Enabled == true)
			{
				button29->Enabled = false;
				button29->Text = "";
				if (data[29] == 1)
				//	button29->BackColor = System::Drawing::Color::Red;
					button29->BackgroundImage = imageList2->Images[0];
				button29->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button30->Enabled == true)
			{
				button30->Enabled = false;
				button30->Text = "";
				if (data[30] == 1)
					//button30->BackColor = System::Drawing::Color::Red;
					button30->BackgroundImage = imageList2->Images[0];
				button30->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button31->Enabled == true)
			{
				button31->Enabled = false;
				button31->Text = "";
				if (data[31] == 1)
					//button31->BackColor = System::Drawing::Color::Red;
					button31->BackgroundImage = imageList2->Images[0];
				    button31->BackgroundImageLayout = ImageLayout::Stretch;
			}
			if (button32->Enabled == true)
			{
				button32->Enabled = false;
				button32->Text = "";
				if (data[32] == 1)
					//button32->BackColor = System::Drawing::Color::Red;
					button32->BackgroundImage = imageList2->Images[0];
				button32->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button33->Enabled == true)
			{
				button33->Enabled = false;
				button33->Text = "";
				if (data[33] == 1)
				//	button33->BackColor = System::Drawing::Color::Red;
					button33->BackgroundImage = imageList2->Images[0];
				button33->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button34->Enabled == true)
			{
				button34->Enabled = false;
				button34->Text = "";
				if (data[34] == 1)
				//	button34->BackColor = System::Drawing::Color::Red;
					button34->BackgroundImage = imageList2->Images[0];
				button34->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button35->Enabled == true)
			{
				button35->Enabled = false;
				button35->Text = "";
				if (data[35] == 1)
				//	button35->BackColor = System::Drawing::Color::Red;
					button35->BackgroundImage = imageList2->Images[0];
				button35->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button36->Enabled == true)
			{
				button36->Enabled = false;
				button36->Text = "";
				if (data[36] == 1)
				//	button36->BackColor = System::Drawing::Color::Red;
					button36->BackgroundImage = imageList2->Images[0];
				button36->BackgroundImageLayout = ImageLayout::Stretch;


			}
		}
public: Void Win()
{
	button38->Visible = true;
	if (data[1] == 1)
	{
		button1->Enabled = false;
		button1->BackColor = System::Drawing::Color::Red;
		button1->Text = "";
	}
	if (data[2] == 1)
	{
		button2->Enabled = false;
		button2->BackColor = System::Drawing::Color::Red;
		button2->Text = "";
	}
	if (data[3] == 1)
	{
		button3->Enabled = false;
		button3->BackColor = System::Drawing::Color::Red;
		button3->Text = "";
	}
	if (data[4] == 1)
	{
		button4->Enabled = false;
		button4->BackColor = System::Drawing::Color::Red;
		button4->Text = "";
	}
	if (data[5] == 1)
	{
		button5->Enabled = false;
		button5->BackColor = System::Drawing::Color::Red;
		button5->Text = "";
	}
	if (data[6] == 1)
	{
		button6->Enabled = false;
		button6->BackColor = System::Drawing::Color::Red;
		button6->Text = "";
	}
	if (data[7] == 1)
	{
		button7->Enabled = false;
		button7->BackColor = System::Drawing::Color::Red;
		button7->Text = "";
	}
	if (data[8] == 1)
	{
		button8->Enabled = false;
		button8->BackColor = System::Drawing::Color::Red;
		button8->Text = "";
	}
	if (data[9] == 1)
	{
		button9->Enabled = false;
		button9->BackColor = System::Drawing::Color::Red;
		button9->Text = "";
	}
	if (data[10] == 1)
	{
		button10->Enabled = false;
		button10->BackColor = System::Drawing::Color::Red;
		button10->Text = "";
	}
	if (data[11] == 1)
	{
		button11->Enabled = false;
		button11->BackColor = System::Drawing::Color::Red;
		button11->Text = "";
	}
	if (data[12] == 1)
	{
		button12->Enabled = false;
		button12->BackColor = System::Drawing::Color::Red;
		button12->Text = "";
	}
	if (data[13] == 1)
	{
		button13->Enabled = false;
		button13->BackColor = System::Drawing::Color::Red;
		button13->Text = "";
	}
	if (data[14] == 1)
	{
		button14->Enabled = false;
		button14->BackColor = System::Drawing::Color::Red;
		button14->Text = "";
	}
	if (data[15] == 1)
	{
		button15->Enabled = false;
		button15->BackColor = System::Drawing::Color::Red;
		button15->Text = "";
	}
	if (data[16] == 1)
	{
		button16->Enabled = false;
		button16->BackColor = System::Drawing::Color::Red;
		button16->Text = "";
	}
	if (data[17] == 1)
	{
		button17->Enabled = false;
		button17->BackColor = System::Drawing::Color::Red;
		button17->Text = "";
	}
	if (data[18] == 1)
	{
		button18->Enabled = false;
		button18->BackColor = System::Drawing::Color::Red;
		button18->Text = "";
	}
	if (data[19] == 1)
	{
		button19->Enabled = false;
		button19->BackColor = System::Drawing::Color::Red;
		button19->Text = "";
	}
	if (data[20] == 1)
	{
		button20->Enabled = false;
		button20->BackColor = System::Drawing::Color::Red;
		button20->Text = "";
	}
	if (data[21] == 1)
	{
		button21->Enabled = false;
		button21->BackColor = System::Drawing::Color::Red;
		button21->Text = "";
	}
	if (data[22] == 1)
	{
		button22->Enabled = false;
		button22->BackColor = System::Drawing::Color::Red;
		button22->Text = "";
	}
	if (data[23] == 1)
	{
		button23->Enabled = false;
		button23->BackColor = System::Drawing::Color::Red;
		button23->Text = "";
	}
	if (data[24] == 1)
	{
		button24->Enabled = false;
		button24->BackColor = System::Drawing::Color::Red;
		button24->Text = "";
	}
	if (data[25] == 1)
	{
		button25->Enabled = false;
		button25->BackColor = System::Drawing::Color::Red;
		button25->Text = "";
	}
	if (data[26] == 1)
	{
		button26->Enabled = false;
		button26->BackColor = System::Drawing::Color::Red;
		button26->Text = "";
	}
	if (data[27] == 1)
	{
		button27->Enabled = false;
		button27->BackColor = System::Drawing::Color::Red;
		button27->Text = "";
	}
	if (data[28] == 1)
	{
		button28->Enabled = false;
		button28->BackColor = System::Drawing::Color::Red;
		button28->Text = "";
	}
	if (data[29] == 1)
	{
		button29->Enabled = false;
		button29->BackColor = System::Drawing::Color::Red;
		button29->Text = "";
	}
	if (data[30] == 1)
	{
		button30->Enabled = false;
		button30->BackColor = System::Drawing::Color::Red;
		button30->Text = "";
	}
	if (data[31] == 1)
	{
		button31->Enabled = false;
		button31->BackColor = System::Drawing::Color::Red;
		button31->Text = "";
	}
	if (data[32] == 1)
	{
		button32->Enabled = false;
		button32->BackColor = System::Drawing::Color::Red;
		button32->Text = "";
	}
	if (data[33] == 1)
	{
		button33->Enabled = false;
		button33->BackColor = System::Drawing::Color::Red;
		button33->Text = "";
	}
	if (data[34] == 1)
	{
		button34->Enabled = false;
		button34->BackColor = System::Drawing::Color::Red;
		button34->Text = "";
	}
	if (data[35] == 1)
	{
		button35->Enabled = false;
		button35->BackColor = System::Drawing::Color::Red;
		button35->Text = "";
	}
	if (data[36] == 1)
	{
		button36->Enabled = false;
		button36->BackColor = System::Drawing::Color::Red;
		button36->Text = "";
	}
}


public: Void Uncovertile(int x)
{
	move++;
	int k = 0;
	if (x == 1)
	{
		button1->Enabled = false;
		button1->Text = "";
		if (data[1] == 1)
		{
			button1->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[2] == 1)
				k++;
			if (data[7] == 1)
				k++;
			if (data[8] == 1)
				k++;
			if (k == 0)
			{
				if (button2->Enabled == true)
					Uncovertile(2);
				if (button7->Enabled == true)
					Uncovertile(7);
				if (button8->Enabled == true)
					Uncovertile(8);
			}

		}
		if (k != 0)
		{
			button1->Text = System::Convert::ToString(k);
		}
	}
	if (x == 2)
	{
		button2->Enabled = false;
		button2->Text = "";
		if (data[2] == 1)
		{
			button2->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[1] == 1)
				k++;
			if (data[3] == 1)
				k++;
			if (data[7] == 1)
				k++;
			if (data[8] == 1)
				k++;
			if (data[9] == 1)
				k++;
			if (k == 0)
			{
				if (button1->Enabled == true)
					Uncovertile(1);
				if (button3->Enabled == true)
					Uncovertile(3);
				if (button7->Enabled == true)
					Uncovertile(7);
				if (button8->Enabled == true)
					Uncovertile(8);
				if (button9->Enabled == true)
					Uncovertile(9);
			}

		}
		if (k != 0)
		{
			button2->Text = System::Convert::ToString(k);
		}
	}
	if (x == 3)
	{
		button3->Enabled = false;
		button3->Text = "";
		if (data[3] == 1)
		{
			button3->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[2] == 1)
				k++;
			if (data[8] == 1)
				k++;
			if (data[9] == 1)
				k++;
			if (data[10] == 1)
				k++;
			if (data[4] == 1)
				k++;
			if (k == 0)
			{
				if (button2->Enabled == true)
					Uncovertile(2);
				if (button8->Enabled == true)
					Uncovertile(8);
				if (button9->Enabled == true)
					Uncovertile(9);
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button4->Enabled == true)
					Uncovertile(4);
			}

		}
		if (k != 0)
		{
			button3->Text = System::Convert::ToString(k);
		}
	}
	if (x == 4)
	{
		button4->Enabled = false;
		button4->Text = "";
		if (data[4] == 1)
		{
			button4->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[3] == 1)
				k++;
			if (data[9] == 1)
				k++;
			if (data[10] == 1)
				k++;
			if (data[11] == 1)
				k++;
			if (data[5] == 1)
				k++;
			if (k == 0)
			{
				if (button3->Enabled == true)
					Uncovertile(3);
				if (button9->Enabled == true)
					Uncovertile(9);
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button5->Enabled == true)
					Uncovertile(5);
			}

		}
		if (k != 0)
		{
			button4->Text = System::Convert::ToString(k);
		}
	}
	if (x == 5)
	{
		button5->Enabled = false;
		button5->Text = "";
		if (data[5] == 1)
		{
			button5->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

		}
		else
		{
			button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[4] == 1)
				k++;
			if (data[10] == 1)
				k++;
			if (data[11] == 1)
				k++;
			if (data[12] == 1)
				k++;
			if (data[6] == 1)
				k++;
			if (k == 0)
			{
				if (button4->Enabled == true)
					Uncovertile(4);
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button12->Enabled == true)
					Uncovertile(12);
				if (button6->Enabled == true)
					Uncovertile(6);
			}

		}
		if (k != 0)
		{
			button5->Text = System::Convert::ToString(k);
		}
	}
	if (x == 6)
	{
		button6->Enabled = false;
		button6->Text = "";
		if (data[6] == 1)
		{
			button6->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[5] == 1)
				k++;
			if (data[11] == 1)
				k++;
			if (data[12] == 1)
				k++;
			if (k == 0)
			{
				if (button5->Enabled == true)
					Uncovertile(5);
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button12->Enabled == true)
					Uncovertile(12);
			}

		}
		if (k != 0)
		{
			button6->Text = System::Convert::ToString(k);
		}
	}
	if (x == 7)
	{
		button7->Enabled = false;
		button7->Text = "";
		if (data[7] == 1)
		{
			button7->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[1] == 1)
				k++;
			if (data[2] == 1)
				k++;
			if (data[8] == 1)
				k++;
			if (data[14] == 1)
				k++;
			if (data[13] == 1)
				k++;
			if (k == 0)
			{
				if (button1->Enabled == true)
					Uncovertile(1);
				if (button2->Enabled == true)
					Uncovertile(2);
				if (button8->Enabled == true)
					Uncovertile(8);
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button13->Enabled == true)
					Uncovertile(13);
			}

		}
		if (k != 0)
		{
			button7->Text = System::Convert::ToString(k);
		}

	}
	if (x == 8)
	{
		button8->Enabled = false;
		button8->Text = "";
		if (data[8] == 1)
		{
			button8->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[1] == 1)
				k++;
			if (data[2] == 1)
				k++;
			if (data[3] == 1)
				k++;
			if (data[7] == 1)
				k++;
			if (data[9] == 1)
				k++;
			if (data[13] == 1)
				k++;
			if (data[14] == 1)
				k++;
			if (data[15] == 1)
				k++;
			if (k == 0)
			{
				if (button1->Enabled == true)
					Uncovertile(1);
				if (button2->Enabled == true)
					Uncovertile(2);
				if (button3->Enabled == true)
					Uncovertile(3);
				if (button7->Enabled == true)
					Uncovertile(7);
				if (button9->Enabled == true)
					Uncovertile(9);
				if (button13->Enabled == true)
					Uncovertile(13);
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button15->Enabled == true)
					Uncovertile(15);
			}
		}
		if (k != 0)
		{
			button8->Text = System::Convert::ToString(k);
		}
	}
	if (x == 9)
	{
		button9->Enabled = false;
		button9->Text = "";
		if (data[9] == 1)
		{
			button9->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[2] == 1)
				k++;
			if (data[3] == 1)
				k++;
			if (data[4] == 1)
				k++;
			if (data[8] == 1)
				k++;
			if (data[10] == 1)
				k++;
			if (data[14] == 1)
				k++;
			if (data[15] == 1)
				k++;
			if (data[16] == 1)
				k++;
			if (k == 0)
			{
				if (button2->Enabled == true)
					Uncovertile(2);
				if (button3->Enabled == true)
					Uncovertile(3);
				if (button4->Enabled == true)
					Uncovertile(4);
				if (button8->Enabled == true)
					Uncovertile(8);
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button15->Enabled == true)
					Uncovertile(15);
				if (button16->Enabled == true)
					Uncovertile(16);
			}

		}
		if (k != 0)
		{
			button9->Text = System::Convert::ToString(k);
		}

	}
	if (x == 10)
	{
		button10->Enabled = false;
		button10->Text = "";
		if (data[10] == 1)
		{
			button10->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[3] == 1)
				k++;
			if (data[4] == 1)
				k++;
			if (data[5] == 1)
				k++;
			if (data[9] == 1)
				k++;
			if (data[11] == 1)
				k++;
			if (data[15] == 1)
				k++;
			if (data[16] == 1)
				k++;
			if (data[17] == 1)
				k++;
			if (k == 0)
			{
				if (button3->Enabled == true)
					Uncovertile(3);
				if (button4->Enabled == true)
					Uncovertile(4);
				if (button5->Enabled == true)
					Uncovertile(5);
				if (button9->Enabled == true)
					Uncovertile(9);
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button15->Enabled == true)
					Uncovertile(15);
				if (button16->Enabled == true)
					Uncovertile(16);
				if (button17->Enabled == true)
					Uncovertile(17);
			}
		}
		if (k != 0)
		{
			button10->Text = System::Convert::ToString(k);
		}
	}
	if (x == 11)
	{
		button11->Enabled = false;
		button11->Text = "";
		if (data[11] == 1)
		{
			button11->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[4] == 1)
				k++;
			if (data[5] == 1)
				k++;
			if (data[6] == 1)
				k++;
			if (data[10] == 1)
				k++;
			if (data[12] == 1)
				k++;
			if (data[16] == 1)
				k++;
			if (data[17] == 1)
				k++;
			if (data[18] == 1)
				k++;
			if (k == 0)
			{
				if (button4->Enabled == true)
					Uncovertile(4);
				if (button5->Enabled == true)
					Uncovertile(5);
				if (button6->Enabled == true)
					Uncovertile(6);
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button12->Enabled == true)
					Uncovertile(12);
				if (button16->Enabled == true)
					Uncovertile(16);
				if (button17->Enabled == true)
					Uncovertile(17);
				if (button18->Enabled == true)
					Uncovertile(18);
			}
		}
		if (k != 0)
		{
			button11->Text = System::Convert::ToString(k);
		}
	}
	if (x == 12)
	{
		button12->Enabled = false;
		button12->Text = "";
		if (data[12] == 1)
		{
			button12->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[5] == 1)
				k++;
			if (data[6] == 1)
				k++;
			if (data[11] == 1)
				k++;
			if (data[17] == 1)
				k++;
			if (data[18] == 1)
				k++;
			if (k == 0)
			{
				if (button5->Enabled == true)
					Uncovertile(5);
				if (button6->Enabled == true)
					Uncovertile(6);
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button17->Enabled == true)
					Uncovertile(17);
				if (button18->Enabled == true)
					Uncovertile(18);
			}
		}
		if (k != 0)
		{
			button12->Text = System::Convert::ToString(k);
		}
	}
	if (x == 13)
	{
		button13->Enabled = false;
		button13->Text = "";
		if (data[13] == 1)
		{
			button13->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[7] == 1)
				k++;
			if (data[8] == 1)
				k++;
			if (data[14] == 1)
				k++;
			if (data[20] == 1)
				k++;
			if (data[19] == 1)
				k++;
			if (k == 0)
			{
				if (button7->Enabled == true)
					Uncovertile(7);
				if (button8->Enabled == true)
					Uncovertile(8);
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button19->Enabled == true)
					Uncovertile(19);
			}
		}
		if (k != 0)
		{
			button13->Text = System::Convert::ToString(k);
		}
	}
	if (x == 14)
	{
		button14->Enabled = false;
		button14->Text = "";
		if (data[14] == 1)
		{
			button14->BackColor = System::Drawing::SystemColors::GrayText;

			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[7] == 1)
				k++;
			if (data[8] == 1)
				k++;
			if (data[9] == 1)
				k++;
			if (data[13] == 1)
				k++;
			if (data[15] == 1)
				k++;
			if (data[19] == 1)
				k++;
			if (data[20] == 1)
				k++;
			if (data[21] == 1)
				k++;
			if (k == 0)
			{
				if (button7->Enabled == true)
					Uncovertile(7);
				if (button8->Enabled == true)
					Uncovertile(8);
				if (button9->Enabled == true)
					Uncovertile(9);
				if (button13->Enabled == true)
					Uncovertile(13);
				if (button15->Enabled == true)
					Uncovertile(15);
				if (button19->Enabled == true)
					Uncovertile(19);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button21->Enabled == true)
					Uncovertile(21);
			}
		}
		if (k != 0)
		{
			button14->Text = System::Convert::ToString(k);
		}
	}
	if (x == 15)
	{
		button15->Enabled = false;
		button15->Text = "";
		if (data[15] == 1)
		{
			button15->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[8] == 1)
				k++;
			if (data[9] == 1)
				k++;
			if (data[10] == 1)
				k++;
			if (data[14] == 1)
				k++;
			if (data[16] == 1)
				k++;
			if (data[20] == 1)
				k++;
			if (data[21] == 1)
				k++;
			if (data[22] == 1)
				k++;
			if (k == 0)
			{
				if (button8->Enabled == true)
					Uncovertile(8);
				if (button9->Enabled == true)
					Uncovertile(9);
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button16->Enabled == true)
					Uncovertile(16);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button21->Enabled == true)
					Uncovertile(21);
				if (button22->Enabled == true)
					Uncovertile(22);
			}
		}
		if (k != 0)
		{
			button15->Text = System::Convert::ToString(k);
		}
	}
	if (x == 16)
	{
		button16->Enabled = false;
		button16->Text = "";
		if (data[16] == 1)
		{
			button16->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[9] == 1)
				k++;
			if (data[10] == 1)
				k++;
			if (data[11] == 1)
				k++;
			if (data[15] == 1)
				k++;
			if (data[17] == 1)
				k++;
			if (data[21] == 1)
				k++;
			if (data[22] == 1)
				k++;
			if (data[23] == 1)
				k++;
			if (k == 0)
			{
				if (button9->Enabled == true)
					Uncovertile(9);
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button15->Enabled == true)
					Uncovertile(15);
				if (button17->Enabled == true)
					Uncovertile(17);
				if (button21->Enabled == true)
					Uncovertile(21);
				if (button22->Enabled == true)
					Uncovertile(22);
				if (button23->Enabled == true)
					Uncovertile(23);
			}
		}
		if (k != 0)
		{
			button16->Text = System::Convert::ToString(k);
		}

	}
	if (x == 17)
	{
		button17->Enabled = false;
		button17->Text = "";
		if (data[17] == 1)
		{
			button17->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button17->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[10] == 1)
				k++;
			if (data[11] == 1)
				k++;
			if (data[12] == 1)
				k++;
			if (data[16] == 1)
				k++;
			if (data[18] == 1)
				k++;
			if (data[22] == 1)
				k++;
			if (data[23] == 1)
				k++;
			if (data[24] == 1)
				k++;
			if (k == 0)
			{
				if (button10->Enabled == true)
					Uncovertile(10);
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button12->Enabled == true)
					Uncovertile(12);
				if (button16->Enabled == true)
					Uncovertile(16);
				if (button18->Enabled == true)
					Uncovertile(18);
				if (button22->Enabled == true)
					Uncovertile(22);
				if (button23->Enabled == true)
					Uncovertile(23);
				if (button24->Enabled == true)
					Uncovertile(24);
			}
		}
		if (k != 0)
		{
			button17->Text = System::Convert::ToString(k);
		}
	}
	if (x == 18)
	{
		button18->Enabled = false;
		button18->Text = "";
		if (data[18] == 1)
		{
			button18->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[11] == 1)
				k++;
			if (data[12] == 1)
				k++;
			if (data[17] == 1)
				k++;
			if (data[23] == 1)
				k++;
			if (data[24] == 1)
				k++;
			if (k == 0)
			{
				if (button11->Enabled == true)
					Uncovertile(11);
				if (button12->Enabled == true)
					Uncovertile(12);
				if (button17->Enabled == true)
					Uncovertile(17);
				if (button23->Enabled == true)
					Uncovertile(23);
				if (button24->Enabled == true)
					Uncovertile(24);
			}
		}
		if (k != 0)
		{
			button18->Text = System::Convert::ToString(k);
		}
	}
	if (x == 19)
	{
		button19->Enabled = false;
		button19->Text = "";
		if (data[19] == 1)
		{
			button19->BackColor = System::Drawing::SystemColors::GrayText;
		/*	label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[13] == 1)
				k++;
			if (data[14] == 1)
				k++;
			if (data[20] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[25] == 1)
				k++;
			if (k == 0)
			{
				if (button13->Enabled == true)
					Uncovertile(13);
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button25->Enabled == true)
					Uncovertile(25);
			}
		}
		if (k != 0)
		{
			button19->Text = System::Convert::ToString(k);
		}
	}
	if (x == 20)
	{
		button20->Enabled = false;
		button20->Text = "";
		if (data[20] == 1)
		{
			button20->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
		}
		else
		{
			button20->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[13] == 1)
				k++;
			if (data[14] == 1)
				k++;
			if (data[15] == 1)
				k++;
			if (data[19] == 1)
				k++;
			if (data[21] == 1)
				k++;
			if (data[25] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (k == 0)
			{
				if (button13->Enabled == true)
					Uncovertile(13);
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button15->Enabled == true)
					Uncovertile(15);
				if (button19->Enabled == true)
					Uncovertile(19);
				if (button21->Enabled == true)
					Uncovertile(21);
				if (button25->Enabled == true)
					Uncovertile(25);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button27->Enabled == true)
					Uncovertile(27);
			}
		}
		if (k != 0)
		{
			button20->Text = System::Convert::ToString(k);
		}
	}
	if (x == 21)
	{
		button21->Enabled = false;
		button21->Text = "";
		if (data[21] == 1)
		{
			button21->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button21->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[14] == 1)
				k++;
			if (data[15] == 1)
				k++;
			if (data[16] == 1)
				k++;
			if (data[20] == 1)
				k++;
			if (data[22] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[27] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (k == 0)
			{
				if (button14->Enabled == true)
					Uncovertile(14);
				if (button15->Enabled == true)
					Uncovertile(15);
				if (button16->Enabled == true)
					Uncovertile(16);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button22->Enabled == true)
					Uncovertile(22);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button27->Enabled == true)
					Uncovertile(27);
				if (button28->Enabled == true)
					Uncovertile(28);
			}
		}
		if (k != 0)
		{
			button21->Text = System::Convert::ToString(k);
		}
	}
	if (x == 22)
	{
		button22->Enabled = false;
		button22->Text = "";
		if (data[22] == 1)
		{
			button22->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button22->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[15] == 1)
				k++;
			if (data[16] == 1)
				k++;
			if (data[17] == 1)
				k++;
			if (data[21] == 1)
				k++;
			if (data[23] == 1)
				k++;
			if (data[27] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (k == 0)
			{
				if (button15->Enabled == true)
					Uncovertile(15);
				if (button16->Enabled == true)
					Uncovertile(16);
				if (button17->Enabled == true)
					Uncovertile(17);
				if (button21->Enabled == true)
					Uncovertile(21);
				if (button23->Enabled == true)
					Uncovertile(23);
				if (button27->Enabled == true)
					Uncovertile(27);
				if (button28->Enabled == true)
					Uncovertile(28);
				if (button29->Enabled == true)
					Uncovertile(29);
			}
		}
		if (k != 0)
		{
			button22->Text = System::Convert::ToString(k);
		}
	}
	if (x == 23)
	{
		button23->Enabled = false;
		button23->Text = "";
		if (data[23] == 1)
		{
			button23->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button23->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[16] == 1)
				k++;
			if (data[17] == 1)
				k++;
			if (data[18] == 1)
				k++;
			if (data[22] == 1)
				k++;
			if (data[24] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (data[30] == 1)
				k++;
			if (k == 0)
			{
				if (button16->Enabled == true)
					Uncovertile(16);
				if (button17->Enabled == true)
					Uncovertile(17);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button22->Enabled == true)
					Uncovertile(22);
				if (button24->Enabled == true)
					Uncovertile(24);
				if (button28->Enabled == true)
					Uncovertile(28);
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button30->Enabled == true)
					Uncovertile(30);
			}
		}
		if (k != 0)
		{
			button23->Text = System::Convert::ToString(k);
		}
	}
	if (x == 24)
	{
		button24->Enabled = false;
		button24->Text = "";
		if (data[24] == 1)
		{
			button24->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button24->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[17] == 1)
				k++;
			if (data[18] == 1)
				k++;
			if (data[23] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (data[30] == 1)
				k++;
			if (k == 0)
			{
				if (button17->Enabled == true)
					Uncovertile(17);
				if (button18->Enabled == true)
					Uncovertile(18);
				if (button23->Enabled == true)
					Uncovertile(23);
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button30->Enabled == true)
					Uncovertile(30);
			}
		}
		if (k != 0)
		{
			button24->Text = System::Convert::ToString(k);
		}
	}
	if (x == 25)
	{
		button25->Enabled = false;
		button25->Text = "";
		if (data[25] == 1)
		{
			button25->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button25->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[19] == 1)
				k++;
			if (data[20] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[31] == 1)
				k++;
			if (data[32] == 1)
				k++;
			if (k == 0)
			{
				if (button19->Enabled == true)
					Uncovertile(19);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button31->Enabled == true)
					Uncovertile(31);
				if (button32->Enabled == true)
					Uncovertile(32);
			}
		}
		if (k != 0)
		{
			button25->Text = System::Convert::ToString(k);
		}
	}
	if (x == 26)
	{
		button26->Enabled = false;
		button26->Text = "";
		if (data[26] == 1)
		{
			button26->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button26->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[19] == 1)
				k++;
			if (data[20] == 1)
				k++;
			if (data[21] == 1)
				k++;
			if (data[25] == 1)
				k++;
			if (data[27] == 1)
				k++;
			if (data[31] == 1)
				k++;
			if (data[32] == 1)
				k++;
			if (data[33] == 1)
				k++;
			if (k == 0)
			{
				if (button19->Enabled == true)
					Uncovertile(19);
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button21->Enabled == true)
					Uncovertile(21);
				if (button25->Enabled == true)
					Uncovertile(25);
				if (button27->Enabled == true)
					Uncovertile(27);
				if (button31->Enabled == true)
					Uncovertile(31);
				if (button32->Enabled == true)
					Uncovertile(32);
				if (button33->Enabled == true)
					Uncovertile(33);
			}
		}
		if (k != 0)
		{
			button26->Text = System::Convert::ToString(k);
		}
	}
	if (x == 27)
	{
		button27->Enabled = false;
		button27->Text = "";
		if (data[27] == 1)
		{
			button27->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button27->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[20] == 1)
				k++;
			if (data[21] == 1)
				k++;
			if (data[22] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (data[32] == 1)
				k++;
			if (data[33] == 1)
				k++;
			if (data[34] == 1)
				k++;
			if (k == 0)
			{
				if (button20->Enabled == true)
					Uncovertile(20);
				if (button21->Enabled == true)
					Uncovertile(21);
				if (button22->Enabled == true)
					Uncovertile(22);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button28->Enabled == true)
					Uncovertile(28);
				if (button32->Enabled == true)
					Uncovertile(32);
				if (button33->Enabled == true)
					Uncovertile(33);
				if (button34->Enabled == true)
					Uncovertile(34);
			}
		}
		if (k != 0)
		{
			button27->Text = System::Convert::ToString(k);
		}

	}
	if (x == 28)
	{
		button28->Enabled = false;
		button28->Text = "";
		if (data[28] == 1)
		{
			button28->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button28->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[21] == 1)
				k++;
			if (data[22] == 1)
				k++;
			if (data[23] == 1)
				k++;
			if (data[27] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (data[33] == 1)
				k++;
			if (data[34] == 1)
				k++;
			if (data[35] == 1)
				k++;
			if (k == 0)
			{
				if (button21->Enabled == true)
					Uncovertile(21);
				if (button22->Enabled == true)
					Uncovertile(22);
				if (button23->Enabled == true)
					Uncovertile(23);
				if (button27->Enabled == true)
					Uncovertile(27);
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button33->Enabled == true)
					Uncovertile(33);
				if (button34->Enabled == true)
					Uncovertile(34);
				if (button35->Enabled == true)
					Uncovertile(35);
			}
		}
		if (k != 0)
		{
			button28->Text = System::Convert::ToString(k);
		}

	}
	if (x == 29)
	{
		button29->Enabled = false;
		button29->Text = "";
		if (data[29] == 1)
		{
			button29->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button29->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[22] == 1)
				k++;
			if (data[23] == 1)
				k++;
			if (data[24] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (data[30] == 1)
				k++;
			if (data[34] == 1)
				k++;
			if (data[35] == 1)
				k++;
			if (data[36] == 1)
				k++;
			if (k == 0)
			{
				if (button22->Enabled == true)
					Uncovertile(22);
				if (button23->Enabled == true)
					Uncovertile(23);
				if (button24->Enabled == true)
					Uncovertile(24);
				if (button28->Enabled == true)
					Uncovertile(28);
				if (button30->Enabled == true)
					Uncovertile(30);
				if (button34->Enabled == true)
					Uncovertile(34);
				if (button35->Enabled == true)
					Uncovertile(35);
				if (button36->Enabled == true)
					Uncovertile(36);
			}
		}
		if (k != 0)
		{
			button29->Text = System::Convert::ToString(k);
		}

	}
	if (x == 30)
	{
		button30->Enabled = false;
		button30->Text = "";
		if (data[30] == 1)
		{
			button30->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button30->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[23] == 1)
				k++;
			if (data[24] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (data[35] == 1)
				k++;
			if (data[36] == 1)
				k++;
			if (k == 0)
			{
				if (button23->Enabled == true)
					Uncovertile(23);
				if (button24->Enabled == true)
					Uncovertile(24);
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button35->Enabled == true)
					Uncovertile(35);
				if (button36->Enabled == true)
					Uncovertile(36);
			}
		}
		if (k != 0)
		{
			button30->Text = System::Convert::ToString(k);
		}

	}
	if (x == 31)
	{
		button31->Enabled = false;
		button31->Text = "";
		if (data[31] == 1)
		{
			button31->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button31->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[25] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[32] == 1)
				k++;
			if (k == 0)
			{
				if (button25->Enabled == true)
					Uncovertile(25);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button32->Enabled == true)
					Uncovertile(32);
			}
		}
		if (k != 0)
		{
			button31->Text = System::Convert::ToString(k);
		}

	}
	if (x == 32)
	{
		button32->Enabled = false;
		button32->Text = "";
		if (data[32] == 1)
		{
			button32->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button32->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[31] == 1)
				k++;
			if (data[25] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[27] == 1)
				k++;
			if (data[33] == 1)
				k++;
			if (k == 0)
			{
				if (button31->Enabled == true)
					Uncovertile(31);
				if (button25->Enabled == true)
					Uncovertile(25);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button27->Enabled == true)
					Uncovertile(27);
				if (button33->Enabled == true)
					Uncovertile(33);
			}
		}
		if (k != 0)
		{
			button32->Text = System::Convert::ToString(k);
		}
	}
	if (x == 33)
	{
		button33->Enabled = false;
		button33->Text = "";
		if (data[33] == 1)
		{
			button33->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button33->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[32] == 1)
				k++;
			if (data[26] == 1)
				k++;
			if (data[27] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (data[34] == 1)
				k++;
			if (k == 0)
			{
				if (button32->Enabled == true)
					Uncovertile(32);
				if (button26->Enabled == true)
					Uncovertile(26);
				if (button27->Enabled == true)
					Uncovertile(27);
				if (button28->Enabled == true)
					Uncovertile(28);
				if (button34->Enabled == true)
					Uncovertile(34);
			}
		}
		if (k != 0)
		{
			button33->Text = System::Convert::ToString(k);
		}
	}
	if (x == 34)
	{
		button34->Enabled = false;
		button34->Text = "";
		if (data[34] == 1)
		{
			button34->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button34->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[33] == 1)
				k++;
			if (data[27] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (data[35] == 1)
				k++;
			if (k == 0)
			{
				if (button33->Enabled == true)
					Uncovertile(33);
				if (button27->Enabled == true)
					Uncovertile(27);
				if (button28->Enabled == true)
					Uncovertile(28);
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button35->Enabled == true)
					Uncovertile(35);
			}
		}
		if (k != 0)
		{
			button34->Text = System::Convert::ToString(k);
		}
	}
	if (x == 35)
	{
		button35->Enabled = false;
		button35->Text = "";
		if (data[35] == 1)
		{
			button35->BackColor = System::Drawing::SystemColors::GrayText;
		/*	label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button35->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[34] == 1)
				k++;
			if (data[28] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (data[30] == 1)
				k++;
			if (data[36] == 1)
				k++;
			if (k == 0)
			{
				if (button34->Enabled == true)
					Uncovertile(34);
				if (button28->Enabled == true)
					Uncovertile(28);
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button30->Enabled == true)
					Uncovertile(30);
				if (button36->Enabled == true)
					Uncovertile(36);
			}
		}
		if (k != 0)
		{
			button35->Text = System::Convert::ToString(k);
		}
	}
	if (x == 36)
	{
		button36->Enabled = false;
		button36->Text = "";
		if (data[36] == 1)
		{
			button36->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button36->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[35] == 1)
				k++;
			if (data[29] == 1)
				k++;
			if (data[30] == 1)
				k++;
			if (k == 0)
			{
				if (button35->Enabled == true)
					Uncovertile(35);
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button30->Enabled == true)
					Uncovertile(30);
			}
		}
		if (k != 0)
		{
			button36->Text = System::Convert::ToString(k);
		}
	}
	if (move == 29 && bomb == 0 && Second<30)//29= nb de case - nbmines
	{   
		MessageBox::Show("You Win!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
		checkBox1->Visible = false;
		/*label2->Text = "You Win!";
		label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;*/
		Win();
	}
	if (bomb != 0 || Second==30)
		Lose();

}


public: Void Bombs()
{

	for (int i = 0; i < 40; i++)
	{
		data[i] = 0;
	}
	int k = 1;
	srand(time(NULL));
	while (k <= 7)
	{

		int c = rand() % 36 + 1;
		if (data[c + 1] == 0)
		{
			data[c + 1] = 1;
			k++;
		}
	}
}

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (button37->Enabled == false)
		{
			if (checkBox1->Checked == true)
			{
				button1->BackgroundImage = imageList2->Images[1];
				button1->BackgroundImageLayout = ImageLayout::Stretch;
			}
			else
				Uncovertile(1);

		}
		else {
			MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button37->Enabled == false)
		{
			if (checkBox1->Checked == true)
			{
				button2->BackgroundImage = imageList2->Images[1];
				button2->BackgroundImageLayout = ImageLayout::Stretch;
			}
			else
				Uncovertile(2);

		}
		else {
			MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button3->BackgroundImage = imageList2->Images[1];
			button3->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(3);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button4->BackgroundImage = imageList2->Images[1];
			button4->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(4);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	
	
}
	   

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button5->BackgroundImage = imageList2->Images[1];
			button5->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(5);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button6->BackgroundImage = imageList2->Images[1];
			button6->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(6);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button7->BackgroundImage = imageList2->Images[1];
			button7->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(7);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button8->BackgroundImage = imageList2->Images[1];
			button8->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(8);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button9->BackgroundImage = imageList2->Images[1];
			button9->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(9);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button10->BackgroundImage = imageList2->Images[1];
			button10->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(10);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button11->BackgroundImage = imageList2->Images[1];
			button11->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(11);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button12->BackgroundImage = imageList2->Images[1];
			button12->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(12);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button13->BackgroundImage = imageList2->Images[1];
			button13->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(13);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button14->BackgroundImage = imageList2->Images[1];
			button14->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(14);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button15->BackgroundImage = imageList2->Images[1];
			button15->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(15);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button16->BackgroundImage = imageList2->Images[1];
			button16->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(16);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button17->BackgroundImage = imageList2->Images[1];
			button17->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(17);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button18->BackgroundImage = imageList2->Images[1];
			button18->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(18);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button19->BackgroundImage = imageList2->Images[1];
			button19->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(19);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button20->BackgroundImage = imageList2->Images[1];
			button20->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(20);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button21->BackgroundImage = imageList2->Images[1];
			button21->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(21);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button22->BackgroundImage = imageList2->Images[1];
			button22->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(22);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button23->BackgroundImage = imageList2->Images[1];
			button23->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(23);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button24->BackgroundImage = imageList2->Images[1];
			button24->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(24);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button25->BackgroundImage = imageList2->Images[1];
			button25->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(25);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button26->BackgroundImage = imageList2->Images[1];
			button26->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(26);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button27->BackgroundImage = imageList2->Images[1];
			button27->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(27);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button28->BackgroundImage = imageList2->Images[1];
			button28->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(28);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button29->BackgroundImage = imageList2->Images[1];
			button29->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(29);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button30->BackgroundImage = imageList2->Images[1];
			button30->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(30);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button31->BackgroundImage = imageList2->Images[1];
			button31->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(31);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button32->BackgroundImage = imageList2->Images[1];
			button32->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(32);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button33->BackgroundImage = imageList2->Images[1];
			button33->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(33);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button34->BackgroundImage = imageList2->Images[1];
			button34->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(34);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button35->BackgroundImage = imageList2->Images[1];
			button35->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(35);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button37->Enabled == false)
	{
		if (checkBox1->Checked == true)
		{
			button36->BackgroundImage = imageList2->Images[1];
			button36->BackgroundImageLayout = ImageLayout::Stretch;
		}
		else
			Uncovertile(36);

	}
	else {
		MessageBox::Show(" start button is unclicked", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {

	//timer1->Enabled = true;
	
	Bombs();
	
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;
	button4->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	button8->Visible = true;
	button9->Visible = true;
	button10->Visible = true;
	button11->Visible = true;
	button12->Visible = true;
	button13->Visible = true;
	button14->Visible = true;
	button15->Visible = true;
	button16->Visible = true;
	button17->Visible = true;
	button18->Visible = true;
	button19->Visible = true;
	button20->Visible = true;
	button21->Visible = true;
	button22->Visible = true;
	button23->Visible = true;
	button24->Visible = true;
	button25->Visible = true;
	button26->Visible = true;
	button27->Visible = true;
	button28->Visible = true;
	button29->Visible = true;
	button30->Visible = true;
	button31->Visible = true;
	button32->Visible = true;
	button33->Visible = true;
	button34->Visible = true;
	button35->Visible = true;
	button36->Visible = true;
	checkBox1->Visible = true;

	button37->Enabled = false;
	button37->Visible = false;

};


		
	private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
		
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
/*private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	timer1->Enabled = false; 


	if (button37->Enabled)
	{
		timer1->Enabled = true; 
		timer1->Start();
		//Second++;

	

		if (Second == 10) {

			timer1->Stop();

			Second = 0;
			timer1->Enabled = false;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}


		sec = Convert::ToString(Second);
		min = Convert::ToString(Minute);
		label2->Text = min + ":" + sec;
	}

	
	

	} */
	
/*	if (Second == 0)
	{
		Second = 30;
		


		
	}
	if (Second == 30)

		MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
	  
	  */
	/*if (button37->Enabled == true)
	{
		Second++;
		timer1->Enabled = true;
	}
	*/
	
	

	
   

    

private: System::Void dataGridView2_CellStateChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellStateChangedEventArgs^ e) {

}

private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


/*private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	
		button1->Text = "";
		button1->BackgroundImage = imageList1->Images[0];
	}



	/*houni mithel nnayet les fonctions kima fel main w nseti l background image
	lezem naamel instance
	l include zeda taa kol classe besh nestaamelha
	*/ //play(i);*/



private: System::Void flowLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
	/*level1^ lvl = gcnew level1;
	
	this->Close();
	lvl->Show();*/





	/*button38->Visible = false;
	button1->Enabled = true; button1->Text = ""; button1->BackgroundImage = image
	button2->Enabled = true; button2->Text = ""; button2->BackColor = System::Drawing::SystemColors::Control;
	button3->Enabled = true; button3->Text = ""; button3->BackColor = System::Drawing::SystemColors::Control;
	button4->Enabled = true; button4->Text = ""; button4->BackColor = System::Drawing::SystemColors::Control;
	button5->Enabled = true; button5->Text = ""; button5->BackColor = System::Drawing::SystemColors::Control;
	button6->Enabled = true; button6->Text = ""; button6->BackColor = System::Drawing::SystemColors::Control;
	button7->Enabled = true; button7->Text = ""; button7->BackColor = System::Drawing::SystemColors::Control;
	button8->Enabled = true; button8->Text = ""; button8->BackColor = System::Drawing::SystemColors::Control;
	button9->Enabled = true; button9->Text = ""; button9->BackColor = System::Drawing::SystemColors::Control;
	button10->Enabled = true; button10->Text = ""; button10->BackColor = System::Drawing::SystemColors::Control;
	button11->Enabled = true; button11->Text = ""; button11->BackColor = System::Drawing::SystemColors::Control;
	button12->Enabled = true; button12->Text = ""; button12->BackColor = System::Drawing::SystemColors::Control;
	button13->Enabled = true; button13->Text = ""; button13->BackColor = System::Drawing::SystemColors::Control;
	button14->Enabled = true; button14->Text = ""; button14->BackColor = System::Drawing::SystemColors::Control;
	button15->Enabled = true; button15->Text = ""; button15->BackColor = System::Drawing::SystemColors::Control;
	button16->Enabled = true; button16->Text = ""; button16->BackColor = System::Drawing::SystemColors::Control;
	button17->Enabled = true; button17->Text = ""; button17->BackColor = System::Drawing::SystemColors::Control;
	button18->Enabled = true; button18->Text = ""; button18->BackColor = System::Drawing::SystemColors::Control;
	button19->Enabled = true; button19->Text = ""; button19->BackColor = System::Drawing::SystemColors::Control;
	button20->Enabled = true; button20->Text = ""; button20->BackColor = System::Drawing::SystemColors::Control;
	button21->Enabled = true; button21->Text = ""; button21->BackColor = System::Drawing::SystemColors::Control;
	button22->Enabled = true; button22->Text = ""; button22->BackColor = System::Drawing::SystemColors::Control;
	button23->Enabled = true; button23->Text = ""; button23->BackColor = System::Drawing::SystemColors::Control;
	button24->Enabled = true; button24->Text = ""; button24->BackColor = System::Drawing::SystemColors::Control;
	button25->Enabled = true; button25->Text = ""; button25->BackColor = System::Drawing::SystemColors::Control;
	button26->Enabled = true; button26->Text = ""; button26->BackColor = System::Drawing::SystemColors::Control;
	button27->Enabled = true; button27->Text = ""; button27->BackColor = System::Drawing::SystemColors::Control;
	button28->Enabled = true; button28->Text = ""; button28->BackColor = System::Drawing::SystemColors::Control;
	button29->Enabled = true; button29->Text = ""; button29->BackColor = System::Drawing::SystemColors::Control;
	button30->Enabled = true; button30->Text = ""; button30->BackColor = System::Drawing::SystemColors::Control;
	button31->Enabled = true; button31->Text = ""; button31->BackColor = System::Drawing::SystemColors::Control;
	button32->Enabled = true; button32->Text = ""; button32->BackColor = System::Drawing::SystemColors::Control;
	button33->Enabled = true; button33->Text = ""; button33->BackColor = System::Drawing::SystemColors::Control;
	button34->Enabled = true; button34->Text = ""; button34->BackColor = System::Drawing::SystemColors::Control;
	button35->Enabled = true; button35->Text = ""; button35->BackColor = System::Drawing::SystemColors::Control;
	button36->Enabled = true; button36->Text = ""; button36->BackColor = System::Drawing::SystemColors::Control;
	bomb = 0;
	move = 0;
	label2->Text = "";
	Bombs();*/


private: System::Void level1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
 



