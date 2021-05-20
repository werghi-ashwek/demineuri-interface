#pragma once
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <cliext\vector>

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

	/// <summary>
	/// Description résumée de level2
	/// </summary>
	public ref class level2 : public System::Windows::Forms::Form
	{
		static int Second = 0;
		static int Minute = 0;
		String^ sec;
		String^ min;
		static int move = 0;
		static int bomb = 0;
		vector<int> data;
	
		   
	public:
		level2(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			for (int i = 0; i < 110; i++)
			{
				data.push_back(0);
			}

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~level2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button100;
	private: System::Windows::Forms::Button^ button99;
	private: System::Windows::Forms::Button^ button105;
	private: System::Windows::Forms::Button^ button98;
	private: System::Windows::Forms::Button^ button97;
	private: System::Windows::Forms::Button^ button96;
	private: System::Windows::Forms::Button^ button95;
	private: System::Windows::Forms::Button^ button94;
	private: System::Windows::Forms::Button^ button93;
	private: System::Windows::Forms::Button^ button92;
	private: System::Windows::Forms::Button^ button91;
	private: System::Windows::Forms::Button^ button90;
	private: System::Windows::Forms::Button^ button89;
	private: System::Windows::Forms::Button^ button88;
	private: System::Windows::Forms::Button^ button87;
	private: System::Windows::Forms::Button^ button86;
	private: System::Windows::Forms::Button^ button85;
	private: System::Windows::Forms::Button^ button84;
	private: System::Windows::Forms::Button^ button83;
	private: System::Windows::Forms::Button^ button82;
	private: System::Windows::Forms::Button^ button81;
	private: System::Windows::Forms::Button^ button80;
	private: System::Windows::Forms::Button^ button79;
	private: System::Windows::Forms::Button^ button78;
	private: System::Windows::Forms::Button^ button77;
	private: System::Windows::Forms::Button^ button76;
	private: System::Windows::Forms::Button^ button75;
	private: System::Windows::Forms::Button^ button74;
	private: System::Windows::Forms::Button^ button73;
	private: System::Windows::Forms::Button^ button72;
	private: System::Windows::Forms::Button^ button71;
	private: System::Windows::Forms::Button^ button70;
	private: System::Windows::Forms::Button^ button69;
	private: System::Windows::Forms::Button^ button68;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button101;
	private: System::Windows::Forms::Button^ button102;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Thistle;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button100);
			this->panel1->Controls->Add(this->button99);
			this->panel1->Controls->Add(this->button105);
			this->panel1->Controls->Add(this->button98);
			this->panel1->Controls->Add(this->button97);
			this->panel1->Controls->Add(this->button96);
			this->panel1->Controls->Add(this->button95);
			this->panel1->Controls->Add(this->button94);
			this->panel1->Controls->Add(this->button93);
			this->panel1->Controls->Add(this->button92);
			this->panel1->Controls->Add(this->button91);
			this->panel1->Controls->Add(this->button90);
			this->panel1->Controls->Add(this->button89);
			this->panel1->Controls->Add(this->button88);
			this->panel1->Controls->Add(this->button87);
			this->panel1->Controls->Add(this->button86);
			this->panel1->Controls->Add(this->button85);
			this->panel1->Controls->Add(this->button84);
			this->panel1->Controls->Add(this->button83);
			this->panel1->Controls->Add(this->button82);
			this->panel1->Controls->Add(this->button81);
			this->panel1->Controls->Add(this->button80);
			this->panel1->Controls->Add(this->button79);
			this->panel1->Controls->Add(this->button78);
			this->panel1->Controls->Add(this->button77);
			this->panel1->Controls->Add(this->button76);
			this->panel1->Controls->Add(this->button75);
			this->panel1->Controls->Add(this->button74);
			this->panel1->Controls->Add(this->button73);
			this->panel1->Controls->Add(this->button72);
			this->panel1->Controls->Add(this->button71);
			this->panel1->Controls->Add(this->button70);
			this->panel1->Controls->Add(this->button69);
			this->panel1->Controls->Add(this->button68);
			this->panel1->Controls->Add(this->button67);
			this->panel1->Controls->Add(this->button66);
			this->panel1->Controls->Add(this->button65);
			this->panel1->Controls->Add(this->button64);
			this->panel1->Controls->Add(this->button63);
			this->panel1->Controls->Add(this->button62);
			this->panel1->Controls->Add(this->button61);
			this->panel1->Controls->Add(this->button60);
			this->panel1->Controls->Add(this->button59);
			this->panel1->Controls->Add(this->button58);
			this->panel1->Controls->Add(this->button57);
			this->panel1->Controls->Add(this->button56);
			this->panel1->Controls->Add(this->button55);
			this->panel1->Controls->Add(this->button54);
			this->panel1->Controls->Add(this->button53);
			this->panel1->Controls->Add(this->button52);
			this->panel1->Controls->Add(this->button51);
			this->panel1->Controls->Add(this->button50);
			this->panel1->Controls->Add(this->button49);
			this->panel1->Controls->Add(this->button48);
			this->panel1->Controls->Add(this->button47);
			this->panel1->Controls->Add(this->button46);
			this->panel1->Controls->Add(this->button45);
			this->panel1->Controls->Add(this->button44);
			this->panel1->Controls->Add(this->button43);
			this->panel1->Controls->Add(this->button42);
			this->panel1->Controls->Add(this->button41);
			this->panel1->Controls->Add(this->button40);
			this->panel1->Controls->Add(this->button39);
			this->panel1->Controls->Add(this->button38);
			this->panel1->Controls->Add(this->button37);
			this->panel1->Controls->Add(this->button36);
			this->panel1->Controls->Add(this->button35);
			this->panel1->Controls->Add(this->button34);
			this->panel1->Controls->Add(this->button33);
			this->panel1->Controls->Add(this->button32);
			this->panel1->Controls->Add(this->button31);
			this->panel1->Controls->Add(this->button30);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(339, 46);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(568, 546);
			this->panel1->TabIndex = 0;
			// 
			// button100
			// 
			this->button100->Location = System::Drawing::Point(451, 489);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(50, 48);
			this->button100->TabIndex = 99;
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &level2::button100_Click);
			// 
			// button99
			// 
			this->button99->Location = System::Drawing::Point(395, 489);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(50, 48);
			this->button99->TabIndex = 98;
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &level2::button99_Click);
			// 
			// button105
			// 
			this->button105->Location = System::Drawing::Point(507, 489);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(50, 48);
			this->button105->TabIndex = 104;
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &level2::button105_Click);
			// 
			// button98
			// 
			this->button98->Location = System::Drawing::Point(339, 489);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(50, 48);
			this->button98->TabIndex = 97;
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &level2::button98_Click);
			// 
			// button97
			// 
			this->button97->Location = System::Drawing::Point(283, 489);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(50, 48);
			this->button97->TabIndex = 96;
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &level2::button97_Click);
			// 
			// button96
			// 
			this->button96->Location = System::Drawing::Point(227, 489);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(50, 48);
			this->button96->TabIndex = 95;
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &level2::button96_Click);
			// 
			// button95
			// 
			this->button95->Location = System::Drawing::Point(171, 489);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(50, 48);
			this->button95->TabIndex = 94;
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &level2::button95_Click);
			// 
			// button94
			// 
			this->button94->Location = System::Drawing::Point(115, 489);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(50, 48);
			this->button94->TabIndex = 93;
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &level2::button94_Click);
			// 
			// button93
			// 
			this->button93->Location = System::Drawing::Point(59, 489);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(50, 48);
			this->button93->TabIndex = 92;
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &level2::button93_Click);
			// 
			// button92
			// 
			this->button92->Location = System::Drawing::Point(3, 489);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(50, 48);
			this->button92->TabIndex = 91;
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &level2::button92_Click);
			// 
			// button91
			// 
			this->button91->Location = System::Drawing::Point(507, 435);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(50, 48);
			this->button91->TabIndex = 90;
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &level2::button91_Click);
			// 
			// button90
			// 
			this->button90->Location = System::Drawing::Point(451, 435);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(50, 48);
			this->button90->TabIndex = 89;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &level2::button90_Click);
			// 
			// button89
			// 
			this->button89->Location = System::Drawing::Point(395, 435);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(50, 48);
			this->button89->TabIndex = 88;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &level2::button89_Click);
			// 
			// button88
			// 
			this->button88->Location = System::Drawing::Point(339, 435);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(50, 48);
			this->button88->TabIndex = 87;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &level2::button88_Click);
			// 
			// button87
			// 
			this->button87->Location = System::Drawing::Point(283, 435);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(50, 48);
			this->button87->TabIndex = 86;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &level2::button87_Click);
			// 
			// button86
			// 
			this->button86->Location = System::Drawing::Point(227, 435);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(50, 48);
			this->button86->TabIndex = 85;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &level2::button86_Click);
			// 
			// button85
			// 
			this->button85->Location = System::Drawing::Point(171, 435);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(50, 48);
			this->button85->TabIndex = 84;
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &level2::button85_Click);
			// 
			// button84
			// 
			this->button84->Location = System::Drawing::Point(115, 435);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(50, 48);
			this->button84->TabIndex = 83;
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &level2::button84_Click);
			// 
			// button83
			// 
			this->button83->Location = System::Drawing::Point(59, 435);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(50, 48);
			this->button83->TabIndex = 82;
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &level2::button83_Click);
			// 
			// button82
			// 
			this->button82->Location = System::Drawing::Point(3, 435);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(50, 48);
			this->button82->TabIndex = 81;
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &level2::button82_Click);
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(507, 381);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(50, 48);
			this->button81->TabIndex = 80;
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &level2::button81_Click);
			// 
			// button80
			// 
			this->button80->Location = System::Drawing::Point(451, 381);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(50, 48);
			this->button80->TabIndex = 79;
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &level2::button80_Click);
			// 
			// button79
			// 
			this->button79->Location = System::Drawing::Point(395, 381);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(50, 48);
			this->button79->TabIndex = 78;
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &level2::button79_Click);
			// 
			// button78
			// 
			this->button78->Location = System::Drawing::Point(339, 381);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(50, 48);
			this->button78->TabIndex = 77;
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &level2::button78_Click);
			// 
			// button77
			// 
			this->button77->Location = System::Drawing::Point(283, 381);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(50, 48);
			this->button77->TabIndex = 76;
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &level2::button77_Click);
			// 
			// button76
			// 
			this->button76->Location = System::Drawing::Point(227, 381);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(50, 48);
			this->button76->TabIndex = 75;
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &level2::button76_Click);
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(171, 381);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(50, 48);
			this->button75->TabIndex = 74;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &level2::button75_Click);
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(115, 381);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(50, 48);
			this->button74->TabIndex = 73;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &level2::button74_Click);
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(59, 381);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(50, 48);
			this->button73->TabIndex = 72;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &level2::button73_Click);
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(3, 381);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(50, 48);
			this->button72->TabIndex = 71;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &level2::button72_Click);
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(507, 327);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(50, 48);
			this->button71->TabIndex = 70;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &level2::button71_Click);
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(451, 327);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(50, 48);
			this->button70->TabIndex = 69;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &level2::button70_Click);
			// 
			// button69
			// 
			this->button69->Location = System::Drawing::Point(395, 327);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(50, 48);
			this->button69->TabIndex = 68;
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &level2::button69_Click);
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(339, 327);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(50, 48);
			this->button68->TabIndex = 67;
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &level2::button68_Click);
			// 
			// button67
			// 
			this->button67->Location = System::Drawing::Point(283, 327);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(50, 48);
			this->button67->TabIndex = 66;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &level2::button67_Click);
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(227, 327);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(50, 48);
			this->button66->TabIndex = 65;
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &level2::button66_Click);
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(171, 327);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(50, 48);
			this->button65->TabIndex = 64;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &level2::button65_Click);
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(115, 327);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(50, 48);
			this->button64->TabIndex = 63;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &level2::button64_Click);
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(59, 327);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(50, 48);
			this->button63->TabIndex = 62;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &level2::button63_Click);
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(3, 327);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(50, 48);
			this->button62->TabIndex = 61;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &level2::button62_Click);
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(507, 273);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(50, 48);
			this->button61->TabIndex = 60;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &level2::button61_Click);
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(451, 273);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(50, 48);
			this->button60->TabIndex = 59;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &level2::button60_Click);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(395, 273);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(50, 48);
			this->button59->TabIndex = 58;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &level2::button59_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(339, 273);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(50, 48);
			this->button58->TabIndex = 57;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &level2::button58_Click);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(283, 273);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(50, 48);
			this->button57->TabIndex = 56;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &level2::button57_Click);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(227, 273);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(50, 48);
			this->button56->TabIndex = 55;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &level2::button56_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(171, 273);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(50, 48);
			this->button55->TabIndex = 54;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &level2::button55_Click);
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(115, 273);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(50, 48);
			this->button54->TabIndex = 53;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &level2::button54_Click);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(59, 273);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(50, 48);
			this->button53->TabIndex = 52;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &level2::button53_Click);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(3, 273);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(50, 48);
			this->button52->TabIndex = 51;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &level2::button52_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(507, 219);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(50, 48);
			this->button51->TabIndex = 50;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &level2::button51_Click);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(451, 219);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(50, 48);
			this->button50->TabIndex = 49;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &level2::button50_Click);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(395, 219);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(50, 48);
			this->button49->TabIndex = 48;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &level2::button49_Click);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(339, 219);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(50, 48);
			this->button48->TabIndex = 47;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &level2::button48_Click);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(283, 219);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(50, 48);
			this->button47->TabIndex = 46;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &level2::button47_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(227, 219);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(50, 48);
			this->button46->TabIndex = 45;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &level2::button46_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(171, 219);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(50, 48);
			this->button45->TabIndex = 44;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &level2::button45_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(115, 219);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(50, 48);
			this->button44->TabIndex = 43;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &level2::button44_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(59, 219);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(50, 48);
			this->button43->TabIndex = 42;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &level2::button43_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(3, 219);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(50, 48);
			this->button42->TabIndex = 41;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &level2::button42_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(507, 165);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(50, 48);
			this->button41->TabIndex = 40;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &level2::button41_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(451, 165);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(50, 48);
			this->button40->TabIndex = 39;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &level2::button40_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(395, 165);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(50, 48);
			this->button39->TabIndex = 38;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &level2::button39_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(339, 165);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(50, 48);
			this->button38->TabIndex = 37;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &level2::button38_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(283, 165);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(50, 48);
			this->button37->TabIndex = 36;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &level2::button37_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(227, 165);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(50, 48);
			this->button36->TabIndex = 35;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &level2::button36_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(171, 165);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(50, 48);
			this->button35->TabIndex = 34;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &level2::button35_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(115, 165);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(50, 48);
			this->button34->TabIndex = 33;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &level2::button34_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(59, 165);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(50, 48);
			this->button33->TabIndex = 32;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &level2::button33_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(3, 165);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(50, 48);
			this->button32->TabIndex = 31;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &level2::button32_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(507, 111);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(50, 48);
			this->button31->TabIndex = 30;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &level2::button31_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(451, 111);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(50, 48);
			this->button30->TabIndex = 29;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &level2::button30_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(395, 111);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(50, 48);
			this->button29->TabIndex = 28;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &level2::button29_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(339, 111);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(50, 48);
			this->button28->TabIndex = 27;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &level2::button28_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(283, 111);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(50, 48);
			this->button27->TabIndex = 26;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &level2::button27_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(227, 111);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(50, 48);
			this->button26->TabIndex = 25;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &level2::button26_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(171, 111);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(50, 48);
			this->button25->TabIndex = 24;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &level2::button25_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(115, 111);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(50, 48);
			this->button24->TabIndex = 23;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &level2::button24_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(59, 111);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 48);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &level2::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(3, 111);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(50, 48);
			this->button22->TabIndex = 21;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &level2::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(507, 57);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(50, 48);
			this->button21->TabIndex = 20;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &level2::button21_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(451, 57);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 48);
			this->button20->TabIndex = 19;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &level2::button20_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(395, 57);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 48);
			this->button19->TabIndex = 18;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &level2::button19_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(339, 57);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 48);
			this->button18->TabIndex = 17;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &level2::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(283, 57);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 48);
			this->button17->TabIndex = 16;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &level2::button17_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(227, 57);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 48);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &level2::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(171, 57);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 48);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &level2::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(115, 57);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 48);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &level2::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(59, 57);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 48);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &level2::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(3, 57);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 48);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &level2::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(507, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 48);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &level2::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(451, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 48);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &level2::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(395, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 48);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &level2::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(339, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 48);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &level2::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(283, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 48);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &level2::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(227, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 48);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &level2::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(171, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 48);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &level2::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(115, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 48);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &level2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(59, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 48);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &level2::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 48);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &level2::button2_Click);
			// 
			// button101
			// 
			this->button101->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button101.BackgroundImage")));
			this->button101->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button101->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button101->Location = System::Drawing::Point(500, 630);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(230, 34);
			this->button101->TabIndex = 1;
			this->button101->Text = L"start";
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &level2::button101_Click);
			// 
			// button102
			// 
			this->button102->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button102.BackgroundImage")));
			this->button102->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button102->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button102->Location = System::Drawing::Point(1031, 495);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(255, 43);
			this->button102->TabIndex = 2;
			this->button102->Text = L"restart the game";
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &level2::button102_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox1.BackgroundImage")));
			this->checkBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(1031, 388);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(264, 21);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"check to put the flag";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"bomb.png");
			this->imageList1->Images->SetKeyName(1, L"flag (4).png");
			// 
			// level2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1336, 683);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->button101);
			this->Controls->Add(this->panel1);
			this->Name = L"level2";
			this->Text = L"level2";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		public:
			Void Lose()
			{
				button102->Visible = true; // A VERIFIER

				if (button2->Enabled == true)
				{
					button2->Enabled = false;
					button2->Text = "";
					if (data[2] == 1)
						button2->BackgroundImage = imageList1->Images[0];
					button2->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button3->Enabled == true)
				{
					button3->Enabled = false;
					button3->Text = "";
					if (data[3] == 1)
						button3->BackgroundImage = imageList1->Images[0];
					    button3->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button4->Enabled == true)
				{
					button4->Enabled = false;
					button4->Text = "";
					if (data[4] == 1)
						button4->BackgroundImage = imageList1->Images[0];
					    button4->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button5->Enabled == true)
				{
					button5->Enabled = false;
					button5->Text = "";
					if (data[5] == 1)
						button5->BackgroundImage = imageList1->Images[0];
					button5->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button6->Enabled == true)
				{
					button6->Enabled = false;
					button6->Text = "";
					if (data[6] == 1)
						button6->BackgroundImage = imageList1->Images[0];
					button6->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button7->Enabled == true)
				{
					button7->Enabled = false;
					button7->Text = "";
					if (data[7] == 1)
						button7->BackgroundImage = imageList1->Images[0];
					button7->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button8->Enabled == true)
				{
					button8->Enabled = false;
					button8->Text = "";
					if (data[8] == 1)
						button8->BackgroundImage = imageList1->Images[0];
					button8->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button9->Enabled == true)
				{
					button9->Enabled = false;
					button9->Text = "";
					if (data[9] == 1)
						button9->BackgroundImage = imageList1->Images[0];
					button9->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button10->Enabled == true)
				{
					button10->Enabled = false;
					button10->Text = "";
					if (data[10] == 1)
						button10->BackgroundImage = imageList1->Images[0];
					button10->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button11->Enabled == true)
				{
					button11->Enabled = false;
					button11->Text = "";
					if (data[11] == 1)
						button11->BackgroundImage = imageList1->Images[0];
					button11->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button12->Enabled == true)
				{
					button12->Enabled = false;
					button12->Text = "";
					if (data[12] == 1)
						button12->BackgroundImage = imageList1->Images[0];
					button12->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button13->Enabled == true)
				{
					button13->Enabled = false;
					button13->Text = "";
					if (data[13] == 1)
						button13->BackgroundImage = imageList1->Images[0];
					button13->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button14->Enabled == true)
				{
					button14->Enabled = false;
					button14->Text = "";
					if (data[14] == 1)
						button14->BackgroundImage = imageList1->Images[0];
					button14->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button15->Enabled == true)
				{
					button15->Enabled = false;
					button15->Text = "";
					if (data[15] == 1)
						button15->BackgroundImage = imageList1->Images[0];
					button15->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button16->Enabled == true)
				{
					button16->Enabled = false;
					button16->Text = "";
					if (data[16] == 1)
						button16->BackgroundImage = imageList1->Images[0];
					button16->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button17->Enabled == true)
				{
					button17->Enabled = false;
					button17->Text = "";
					if (data[17] == 1)
						button17->BackgroundImage = imageList1->Images[0];
					button17->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button18->Enabled == true)
				{
					button18->Enabled = false;
					button18->Text = "";
					if (data[18] == 1)
						button18->BackgroundImage = imageList1->Images[0];
					button18->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button19->Enabled == true)
				{
					button19->Enabled = false;
					button19->Text = "";
					if (data[19] == 1)
						button19->BackgroundImage = imageList1->Images[0];
					button19->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button20->Enabled == true)
				{
					button20->Enabled = false;
					button20->Text = "";
					if (data[20] == 1)
						button20->BackgroundImage = imageList1->Images[0];
					button20->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button21->Enabled == true)
				{
					button21->Enabled = false;
					button21->Text = "";
					if (data[21] == 1)
						button21->BackgroundImage = imageList1->Images[0];
					button21->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button22->Enabled == true)
				{
					button22->Enabled = false;
					button22->Text = "";
					if (data[22] == 1)
						button22->BackgroundImage = imageList1->Images[0];
					button22->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button23->Enabled == true)
				{
					button23->Enabled = false;
					button23->Text = "";
					if (data[23] == 1)
						button23->BackgroundImage = imageList1->Images[0];
					button23->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button24->Enabled == true)
				{
					button24->Enabled = false;
					button24->Text = "";
					if (data[24] == 1)
						button24->BackgroundImage = imageList1->Images[0];
					button24->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button25->Enabled == true)
				{
					button25->Enabled = false;
					button25->Text = "";
					if (data[25] == 1)
						button25->BackgroundImage = imageList1->Images[0];
					button25->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button26->Enabled == true)
				{
					button26->Enabled = false;
					button26->Text = "";
					if (data[26] == 1)
						button26->BackgroundImage = imageList1->Images[0];
					button26->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button27->Enabled == true)
				{
					button27->Enabled = false;
					button27->Text = "";
					if (data[27] == 1)
						button27->BackgroundImage = imageList1->Images[0];
					button27->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button28->Enabled == true)
				{
					button28->Enabled = false;
					button28->Text = "";
					if (data[28] == 1)
						button28->BackgroundImage = imageList1->Images[0];
					button28->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button29->Enabled == true)
				{
					button29->Enabled = false;
					button29->Text = "";
					if (data[29] == 1)
						button29->BackgroundImage = imageList1->Images[0];
					button29->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button30->Enabled == true)
				{
					button30->Enabled = false;
					button30->Text = "";
					if (data[30] == 1)
						button30->BackgroundImage = imageList1->Images[0];
					button30->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button31->Enabled == true)
				{
					button31->Enabled = false;
					button31->Text = "";
					if (data[31] == 1)
						button31->BackgroundImage = imageList1->Images[0];
					button31->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button32->Enabled == true)
				{
					button32->Enabled = false;
					button32->Text = "";
					if (data[32] == 1)
						button32->BackgroundImage = imageList1->Images[0];
					button32->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button33->Enabled == true)
				{
					button33->Enabled = false;
					button33->Text = "";
					if (data[33] == 1)
						button33->BackgroundImage = imageList1->Images[0];
					button33->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button34->Enabled == true)
				{
					button34->Enabled = false;
					button34->Text = "";
					if (data[34] == 1)
						button34->BackgroundImage = imageList1->Images[0];
					button34->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button35->Enabled == true)
				{
					button35->Enabled = false;
					button35->Text = "";
					if (data[35] == 1)
						button35->BackgroundImage = imageList1->Images[0];
					button35->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button36->Enabled == true)
				{
					button36->Enabled = false;
					button36->Text = "";
					if (data[36] == 1)
						button36->BackgroundImage = imageList1->Images[0];
					button36->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button37->Enabled == true)
				{
					button37->Enabled = false;
					button37->Text = "";
					if (data[37] == 1)
						button37->BackgroundImage = imageList1->Images[0];
					button37->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button38->Enabled == true)
				{
					button38->Enabled = false;
					button38->Text = "";
					if (data[38] == 1)
						button38->BackgroundImage = imageList1->Images[0];
					button38->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button39->Enabled == true)
				{
					button39->Enabled = false;
					button39->Text = "";
					if (data[39] == 1)
						button39->BackgroundImage = imageList1->Images[0];
					button39->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button40->Enabled == true)
				{
					button40->Enabled = false;
					button40->Text = "";
					if (data[40] == 1)
						button40->BackgroundImage = imageList1->Images[0];
					button40->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button41->Enabled == true)
				{
					button41->Enabled = false;
					button41->Text = "";
					if (data[41] == 1)
						button41->BackgroundImage = imageList1->Images[0];
					button41->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button42->Enabled == true)
				{
					button42->Enabled = false;
					button42->Text = "";
					if (data[42] == 1)
						button42->BackgroundImage = imageList1->Images[0];
					button42->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button43->Enabled == true)
				{
					button43->Enabled = false;
					button43->Text = "";
					if (data[43] == 1)
						button43->BackgroundImage = imageList1->Images[0];
					button43->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button44->Enabled == true)
				{
					button44->Enabled = false;
					button44->Text = "";
					if (data[44] == 1)
						button44->BackgroundImage = imageList1->Images[0];
					button44->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button45->Enabled == true)
				{
					button45->Enabled = false;
					button45->Text = "";
					if (data[45] == 1)
						button45->BackgroundImage = imageList1->Images[0];
					button45->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button46->Enabled == true)
				{
					button46->Enabled = false;
					button46->Text = "";
					if (data[46] == 1)
						button46->BackgroundImage = imageList1->Images[0];
					button46->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button47->Enabled == true)
				{
					button47->Enabled = false;
					button47->Text = "";
					if (data[47] == 1)
						button47->BackgroundImage = imageList1->Images[0];
					button47->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button48->Enabled == true)
				{
					button48->Enabled = false;
					button48->Text = "";
					if (data[48] == 1)
						button48->BackgroundImage = imageList1->Images[0];
					button48->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button49->Enabled == true)
				{
					button49->Enabled = false;
					button49->Text = "";
					if (data[49] == 1)
						button49->BackgroundImage = imageList1->Images[0];
					button49->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button50->Enabled == true)
				{
					button50->Enabled = false;
					button50->Text = "";
					if (data[50] == 1)
						button50->BackgroundImage = imageList1->Images[0];
					button50->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button51->Enabled == true)
				{
					button51->Enabled = false;
					button51->Text = "";
					if (data[51] == 1)
						button51->BackgroundImage = imageList1->Images[0];
					button51->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button52->Enabled == true)
				{
					button52->Enabled = false;
					button52->Text = "";
					if (data[52] == 1)
						button52->BackgroundImage = imageList1->Images[0];
					button52->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button53->Enabled == true)
				{
					button53->Enabled = false;
					button53->Text = "";
					if (data[53] == 1)
						button53->BackgroundImage = imageList1->Images[0];
					button53->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button54->Enabled == true)
				{
					button54->Enabled = false;
					button54->Text = "";
					if (data[54] == 1)
						button54->BackgroundImage = imageList1->Images[0];
					button54->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button55->Enabled == true)
				{
					button55->Enabled = false;
					button55->Text = "";
					if (data[55] == 1)
						button55->BackgroundImage = imageList1->Images[0];
					button55->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button56->Enabled == true)
				{
					button56->Enabled = false;
					button56->Text = "";
					if (data[56] == 1)
						button56->BackgroundImage = imageList1->Images[0];
					button56->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button57->Enabled == true)
				{
					button57->Enabled = false;
					button57->Text = "";
					if (data[57] == 1)

						button57->BackgroundImage = imageList1->Images[0];
					    button57->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button58->Enabled == true)
				{
					button58->Enabled = false;
					button58->Text = "";
					if (data[58] == 1)
						button58->BackgroundImage = imageList1->Images[0];
					button58->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button59->Enabled == true)
				{
					button59->Enabled = false;
					button59->Text = "";
					if (data[59] == 1)
						button59->BackgroundImage = imageList1->Images[0];
					button59->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button60->Enabled == true)
				{
					button60->Enabled = false;
					button60->Text = "";
					if (data[60] == 1)
						button60->BackgroundImage = imageList1->Images[0];
					button60->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button61->Enabled == true)
				{
					button61->Enabled = false;
					button61->Text = "";
					if (data[61] == 1)
						button61->BackgroundImage = imageList1->Images[0];
					button61->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button62->Enabled == true)
				{
					button62->Enabled = false;
					button62->Text = "";
					if (data[62] == 1)
						button62->BackgroundImage = imageList1->Images[0];
					button62->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button63->Enabled == true)
				{
					button63->Enabled = false;
					button63->Text = "";
					if (data[63] == 1)
						button63->BackgroundImage = imageList1->Images[0];
					button63->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button64->Enabled == true)
				{
					button64->Enabled = false;
					button64->Text = "";
					if (data[64] == 1)
						button64->BackgroundImage = imageList1->Images[0];
					button64->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button65->Enabled == true)
				{
					button65->Enabled = false;
					button65->Text = "";
					if (data[65] == 1)
						button65->BackgroundImage = imageList1->Images[0];
					button65->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button66->Enabled == true)
				{
					button66->Enabled = false;
					button66->Text = "";
					if (data[66] == 1)
						button66->BackgroundImage = imageList1->Images[0];
					button66->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button67->Enabled == true)
				{
					button67->Enabled = false;
					button67->Text = "";
					if (data[67] == 1)
						button67->BackgroundImage = imageList1->Images[0];
					button67->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button68->Enabled == true)
				{
					button68->Enabled = false;
					button68->Text = "";
					if (data[68] == 1)
						button68->BackgroundImage = imageList1->Images[0];
					button68->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button69->Enabled == true)
				{
					button69->Enabled = false;
					button69->Text = "";
					if (data[69] == 1)
						button69->BackgroundImage = imageList1->Images[0];
					button69->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button70->Enabled == true)
				{
					button70->Enabled = false;
					button70->Text = "";
					if (data[70] == 1)
						button70->BackgroundImage = imageList1->Images[0];
					button70->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button71->Enabled == true)
				{
					button71->Enabled = false;
					button71->Text = "";
					if (data[71] == 1)
						button71->BackgroundImage = imageList1->Images[0];
					button71->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button72->Enabled == true)
				{
					button72->Enabled = false;
					button72->Text = "";
					if (data[72] == 1)
						button72->BackgroundImage = imageList1->Images[0];
					button72->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button73->Enabled == true)
				{
					button73->Enabled = false;
					button73->Text = "";
					if (data[73] == 1)
						button73->BackgroundImage = imageList1->Images[0];
					button73->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button74->Enabled == true)
				{
					button74->Enabled = false;
					button74->Text = "";
					if (data[74] == 1)
						button74->BackgroundImage = imageList1->Images[0];
					button74->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button75->Enabled == true)
				{
					button75->Enabled = false;
					button75->Text = "";
					if (data[75] == 1)
						button75->BackgroundImage = imageList1->Images[0];
					button75->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button76->Enabled == true)
				{
					button76->Enabled = false;
					button76->Text = "";
					if (data[76] == 1)
						button76->BackgroundImage = imageList1->Images[0];
					button76->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button77->Enabled == true)
				{
					button77->Enabled = false;
					button77->Text = "";
					if (data[77] == 1)
						button77->BackgroundImage = imageList1->Images[0];
					button77->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button78->Enabled == true)
				{
					button78->Enabled = false;
					button78->Text = "";
					if (data[78] == 1)
						button78->BackgroundImage = imageList1->Images[0];
					button78->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button79->Enabled == true)
				{
					button79->Enabled = false;
					button79->Text = "";
					if (data[79] == 1)
						button79->BackgroundImage = imageList1->Images[0];
					button79->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button80->Enabled == true)
				{
					button80->Enabled = false;
					button80->Text = "";
					if (data[80] == 1)
						button80->BackgroundImage = imageList1->Images[0];
					button80->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button81->Enabled == true)
				{
					button81->Enabled = false;
					button81->Text = "";
					if (data[81] == 1)
						button81->BackgroundImage = imageList1->Images[0];
					button81->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button82->Enabled == true)
				{
					button82->Enabled = false;
					button82->Text = "";
					if (data[82] == 1)
						button82->BackgroundImage = imageList1->Images[0];
					button82->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button83->Enabled == true)
				{
					button83->Enabled = false;
					button83->Text = "";
					if (data[83] == 1)
						button83->BackgroundImage = imageList1->Images[0];
					button83->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button84->Enabled == true)
				{
					button84->Enabled = false;
					button84->Text = "";
					if (data[84] == 1)
						button84->BackgroundImage = imageList1->Images[0];
					button84->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button85->Enabled == true)
				{
					button85->Enabled = false;
					button85->Text = "";
					if (data[85] == 1)
						button85->BackgroundImage = imageList1->Images[0];
					button85->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button86->Enabled == true)
				{
					button86->Enabled = false;
					button86->Text = "";
					if (data[86] == 1)
						button86->BackgroundImage = imageList1->Images[0];
					button86->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button87->Enabled == true)
				{
					button87->Enabled = false;
					button87->Text = "";
					if (data[87] == 1)
						button87->BackgroundImage = imageList1->Images[0];
					button87->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button88->Enabled == true)
				{
					button88->Enabled = false;
					button88->Text = "";
					if (data[88] == 1)
						button88->BackgroundImage = imageList1->Images[0];
					button88->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button89->Enabled == true)
				{
					button89->Enabled = false;
					button89->Text = "";
					if (data[89] == 1)
						button89->BackgroundImage = imageList1->Images[0];
					button89->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button90->Enabled == true)
				{
					button90->Enabled = false;
					button90->Text = "";
					if (data[90] == 1)
						button90->BackgroundImage = imageList1->Images[0];
					button90->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button91->Enabled == true)
				{
					button91->Enabled = false;
					button91->Text = "";
					if (data[91] == 1)
						button91->BackgroundImage = imageList1->Images[0];
					button91->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button92->Enabled == true)
				{
					button92->Enabled = false;
					button92->Text = "";
					if (data[92] == 1)
						button92->BackgroundImage = imageList1->Images[0];
					button92->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button93->Enabled == true)
				{
					button93->Enabled = false;
					button93->Text = "";
					if (data[93] == 1)
						button93->BackgroundImage = imageList1->Images[0];
					button93->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button94->Enabled == true)
				{
					button94->Enabled = false;
					button94->Text = "";
					if (data[94] == 1)
						button94->BackgroundImage = imageList1->Images[0];
					button94->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button95->Enabled == true)
				{
					button95->Enabled = false;
					button95->Text = "";
					if (data[95] == 1)
						button95->BackgroundImage = imageList1->Images[0];
					button95->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button96->Enabled == true)
				{
					button96->Enabled = false;
					button96->Text = "";
					if (data[96] == 1)
						button96->BackgroundImage = imageList1->Images[0];
					button96->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button97->Enabled == true)
				{
					button97->Enabled = false;
					button97->Text = "";
					if (data[97] == 1)
						button97->BackgroundImage = imageList1->Images[0];
					button97->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button98->Enabled == true)
				{
					button98->Enabled = false;
					button98->Text = "";
					if (data[98] == 1)
						button98->BackgroundImage = imageList1->Images[0];
					button98->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button99->Enabled == true)
				{
					button99->Enabled = false;
					button99->Text = "";
					if (data[99] == 1)
						button99->BackgroundImage = imageList1->Images[0];
					button99->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button100->Enabled == true)
				{
					button100->Enabled = false;
					button100->Text = "";
					if (data[100] == 1)
						button100->BackgroundImage = imageList1->Images[0];
					button100->BackgroundImageLayout = ImageLayout::Stretch;
				}
				if (button105->Enabled == true)
				{
					button105->Enabled = false;
					button105->Text = "";
					if (data[105] == 1)
						button105->BackgroundImage = imageList1->Images[0];
					button105->BackgroundImageLayout = ImageLayout::Stretch;
				}
			}


      public:
		  Void Win()
		  {
			  button102->Visible = true;
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
			  if (data[37] == 1)
			  {
				  button37->Enabled = false;
				  button37->BackColor = System::Drawing::Color::Red;
				  button37->Text = "";
			  }
			  if (data[38] == 1)
			  {
				  button38->Enabled = false;
				  button38->BackColor = System::Drawing::Color::Red;
				  button38->Text = "";
			  }
			  if (data[39] == 1)
			  {
				  button39->Enabled = false;
				  button39->BackColor = System::Drawing::Color::Red;
				  button39->Text = "";
			  }
			  if (data[40] == 1)
			  {
				  button40->Enabled = false;
				  button40->BackColor = System::Drawing::Color::Red;
				  button40->Text = "";
			  }
			  if (data[41] == 1)
			  {
				  button41->Enabled = false;
				  button41->BackColor = System::Drawing::Color::Red;
				  button41->Text = "";
			  }
			  if (data[42] == 1)
			  {
				  button42->Enabled = false;
				  button42->BackColor = System::Drawing::Color::Red;
				  button42->Text = "";
			  }
			  if (data[43] == 1)
			  {
				  button43->Enabled = false;
				  button43->BackColor = System::Drawing::Color::Red;
				  button43->Text = "";
			  }
			  if (data[44] == 1)
			  {
				  button44->Enabled = false;
				  button44->BackColor = System::Drawing::Color::Red;
				  button44->Text = "";
			  }
			  if (data[45] == 1)
			  {
				  button45->Enabled = false;
				  button45->BackColor = System::Drawing::Color::Red;
				  button45->Text = "";
			  }
			  if (data[46] == 1)
			  {
				  button46->Enabled = false;
				  button46->BackColor = System::Drawing::Color::Red;
				  button46->Text = "";
			  }
			  if (data[47] == 1)
			  {
				  button47->Enabled = false;
				  button47->BackColor = System::Drawing::Color::Red;
				  button47->Text = "";
			  }
			  if (data[48] == 1)
			  {
				  button48->Enabled = false;
				  button48->BackColor = System::Drawing::Color::Red;
				  button48->Text = "";
			  }
			  if (data[49] == 1)
			  {
				  button49->Enabled = false;
				  button49->BackColor = System::Drawing::Color::Red;
				  button49->Text = "";
			  }
			  if (data[50] == 1)
			  {
				  button50->Enabled = false;
				  button50->BackColor = System::Drawing::Color::Red;
				  button50->Text = "";
			  }
			  if (data[51] == 1)
			  {
				  button51->Enabled = false;
				  button51->BackColor = System::Drawing::Color::Red;
				  button51->Text = "";
			  }
			  if (data[52] == 1)
			  {
				  button52->Enabled = false;
				  button52->BackColor = System::Drawing::Color::Red;
				  button52->Text = "";
			  }
			  if (data[53] == 1)
			  {
				  button53->Enabled = false;
				  button53->BackColor = System::Drawing::Color::Red;
				  button53->Text = "";
			  }
			  if (data[54] == 1)
			  {
				  button54->Enabled = false;
				  button54->BackColor = System::Drawing::Color::Red;
				  button54->Text = "";
			  }
			  if (data[55] == 1)
			  {
				  button55->Enabled = false;
				  button55->BackColor = System::Drawing::Color::Red;
				  button55->Text = "";
			  }
			  if (data[56] == 1)
			  {
				  button56->Enabled = false;
				  button56->BackColor = System::Drawing::Color::Red;
				  button56->Text = "";
			  }
			  if (data[57] == 1)
			  {
				  button57->Enabled = false;
				  button57->BackColor = System::Drawing::Color::Red;
				  button57->Text = "";
			  }
			  if (data[58] == 1)
			  {
				  button58->Enabled = false;
				  button58->BackColor = System::Drawing::Color::Red;
				  button58->Text = "";
			  }
			  if (data[59] == 1)
			  {
				  button59->Enabled = false;
				  button59->BackColor = System::Drawing::Color::Red;
				  button59->Text = "";
			  }
			  if (data[60] == 1)
			  {
				  button60->Enabled = false;
				  button60->BackColor = System::Drawing::Color::Red;
				  button60->Text = "";
			  }
			  if (data[61] == 1)
			  {
				  button61->Enabled = false;
				  button61->BackColor = System::Drawing::Color::Red;
				  button61->Text = "";
			  }
			  if (data[62] == 1)
			  {
				  button62->Enabled = false;
				  button62->BackColor = System::Drawing::Color::Red;
				  button62->Text = "";
			  }
			  if (data[63] == 1)
			  {
				  button63->Enabled = false;
				  button63->BackColor = System::Drawing::Color::Red;
				  button63->Text = "";
			  }
			  if (data[64] == 1)
			  {
				  button64->Enabled = false;
				  button64->BackColor = System::Drawing::Color::Red;
				  button64->Text = "";
			  }
			  if (data[65] == 1)
			  {
				  button65->Enabled = false;
				  button65->BackColor = System::Drawing::Color::Red;
				  button65->Text = "";
			  }
			  if (data[66] == 1)
			  {
				  button66->Enabled = false;
				  button66->BackColor = System::Drawing::Color::Red;
				  button66->Text = "";
			  }
			  if (data[67] == 1)
			  {
				  button67->Enabled = false;
				  button67->BackColor = System::Drawing::Color::Red;
				  button67->Text = "";
			  }
			  if (data[68] == 1)
			  {
				  button68->Enabled = false;
				  button68->BackColor = System::Drawing::Color::Red;
				  button68->Text = "";
			  }
			  if (data[69] == 1)
			  {
				  button69->Enabled = false;
				  button69->BackColor = System::Drawing::Color::Red;
				  button69->Text = "";
			  }
			  if (data[70] == 1)
			  {
				  button70->Enabled = false;
				  button70->BackColor = System::Drawing::Color::Red;
				  button70->Text = "";
			  }
			  if (data[71] == 1)
			  {
				  button71->Enabled = false;
				  button71->BackColor = System::Drawing::Color::Red;
				  button71->Text = "";
			  }
			  if (data[72] == 1)
			  {
				  button72->Enabled = false;
				  button72->BackColor = System::Drawing::Color::Red;
				  button72->Text = "";
			  }
			  if (data[73] == 1)
			  {
				  button73->Enabled = false;
				  button73->BackColor = System::Drawing::Color::Red;
				  button73->Text = "";
			  }
			  if (data[74] == 1)
			  {
				  button74->Enabled = false;
				  button74->BackColor = System::Drawing::Color::Red;
				  button74->Text = "";
			  }
			  if (data[75] == 1)
			  {
				  button75->Enabled = false;
				  button75->BackColor = System::Drawing::Color::Red;
				  button75->Text = "";
			  }
			  if (data[76] == 1)
			  {
				  button76->Enabled = false;
				  button76->BackColor = System::Drawing::Color::Red;
				  button76->Text = "";
			  }
			  if (data[77] == 1)
			  {
				  button77->Enabled = false;
				  button77->BackColor = System::Drawing::Color::Red;
				  button77->Text = "";
			  }
			  if (data[78] == 1)
			  {
				  button78->Enabled = false;
				  button78->BackColor = System::Drawing::Color::Red;
				  button78->Text = "";
			  }
			  if (data[79] == 1)
			  {
				  button79->Enabled = false;
				  button79->BackColor = System::Drawing::Color::Red;
				  button79->Text = "";
			  }
			  if (data[80] == 1)
			  {
				  button80->Enabled = false;
				  button80->BackColor = System::Drawing::Color::Red;
				  button80->Text = "";
			  }
			  if (data[81] == 1)
			  {
				  button81->Enabled = false;
				  button81->BackColor = System::Drawing::Color::Red;
				  button81->Text = "";
			  }
			  if (data[82] == 1)
			  {
				  button82->Enabled = false;
				  button82->BackColor = System::Drawing::Color::Red;
				  button82->Text = "";
			  }
			  if (data[83] == 1)
			  {
				  button83->Enabled = false;
				  button83->BackColor = System::Drawing::Color::Red;
				  button83->Text = "";
			  }
			  if (data[84] == 1)
			  {
				  button84->Enabled = false;
				  button84->BackColor = System::Drawing::Color::Red;
				  button84->Text = "";
			  }
			  if (data[85] == 1)
			  {
				  button85->Enabled = false;
				  button85->BackColor = System::Drawing::Color::Red;
				  button85->Text = "";
			  }
			  if (data[86] == 1)
			  {
				  button86->Enabled = false;
				  button86->BackColor = System::Drawing::Color::Red;
				  button86->Text = "";
			  }
			  if (data[87] == 1)
			  {
				  button87->Enabled = false;
				  button87->BackColor = System::Drawing::Color::Red;
				  button87->Text = "";
			  }
			  if (data[88] == 1)
			  {
				  button88->Enabled = false;
				  button88->BackColor = System::Drawing::Color::Red;
				  button88->Text = "";
			  }
			  if (data[89] == 1)
			  {
				  button89->Enabled = false;
				  button89->BackColor = System::Drawing::Color::Red;
				  button89->Text = "";
			  }
			  if (data[90] == 1)
			  {
				  button90->Enabled = false;
				  button90->BackColor = System::Drawing::Color::Red;
				  button90->Text = "";
			  }
			  if (data[91] == 1)
			  {
				  button91->Enabled = false;
				  button91->BackColor = System::Drawing::Color::Red;
				  button91->Text = "";
			  }
			  if (data[92] == 1)
			  {
				  button92->Enabled = false;
				  button92->BackColor = System::Drawing::Color::Red;
				  button92->Text = "";
			  }
			  if (data[93] == 1)
			  {
				  button93->Enabled = false;
				  button93->BackColor = System::Drawing::Color::Red;
				  button93->Text = "";
			  }
			  if (data[94] == 1)
			  {
				  button94->Enabled = false;
				  button94->BackColor = System::Drawing::Color::Red;
				  button94->Text = "";
			  }
			  if (data[95] == 1)
			  {
				  button95->Enabled = false;
				  button95->BackColor = System::Drawing::Color::Red;
				  button95->Text = "";
			  }
			  if (data[96] == 1)
			  {
				  button96->Enabled = false;
				  button96->BackColor = System::Drawing::Color::Red;
				  button96->Text = "";
			  }
			  if (data[97] == 1)
			  {
				  button97->Enabled = false;
				  button97->BackColor = System::Drawing::Color::Red;
				  button97->Text = "";
			  }
			  if (data[98] == 1)
			  {
				  button98->Enabled = false;
				  button98->BackColor = System::Drawing::Color::Red;
				  button98->Text = "";
			  }
			  if (data[99] == 1)
			  {
				  button99->Enabled = false;
				  button99->BackColor = System::Drawing::Color::Red;
				  button99->Text = "";
			  }
			  if (data[100] == 1)
			  {
				  button100->Enabled = false;
				  button100->BackColor = System::Drawing::Color::Red;
				  button100->Text = "";
			  }
			  if (data[105] == 1)
			  {
				  button105->Enabled = false;
				  button105->BackColor = System::Drawing::Color::Red;
				  button105->Text = "";
			  }
		  }

          public:
	       Void Uncovertile(int x)
	         {
		       move++;
		      int k = 0;
		       if (x == 2)
		     {
			button2->Enabled = false;
			button2->Text = "";
			if (data[2] == 1)
			{
				button2->BackColor = System::Drawing::SystemColors::GrayText;
				//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;
				MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
				checkBox1->Visible = false;
				bomb = 1;
			}
			else
			{
				button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
				if (data[3] == 1)
					k++;
				if (data[13] == 1)
					k++;
				if (data[12] == 1)
					k++;

				if (k == 0)
				{
					if (button3->Enabled == true)
						Uncovertile(3);
					if (button13->Enabled == true)
						Uncovertile(13);
					if (button12->Enabled == true)
						Uncovertile(12);
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
					//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;
					MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[2] == 1)
						k++;
					if (data[12] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[4] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Uncovertile(2);
						if (button12->Enabled == true)
							Uncovertile(12);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button14->Enabled == true)
							Uncovertile(14);
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
					////label2->Text = "You lose!";
					////label2->ForeColor = System::Drawing::Color::Red;
					MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[3] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (data[5] == 1)
						k++;
					if (k == 0)
					{
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button15->Enabled == true)
							Uncovertile(15);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[4] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[6] == 1)
						k++;
					if (k == 0)
					{
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button16->Enabled == true)
							Uncovertile(16);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[5] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[7] == 1)
						k++;
					if (k == 0)
					{
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button7->Enabled == true)
							Uncovertile(7);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[6] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[8] == 1)
						k++;
					if (k == 0)
					{
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button8->Enabled == true)
							Uncovertile(8);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[7] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[9] == 1)
						k++;
					if (k == 0)
					{
						if (button7->Enabled == true)
							Uncovertile(7);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button9->Enabled == true)
							Uncovertile(9);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[8] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[10] == 1)
						k++;
					if (k == 0)
					{
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button10->Enabled == true)
							Uncovertile(10);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

					bomb = 1;
					checkBox1->Visible = false;
				}
				else
				{
					button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[9] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[11] == 1)
						k++;
					if (k == 0)
					{
						if (button9->Enabled == true)
							Uncovertile(9);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button11->Enabled == true)
							Uncovertile(11);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button11->BackColor = System::Drawing::SystemColors::ControlLightLight;

					if (data[10] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (k == 0)
					{
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button21->Enabled == true)
							Uncovertile(21);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button12->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[2] == 1)
						k++;
					if (data[3] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Uncovertile(2);
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button22->Enabled == true)
							Uncovertile(22);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button13->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[2] == 1)
						k++;
					if (data[3] == 1)
						k++;
					if (data[4] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (data[12] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Uncovertile(2);
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button22->Enabled == true)
							Uncovertile(22);
						if (button12->Enabled == true)
							Uncovertile(12);
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

					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button14->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[3] == 1)
						k++;
					if (data[4] == 1)
						k++;
					if (data[5] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (k == 0)
					{
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button13->Enabled == true)
							Uncovertile(13);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[4] == 1)
						k++;
					if (data[5] == 1)
						k++;
					if (data[6] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (k == 0)
					{
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button14->Enabled == true)
							Uncovertile(14);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button16->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[5] == 1)
						k++;
					if (data[6] == 1)
						k++;
					if (data[7] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (k == 0)
					{
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button7->Enabled == true)
							Uncovertile(7);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button15->Enabled == true)
							Uncovertile(15);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button17->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[6] == 1)
						k++;
					if (data[7] == 1)
						k++;
					if (data[8] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (k == 0)
					{
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button7->Enabled == true)
							Uncovertile(7);
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button16->Enabled == true)
							Uncovertile(16);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button18->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[7] == 1)
						k++;
					if (data[8] == 1)
						k++;
					if (data[9] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (k == 0)
					{
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button9->Enabled == true)
							Uncovertile(9);
						if (button7->Enabled == true)
							Uncovertile(7);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button17->Enabled == true)
							Uncovertile(17);
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
					/*	//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button19->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[8] == 1)
						k++;
					if (data[9] == 1)
						k++;
					if (data[10] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (k == 0)
					{
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button9->Enabled == true)
							Uncovertile(9);
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button18->Enabled == true)
							Uncovertile(18);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

					bomb = 1;
				}
				else
				{
					button20->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[9] == 1)
						k++;
					if (data[10] == 1)
						k++;
					if (data[11] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[31] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (k == 0)
					{
						if (button9->Enabled == true)
							Uncovertile(9);
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button11->Enabled == true)
							Uncovertile(11);
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button31->Enabled == true)
							Uncovertile(31);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button19->Enabled == true)
							Uncovertile(19);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button21->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[11] == 1)
						k++;
					if (data[10] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[31] == 1)
						k++;

					if (k == 0)
					{
						if (button11->Enabled == true)
							Uncovertile(11);
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button31->Enabled == true)
							Uncovertile(31);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button22->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[12] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[32] == 1)
						k++;

					if (k == 0)
					{
						if (button12->Enabled == true)
							Uncovertile(12);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button32->Enabled == true)
							Uncovertile(32);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button23->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[12] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[32] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (k == 0)
					{
						if (button12->Enabled == true)
							Uncovertile(12);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button22->Enabled == true)
							Uncovertile(22);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button24->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[13] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (k == 0)
					{
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button23->Enabled == true)
							Uncovertile(23);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button25->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[14] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (k == 0)
					{
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button26->Enabled == true)
							Uncovertile(26);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button26->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (k == 0)
					{
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button25->Enabled == true)
							Uncovertile(25);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button27->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[16] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (k == 0)
					{
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button26->Enabled == true)
							Uncovertile(26);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button28->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (k == 0)
					{
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button27->Enabled == true)
							Uncovertile(27);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button29->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (k == 0)
					{
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button28->Enabled == true)
							Uncovertile(28);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button30->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[31] == 1)
						k++;
					if (data[41] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (k == 0)
					{
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button31->Enabled == true)
							Uncovertile(31);
						if (button41->Enabled == true)
							Uncovertile(41);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button29->Enabled == true)
							Uncovertile(29);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button31->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[21] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[41] == 1)
						k++;
					if (k == 0)
					{
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button41->Enabled == true)
							Uncovertile(41);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button32->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[22] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[42] == 1)
						k++;
					if (k == 0)
					{
						if (button22->Enabled == true)
							Uncovertile(22);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button42->Enabled == true)
							Uncovertile(42);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button33->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[22] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[42] == 1)
						k++;
					if (data[32] == 1)
						k++;
					if (k == 0)
					{
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button42->Enabled == true)
							Uncovertile(42);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button34->Enabled == true)
							Uncovertile(34);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button34->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[23] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (k == 0)
					{
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button23->Enabled == true)
							Uncovertile(23);
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
					/*	//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button35->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[24] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (k == 0)
					{
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button34->Enabled == true)
							Uncovertile(34);
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
					/*//label2->Text = "You lose!";
			//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button36->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[25] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[35] == 1)
						k++;

					if (k == 0)
					{
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button25->Enabled == true)
							Uncovertile(25);
					}
				}
				if (k != 0)
				{
					button36->Text = System::Convert::ToString(k);
				}
			}
			if (x == 37)
			{
				button37->Enabled = false;
				button37->Text = "";
				if (data[37] == 1)
				{
					button37->BackColor = System::Drawing::SystemColors::GrayText;
					//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button37->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[26] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[36] == 1)
						k++;

					if (k == 0)
					{
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button36->Enabled == true)
							Uncovertile(36);
					}
				}
				if (k != 0)
				{
					button37->Text = System::Convert::ToString(k);
				}
			}
			if (x == 38)
			{
				button38->Enabled = false;
				button38->Text = "";
				if (data[38] == 1)
				{
					button38->BackColor = System::Drawing::SystemColors::GrayText;
					//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[27] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (k == 0)
					{
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button37->Enabled == true)
							Uncovertile(37);
					}
				}
				if (k != 0)
				{
					button38->Text = System::Convert::ToString(k);
				}
			}
			if (x == 39)
			{
				button39->Enabled = false;
				button39->Text = "";
				if (data[39] == 1)
				{
					button39->BackColor = System::Drawing::SystemColors::GrayText;
					//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button39->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[28] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (k == 0)
					{
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button38->Enabled == true)
							Uncovertile(38);
					}
				}
				if (k != 0)
				{
					button39->Text = System::Convert::ToString(k);
				}
			}
			if (x == 40)
			{
				button40->Enabled = false;
				button40->Text = "";
				if (data[40] == 1)
				{
					button40->BackColor = System::Drawing::SystemColors::GrayText;
					//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;
					bomb = 1;
				}
				else
				{
					button40->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[29] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[31] == 1)
						k++;
					if (data[41] == 1)
						k++;
					if (data[51] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (k == 0)
					{
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button31->Enabled == true)
							Uncovertile(31);
						if (button41->Enabled == true)
							Uncovertile(41);
						if (button51->Enabled == true)
							Uncovertile(51);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button39->Enabled == true)
							Uncovertile(39);
					}
				}
				if (k != 0)
				{
					button40->Text = System::Convert::ToString(k);
				}
			}
			if (x == 41)
			{
				button41->Enabled = false;
				button41->Text = "";
				if (data[41] == 1)
				{
					button41->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button41->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[31] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[51] == 1)
						k++;
					if (k == 0)
					{
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button31->Enabled == true)
							Uncovertile(31);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button51->Enabled == true)
							Uncovertile(51);
					}
				}
				if (k != 0)
				{
					button41->Text = System::Convert::ToString(k);
				}
			}
			if (x == 42)
			{
				button42->Enabled = false;
				button42->Text = "";
				if (data[42] == 1)
				{
					button42->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button42->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[32] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (data[52] == 1)
						k++;
					if (k == 0)
					{
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button52->Enabled == true)
							Uncovertile(52);
					}
				}
				if (k != 0)
				{
					button42->Text = System::Convert::ToString(k);
				}
			}
			if (x == 43)
			{
				button43->Enabled = false;
				button43->Text = "";
				if (data[43] == 1)
				{
					button43->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button43->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[32] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[54] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (data[52] == 1)
						k++;
					if (data[42] == 1)
						k++;
					if (k == 0)
					{
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button54->Enabled == true)
							Uncovertile(54);
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button52->Enabled == true)
							Uncovertile(52);
						if (button42->Enabled == true)
							Uncovertile(42);
					}
				}
				if (k != 0)
				{
					button43->Text = System::Convert::ToString(k);
				}
			}
			if (x == 44)
			{
				button44->Enabled = false;
				button44->Text = "";
				if (data[44] == 1)
				{
					button44->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					bomb = 1;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
				}
				else
				{
					button44->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[33] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[55] == 1)
						k++;
					if (data[54] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (k == 0)
					{
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button54->Enabled == true)
							Uncovertile(54);
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button43->Enabled == true)
							Uncovertile(43);
					}
				}
				if (k != 0)
				{
					button44->Text = System::Convert::ToString(k);
				}
			}
			if (x == 45)
			{
				button45->Enabled = false;
				button45->Text = "";
				if (data[45] == 1)
				{
					button45->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button45->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[34] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[56] == 1)
						k++;
					if (data[55] == 1)
						k++;
					if (data[54] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (k == 0)
					{
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button56->Enabled == true)
							Uncovertile(56);
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button54->Enabled == true)
							Uncovertile(54);
						if (button44->Enabled == true)
							Uncovertile(44);
					}
				}
				if (k != 0)
				{
					button45->Text = System::Convert::ToString(k);
				}
			}
			if (x == 46)
			{
				button46->Enabled = false;
				button46->Text = "";
				if (data[46] == 1)
				{
					button46->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

					bomb = 1;
					checkBox1->Visible = false;
				}
				else
				{
					button46->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[35] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[57] == 1)
						k++;
					if (data[56] == 1)
						k++;
					if (data[55] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (k == 0)
					{
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button57->Enabled == true)
							Uncovertile(57);
						if (button56->Enabled == true)
							Uncovertile(56);
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button45->Enabled == true)
							Uncovertile(45);
					}
				}
				if (k != 0)
				{
					button46->Text = System::Convert::ToString(k);
				}
			}
			if (x == 47)
			{
				button47->Enabled = false;
				button47->Text = "";
				if (data[47] == 1)
				{
					button47->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button47->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[36] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[58] == 1)
						k++;
					if (data[57] == 1)
						k++;
					if (data[56] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (k == 0)
					{
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button58->Enabled == true)
							Uncovertile(58);
						if (button57->Enabled == true)
							Uncovertile(57);
						if (button56->Enabled == true)
							Uncovertile(56);
						if (button46->Enabled == true)
							Uncovertile(46);
					}
				}
				if (k != 0)
				{
					button47->Text = System::Convert::ToString(k);
				}
			}
			if (x == 48)
			{
				button48->Enabled = false;
				button48->Text = "";
				if (data[48] == 1)
				{
					button48->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button48->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[37] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[59] == 1)
						k++;
					if (data[58] == 1)
						k++;
					if (data[57] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (k == 0)
					{
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button59->Enabled == true)
							Uncovertile(59);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button58->Enabled == true)
							Uncovertile(58);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button57->Enabled == true)
							Uncovertile(57);
					}
				}
				if (k != 0)
				{
					button48->Text = System::Convert::ToString(k);
				}
			}
			if (x == 49)
			{
				button49->Enabled = false;
				button49->Text = "";
				if (data[49] == 1)
				{
					button49->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button49->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[38] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[59] == 1)
						k++;
					if (data[58] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (k == 0)
					{
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button59->Enabled == true)
							Uncovertile(59);
						if (button58->Enabled == true)
							Uncovertile(58);
						if (button48->Enabled == true)
							Uncovertile(48);
					}
				}
				if (k != 0)
				{
					button49->Text = System::Convert::ToString(k);
				}
			}
			if (x == 50)
			{
				button50->Enabled = false;
				button50->Text = "";
				if (data[50] == 1)
				{
					button50->BackColor = System::Drawing::SystemColors::GrayText;

					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button50->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[39] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[41] == 1)
						k++;
					if (data[51] == 1)
						k++;
					if (data[61] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[59] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (k == 0)
					{
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button41->Enabled == true)
							Uncovertile(41);
						if (button51->Enabled == true)
							Uncovertile(51);
						if (button61->Enabled == true)
							Uncovertile(61);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button59->Enabled == true)
							Uncovertile(59);
						if (button49->Enabled == true)
							Uncovertile(49);
					}
				}
				if (k != 0)
				{
					button50->Text = System::Convert::ToString(k);
				}
			}
			if (x == 51)
			{
				button51->Enabled = false;
				button51->Text = "";
				if (data[51] == 1)
				{
					button51->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button51->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[41] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[61] == 1)
						k++;

					if (k == 0)
					{
						if (button41->Enabled == true)
							Uncovertile(41);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button61->Enabled == true)
							Uncovertile(61);
					}
				}
				if (k != 0)
				{
					button51->Text = System::Convert::ToString(k);
				}
			}
			if (x == 52)
			{
				button52->Enabled = false;
				button52->Text = "";
				if (data[52] == 1)
				{
					button52->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button52->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[42] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (data[63] == 1)
						k++;
					if (data[62] == 1)
						k++;

					if (k == 0)
					{
						if (button42->Enabled == true)
							Uncovertile(42);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button63->Enabled == true)
							Uncovertile(63);
						if (button62->Enabled == true)
							Uncovertile(62);
					}
				}
				if (k != 0)
				{
					button52->Text = System::Convert::ToString(k);
				}
			}
			if (x == 53)
			{
				button53->Enabled = false;
				button53->Text = "";
				if (data[53] == 1)
				{
					button53->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button53->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[42] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[54] == 1)
						k++;
					if (data[64] == 1)
						k++;
					if (data[63] == 1)
						k++;
					if (data[62] == 1)
						k++;
					if (data[52] == 1)
						k++;
					if (k == 0)
					{
						if (button42->Enabled == true)
							Uncovertile(42);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button54->Enabled == true)
							Uncovertile(54);
						if (button64->Enabled == true)
							Uncovertile(64);
						if (button63->Enabled == true)
							Uncovertile(63);
						if (button62->Enabled == true)
							Uncovertile(62);
						if (button52->Enabled == true)
							Uncovertile(52);
					}
				}
				if (k != 0)
				{
					button53->Text = System::Convert::ToString(k);
				}
			}
			if (x == 54)
			{
				button54->Enabled = false;
				button54->Text = "";
				if (data[54] == 1)
				{
					button54->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button54->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[43] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[55] == 1)
						k++;
					if (data[65] == 1)
						k++;
					if (data[64] == 1)
						k++;
					if (data[63] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (k == 0)
					{
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button65->Enabled == true)
							Uncovertile(65);
						if (button64->Enabled == true)
							Uncovertile(64);
						if (button63->Enabled == true)
							Uncovertile(63);
						if (button53->Enabled == true)
							Uncovertile(53);
					}
				}
				if (k != 0)
				{
					button54->Text = System::Convert::ToString(k);
				}
			}
			if (x == 55)
			{
				button55->Enabled = false;
				button55->Text = "";
				if (data[55] == 1)
				{
					button55->BackColor = System::Drawing::SystemColors::GrayText;
					/*	//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button55->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[44] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[56] == 1)
						k++;
					if (data[66] == 1)
						k++;
					if (data[65] == 1)
						k++;
					if (data[64] == 1)
						k++;
					if (data[54] == 1)
						k++;
					if (k == 0)
					{
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button56->Enabled == true)
							Uncovertile(56);
						if (button66->Enabled == true)
							Uncovertile(66);
						if (button65->Enabled == true)
							Uncovertile(65);
						if (button64->Enabled == true)
							Uncovertile(64);
						if (button54->Enabled == true)
							Uncovertile(54);
					}
				}
				if (k != 0)
				{
					button55->Text = System::Convert::ToString(k);
				}
			}
			if (x == 56)
			{
				button56->Enabled = false;
				button56->Text = "";
				if (data[56] == 1)
				{
					button56->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

					bomb = 1;
				}
				else
				{
					button56->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[45] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[57] == 1)
						k++;
					if (data[67] == 1)
						k++;
					if (data[66] == 1)
						k++;
					if (data[65] == 1)
						k++;
					if (data[55] == 1)
						k++;
					if (k == 0)
					{
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button57->Enabled == true)
							Uncovertile(57);
						if (button67->Enabled == true)
							Uncovertile(67);
						if (button66->Enabled == true)
							Uncovertile(66);
						if (button65->Enabled == true)
							Uncovertile(65);
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button47->Enabled == true)
							Uncovertile(47);
					}
				}
				if (k != 0)
				{
					button56->Text = System::Convert::ToString(k);
				}
			}
			if (x == 57)
			{
				button57->Enabled = false;
				button57->Text = "";
				if (data[57] == 1)
				{
					button57->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button57->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[46] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[58] == 1)
						k++;
					if (data[68] == 1)
						k++;
					if (data[67] == 1)
						k++;
					if (data[66] == 1)
						k++;
					if (data[56] == 1)
						k++;
					if (k == 0)
					{
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button58->Enabled == true)
							Uncovertile(58);
						if (button68->Enabled == true)
							Uncovertile(68);
						if (button67->Enabled == true)
							Uncovertile(67);
						if (button66->Enabled == true)
							Uncovertile(66);
						if (button56->Enabled == true)
							Uncovertile(56);
					}
				}
				if (k != 0)
				{
					button57->Text = System::Convert::ToString(k);
				}
			}
			if (x == 58)
			{
				button58->Enabled = false;
				button58->Text = "";
				if (data[58] == 1)
				{
					button58->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button58->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[47] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[59] == 1)
						k++;
					if (data[69] == 1)
						k++;
					if (data[68] == 1)
						k++;
					if (data[67] == 1)
						k++;
					if (data[57] == 1)
						k++;
					if (k == 0)
					{
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button59->Enabled == true)
							Uncovertile(59);
						if (button69->Enabled == true)
							Uncovertile(69);
						if (button68->Enabled == true)
							Uncovertile(68);
						if (button67->Enabled == true)
							Uncovertile(67);
						if (button57->Enabled == true)
							Uncovertile(57);
					}
				}
				if (k != 0)
				{
					button58->Text = System::Convert::ToString(k);
				}
			}
			if (x == 59)
			{
				button59->Enabled = false;
				button59->Text = "";
				if (data[59] == 1)
				{
					button59->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button59->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[48] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[70] == 1)
						k++;
					if (data[69] == 1)
						k++;
					if (data[68] == 1)
						k++;
					if (data[58] == 1)
						k++;
					if (k == 0)
					{
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button70->Enabled == true)
							Uncovertile(70);
						if (button69->Enabled == true)
							Uncovertile(69);
						if (button68->Enabled == true)
							Uncovertile(68);
						if (button58->Enabled == true)
							Uncovertile(58);
					}
				}
				if (k != 0)
				{
					button59->Text = System::Convert::ToString(k);
				}
			}
			if (x == 60)
			{
				button60->Enabled = false;
				button60->Text = "";
				if (data[60] == 1)
				{
					button60->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button60->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[49] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[51] == 1)
						k++;
					if (data[61] == 1)
						k++;
					if (data[71] == 1)
						k++;
					if (data[70] == 1)
						k++;
					if (data[69] == 1)
						k++;
					if (data[59] == 1)
						k++;
					if (k == 0)
					{
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button51->Enabled == true)
							Uncovertile(51);
						if (button61->Enabled == true)
							Uncovertile(61);
						if (button71->Enabled == true)
							Uncovertile(71);
						if (button70->Enabled == true)
							Uncovertile(70);
						if (button69->Enabled == true)
							Uncovertile(69);
						if (button59->Enabled == true)
							Uncovertile(59);
					}
				}
				if (k != 0)
				{
					button60->Text = System::Convert::ToString(k);
				}
			}
			if (x == 61)
			{
				button61->Enabled = false;
				button61->Text = "";
				if (data[61] == 1)
				{
					button61->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button61->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[51] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[70] == 1)
						k++;
					if (data[71] == 1)
						k++;
					if (k == 0)
					{
						if (button51->Enabled == true)
							Uncovertile(51);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button70->Enabled == true)
							Uncovertile(70);
						if (button71->Enabled == true)
							Uncovertile(71);
					}
				}
				if (k != 0)
				{
					button61->Text = System::Convert::ToString(k);
				}
			}
			if (x == 62)
			{
				button62->Enabled = false;
				button62->Text = "";
				if (data[62] == 1)
				{
					button62->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button62->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[52] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (data[63] == 1)
						k++;
					if (data[73] == 1)
						k++;
					if (data[72] == 1)
						k++;

					if (k == 0)
					{
						if (button52->Enabled == true)
							Uncovertile(52);
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button63->Enabled == true)
							Uncovertile(63);
						if (button73->Enabled == true)
							Uncovertile(73);
						if (button72->Enabled == true)
							Uncovertile(72);
					}
				}
				if (k != 0)
				{
					button62->Text = System::Convert::ToString(k);
				}
			}
			if (x == 63)
			{
				button63->Enabled = false;
				button63->Text = "";
				if (data[63] == 1)
				{
					button63->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button63->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[52] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (data[54] == 1)
						k++;
					if (data[64] == 1)
						k++;
					if (data[74] == 1)
						k++;
					if (data[73] == 1)
						k++;
					if (data[72] == 1)
						k++;
					if (data[62] == 1)
						k++;
					if (k == 0)
					{
						if (button52->Enabled == true)
							Uncovertile(52);
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button54->Enabled == true)
							Uncovertile(54);
						if (button64->Enabled == true)
							Uncovertile(64);
						if (button74->Enabled == true)
							Uncovertile(74);
						if (button73->Enabled == true)
							Uncovertile(73);
						if (button72->Enabled == true)
							Uncovertile(72);
						if (button62->Enabled == true)
							Uncovertile(62);
					}
				}
				if (k != 0)
				{
					button63->Text = System::Convert::ToString(k);
				}
			}
			if (x == 64)
			{
				button64->Enabled = false;
				button64->Text = "";
				if (data[64] == 1)
				{
					button64->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button64->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[53] == 1)
						k++;
					if (data[54] == 1)
						k++;
					if (data[55] == 1)
						k++;
					if (data[65] == 1)
						k++;
					if (data[75] == 1)
						k++;
					if (data[74] == 1)
						k++;
					if (data[73] == 1)
						k++;
					if (data[63] == 1)
						k++;
					if (k == 0)
					{
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button54->Enabled == true)
							Uncovertile(54);
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button65->Enabled == true)
							Uncovertile(65);
						if (button75->Enabled == true)
							Uncovertile(75);
						if (button74->Enabled == true)
							Uncovertile(74);
						if (button73->Enabled == true)
							Uncovertile(73);
						if (button63->Enabled == true)
							Uncovertile(63);
					}
				}
				if (k != 0)
				{
					button64->Text = System::Convert::ToString(k);
				}
			}
			if (x == 65)
			{
				button65->Enabled = false;
				button65->Text = "";
				if (data[65] == 1)
				{
					button65->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					bomb = 1;
				}
				else
				{
					button65->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[54] == 1)
						k++;
					if (data[55] == 1)
						k++;
					if (data[56] == 1)
						k++;
					if (data[66] == 1)
						k++;
					if (data[76] == 1)
						k++;
					if (data[75] == 1)
						k++;
					if (data[74] == 1)
						k++;
					if (data[64] == 1)
						k++;
					if (k == 0)
					{
						if (button54->Enabled == true)
							Uncovertile(54);
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button56->Enabled == true)
							Uncovertile(56);
						if (button66->Enabled == true)
							Uncovertile(66);
						if (button76->Enabled == true)
							Uncovertile(76);
						if (button75->Enabled == true)
							Uncovertile(75);
						if (button74->Enabled == true)
							Uncovertile(74);
						if (button64->Enabled == true)
							Uncovertile(64);
					}
				}
				if (k != 0)
				{
					button65->Text = System::Convert::ToString(k);
				}
			}
			if (x == 66)
			{
				button66->Enabled = false;
				button66->Text = "";
				if (data[66] == 1)
				{
					button66->BackColor = System::Drawing::SystemColors::GrayText;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button66->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[55] == 1)
						k++;
					if (data[56] == 1)
						k++;
					if (data[57] == 1)
						k++;
					if (data[67] == 1)
						k++;
					if (data[77] == 1)
						k++;
					if (data[76] == 1)
						k++;
					if (data[75] == 1)
						k++;
					if (data[65] == 1)
						k++;
					if (k == 0)
					{
						if (button55->Enabled == true)
							Uncovertile(55);
						if (button56->Enabled == true)
							Uncovertile(56);
						if (button57->Enabled == true)
							Uncovertile(57);
						if (button67->Enabled == true)
							Uncovertile(67);
						if (button77->Enabled == true)
							Uncovertile(77);
						if (button76->Enabled == true)
							Uncovertile(76);
						if (button75->Enabled == true)
							Uncovertile(75);
						if (button65->Enabled == true)
							Uncovertile(65);
					}
				}
				if (k != 0)
				{
					button66->Text = System::Convert::ToString(k);
				}
			}
			if (x == 67)
			{
				button67->Enabled = false;
				button67->Text = "";
				if (data[67] == 1)
				{
					button67->BackColor = System::Drawing::SystemColors::GrayText;
					MessageBox::Show("You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button67->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[56] == 1)
						k++;
					if (data[57] == 1)
						k++;
					if (data[58] == 1)
						k++;
					if (data[68] == 1)
						k++;
					if (data[78] == 1)
						k++;
					if (data[77] == 1)
						k++;
					if (data[76] == 1)
						k++;
					if (data[66] == 1)
						k++;

					if (k == 0)
					{
						if (button56->Enabled == true)
							Uncovertile(56);
						if (button57->Enabled == true)
							Uncovertile(57);
						if (button58->Enabled == true)
							Uncovertile(58);
						if (button68->Enabled == true)
							Uncovertile(68);
						if (button78->Enabled == true)
							Uncovertile(78);
						if (button77->Enabled == true)
							Uncovertile(77);
						if (button76->Enabled == true)
							Uncovertile(76);
						if (button66->Enabled == true)
							Uncovertile(66);
					}
				}
				if (k != 0)
				{
					button67->Text = System::Convert::ToString(k);
				}
			}
			if (x == 68)
			{
				button68->Enabled = false;
				button68->Text = "";
				if (data[68] == 1)
				{
					button68->BackColor = System::Drawing::SystemColors::GrayText;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button68->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[57] == 1)
						k++;
					if (data[58] == 1)
						k++;
					if (data[59] == 1)
						k++;
					if (data[69] == 1)
						k++;
					if (data[79] == 1)
						k++;
					if (data[78] == 1)
						k++;
					if (data[77] == 1)
						k++;
					if (data[67] == 1)
						k++;
					if (k == 0)
					{
						if (button57->Enabled == true)
							Uncovertile(57);
						if (button58->Enabled == true)
							Uncovertile(58);
						if (button59->Enabled == true)
							Uncovertile(59);
						if (button69->Enabled == true)
							Uncovertile(69);
						if (button79->Enabled == true)
							Uncovertile(79);
						if (button78->Enabled == true)
							Uncovertile(78);
						if (button77->Enabled == true)
							Uncovertile(77);
						if (button67->Enabled == true)
							Uncovertile(67);
					}
				}
				if (k != 0)
				{
					button68->Text = System::Convert::ToString(k);
				}
			}
			if (x == 69)
			{
				button69->Enabled = false;
				button69->Text = "";
				if (data[69] == 1)
				{
					button69->BackColor = System::Drawing::SystemColors::GrayText;
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button69->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[58] == 1)
						k++;
					if (data[59] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[70] == 1)
						k++;
					if (data[80] == 1)
						k++;
					if (data[79] == 1)
						k++;
					if (data[78] == 1)
						k++;
					if (data[68] == 1)
						k++;
					if (k == 0)
					{
						if (button58->Enabled == true)
							Uncovertile(58);
						if (button59->Enabled == true)
							Uncovertile(59);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button70->Enabled == true)
							Uncovertile(70);
						if (button80->Enabled == true)
							Uncovertile(80);
						if (button79->Enabled == true)
							Uncovertile(79);
						if (button78->Enabled == true)
							Uncovertile(78);
						if (button68->Enabled == true)
							Uncovertile(68);
					}
				}
				if (k != 0)
				{
					button69->Text = System::Convert::ToString(k);
				}
			}
			if (x == 70)
			{
				button70->Enabled = false;
				button70->Text = "";
				if (data[70] == 1)
				{
					button70->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button70->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[59] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[61] == 1)
						k++;
					if (data[71] == 1)
						k++;
					if (data[81] == 1)
						k++;
					if (data[80] == 1)
						k++;
					if (data[79] == 1)
						k++;
					if (data[69] == 1)
						k++;
					if (k == 0)
					{
						if (button59->Enabled == true)
							Uncovertile(59);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button61->Enabled == true)
							Uncovertile(61);
						if (button71->Enabled == true)
							Uncovertile(71);
						if (button81->Enabled == true)
							Uncovertile(81);
						if (button80->Enabled == true)
							Uncovertile(80);
						if (button79->Enabled == true)
							Uncovertile(79);
						if (button69->Enabled == true)
							Uncovertile(69);
					}
				}
				if (k != 0)
				{
					button70->Text = System::Convert::ToString(k);
				}
			}
			if (x == 71)
			{
				button71->Enabled = false;
				button71->Text = "";
				if (data[71] == 1)
				{
					button71->BackColor = System::Drawing::SystemColors::GrayText;
					/*	//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button71->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[61] == 1)
						k++;
					if (data[60] == 1)
						k++;
					if (data[70] == 1)
						k++;
					if (data[80] == 1)
						k++;
					if (data[81] == 1)
						k++;
					if (k == 0)
					{
						if (button61->Enabled == true)
							Uncovertile(61);
						if (button60->Enabled == true)
							Uncovertile(60);
						if (button70->Enabled == true)
							Uncovertile(70);
						if (button80->Enabled == true)
							Uncovertile(80);
						if (button81->Enabled == true)
							Uncovertile(81);
					}
				}
				if (k != 0)
				{
					button71->Text = System::Convert::ToString(k);
				}
			}
			if (x == 72)
			{
				button72->Enabled = false;
				button72->Text = "";
				if (data[72] == 1)
				{
					button72->BackColor = System::Drawing::SystemColors::GrayText;
					/*//label2->Text = "You lose!";
				//label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button72->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[62] == 1)
						k++;
					if (data[63] == 1)
						k++;
					if (data[73] == 1)
						k++;
					if (data[83] == 1)
						k++;
					if (data[82] == 1)
						k++;

					if (k == 0)
					{
						if (button62->Enabled == true)
							Uncovertile(62);
						if (button63->Enabled == true)
							Uncovertile(63);
						if (button73->Enabled == true)
							Uncovertile(73);
						if (button83->Enabled == true)
							Uncovertile(83);
						if (button82->Enabled == true)
							Uncovertile(82);
					}
				}
				if (k != 0)
				{
					button72->Text = System::Convert::ToString(k);
				}

				if (x == 73)
				{
					button73->Enabled = false;
					button73->Text = "";
					if (data[73] == 1)
					{
						button73->BackColor = System::Drawing::SystemColors::GrayText;
						//label2->Text = "You lose!";
						//label2->ForeColor = System::Drawing::Color::Red;
						bomb = 1;
					}
					else
					{
						button73->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[62] == 1)
							k++;
						if (data[63] == 1)
							k++;
						if (data[64] == 1)
							k++;
						if (data[74] == 1)
							k++;
						if (data[84] == 1)
							k++;
						if (data[83] == 1)
							k++;
						if (data[82] == 1)
							k++;
						if (data[72] == 1)
							k++;
						if (k == 0)
						{
							if (button62->Enabled == true)
								Uncovertile(62);
							if (button63->Enabled == true)
								Uncovertile(63);
							if (button64->Enabled == true)
								Uncovertile(64);
							if (button74->Enabled == true)
								Uncovertile(74);
							if (button84->Enabled == true)
								Uncovertile(84);
							if (button83->Enabled == true)
								Uncovertile(83);
							if (button82->Enabled == true)
								Uncovertile(82);
							if (button72->Enabled == true)
								Uncovertile(72);
						}
					}
					if (k != 0)
					{
						button73->Text = System::Convert::ToString(k);
					}
				}
				if (x == 74)
				{
					button74->Enabled = false;
					button74->Text = "";
					if (data[74] == 1)
					{
						button74->BackColor = System::Drawing::SystemColors::GrayText;
						//label2->Text = "You lose!";
						//label2->ForeColor = System::Drawing::Color::Red;
						bomb = 1;
					}
					else
					{
						button74->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[63] == 1)
							k++;
						if (data[64] == 1)
							k++;
						if (data[65] == 1)
							k++;
						if (data[75] == 1)
							k++;
						if (data[85] == 1)
							k++;
						if (data[84] == 1)
							k++;
						if (data[83] == 1)
							k++;
						if (data[73] == 1)
							k++;
						if (k == 0)
						{
							if (button63->Enabled == true)
								Uncovertile(63);
							if (button64->Enabled == true)
								Uncovertile(64);
							if (button65->Enabled == true)
								Uncovertile(65);
							if (button75->Enabled == true)
								Uncovertile(75);
							if (button85->Enabled == true)
								Uncovertile(85);
							if (button84->Enabled == true)
								Uncovertile(84);
							if (button83->Enabled == true)
								Uncovertile(83);
							if (button73->Enabled == true)
								Uncovertile(73);
						}
					}
					if (k != 0)
					{
						button74->Text = System::Convert::ToString(k);
					}
				}
				if (x == 75)
				{
					button75->Enabled = false;
					button75->Text = "";
					if (data[75] == 1)
					{
						button75->BackColor = System::Drawing::SystemColors::GrayText;
						//label2->Text = "You lose!";
						//label2->ForeColor = System::Drawing::Color::Red;
						bomb = 1;
					}
					else
					{
						button75->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[64] == 1)
							k++;
						if (data[65] == 1)
							k++;
						if (data[66] == 1)
							k++;
						if (data[76] == 1)
							k++;
						if (data[86] == 1)
							k++;
						if (data[85] == 1)
							k++;
						if (data[84] == 1)
							k++;
						if (data[74] == 1)
							k++;
						if (k == 0)
						{
							if (button64->Enabled == true)
								Uncovertile(64);
							if (button65->Enabled == true)
								Uncovertile(65);
							if (button66->Enabled == true)
								Uncovertile(66);
							if (button76->Enabled == true)
								Uncovertile(76);
							if (button86->Enabled == true)
								Uncovertile(86);
							if (button85->Enabled == true)
								Uncovertile(85);
							if (button84->Enabled == true)
								Uncovertile(84);
							if (button74->Enabled == true)
								Uncovertile(74);
						}
					}
					if (k != 0)
					{
						button75->Text = System::Convert::ToString(k);
					}
				}
				if (x == 76)
				{
					button76->Enabled = false;
					button76->Text = "";
					if (data[76] == 1)
					{
						button76->BackColor = System::Drawing::SystemColors::GrayText;
						//label2->Text = "You lose!";
						//label2->ForeColor = System::Drawing::Color::Red;
						bomb = 1;
					}
					else
					{
						button76->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[65] == 1)
							k++;
						if (data[66] == 1)
							k++;
						if (data[67] == 1)
							k++;
						if (data[77] == 1)
							k++;
						if (data[87] == 1)
							k++;
						if (data[86] == 1)
							k++;
						if (data[85] == 1)
							k++;
						if (data[75] == 1)
							k++;
						if (k == 0)
						{
							if (button65->Enabled == true)
								Uncovertile(65);
							if (button66->Enabled == true)
								Uncovertile(66);
							if (button67->Enabled == true)
								Uncovertile(67);
							if (button77->Enabled == true)
								Uncovertile(77);
							if (button87->Enabled == true)
								Uncovertile(87);
							if (button86->Enabled == true)
								Uncovertile(86);
							if (button85->Enabled == true)
								Uncovertile(85);
							if (button75->Enabled == true)
								Uncovertile(75);
						}
					}
					if (k != 0)
					{
						button76->Text = System::Convert::ToString(k);
					}
				}
				if (x == 77)
				{
					button77->Enabled = false;
					button77->Text = "";
					if (data[77] == 1)
					{
						button77->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						bomb = 1;
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;
					}
					else
					{
						button77->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[66] == 1)
							k++;
						if (data[67] == 1)
							k++;
						if (data[68] == 1)
							k++;
						if (data[78] == 1)
							k++;
						if (data[88] == 1)
							k++;
						if (data[87] == 1)
							k++;
						if (data[86] == 1)
							k++;
						if (data[76] == 1)
							k++;
						if (k == 0)
						{
							if (button66->Enabled == true)
								Uncovertile(66);
							if (button67->Enabled == true)
								Uncovertile(67);
							if (button68->Enabled == true)
								Uncovertile(68);
							if (button78->Enabled == true)
								Uncovertile(78);
							if (button88->Enabled == true)
								Uncovertile(88);
							if (button87->Enabled == true)
								Uncovertile(87);
							if (button86->Enabled == true)
								Uncovertile(86);
							if (button76->Enabled == true)
								Uncovertile(76);
						}
					}
					if (k != 0)
					{
						button77->Text = System::Convert::ToString(k);
					}
				}
				if (x == 78)
				{
					button78->Enabled = false;
					button78->Text = "";
					if (data[78] == 1)
					{
						button78->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						bomb = 1;
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;
					}
					else
					{
						button78->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[67] == 1)
							k++;
						if (data[68] == 1)
							k++;
						if (data[69] == 1)
							k++;
						if (data[79] == 1)
							k++;
						if (data[89] == 1)
							k++;
						if (data[88] == 1)
							k++;
						if (data[87] == 1)
							k++;
						if (data[77] == 1)
							k++;

						if (k == 0)
						{
							if (button67->Enabled == true)
								Uncovertile(67);
							if (button68->Enabled == true)
								Uncovertile(68);
							if (button69->Enabled == true)
								Uncovertile(69);
							if (button79->Enabled == true)
								Uncovertile(79);
							if (button89->Enabled == true)
								Uncovertile(89);
							if (button88->Enabled == true)
								Uncovertile(88);
							if (button87->Enabled == true)
								Uncovertile(87);
							if (button77->Enabled == true)
								Uncovertile(77);
						}
					}
					if (k != 0)
					{
						button78->Text = System::Convert::ToString(k);
					}
				}
				if (x == 79)
				{
					button79->Enabled = false;
					button79->Text = "";
					if (data[79] == 1)
					{
						button79->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						bomb = 1;
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;
					}
					else
					{
						button79->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[68] == 1)
							k++;
						if (data[69] == 1)
							k++;
						if (data[70] == 1)
							k++;
						if (data[80] == 1)
							k++;
						if (data[90] == 1)
							k++;
						if (data[89] == 1)
							k++;
						if (data[88] == 1)
							k++;
						if (data[78] == 1)
							k++;
						if (k == 0)
						{
							if (button68->Enabled == true)
								Uncovertile(68);
							if (button69->Enabled == true)
								Uncovertile(69);
							if (button70->Enabled == true)
								Uncovertile(70);
							if (button80->Enabled == true)
								Uncovertile(80);
							if (button90->Enabled == true)
								Uncovertile(90);
							if (button89->Enabled == true)
								Uncovertile(89);
							if (button88->Enabled == true)
								Uncovertile(88);
							if (button78->Enabled == true)
								Uncovertile(78);
						}
					}
					if (k != 0)
					{
						button79->Text = System::Convert::ToString(k);
					}
				}
				if (x == 80)
				{
					button80->Enabled = false;
					button80->Text = "";
					if (data[80] == 1)
					{
						button80->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						bomb = 1;
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;
					}
					else
					{
						button80->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[69] == 1)
							k++;
						if (data[70] == 1)
							k++;
						if (data[71] == 1)
							k++;
						if (data[81] == 1)
							k++;
						if (data[91] == 1)
							k++;
						if (data[90] == 1)
							k++;
						if (data[89] == 1)
							k++;
						if (data[79] == 1)
							k++;
						if (k == 0)
						{
							if (button69->Enabled == true)
								Uncovertile(69);
							if (button70->Enabled == true)
								Uncovertile(70);
							if (button71->Enabled == true)
								Uncovertile(71);
							if (button81->Enabled == true)
								Uncovertile(81);
							if (button91->Enabled == true)
								Uncovertile(91);
							if (button90->Enabled == true)
								Uncovertile(90);
							if (button89->Enabled == true)
								Uncovertile(89);
							if (button79->Enabled == true)
								Uncovertile(79);
						}
					}
					if (k != 0)
					{
						button80->Text = System::Convert::ToString(k);
					}
				}
				if (x == 81)
				{
					button81->Enabled = false;
					button81->Text = "";
					if (data[81] == 1)
					{
						button81->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button81->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[70] == 1)
							k++;
						if (data[71] == 1)
							k++;
						if (data[80] == 1)
							k++;
						if (data[90] == 1)
							k++;
						if (data[91] == 1)
							k++;

						{
							if (button70->Enabled == true)
								Uncovertile(70);
							if (button71->Enabled == true)
								Uncovertile(71);
							if (button80->Enabled == true)
								Uncovertile(80);
							if (button90->Enabled == true)
								Uncovertile(90);
							if (button91->Enabled == true)
								Uncovertile(91);
						}
					}
					if (k != 0)
					{
						button81->Text = System::Convert::ToString(k);
					}
				}
				if (x == 92)
				{
					button92->Enabled = false;
					button92->Text = "";
					if (data[92] == 1)
					{
						button92->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

						bomb = 1;
						checkBox1->Visible = false;
					}
					else
					{
						button92->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[82] == 1)
							k++;
						if (data[83] == 1)
							k++;
						if (data[93] == 1)
							k++;

						if (k == 0)
						{
							if (button82->Enabled == true)
								Uncovertile(82);
							if (button83->Enabled == true)
								Uncovertile(83);
							if (button93->Enabled == true)
								Uncovertile(93);
						}
					}
					if (k != 0)
					{
						button92->Text = System::Convert::ToString(k);
					}
				}
				if (x == 93)
				{
					button93->Enabled = false;
					button93->Text = "";
					if (data[93] == 1)
					{
						button93->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button93->BackColor = System::Drawing::SystemColors::ControlLightLight; // WEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEW
						if (data[92] == 1)
							k++;
						if (data[82] == 1)
							k++;
						if (data[83] == 1)
							k++;
						if (data[84] == 1)
							k++;
						if (data[94] == 1)
							k++;
						{
							if (button82->Enabled == true)
								Uncovertile(82);
							if (button92->Enabled == true)
								Uncovertile(92);
							if (button83->Enabled == true)
								Uncovertile(83);
							if (button84->Enabled == true)
								Uncovertile(84);
							if (button94->Enabled == true)
								Uncovertile(94);
						}
					}
					if (k != 0)
					{
						button93->Text = System::Convert::ToString(k);
					}
				}
				if (x == 94)
				{
					button94->Enabled = false;
					button94->Text = "";
					if (data[94] == 1)
					{
						button94->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button94->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[83] == 1)
							k++;
						if (data[83] == 1)
							k++;
						if (data[84] == 1)
							k++;
						if (data[85] == 1)
							k++;
						if (data[95] == 1)
							k++;
						if (k == 0)
						{
							if (button83->Enabled == true)
								Uncovertile(83);
							if (button84->Enabled == true)
								Uncovertile(84);
							if (button85->Enabled == true)
								Uncovertile(85);
							if (button93->Enabled == true)
								Uncovertile(93);
							if (button95->Enabled == true)
								Uncovertile(95);
						}
					}
					if (k != 0)
					{
						button94->Text = System::Convert::ToString(k);
					}
				}
				if (x == 95)
				{
					button95->Enabled = false;
					button95->Text = "";
					if (data[95] == 1)
					{
						button95->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button95->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[84] == 1)
							k++;
						if (data[85] == 1)
							k++;
						if (data[86] == 1)
							k++;
						if (data[94] == 1)
							k++;
						if (data[96] == 1)
							k++;
						if (k == 0)
						{
							if (button84->Enabled == true)
								Uncovertile(84);
							if (button85->Enabled == true)
								Uncovertile(85);
							if (button86->Enabled == true)
								Uncovertile(86);
							if (button94->Enabled == true)
								Uncovertile(94);
							if (button96->Enabled == true)
								Uncovertile(96);
						}
					}
					if (k != 0)
					{
						button95->Text = System::Convert::ToString(k);
					}
				}
				if (x == 96)
				{
					button96->Enabled = false;
					button96->Text = "";
					if (data[96] == 1)
					{
						button96->BackColor = System::Drawing::SystemColors::GrayText;

						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button96->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[85] == 1)
							k++;
						if (data[86] == 1)
							k++;
						if (data[87] == 1)
							k++;
						if (data[95] == 1)
							k++;
						if (data[97] == 1)
							k++;
						if (k == 0)
						{
							if (button85->Enabled == true)
								Uncovertile(85);
							if (button86->Enabled == true)
								Uncovertile(86);
							if (button87->Enabled == true)
								Uncovertile(87);
							if (button95->Enabled == true)
								Uncovertile(95);
							if (button97->Enabled == true)
								Uncovertile(97);
						}
					}
					if (k != 0)
					{
						button96->Text = System::Convert::ToString(k);
					}
				}
				if (x == 97)
				{
					button97->Enabled = false;
					button97->Text = "";
					if (data[97] == 1)
					{
						button97->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button97->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[86] == 1)
							k++;
						if (data[87] == 1)
							k++;
						if (data[88] == 1)
							k++;
						if (data[96] == 1)
							k++;
						if (data[98] == 1)
							k++;

						if (k == 0)
						{
							if (button86->Enabled == true)
								Uncovertile(86);
							if (button87->Enabled == true)
								Uncovertile(87);
							if (button88->Enabled == true)
								Uncovertile(88);
							if (button96->Enabled == true)
								Uncovertile(96);
							if (button98->Enabled == true)
								Uncovertile(98);
						}
					}
					if (k != 0)
					{
						button97->Text = System::Convert::ToString(k);
					}
				}
				if (x == 98)
				{
					button98->Enabled = false;
					button98->Text = "";
					if (data[98] == 1)
					{
						button98->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button98->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[87] == 1)
							k++;
						if (data[88] == 1)
							k++;
						if (data[89] == 1)
							k++;
						if (data[97] == 1)
							k++;
						if (data[99] == 1)
							k++;
						if (k == 0)
						{
							if (button87->Enabled == true)
								Uncovertile(87);
							if (button88->Enabled == true)
								Uncovertile(88);
							if (button89->Enabled == true)
								Uncovertile(89);
							if (button97->Enabled == true)
								Uncovertile(97);
							if (button99->Enabled == true)
								Uncovertile(99);
						}
					}
					if (k != 0)
					{
						button98->Text = System::Convert::ToString(k);
					}
				}
				if (x == 99)
				{
					button99->Enabled = false;
					button99->Text = "";
					if (data[99] == 1)
					{
						button99->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button99->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[88] == 1)
							k++;
						if (data[89] == 1)
							k++;
						if (data[90] == 1)
							k++;
						if (data[98] == 1)
							k++;
						if (data[100] == 1)
							k++;

						if (k == 0)
						{
							if (button88->Enabled == true)
								Uncovertile(88);
							if (button89->Enabled == true)
								Uncovertile(89);
							if (button90->Enabled == true)
								Uncovertile(90);
							if (button100->Enabled == true)
								Uncovertile(100);
							if (button98->Enabled == true)
								Uncovertile(88);
						}
					}
					if (k != 0)
					{
						button99->Text = System::Convert::ToString(k);
					}
				}
				if (x == 100)
				{
					button100->Enabled = false;
					button100->Text = "";
					if (data[100] == 1)
					{
						button100->BackColor = System::Drawing::SystemColors::GrayText;
						/*//label2->Text = "You lose!";
					//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button100->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[89] == 1)
							k++;
						if (data[90] == 1)
							k++;
						if (data[91] == 1)
							k++;
						if (data[105] == 1)
							k++;
						if (data[99] == 1)
							k++;
						if (k == 0)
						{
							if (button89->Enabled == true)
								Uncovertile(89);
							if (button90->Enabled == true)
								Uncovertile(90);
							if (button91->Enabled == true)
								Uncovertile(91);
							if (button105->Enabled == true)
								Uncovertile(105);
							if (button99->Enabled == true)
								Uncovertile(89);
						}
					}
					if (k != 0)
					{
						button100->Text = System::Convert::ToString(k);
					}
				}
				if (x == 105)
				{
					button105->Enabled = false;
					button105->Text = "";
					if (data[105] == 1)
					{
						button105->BackColor = System::Drawing::SystemColors::GrayText;
						/*	//label2->Text = "You lose!";
						//label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button105->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[91] == 1)
							k++;
						if (data[90] == 1)
							k++;
						if (data[100] == 1)
							k++;
						if (k == 0)
						{
							if (button91->Enabled == true)
								Uncovertile(91);
							if (button90->Enabled == true)
								Uncovertile(90);
							if (button100->Enabled == true)
								Uncovertile(100);
						}
					}
					if (k != 0)
					{
						button105->Text = System::Convert::ToString(k);
					}
				}
				if (move == 75 && bomb == 0) //movr= nb de case - nbmines
				{
					MessageBox::Show("You Win!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;
					/*//label2->Text = "You Win!";
	//label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;*/
					Win();
				}
				if (bomb != 0)
					Lose();
			}
			}
			}
           
 public:	Void Bombs()
	   {

		   for (int i = 0; i <= 100; i++)
		   {
			   data[i] = 0;
		   }
		   int k = 1;
		   srand(time(NULL));
		   while (k <= 11)
		   {

			   int c = rand() % 100 + 1;
			   if (data[c + 1] == 0)
			   {
				   data[c + 1] = 1;
				   k++;
			   }
		   }
	   }
	
	
        private:
			System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
			{
				if (checkBox1->Checked == true)
				{
					button2->BackgroundImage = imageList1->Images[1];
					button2->BackgroundImageLayout = ImageLayout::Stretch;
				}
				else
					Uncovertile(2);
			}

			private:
				System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button3->BackgroundImage = imageList1->Images[1];
						button3->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(3);
				}

			private:
				System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button4->BackgroundImage = imageList1->Images[1];
						button4->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(4);
				}

			private:
				System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button5->BackgroundImage = imageList1->Images[1];
						button5->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(5);
				}

			private:
				System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button6->BackgroundImage = imageList1->Images[1];
						button6->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(6);
				}

			private:
				System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button7->BackgroundImage = imageList1->Images[1];
						button7->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(7);
				}

			private:
				System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button8->BackgroundImage = imageList1->Images[1];
						button8->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(8);
				}

			private:
				System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button9->BackgroundImage = imageList1->Images[1];
						button9->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(9);
				}

			private:
				System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button10->BackgroundImage = imageList1->Images[1];
						button10->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(10);
				}

			private:
				System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button11->BackgroundImage = imageList1->Images[1];
						button11->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(11);
				}

			private:
				System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button12->BackgroundImage = imageList1->Images[1];
						button12->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(12);
				}

			private:
				System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button13->BackgroundImage = imageList1->Images[1];
						button13->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(13);
				}

			private:
				System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button14->BackgroundImage = imageList1->Images[1];
						button14->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(14);
				}

			private:
				System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button15->BackgroundImage = imageList1->Images[1];
						button15->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(15);
				}

			private:
				System::Void button16_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button16->BackgroundImage = imageList1->Images[1];
						button16->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(16);
				}

			private:
				System::Void button17_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button17->BackgroundImage = imageList1->Images[1];
						button17->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(17);
				}

			private:
				System::Void button18_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button18->BackgroundImage = imageList1->Images[1];
						button18->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(18);
				}

			private:
				System::Void button19_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button19->BackgroundImage = imageList1->Images[1];
						button19->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(19);
				}

			private:
				System::Void button20_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button20->BackgroundImage = imageList1->Images[1];
						button20->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(20);
				}

			private:
				System::Void button21_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button21->BackgroundImage = imageList1->Images[1];
						button21->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(21);
				}

			private:
				System::Void button22_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button22->BackgroundImage = imageList1->Images[1];
						button22->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(22);
				}

			private:
				System::Void button23_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button23->BackgroundImage = imageList1->Images[1];
						button23->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(23);
				}

			private:
				System::Void button24_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button24->BackgroundImage = imageList1->Images[1];
						button24->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(24);
				}

			private:
				System::Void button25_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button25->BackgroundImage = imageList1->Images[1];
						button25->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(25);
				}

			private:
				System::Void button26_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button26->BackgroundImage = imageList1->Images[1];
						button26->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(26);
				}

			private:
				System::Void button27_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button27->BackgroundImage = imageList1->Images[1];
						button27->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(27);
				}

			private:
				System::Void button28_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button28->BackgroundImage = imageList1->Images[1];
						button28->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(28);
				}

			private:
				System::Void button29_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button29->BackgroundImage = imageList1->Images[1];
						button29->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(29);
				}

			private:
				System::Void button30_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button30->BackgroundImage = imageList1->Images[1];
						button30->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(30);
				}

			private:
				System::Void button31_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button31->BackgroundImage = imageList1->Images[1];
						button31->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(31);
				}

			private:
				System::Void button32_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button32->BackgroundImage = imageList1->Images[1];
						button32->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(32);
				}

			private:
				System::Void button33_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button33->BackgroundImage = imageList1->Images[1];
						button33->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(33);
				}

			private:
				System::Void button34_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button34->BackgroundImage = imageList1->Images[1];
						button34->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(34);
				}

			private:
				System::Void button35_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button35->BackgroundImage = imageList1->Images[1];
						button35->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(35);
				}

			private:
				System::Void button36_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button36->BackgroundImage = imageList1->Images[1];
						button36->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(36);
				}

			private:
				System::Void button37_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button37->BackgroundImage = imageList1->Images[1];
						button37->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(37);
				}

			private:
				System::Void button38_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button38->BackgroundImage = imageList1->Images[1];
						button38->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(38);
				}

			private:
				System::Void button39_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button39->BackgroundImage = imageList1->Images[1];
						button39->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(39);
				}

			private:
				System::Void button40_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button40->BackgroundImage = imageList1->Images[1];
						button40->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(40);
				}

			private:
				System::Void button41_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button41->BackgroundImage = imageList1->Images[1];
						button41->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(41);
				}

			private:
				System::Void button42_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button42->BackgroundImage = imageList1->Images[1];
						button42->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(42);
				}

			private:
				System::Void button43_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button43->BackgroundImage = imageList1->Images[1];
						button43->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(43);
				}

			private:
				System::Void button44_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button44->BackgroundImage = imageList1->Images[1];
						button44->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(44);
				}

			private:
				System::Void button45_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button45->BackgroundImage = imageList1->Images[1];
						button45->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(45);
				}

			private:
				System::Void button46_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button46->BackgroundImage = imageList1->Images[1];
						button46->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(46);
				}

			private:
				System::Void button47_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button47->BackgroundImage = imageList1->Images[1];
						button47->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(47);
				}

			private:
				System::Void button48_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button48->BackgroundImage = imageList1->Images[1];
						button48->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(48);
				}

			private:
				System::Void button49_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button49->BackgroundImage = imageList1->Images[1];
						button49->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(49);
				}

			private:
				System::Void button50_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button50->BackgroundImage = imageList1->Images[1];
						button50->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(50);
				}

			private:
				System::Void button51_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button51->BackgroundImage = imageList1->Images[1];
						button51->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(51);
				}

			private:
				System::Void button52_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button52->BackgroundImage = imageList1->Images[1];
						button52->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(52);
				}

			private:
				System::Void button53_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button53->BackgroundImage = imageList1->Images[1];
						button53->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(53);
				}

			private:
				System::Void button54_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button54->BackgroundImage = imageList1->Images[1];
						button54->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(54);
				}

			private:
				System::Void button55_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button55->BackgroundImage = imageList1->Images[1];
						button55->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(55);
				}

			private:
				System::Void button56_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button56->BackgroundImage = imageList1->Images[1];
						button56->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(56);
				}

			private:
				System::Void button57_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button57->BackgroundImage = imageList1->Images[1];
						button57->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(57);
				}

			private:
				System::Void button58_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button58->BackgroundImage = imageList1->Images[1];
						button58->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(58);
				}

			private:
				System::Void button59_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button59->BackgroundImage = imageList1->Images[1];
						button59->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(59);
				}

			private:
				System::Void button60_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button60->BackgroundImage = imageList1->Images[1];
						button60->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(60);
				}

			private:
				System::Void button61_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button61->BackgroundImage = imageList1->Images[1];
						button61->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(61);
				}

			private:
				System::Void button62_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button62->BackgroundImage = imageList1->Images[1];
						button62->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(62);
				}

			private:
				System::Void button63_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button63->BackgroundImage = imageList1->Images[1];
						button63->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(63);
				}

			private:
				System::Void button64_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button64->BackgroundImage = imageList1->Images[1];
						button64->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(64);
				}

			private:
				System::Void button65_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button65->BackgroundImage = imageList1->Images[1];
						button65->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(65);
				}

			private:
				System::Void button66_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button66->BackgroundImage = imageList1->Images[1];
						button66->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(66);
				}

			private:
				System::Void button67_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button67->BackgroundImage = imageList1->Images[1];
						button67->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(67);
				}

			private:
				System::Void button68_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button68->BackgroundImage = imageList1->Images[1];
						button68->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(68);
				}

			private:
				System::Void button69_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button69->BackgroundImage = imageList1->Images[1];
						button69->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(69);
				}

			private:
				System::Void button70_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button70->BackgroundImage = imageList1->Images[1];
						button70->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(70);
				}

			private:
				System::Void button71_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button71->BackgroundImage = imageList1->Images[1];
						button71->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(71);
				}

			private:
				System::Void button72_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button72->BackgroundImage = imageList1->Images[1];
						button72->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(72);
				}

			private:
				System::Void button73_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button73->BackgroundImage = imageList1->Images[1];
						button73->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(73);
				}

			private:
				System::Void button74_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button74->BackgroundImage = imageList1->Images[1];
						button74->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(74);
				}

			private:
				System::Void button75_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button75->BackgroundImage = imageList1->Images[1];
						button75->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(75);
				}

			private:
				System::Void button76_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button76->BackgroundImage = imageList1->Images[1];
						button76->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(76);
				}

			private:
				System::Void button77_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button77->BackgroundImage = imageList1->Images[1];
						button77->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(77);
				}

			private:
				System::Void button78_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button78->BackgroundImage = imageList1->Images[1];
						button78->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(78);
				}

			private:
				System::Void button79_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button79->BackgroundImage = imageList1->Images[1];
						button79->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(79);
				}

			private:
				System::Void button80_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button80->BackgroundImage = imageList1->Images[1];
						button80->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(80);
				}

			private:
				System::Void button81_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button81->BackgroundImage = imageList1->Images[1];
						button81->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(81);
				}

			private:
				System::Void button82_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button82->BackgroundImage = imageList1->Images[1];
						button82->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(82);
				}

			private:
				System::Void button83_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button83->BackgroundImage = imageList1->Images[1];
						button83->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(83);
				}

			private:
				System::Void button84_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button84->BackgroundImage = imageList1->Images[1];
						button84->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(84);
				}

			private:
				System::Void button85_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button85->BackgroundImage = imageList1->Images[1];
						button85->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(85);
				}

			private:
				System::Void button86_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button86->BackgroundImage = imageList1->Images[1];
						button86->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(86);
				}

			private:
				System::Void button87_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button87->BackgroundImage = imageList1->Images[1];
						button87->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(87);
				}

			private:
				System::Void button88_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button88->BackgroundImage = imageList1->Images[1];
						button88->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(88);
				}

			private:
				System::Void button89_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button89->BackgroundImage = imageList1->Images[1];
						button89->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(89);
				}

			private:
				System::Void button90_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button90->BackgroundImage = imageList1->Images[1];
						button90->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(90);
				}

			private:
				System::Void button91_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button91->BackgroundImage = imageList1->Images[1];
						button91->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(91);
				}

			private:
				System::Void button92_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button92->BackgroundImage = imageList1->Images[1];
						button92->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(92);
				}

			private:
				System::Void button93_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button93->BackgroundImage = imageList1->Images[1];
						button93->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(93);
				}

			private:
				System::Void button94_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button94->BackgroundImage = imageList1->Images[1];
						button94->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(94);
				}

			private:
				System::Void button95_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button95->BackgroundImage = imageList1->Images[1];
						button95->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(95);
				}

			private:
				System::Void button96_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button96->BackgroundImage = imageList1->Images[1];
						button96->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(96);
				}

			private:
				System::Void button97_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button97->BackgroundImage = imageList1->Images[1];
						button97->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(97);
				}

			private:
				System::Void button98_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button98->BackgroundImage = imageList1->Images[1];
						button98->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(98);
				}

			private:
				System::Void button99_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button99->BackgroundImage = imageList1->Images[1];
						button99->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(99);
				}

			private:
				System::Void button100_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button100->BackgroundImage = imageList1->Images[1];
						button100->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(100);
				}
			private:
				System::Void button105_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button105->BackgroundImage = imageList1->Images[1];
						button105->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(105);
				}



private: System::Void button101_Click(System::Object^ sender, System::EventArgs^ e) {


					Bombs();

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
					button37->Visible = true;
					button38->Visible = true;
					button39->Visible = true;
					button40->Visible = true;
					button41->Visible = true;
					button42->Visible = true;
					button43->Visible = true;
					button44->Visible = true;
					button45->Visible = true;
					button46->Visible = true;
					button47->Visible = true;
					button48->Visible = true;
					button49->Visible = true;
					button50->Visible = true;
					button51->Visible = true;
					button52->Visible = true;
					button53->Visible = true;
					button54->Visible = true;
					button55->Visible = true;
					button56->Visible = true;
					button57->Visible = true;
					button58->Visible = true;
					button59->Visible = true;
					button60->Visible = true;
					button61->Visible = true;
					button62->Visible = true;
					button63->Visible = true;
					button64->Visible = true;
					button65->Visible = true;
					button66->Visible = true;
					button67->Visible = true;
					button68->Visible = true;
					button69->Visible = true;
					button70->Visible = true;
					button71->Visible = true;
					button72->Visible = true;
					button73->Visible = true;
					button74->Visible = true;
					button75->Visible = true;
					button76->Visible = true;
					button77->Visible = true;
					button78->Visible = true;
					button79->Visible = true;
					button80->Visible = true;
					button81->Visible = true;
					button82->Visible = true;
					button83->Visible = true;
					button84->Visible = true;
					button85->Visible = true;
					button86->Visible = true;
					button87->Visible = true;
					button88->Visible = true;
					button89->Visible = true;
					button90->Visible = true;
					button91->Visible = true;
					button92->Visible = true;
					button93->Visible = true;
					button94->Visible = true;
					button95->Visible = true;
					button96->Visible = true;
					button97->Visible = true;
					button98->Visible = true;
					button99->Visible = true;
					button100->Visible = true;
					
					button105->Visible = true;

					checkBox1->Visible = true;

					button101->Enabled = false;
					button101->Visible = false;
};

	
  private: System::Void button102_Click(System::Object^ sender, System::EventArgs^ e) {
		  Application::Restart(); }
}; 
}

