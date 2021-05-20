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
	/// Description résumée de level3
	/// </summary>
	public ref class level3 : public System::Windows::Forms::Form
	{

		static int Second = 0;
		static int Minute = 0;
		String^ sec;
		String^ min;
		static int move = 0;
		static int bomb = 0;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button197;
	private: System::Windows::Forms::Button^ button198;
		   vector<int> data;












	public:
		level3(void)
		{
			InitializeComponent();
			for (int i = 0; i < 200; i++)
			{
				data.push_back(0);
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~level3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
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
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Button^ button68;
	private: System::Windows::Forms::Button^ button69;
	private: System::Windows::Forms::Button^ button70;
	private: System::Windows::Forms::Button^ button71;
	private: System::Windows::Forms::Button^ button72;
	private: System::Windows::Forms::Button^ button73;
	private: System::Windows::Forms::Button^ button74;
	private: System::Windows::Forms::Button^ button75;
	private: System::Windows::Forms::Button^ button76;
	private: System::Windows::Forms::Button^ button77;
	private: System::Windows::Forms::Button^ button78;
	private: System::Windows::Forms::Button^ button79;
	private: System::Windows::Forms::Button^ button80;
	private: System::Windows::Forms::Button^ button81;
	private: System::Windows::Forms::Button^ button82;
	private: System::Windows::Forms::Button^ button83;
	private: System::Windows::Forms::Button^ button84;
	private: System::Windows::Forms::Button^ button85;
	private: System::Windows::Forms::Button^ button86;
	private: System::Windows::Forms::Button^ button87;
	private: System::Windows::Forms::Button^ button88;
	private: System::Windows::Forms::Button^ button89;
	private: System::Windows::Forms::Button^ button90;
	private: System::Windows::Forms::Button^ button91;
	private: System::Windows::Forms::Button^ button92;
	private: System::Windows::Forms::Button^ button93;
	private: System::Windows::Forms::Button^ button94;
	private: System::Windows::Forms::Button^ button95;
	private: System::Windows::Forms::Button^ button96;
	private: System::Windows::Forms::Button^ button97;
	private: System::Windows::Forms::Button^ button98;
	private: System::Windows::Forms::Button^ button99;
	private: System::Windows::Forms::Button^ button100;
	private: System::Windows::Forms::Button^ button101;
	private: System::Windows::Forms::Button^ button102;
	private: System::Windows::Forms::Button^ button103;
	private: System::Windows::Forms::Button^ button104;
	private: System::Windows::Forms::Button^ button105;
	private: System::Windows::Forms::Button^ button106;
	private: System::Windows::Forms::Button^ button107;
	private: System::Windows::Forms::Button^ button108;
	private: System::Windows::Forms::Button^ button109;
	private: System::Windows::Forms::Button^ button110;
	private: System::Windows::Forms::Button^ button111;
	private: System::Windows::Forms::Button^ button112;
	private: System::Windows::Forms::Button^ button113;
	private: System::Windows::Forms::Button^ button114;
	private: System::Windows::Forms::Button^ button115;
	private: System::Windows::Forms::Button^ button116;
	private: System::Windows::Forms::Button^ button117;
	private: System::Windows::Forms::Button^ button118;
	private: System::Windows::Forms::Button^ button119;
	private: System::Windows::Forms::Button^ button120;
	private: System::Windows::Forms::Button^ button121;
	private: System::Windows::Forms::Button^ button122;
	private: System::Windows::Forms::Button^ button123;
	private: System::Windows::Forms::Button^ button124;
	private: System::Windows::Forms::Button^ button125;
	private: System::Windows::Forms::Button^ button126;
	private: System::Windows::Forms::Button^ button127;
	private: System::Windows::Forms::Button^ button128;
	private: System::Windows::Forms::Button^ button129;
	private: System::Windows::Forms::Button^ button130;
	private: System::Windows::Forms::Button^ button131;
	private: System::Windows::Forms::Button^ button132;
	private: System::Windows::Forms::Button^ button133;
	private: System::Windows::Forms::Button^ button134;
	private: System::Windows::Forms::Button^ button135;
	private: System::Windows::Forms::Button^ button136;
	private: System::Windows::Forms::Button^ button137;
	private: System::Windows::Forms::Button^ button138;
	private: System::Windows::Forms::Button^ button139;
	private: System::Windows::Forms::Button^ button140;
	private: System::Windows::Forms::Button^ button141;
	private: System::Windows::Forms::Button^ button142;
	private: System::Windows::Forms::Button^ button143;
	private: System::Windows::Forms::Button^ button144;
	private: System::Windows::Forms::Button^ button145;
	private: System::Windows::Forms::Button^ button146;
	private: System::Windows::Forms::Button^ button147;
	private: System::Windows::Forms::Button^ button148;
	private: System::Windows::Forms::Button^ button149;
	private: System::Windows::Forms::Button^ button150;
	private: System::Windows::Forms::Button^ button151;
	private: System::Windows::Forms::Button^ button152;
	private: System::Windows::Forms::Button^ button153;
	private: System::Windows::Forms::Button^ button154;
	private: System::Windows::Forms::Button^ button155;
	private: System::Windows::Forms::Button^ button156;
	private: System::Windows::Forms::Button^ button157;
	private: System::Windows::Forms::Button^ button158;
	private: System::Windows::Forms::Button^ button159;
	private: System::Windows::Forms::Button^ button160;
	private: System::Windows::Forms::Button^ button161;
	private: System::Windows::Forms::Button^ button162;
	private: System::Windows::Forms::Button^ button163;
	private: System::Windows::Forms::Button^ button164;
	private: System::Windows::Forms::Button^ button165;
	private: System::Windows::Forms::Button^ button166;
	private: System::Windows::Forms::Button^ button167;
	private: System::Windows::Forms::Button^ button168;
	private: System::Windows::Forms::Button^ button169;
	private: System::Windows::Forms::Button^ button170;
	private: System::Windows::Forms::Button^ button171;
	private: System::Windows::Forms::Button^ button172;
	private: System::Windows::Forms::Button^ button173;
	private: System::Windows::Forms::Button^ button174;
	private: System::Windows::Forms::Button^ button175;
	private: System::Windows::Forms::Button^ button176;
	private: System::Windows::Forms::Button^ button177;
	private: System::Windows::Forms::Button^ button178;
	private: System::Windows::Forms::Button^ button179;
	private: System::Windows::Forms::Button^ button180;
	private: System::Windows::Forms::Button^ button181;
	private: System::Windows::Forms::Button^ button182;
	private: System::Windows::Forms::Button^ button183;
	private: System::Windows::Forms::Button^ button184;
	private: System::Windows::Forms::Button^ button185;
	private: System::Windows::Forms::Button^ button186;
	private: System::Windows::Forms::Button^ button187;
	private: System::Windows::Forms::Button^ button188;
	private: System::Windows::Forms::Button^ button189;
	private: System::Windows::Forms::Button^ button190;
	private: System::Windows::Forms::Button^ button191;
	private: System::Windows::Forms::Button^ button192;
	private: System::Windows::Forms::Button^ button193;
	private: System::Windows::Forms::Button^ button194;
	private: System::Windows::Forms::Button^ button195;
	private: System::Windows::Forms::Button^ button196;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level3::typeid));
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
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button115 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->button120 = (gcnew System::Windows::Forms::Button());
			this->button121 = (gcnew System::Windows::Forms::Button());
			this->button122 = (gcnew System::Windows::Forms::Button());
			this->button123 = (gcnew System::Windows::Forms::Button());
			this->button124 = (gcnew System::Windows::Forms::Button());
			this->button125 = (gcnew System::Windows::Forms::Button());
			this->button126 = (gcnew System::Windows::Forms::Button());
			this->button127 = (gcnew System::Windows::Forms::Button());
			this->button128 = (gcnew System::Windows::Forms::Button());
			this->button129 = (gcnew System::Windows::Forms::Button());
			this->button130 = (gcnew System::Windows::Forms::Button());
			this->button131 = (gcnew System::Windows::Forms::Button());
			this->button132 = (gcnew System::Windows::Forms::Button());
			this->button133 = (gcnew System::Windows::Forms::Button());
			this->button134 = (gcnew System::Windows::Forms::Button());
			this->button135 = (gcnew System::Windows::Forms::Button());
			this->button136 = (gcnew System::Windows::Forms::Button());
			this->button137 = (gcnew System::Windows::Forms::Button());
			this->button138 = (gcnew System::Windows::Forms::Button());
			this->button139 = (gcnew System::Windows::Forms::Button());
			this->button140 = (gcnew System::Windows::Forms::Button());
			this->button141 = (gcnew System::Windows::Forms::Button());
			this->button142 = (gcnew System::Windows::Forms::Button());
			this->button143 = (gcnew System::Windows::Forms::Button());
			this->button144 = (gcnew System::Windows::Forms::Button());
			this->button145 = (gcnew System::Windows::Forms::Button());
			this->button146 = (gcnew System::Windows::Forms::Button());
			this->button147 = (gcnew System::Windows::Forms::Button());
			this->button148 = (gcnew System::Windows::Forms::Button());
			this->button149 = (gcnew System::Windows::Forms::Button());
			this->button150 = (gcnew System::Windows::Forms::Button());
			this->button151 = (gcnew System::Windows::Forms::Button());
			this->button152 = (gcnew System::Windows::Forms::Button());
			this->button153 = (gcnew System::Windows::Forms::Button());
			this->button154 = (gcnew System::Windows::Forms::Button());
			this->button155 = (gcnew System::Windows::Forms::Button());
			this->button156 = (gcnew System::Windows::Forms::Button());
			this->button157 = (gcnew System::Windows::Forms::Button());
			this->button158 = (gcnew System::Windows::Forms::Button());
			this->button159 = (gcnew System::Windows::Forms::Button());
			this->button160 = (gcnew System::Windows::Forms::Button());
			this->button161 = (gcnew System::Windows::Forms::Button());
			this->button162 = (gcnew System::Windows::Forms::Button());
			this->button163 = (gcnew System::Windows::Forms::Button());
			this->button164 = (gcnew System::Windows::Forms::Button());
			this->button165 = (gcnew System::Windows::Forms::Button());
			this->button166 = (gcnew System::Windows::Forms::Button());
			this->button167 = (gcnew System::Windows::Forms::Button());
			this->button168 = (gcnew System::Windows::Forms::Button());
			this->button169 = (gcnew System::Windows::Forms::Button());
			this->button170 = (gcnew System::Windows::Forms::Button());
			this->button171 = (gcnew System::Windows::Forms::Button());
			this->button172 = (gcnew System::Windows::Forms::Button());
			this->button173 = (gcnew System::Windows::Forms::Button());
			this->button174 = (gcnew System::Windows::Forms::Button());
			this->button175 = (gcnew System::Windows::Forms::Button());
			this->button176 = (gcnew System::Windows::Forms::Button());
			this->button177 = (gcnew System::Windows::Forms::Button());
			this->button178 = (gcnew System::Windows::Forms::Button());
			this->button179 = (gcnew System::Windows::Forms::Button());
			this->button180 = (gcnew System::Windows::Forms::Button());
			this->button181 = (gcnew System::Windows::Forms::Button());
			this->button182 = (gcnew System::Windows::Forms::Button());
			this->button183 = (gcnew System::Windows::Forms::Button());
			this->button184 = (gcnew System::Windows::Forms::Button());
			this->button185 = (gcnew System::Windows::Forms::Button());
			this->button186 = (gcnew System::Windows::Forms::Button());
			this->button187 = (gcnew System::Windows::Forms::Button());
			this->button188 = (gcnew System::Windows::Forms::Button());
			this->button189 = (gcnew System::Windows::Forms::Button());
			this->button190 = (gcnew System::Windows::Forms::Button());
			this->button191 = (gcnew System::Windows::Forms::Button());
			this->button192 = (gcnew System::Windows::Forms::Button());
			this->button193 = (gcnew System::Windows::Forms::Button());
			this->button194 = (gcnew System::Windows::Forms::Button());
			this->button195 = (gcnew System::Windows::Forms::Button());
			this->button196 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button197 = (gcnew System::Windows::Forms::Button());
			this->button198 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
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
			this->flowLayoutPanel1->Controls->Add(this->button37);
			this->flowLayoutPanel1->Controls->Add(this->button38);
			this->flowLayoutPanel1->Controls->Add(this->button39);
			this->flowLayoutPanel1->Controls->Add(this->button40);
			this->flowLayoutPanel1->Controls->Add(this->button41);
			this->flowLayoutPanel1->Controls->Add(this->button42);
			this->flowLayoutPanel1->Controls->Add(this->button43);
			this->flowLayoutPanel1->Controls->Add(this->button44);
			this->flowLayoutPanel1->Controls->Add(this->button45);
			this->flowLayoutPanel1->Controls->Add(this->button46);
			this->flowLayoutPanel1->Controls->Add(this->button47);
			this->flowLayoutPanel1->Controls->Add(this->button48);
			this->flowLayoutPanel1->Controls->Add(this->button49);
			this->flowLayoutPanel1->Controls->Add(this->button50);
			this->flowLayoutPanel1->Controls->Add(this->button51);
			this->flowLayoutPanel1->Controls->Add(this->button52);
			this->flowLayoutPanel1->Controls->Add(this->button53);
			this->flowLayoutPanel1->Controls->Add(this->button54);
			this->flowLayoutPanel1->Controls->Add(this->button55);
			this->flowLayoutPanel1->Controls->Add(this->button56);
			this->flowLayoutPanel1->Controls->Add(this->button57);
			this->flowLayoutPanel1->Controls->Add(this->button58);
			this->flowLayoutPanel1->Controls->Add(this->button59);
			this->flowLayoutPanel1->Controls->Add(this->button60);
			this->flowLayoutPanel1->Controls->Add(this->button61);
			this->flowLayoutPanel1->Controls->Add(this->button62);
			this->flowLayoutPanel1->Controls->Add(this->button63);
			this->flowLayoutPanel1->Controls->Add(this->button64);
			this->flowLayoutPanel1->Controls->Add(this->button65);
			this->flowLayoutPanel1->Controls->Add(this->button66);
			this->flowLayoutPanel1->Controls->Add(this->button67);
			this->flowLayoutPanel1->Controls->Add(this->button68);
			this->flowLayoutPanel1->Controls->Add(this->button69);
			this->flowLayoutPanel1->Controls->Add(this->button70);
			this->flowLayoutPanel1->Controls->Add(this->button71);
			this->flowLayoutPanel1->Controls->Add(this->button72);
			this->flowLayoutPanel1->Controls->Add(this->button73);
			this->flowLayoutPanel1->Controls->Add(this->button74);
			this->flowLayoutPanel1->Controls->Add(this->button75);
			this->flowLayoutPanel1->Controls->Add(this->button76);
			this->flowLayoutPanel1->Controls->Add(this->button77);
			this->flowLayoutPanel1->Controls->Add(this->button78);
			this->flowLayoutPanel1->Controls->Add(this->button79);
			this->flowLayoutPanel1->Controls->Add(this->button80);
			this->flowLayoutPanel1->Controls->Add(this->button81);
			this->flowLayoutPanel1->Controls->Add(this->button82);
			this->flowLayoutPanel1->Controls->Add(this->button83);
			this->flowLayoutPanel1->Controls->Add(this->button84);
			this->flowLayoutPanel1->Controls->Add(this->button85);
			this->flowLayoutPanel1->Controls->Add(this->button86);
			this->flowLayoutPanel1->Controls->Add(this->button87);
			this->flowLayoutPanel1->Controls->Add(this->button88);
			this->flowLayoutPanel1->Controls->Add(this->button89);
			this->flowLayoutPanel1->Controls->Add(this->button90);
			this->flowLayoutPanel1->Controls->Add(this->button91);
			this->flowLayoutPanel1->Controls->Add(this->button92);
			this->flowLayoutPanel1->Controls->Add(this->button93);
			this->flowLayoutPanel1->Controls->Add(this->button94);
			this->flowLayoutPanel1->Controls->Add(this->button95);
			this->flowLayoutPanel1->Controls->Add(this->button96);
			this->flowLayoutPanel1->Controls->Add(this->button97);
			this->flowLayoutPanel1->Controls->Add(this->button98);
			this->flowLayoutPanel1->Controls->Add(this->button99);
			this->flowLayoutPanel1->Controls->Add(this->button100);
			this->flowLayoutPanel1->Controls->Add(this->button101);
			this->flowLayoutPanel1->Controls->Add(this->button102);
			this->flowLayoutPanel1->Controls->Add(this->button103);
			this->flowLayoutPanel1->Controls->Add(this->button104);
			this->flowLayoutPanel1->Controls->Add(this->button105);
			this->flowLayoutPanel1->Controls->Add(this->button106);
			this->flowLayoutPanel1->Controls->Add(this->button107);
			this->flowLayoutPanel1->Controls->Add(this->button108);
			this->flowLayoutPanel1->Controls->Add(this->button109);
			this->flowLayoutPanel1->Controls->Add(this->button110);
			this->flowLayoutPanel1->Controls->Add(this->button111);
			this->flowLayoutPanel1->Controls->Add(this->button112);
			this->flowLayoutPanel1->Controls->Add(this->button113);
			this->flowLayoutPanel1->Controls->Add(this->button114);
			this->flowLayoutPanel1->Controls->Add(this->button115);
			this->flowLayoutPanel1->Controls->Add(this->button116);
			this->flowLayoutPanel1->Controls->Add(this->button117);
			this->flowLayoutPanel1->Controls->Add(this->button118);
			this->flowLayoutPanel1->Controls->Add(this->button119);
			this->flowLayoutPanel1->Controls->Add(this->button120);
			this->flowLayoutPanel1->Controls->Add(this->button121);
			this->flowLayoutPanel1->Controls->Add(this->button122);
			this->flowLayoutPanel1->Controls->Add(this->button123);
			this->flowLayoutPanel1->Controls->Add(this->button124);
			this->flowLayoutPanel1->Controls->Add(this->button125);
			this->flowLayoutPanel1->Controls->Add(this->button126);
			this->flowLayoutPanel1->Controls->Add(this->button127);
			this->flowLayoutPanel1->Controls->Add(this->button128);
			this->flowLayoutPanel1->Controls->Add(this->button129);
			this->flowLayoutPanel1->Controls->Add(this->button130);
			this->flowLayoutPanel1->Controls->Add(this->button131);
			this->flowLayoutPanel1->Controls->Add(this->button132);
			this->flowLayoutPanel1->Controls->Add(this->button133);
			this->flowLayoutPanel1->Controls->Add(this->button134);
			this->flowLayoutPanel1->Controls->Add(this->button135);
			this->flowLayoutPanel1->Controls->Add(this->button136);
			this->flowLayoutPanel1->Controls->Add(this->button137);
			this->flowLayoutPanel1->Controls->Add(this->button138);
			this->flowLayoutPanel1->Controls->Add(this->button139);
			this->flowLayoutPanel1->Controls->Add(this->button140);
			this->flowLayoutPanel1->Controls->Add(this->button141);
			this->flowLayoutPanel1->Controls->Add(this->button142);
			this->flowLayoutPanel1->Controls->Add(this->button143);
			this->flowLayoutPanel1->Controls->Add(this->button144);
			this->flowLayoutPanel1->Controls->Add(this->button145);
			this->flowLayoutPanel1->Controls->Add(this->button146);
			this->flowLayoutPanel1->Controls->Add(this->button147);
			this->flowLayoutPanel1->Controls->Add(this->button148);
			this->flowLayoutPanel1->Controls->Add(this->button149);
			this->flowLayoutPanel1->Controls->Add(this->button150);
			this->flowLayoutPanel1->Controls->Add(this->button151);
			this->flowLayoutPanel1->Controls->Add(this->button152);
			this->flowLayoutPanel1->Controls->Add(this->button153);
			this->flowLayoutPanel1->Controls->Add(this->button154);
			this->flowLayoutPanel1->Controls->Add(this->button155);
			this->flowLayoutPanel1->Controls->Add(this->button156);
			this->flowLayoutPanel1->Controls->Add(this->button157);
			this->flowLayoutPanel1->Controls->Add(this->button158);
			this->flowLayoutPanel1->Controls->Add(this->button159);
			this->flowLayoutPanel1->Controls->Add(this->button160);
			this->flowLayoutPanel1->Controls->Add(this->button161);
			this->flowLayoutPanel1->Controls->Add(this->button162);
			this->flowLayoutPanel1->Controls->Add(this->button163);
			this->flowLayoutPanel1->Controls->Add(this->button164);
			this->flowLayoutPanel1->Controls->Add(this->button165);
			this->flowLayoutPanel1->Controls->Add(this->button166);
			this->flowLayoutPanel1->Controls->Add(this->button167);
			this->flowLayoutPanel1->Controls->Add(this->button168);
			this->flowLayoutPanel1->Controls->Add(this->button169);
			this->flowLayoutPanel1->Controls->Add(this->button170);
			this->flowLayoutPanel1->Controls->Add(this->button171);
			this->flowLayoutPanel1->Controls->Add(this->button172);
			this->flowLayoutPanel1->Controls->Add(this->button173);
			this->flowLayoutPanel1->Controls->Add(this->button174);
			this->flowLayoutPanel1->Controls->Add(this->button175);
			this->flowLayoutPanel1->Controls->Add(this->button176);
			this->flowLayoutPanel1->Controls->Add(this->button177);
			this->flowLayoutPanel1->Controls->Add(this->button178);
			this->flowLayoutPanel1->Controls->Add(this->button179);
			this->flowLayoutPanel1->Controls->Add(this->button180);
			this->flowLayoutPanel1->Controls->Add(this->button181);
			this->flowLayoutPanel1->Controls->Add(this->button182);
			this->flowLayoutPanel1->Controls->Add(this->button183);
			this->flowLayoutPanel1->Controls->Add(this->button184);
			this->flowLayoutPanel1->Controls->Add(this->button185);
			this->flowLayoutPanel1->Controls->Add(this->button186);
			this->flowLayoutPanel1->Controls->Add(this->button187);
			this->flowLayoutPanel1->Controls->Add(this->button188);
			this->flowLayoutPanel1->Controls->Add(this->button189);
			this->flowLayoutPanel1->Controls->Add(this->button190);
			this->flowLayoutPanel1->Controls->Add(this->button191);
			this->flowLayoutPanel1->Controls->Add(this->button192);
			this->flowLayoutPanel1->Controls->Add(this->button193);
			this->flowLayoutPanel1->Controls->Add(this->button194);
			this->flowLayoutPanel1->Controls->Add(this->button195);
			this->flowLayoutPanel1->Controls->Add(this->button196);
			this->flowLayoutPanel1->Location = System::Drawing::Point(123, 12);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(851, 824);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &level3::flowLayoutPanel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 49);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &level3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 49);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &level3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(121, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 49);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &level3::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(180, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 49);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &level3::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(239, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 49);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &level3::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(298, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(53, 49);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &level3::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(357, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(53, 49);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &level3::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(416, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(53, 49);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &level3::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(475, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(53, 49);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &level3::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(534, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(53, 49);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &level3::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(593, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(53, 49);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &level3::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(652, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(53, 49);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &level3::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(711, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(53, 49);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &level3::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(770, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(53, 49);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &level3::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(3, 58);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(53, 49);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &level3::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(62, 58);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(53, 49);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &level3::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(121, 58);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(53, 49);
			this->button17->TabIndex = 16;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &level3::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(180, 58);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(53, 49);
			this->button18->TabIndex = 17;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &level3::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(239, 58);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(53, 49);
			this->button19->TabIndex = 18;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &level3::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(298, 58);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(53, 49);
			this->button20->TabIndex = 19;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &level3::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(357, 58);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(53, 49);
			this->button21->TabIndex = 20;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &level3::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(416, 58);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(53, 49);
			this->button22->TabIndex = 21;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &level3::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(475, 58);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(53, 49);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &level3::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(534, 58);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(53, 49);
			this->button24->TabIndex = 23;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &level3::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(593, 58);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(53, 49);
			this->button25->TabIndex = 24;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &level3::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(652, 58);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(53, 49);
			this->button26->TabIndex = 25;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &level3::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(711, 58);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(53, 49);
			this->button27->TabIndex = 26;
			this->button27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &level3::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(770, 58);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(53, 49);
			this->button28->TabIndex = 27;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &level3::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(3, 113);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(53, 49);
			this->button29->TabIndex = 28;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &level3::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(62, 113);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(53, 49);
			this->button30->TabIndex = 29;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &level3::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(121, 113);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(53, 49);
			this->button31->TabIndex = 30;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &level3::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(180, 113);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(53, 49);
			this->button32->TabIndex = 31;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &level3::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(239, 113);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(53, 49);
			this->button33->TabIndex = 32;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &level3::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(298, 113);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(53, 49);
			this->button34->TabIndex = 33;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &level3::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(357, 113);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(53, 49);
			this->button35->TabIndex = 34;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &level3::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(416, 113);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(53, 49);
			this->button36->TabIndex = 35;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &level3::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(475, 113);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(53, 49);
			this->button37->TabIndex = 36;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &level3::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(534, 113);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(53, 49);
			this->button38->TabIndex = 37;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &level3::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(593, 113);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(53, 49);
			this->button39->TabIndex = 38;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &level3::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(652, 113);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(53, 49);
			this->button40->TabIndex = 39;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &level3::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(711, 113);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(53, 49);
			this->button41->TabIndex = 40;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &level3::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(770, 113);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(53, 49);
			this->button42->TabIndex = 41;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &level3::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(3, 168);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(53, 49);
			this->button43->TabIndex = 42;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &level3::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(62, 168);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(53, 49);
			this->button44->TabIndex = 43;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &level3::button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(121, 168);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(53, 49);
			this->button45->TabIndex = 44;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &level3::button45_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(180, 168);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(53, 49);
			this->button46->TabIndex = 45;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &level3::button46_Click);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(239, 168);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(53, 49);
			this->button47->TabIndex = 46;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &level3::button47_Click);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(298, 168);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(53, 49);
			this->button48->TabIndex = 47;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &level3::button48_Click);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(357, 168);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(53, 49);
			this->button49->TabIndex = 48;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &level3::button49_Click);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(416, 168);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(53, 49);
			this->button50->TabIndex = 49;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &level3::button50_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(475, 168);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(53, 49);
			this->button51->TabIndex = 50;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &level3::button51_Click);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(534, 168);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(53, 49);
			this->button52->TabIndex = 51;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &level3::button52_Click);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(593, 168);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(53, 49);
			this->button53->TabIndex = 52;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &level3::button53_Click);
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(652, 168);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(53, 49);
			this->button54->TabIndex = 53;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &level3::button54_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(711, 168);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(53, 49);
			this->button55->TabIndex = 54;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &level3::button55_Click);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(770, 168);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(53, 49);
			this->button56->TabIndex = 55;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &level3::button56_Click);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(3, 223);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(53, 49);
			this->button57->TabIndex = 56;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &level3::button57_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(62, 223);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(53, 49);
			this->button58->TabIndex = 57;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &level3::button58_Click);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(121, 223);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(53, 49);
			this->button59->TabIndex = 58;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &level3::button59_Click);
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(180, 223);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(53, 49);
			this->button60->TabIndex = 59;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &level3::button60_Click);
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(239, 223);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(53, 49);
			this->button61->TabIndex = 60;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &level3::button61_Click);
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(298, 223);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(53, 49);
			this->button62->TabIndex = 61;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &level3::button62_Click);
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(357, 223);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(53, 49);
			this->button63->TabIndex = 62;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &level3::button63_Click);
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(416, 223);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(53, 49);
			this->button64->TabIndex = 63;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &level3::button64_Click);
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(475, 223);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(53, 49);
			this->button65->TabIndex = 64;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &level3::button65_Click);
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(534, 223);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(53, 49);
			this->button66->TabIndex = 65;
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &level3::button66_Click);
			// 
			// button67
			// 
			this->button67->Location = System::Drawing::Point(593, 223);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(53, 49);
			this->button67->TabIndex = 66;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &level3::button67_Click);
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(652, 223);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(53, 49);
			this->button68->TabIndex = 67;
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &level3::button68_Click);
			// 
			// button69
			// 
			this->button69->Location = System::Drawing::Point(711, 223);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(53, 49);
			this->button69->TabIndex = 68;
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &level3::button69_Click);
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(770, 223);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(53, 49);
			this->button70->TabIndex = 69;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &level3::button70_Click);
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(3, 278);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(53, 49);
			this->button71->TabIndex = 70;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &level3::button71_Click);
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(62, 278);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(53, 49);
			this->button72->TabIndex = 71;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &level3::button72_Click);
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(121, 278);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(53, 49);
			this->button73->TabIndex = 72;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &level3::button73_Click);
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(180, 278);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(53, 49);
			this->button74->TabIndex = 73;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &level3::button74_Click);
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(239, 278);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(53, 49);
			this->button75->TabIndex = 74;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &level3::button75_Click);
			// 
			// button76
			// 
			this->button76->Location = System::Drawing::Point(298, 278);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(53, 49);
			this->button76->TabIndex = 75;
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &level3::button76_Click);
			// 
			// button77
			// 
			this->button77->Location = System::Drawing::Point(357, 278);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(53, 49);
			this->button77->TabIndex = 76;
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &level3::button77_Click);
			// 
			// button78
			// 
			this->button78->Location = System::Drawing::Point(416, 278);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(53, 49);
			this->button78->TabIndex = 77;
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &level3::button78_Click);
			// 
			// button79
			// 
			this->button79->Location = System::Drawing::Point(475, 278);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(53, 49);
			this->button79->TabIndex = 78;
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &level3::button79_Click);
			// 
			// button80
			// 
			this->button80->Location = System::Drawing::Point(534, 278);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(53, 49);
			this->button80->TabIndex = 79;
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &level3::button80_Click);
			// 
			// button81
			// 
			this->button81->Location = System::Drawing::Point(593, 278);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(53, 49);
			this->button81->TabIndex = 80;
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &level3::button81_Click);
			// 
			// button82
			// 
			this->button82->Location = System::Drawing::Point(652, 278);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(53, 49);
			this->button82->TabIndex = 81;
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &level3::button82_Click);
			// 
			// button83
			// 
			this->button83->Location = System::Drawing::Point(711, 278);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(53, 49);
			this->button83->TabIndex = 82;
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &level3::button83_Click);
			// 
			// button84
			// 
			this->button84->Location = System::Drawing::Point(770, 278);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(53, 49);
			this->button84->TabIndex = 83;
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &level3::button84_Click);
			// 
			// button85
			// 
			this->button85->Location = System::Drawing::Point(3, 333);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(53, 49);
			this->button85->TabIndex = 84;
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &level3::button85_Click);
			// 
			// button86
			// 
			this->button86->Location = System::Drawing::Point(62, 333);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(53, 49);
			this->button86->TabIndex = 85;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &level3::button86_Click);
			// 
			// button87
			// 
			this->button87->Location = System::Drawing::Point(121, 333);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(53, 49);
			this->button87->TabIndex = 86;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &level3::button87_Click);
			// 
			// button88
			// 
			this->button88->Location = System::Drawing::Point(180, 333);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(53, 49);
			this->button88->TabIndex = 87;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &level3::button88_Click);
			// 
			// button89
			// 
			this->button89->Location = System::Drawing::Point(239, 333);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(53, 49);
			this->button89->TabIndex = 88;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &level3::button89_Click);
			// 
			// button90
			// 
			this->button90->Location = System::Drawing::Point(298, 333);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(53, 49);
			this->button90->TabIndex = 89;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &level3::button90_Click);
			// 
			// button91
			// 
			this->button91->Location = System::Drawing::Point(357, 333);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(53, 49);
			this->button91->TabIndex = 90;
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &level3::button91_Click);
			// 
			// button92
			// 
			this->button92->Location = System::Drawing::Point(416, 333);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(53, 49);
			this->button92->TabIndex = 91;
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &level3::button92_Click);
			// 
			// button93
			// 
			this->button93->Location = System::Drawing::Point(475, 333);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(53, 49);
			this->button93->TabIndex = 92;
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &level3::button93_Click);
			// 
			// button94
			// 
			this->button94->Location = System::Drawing::Point(534, 333);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(53, 49);
			this->button94->TabIndex = 93;
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &level3::button94_Click);
			// 
			// button95
			// 
			this->button95->Location = System::Drawing::Point(593, 333);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(53, 49);
			this->button95->TabIndex = 94;
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &level3::button95_Click);
			// 
			// button96
			// 
			this->button96->Location = System::Drawing::Point(652, 333);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(53, 49);
			this->button96->TabIndex = 95;
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &level3::button96_Click);
			// 
			// button97
			// 
			this->button97->Location = System::Drawing::Point(711, 333);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(53, 49);
			this->button97->TabIndex = 96;
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &level3::button97_Click);
			// 
			// button98
			// 
			this->button98->Location = System::Drawing::Point(770, 333);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(53, 49);
			this->button98->TabIndex = 97;
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &level3::button98_Click);
			// 
			// button99
			// 
			this->button99->Location = System::Drawing::Point(3, 388);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(53, 49);
			this->button99->TabIndex = 98;
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &level3::button99_Click);
			// 
			// button100
			// 
			this->button100->Location = System::Drawing::Point(62, 388);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(53, 49);
			this->button100->TabIndex = 99;
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &level3::button100_Click);
			// 
			// button101
			// 
			this->button101->Location = System::Drawing::Point(121, 388);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(53, 49);
			this->button101->TabIndex = 100;
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &level3::button101_Click);
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(180, 388);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(53, 49);
			this->button102->TabIndex = 101;
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &level3::button102_Click);
			// 
			// button103
			// 
			this->button103->Location = System::Drawing::Point(239, 388);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(53, 49);
			this->button103->TabIndex = 102;
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &level3::button103_Click);
			// 
			// button104
			// 
			this->button104->Location = System::Drawing::Point(298, 388);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(53, 49);
			this->button104->TabIndex = 103;
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &level3::button104_Click);
			// 
			// button105
			// 
			this->button105->Location = System::Drawing::Point(357, 388);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(53, 49);
			this->button105->TabIndex = 104;
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &level3::button105_Click);
			// 
			// button106
			// 
			this->button106->Location = System::Drawing::Point(416, 388);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(53, 49);
			this->button106->TabIndex = 105;
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &level3::button106_Click);
			// 
			// button107
			// 
			this->button107->Location = System::Drawing::Point(475, 388);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(53, 49);
			this->button107->TabIndex = 106;
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &level3::button107_Click);
			// 
			// button108
			// 
			this->button108->Location = System::Drawing::Point(534, 388);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(53, 49);
			this->button108->TabIndex = 107;
			this->button108->UseVisualStyleBackColor = true;
			this->button108->Click += gcnew System::EventHandler(this, &level3::button108_Click);
			// 
			// button109
			// 
			this->button109->Location = System::Drawing::Point(593, 388);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(53, 49);
			this->button109->TabIndex = 108;
			this->button109->UseVisualStyleBackColor = true;
			this->button109->Click += gcnew System::EventHandler(this, &level3::button109_Click);
			// 
			// button110
			// 
			this->button110->Location = System::Drawing::Point(652, 388);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(53, 49);
			this->button110->TabIndex = 109;
			this->button110->UseVisualStyleBackColor = true;
			this->button110->Click += gcnew System::EventHandler(this, &level3::button110_Click);
			// 
			// button111
			// 
			this->button111->Location = System::Drawing::Point(711, 388);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(53, 49);
			this->button111->TabIndex = 110;
			this->button111->UseVisualStyleBackColor = true;
			this->button111->Click += gcnew System::EventHandler(this, &level3::button111_Click);
			// 
			// button112
			// 
			this->button112->Location = System::Drawing::Point(770, 388);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(53, 49);
			this->button112->TabIndex = 111;
			this->button112->UseVisualStyleBackColor = true;
			this->button112->Click += gcnew System::EventHandler(this, &level3::button112_Click);
			// 
			// button113
			// 
			this->button113->Location = System::Drawing::Point(3, 443);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(53, 49);
			this->button113->TabIndex = 112;
			this->button113->UseVisualStyleBackColor = true;
			this->button113->Click += gcnew System::EventHandler(this, &level3::button113_Click);
			// 
			// button114
			// 
			this->button114->Location = System::Drawing::Point(62, 443);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(53, 49);
			this->button114->TabIndex = 113;
			this->button114->UseVisualStyleBackColor = true;
			this->button114->Click += gcnew System::EventHandler(this, &level3::button114_Click);
			// 
			// button115
			// 
			this->button115->Location = System::Drawing::Point(121, 443);
			this->button115->Name = L"button115";
			this->button115->Size = System::Drawing::Size(53, 49);
			this->button115->TabIndex = 114;
			this->button115->UseVisualStyleBackColor = true;
			this->button115->Click += gcnew System::EventHandler(this, &level3::button115_Click);
			// 
			// button116
			// 
			this->button116->Location = System::Drawing::Point(180, 443);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(53, 49);
			this->button116->TabIndex = 115;
			this->button116->UseVisualStyleBackColor = true;
			this->button116->Click += gcnew System::EventHandler(this, &level3::button116_Click);
			// 
			// button117
			// 
			this->button117->Location = System::Drawing::Point(239, 443);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(53, 49);
			this->button117->TabIndex = 116;
			this->button117->UseVisualStyleBackColor = true;
			this->button117->Click += gcnew System::EventHandler(this, &level3::button117_Click);
			// 
			// button118
			// 
			this->button118->Location = System::Drawing::Point(298, 443);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(53, 49);
			this->button118->TabIndex = 117;
			this->button118->UseVisualStyleBackColor = true;
			this->button118->Click += gcnew System::EventHandler(this, &level3::button118_Click);
			// 
			// button119
			// 
			this->button119->Location = System::Drawing::Point(357, 443);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(53, 49);
			this->button119->TabIndex = 118;
			this->button119->UseVisualStyleBackColor = true;
			this->button119->Click += gcnew System::EventHandler(this, &level3::button119_Click);
			// 
			// button120
			// 
			this->button120->Location = System::Drawing::Point(416, 443);
			this->button120->Name = L"button120";
			this->button120->Size = System::Drawing::Size(53, 49);
			this->button120->TabIndex = 119;
			this->button120->UseVisualStyleBackColor = true;
			this->button120->Click += gcnew System::EventHandler(this, &level3::button120_Click);
			// 
			// button121
			// 
			this->button121->Location = System::Drawing::Point(475, 443);
			this->button121->Name = L"button121";
			this->button121->Size = System::Drawing::Size(53, 49);
			this->button121->TabIndex = 120;
			this->button121->UseVisualStyleBackColor = true;
			this->button121->Click += gcnew System::EventHandler(this, &level3::button121_Click);
			// 
			// button122
			// 
			this->button122->Location = System::Drawing::Point(534, 443);
			this->button122->Name = L"button122";
			this->button122->Size = System::Drawing::Size(53, 49);
			this->button122->TabIndex = 121;
			this->button122->UseVisualStyleBackColor = true;
			this->button122->Click += gcnew System::EventHandler(this, &level3::button122_Click);
			// 
			// button123
			// 
			this->button123->Location = System::Drawing::Point(593, 443);
			this->button123->Name = L"button123";
			this->button123->Size = System::Drawing::Size(53, 49);
			this->button123->TabIndex = 122;
			this->button123->UseVisualStyleBackColor = true;
			this->button123->Click += gcnew System::EventHandler(this, &level3::button123_Click);
			// 
			// button124
			// 
			this->button124->Location = System::Drawing::Point(652, 443);
			this->button124->Name = L"button124";
			this->button124->Size = System::Drawing::Size(53, 49);
			this->button124->TabIndex = 123;
			this->button124->UseVisualStyleBackColor = true;
			this->button124->Click += gcnew System::EventHandler(this, &level3::button124_Click);
			// 
			// button125
			// 
			this->button125->Location = System::Drawing::Point(711, 443);
			this->button125->Name = L"button125";
			this->button125->Size = System::Drawing::Size(53, 49);
			this->button125->TabIndex = 124;
			this->button125->UseVisualStyleBackColor = true;
			this->button125->Click += gcnew System::EventHandler(this, &level3::button125_Click);
			// 
			// button126
			// 
			this->button126->Location = System::Drawing::Point(770, 443);
			this->button126->Name = L"button126";
			this->button126->Size = System::Drawing::Size(53, 49);
			this->button126->TabIndex = 125;
			this->button126->UseVisualStyleBackColor = true;
			this->button126->Click += gcnew System::EventHandler(this, &level3::button126_Click);
			// 
			// button127
			// 
			this->button127->Location = System::Drawing::Point(3, 498);
			this->button127->Name = L"button127";
			this->button127->Size = System::Drawing::Size(53, 49);
			this->button127->TabIndex = 126;
			this->button127->UseVisualStyleBackColor = true;
			this->button127->Click += gcnew System::EventHandler(this, &level3::button127_Click);
			// 
			// button128
			// 
			this->button128->Location = System::Drawing::Point(62, 498);
			this->button128->Name = L"button128";
			this->button128->Size = System::Drawing::Size(53, 49);
			this->button128->TabIndex = 127;
			this->button128->UseVisualStyleBackColor = true;
			this->button128->Click += gcnew System::EventHandler(this, &level3::button128_Click);
			// 
			// button129
			// 
			this->button129->Location = System::Drawing::Point(121, 498);
			this->button129->Name = L"button129";
			this->button129->Size = System::Drawing::Size(53, 49);
			this->button129->TabIndex = 128;
			this->button129->UseVisualStyleBackColor = true;
			this->button129->Click += gcnew System::EventHandler(this, &level3::button129_Click);
			// 
			// button130
			// 
			this->button130->Location = System::Drawing::Point(180, 498);
			this->button130->Name = L"button130";
			this->button130->Size = System::Drawing::Size(53, 49);
			this->button130->TabIndex = 129;
			this->button130->UseVisualStyleBackColor = true;
			this->button130->Click += gcnew System::EventHandler(this, &level3::button130_Click);
			// 
			// button131
			// 
			this->button131->Location = System::Drawing::Point(239, 498);
			this->button131->Name = L"button131";
			this->button131->Size = System::Drawing::Size(53, 49);
			this->button131->TabIndex = 130;
			this->button131->UseVisualStyleBackColor = true;
			this->button131->Click += gcnew System::EventHandler(this, &level3::button131_Click);
			// 
			// button132
			// 
			this->button132->Location = System::Drawing::Point(298, 498);
			this->button132->Name = L"button132";
			this->button132->Size = System::Drawing::Size(53, 49);
			this->button132->TabIndex = 131;
			this->button132->UseVisualStyleBackColor = true;
			this->button132->Click += gcnew System::EventHandler(this, &level3::button132_Click);
			// 
			// button133
			// 
			this->button133->Location = System::Drawing::Point(357, 498);
			this->button133->Name = L"button133";
			this->button133->Size = System::Drawing::Size(53, 49);
			this->button133->TabIndex = 132;
			this->button133->UseVisualStyleBackColor = true;
			this->button133->Click += gcnew System::EventHandler(this, &level3::button133_Click);
			// 
			// button134
			// 
			this->button134->Location = System::Drawing::Point(416, 498);
			this->button134->Name = L"button134";
			this->button134->Size = System::Drawing::Size(53, 49);
			this->button134->TabIndex = 133;
			this->button134->UseVisualStyleBackColor = true;
			this->button134->Click += gcnew System::EventHandler(this, &level3::button134_Click);
			// 
			// button135
			// 
			this->button135->Location = System::Drawing::Point(475, 498);
			this->button135->Name = L"button135";
			this->button135->Size = System::Drawing::Size(53, 49);
			this->button135->TabIndex = 134;
			this->button135->UseVisualStyleBackColor = true;
			this->button135->Click += gcnew System::EventHandler(this, &level3::button135_Click);
			// 
			// button136
			// 
			this->button136->Location = System::Drawing::Point(534, 498);
			this->button136->Name = L"button136";
			this->button136->Size = System::Drawing::Size(53, 49);
			this->button136->TabIndex = 135;
			this->button136->UseVisualStyleBackColor = true;
			this->button136->Click += gcnew System::EventHandler(this, &level3::button136_Click);
			// 
			// button137
			// 
			this->button137->Location = System::Drawing::Point(593, 498);
			this->button137->Name = L"button137";
			this->button137->Size = System::Drawing::Size(53, 49);
			this->button137->TabIndex = 136;
			this->button137->UseVisualStyleBackColor = true;
			this->button137->Click += gcnew System::EventHandler(this, &level3::button137_Click);
			// 
			// button138
			// 
			this->button138->Location = System::Drawing::Point(652, 498);
			this->button138->Name = L"button138";
			this->button138->Size = System::Drawing::Size(53, 49);
			this->button138->TabIndex = 137;
			this->button138->UseVisualStyleBackColor = true;
			this->button138->Click += gcnew System::EventHandler(this, &level3::button138_Click);
			// 
			// button139
			// 
			this->button139->Location = System::Drawing::Point(711, 498);
			this->button139->Name = L"button139";
			this->button139->Size = System::Drawing::Size(53, 49);
			this->button139->TabIndex = 138;
			this->button139->UseVisualStyleBackColor = true;
			this->button139->Click += gcnew System::EventHandler(this, &level3::button139_Click);
			// 
			// button140
			// 
			this->button140->Location = System::Drawing::Point(770, 498);
			this->button140->Name = L"button140";
			this->button140->Size = System::Drawing::Size(53, 49);
			this->button140->TabIndex = 139;
			this->button140->UseVisualStyleBackColor = true;
			this->button140->Click += gcnew System::EventHandler(this, &level3::button140_Click);
			// 
			// button141
			// 
			this->button141->Location = System::Drawing::Point(3, 553);
			this->button141->Name = L"button141";
			this->button141->Size = System::Drawing::Size(53, 49);
			this->button141->TabIndex = 140;
			this->button141->UseVisualStyleBackColor = true;
			this->button141->Click += gcnew System::EventHandler(this, &level3::button141_Click);
			// 
			// button142
			// 
			this->button142->Location = System::Drawing::Point(62, 553);
			this->button142->Name = L"button142";
			this->button142->Size = System::Drawing::Size(53, 49);
			this->button142->TabIndex = 141;
			this->button142->UseVisualStyleBackColor = true;
			this->button142->Click += gcnew System::EventHandler(this, &level3::button142_Click);
			// 
			// button143
			// 
			this->button143->Location = System::Drawing::Point(121, 553);
			this->button143->Name = L"button143";
			this->button143->Size = System::Drawing::Size(53, 49);
			this->button143->TabIndex = 142;
			this->button143->UseVisualStyleBackColor = true;
			this->button143->Click += gcnew System::EventHandler(this, &level3::button143_Click);
			// 
			// button144
			// 
			this->button144->Location = System::Drawing::Point(180, 553);
			this->button144->Name = L"button144";
			this->button144->Size = System::Drawing::Size(53, 49);
			this->button144->TabIndex = 143;
			this->button144->UseVisualStyleBackColor = true;
			this->button144->Click += gcnew System::EventHandler(this, &level3::button144_Click);
			// 
			// button145
			// 
			this->button145->Location = System::Drawing::Point(239, 553);
			this->button145->Name = L"button145";
			this->button145->Size = System::Drawing::Size(53, 49);
			this->button145->TabIndex = 144;
			this->button145->UseVisualStyleBackColor = true;
			this->button145->Click += gcnew System::EventHandler(this, &level3::button145_Click);
			// 
			// button146
			// 
			this->button146->Location = System::Drawing::Point(298, 553);
			this->button146->Name = L"button146";
			this->button146->Size = System::Drawing::Size(53, 49);
			this->button146->TabIndex = 145;
			this->button146->UseVisualStyleBackColor = true;
			this->button146->Click += gcnew System::EventHandler(this, &level3::button146_Click);
			// 
			// button147
			// 
			this->button147->Location = System::Drawing::Point(357, 553);
			this->button147->Name = L"button147";
			this->button147->Size = System::Drawing::Size(53, 49);
			this->button147->TabIndex = 146;
			this->button147->UseVisualStyleBackColor = true;
			this->button147->Click += gcnew System::EventHandler(this, &level3::button147_Click);
			// 
			// button148
			// 
			this->button148->Location = System::Drawing::Point(416, 553);
			this->button148->Name = L"button148";
			this->button148->Size = System::Drawing::Size(53, 49);
			this->button148->TabIndex = 147;
			this->button148->UseVisualStyleBackColor = true;
			this->button148->Click += gcnew System::EventHandler(this, &level3::button148_Click);
			// 
			// button149
			// 
			this->button149->Location = System::Drawing::Point(475, 553);
			this->button149->Name = L"button149";
			this->button149->Size = System::Drawing::Size(53, 49);
			this->button149->TabIndex = 148;
			this->button149->UseVisualStyleBackColor = true;
			this->button149->Click += gcnew System::EventHandler(this, &level3::button149_Click);
			// 
			// button150
			// 
			this->button150->Location = System::Drawing::Point(534, 553);
			this->button150->Name = L"button150";
			this->button150->Size = System::Drawing::Size(53, 49);
			this->button150->TabIndex = 149;
			this->button150->UseVisualStyleBackColor = true;
			this->button150->Click += gcnew System::EventHandler(this, &level3::button150_Click);
			// 
			// button151
			// 
			this->button151->Location = System::Drawing::Point(593, 553);
			this->button151->Name = L"button151";
			this->button151->Size = System::Drawing::Size(53, 49);
			this->button151->TabIndex = 150;
			this->button151->UseVisualStyleBackColor = true;
			this->button151->Click += gcnew System::EventHandler(this, &level3::button151_Click);
			// 
			// button152
			// 
			this->button152->Location = System::Drawing::Point(652, 553);
			this->button152->Name = L"button152";
			this->button152->Size = System::Drawing::Size(53, 49);
			this->button152->TabIndex = 151;
			this->button152->UseVisualStyleBackColor = true;
			this->button152->Click += gcnew System::EventHandler(this, &level3::button152_Click);
			// 
			// button153
			// 
			this->button153->Location = System::Drawing::Point(711, 553);
			this->button153->Name = L"button153";
			this->button153->Size = System::Drawing::Size(53, 49);
			this->button153->TabIndex = 152;
			this->button153->UseVisualStyleBackColor = true;
			this->button153->Click += gcnew System::EventHandler(this, &level3::button153_Click);
			// 
			// button154
			// 
			this->button154->Location = System::Drawing::Point(770, 553);
			this->button154->Name = L"button154";
			this->button154->Size = System::Drawing::Size(53, 49);
			this->button154->TabIndex = 153;
			this->button154->UseVisualStyleBackColor = true;
			this->button154->Click += gcnew System::EventHandler(this, &level3::button154_Click);
			// 
			// button155
			// 
			this->button155->Location = System::Drawing::Point(3, 608);
			this->button155->Name = L"button155";
			this->button155->Size = System::Drawing::Size(53, 49);
			this->button155->TabIndex = 154;
			this->button155->UseVisualStyleBackColor = true;
			this->button155->Click += gcnew System::EventHandler(this, &level3::button155_Click);
			// 
			// button156
			// 
			this->button156->Location = System::Drawing::Point(62, 608);
			this->button156->Name = L"button156";
			this->button156->Size = System::Drawing::Size(53, 49);
			this->button156->TabIndex = 155;
			this->button156->UseVisualStyleBackColor = true;
			this->button156->Click += gcnew System::EventHandler(this, &level3::button156_Click);
			// 
			// button157
			// 
			this->button157->Location = System::Drawing::Point(121, 608);
			this->button157->Name = L"button157";
			this->button157->Size = System::Drawing::Size(53, 49);
			this->button157->TabIndex = 156;
			this->button157->UseVisualStyleBackColor = true;
			this->button157->Click += gcnew System::EventHandler(this, &level3::button157_Click);
			// 
			// button158
			// 
			this->button158->Location = System::Drawing::Point(180, 608);
			this->button158->Name = L"button158";
			this->button158->Size = System::Drawing::Size(53, 49);
			this->button158->TabIndex = 157;
			this->button158->UseVisualStyleBackColor = true;
			this->button158->Click += gcnew System::EventHandler(this, &level3::button158_Click);
			// 
			// button159
			// 
			this->button159->Location = System::Drawing::Point(239, 608);
			this->button159->Name = L"button159";
			this->button159->Size = System::Drawing::Size(53, 49);
			this->button159->TabIndex = 158;
			this->button159->UseVisualStyleBackColor = true;
			this->button159->Click += gcnew System::EventHandler(this, &level3::button159_Click);
			// 
			// button160
			// 
			this->button160->Location = System::Drawing::Point(298, 608);
			this->button160->Name = L"button160";
			this->button160->Size = System::Drawing::Size(53, 49);
			this->button160->TabIndex = 159;
			this->button160->UseVisualStyleBackColor = true;
			this->button160->Click += gcnew System::EventHandler(this, &level3::button160_Click);
			// 
			// button161
			// 
			this->button161->Location = System::Drawing::Point(357, 608);
			this->button161->Name = L"button161";
			this->button161->Size = System::Drawing::Size(53, 49);
			this->button161->TabIndex = 160;
			this->button161->UseVisualStyleBackColor = true;
			this->button161->Click += gcnew System::EventHandler(this, &level3::button161_Click);
			// 
			// button162
			// 
			this->button162->Location = System::Drawing::Point(416, 608);
			this->button162->Name = L"button162";
			this->button162->Size = System::Drawing::Size(53, 49);
			this->button162->TabIndex = 161;
			this->button162->UseVisualStyleBackColor = true;
			this->button162->Click += gcnew System::EventHandler(this, &level3::button162_Click);
			// 
			// button163
			// 
			this->button163->Location = System::Drawing::Point(475, 608);
			this->button163->Name = L"button163";
			this->button163->Size = System::Drawing::Size(53, 49);
			this->button163->TabIndex = 162;
			this->button163->UseVisualStyleBackColor = true;
			this->button163->Click += gcnew System::EventHandler(this, &level3::button163_Click);
			// 
			// button164
			// 
			this->button164->Location = System::Drawing::Point(534, 608);
			this->button164->Name = L"button164";
			this->button164->Size = System::Drawing::Size(53, 49);
			this->button164->TabIndex = 163;
			this->button164->UseVisualStyleBackColor = true;
			this->button164->Click += gcnew System::EventHandler(this, &level3::button164_Click);
			// 
			// button165
			// 
			this->button165->Location = System::Drawing::Point(593, 608);
			this->button165->Name = L"button165";
			this->button165->Size = System::Drawing::Size(53, 49);
			this->button165->TabIndex = 164;
			this->button165->UseVisualStyleBackColor = true;
			this->button165->Click += gcnew System::EventHandler(this, &level3::button165_Click);
			// 
			// button166
			// 
			this->button166->Location = System::Drawing::Point(652, 608);
			this->button166->Name = L"button166";
			this->button166->Size = System::Drawing::Size(53, 49);
			this->button166->TabIndex = 165;
			this->button166->UseVisualStyleBackColor = true;
			this->button166->Click += gcnew System::EventHandler(this, &level3::button166_Click);
			// 
			// button167
			// 
			this->button167->Location = System::Drawing::Point(711, 608);
			this->button167->Name = L"button167";
			this->button167->Size = System::Drawing::Size(53, 49);
			this->button167->TabIndex = 166;
			this->button167->UseVisualStyleBackColor = true;
			this->button167->Click += gcnew System::EventHandler(this, &level3::button167_Click);
			// 
			// button168
			// 
			this->button168->Location = System::Drawing::Point(770, 608);
			this->button168->Name = L"button168";
			this->button168->Size = System::Drawing::Size(53, 49);
			this->button168->TabIndex = 167;
			this->button168->UseVisualStyleBackColor = true;
			this->button168->Click += gcnew System::EventHandler(this, &level3::button168_Click);
			// 
			// button169
			// 
			this->button169->Location = System::Drawing::Point(3, 663);
			this->button169->Name = L"button169";
			this->button169->Size = System::Drawing::Size(53, 49);
			this->button169->TabIndex = 168;
			this->button169->UseVisualStyleBackColor = true;
			this->button169->Click += gcnew System::EventHandler(this, &level3::button169_Click);
			// 
			// button170
			// 
			this->button170->Location = System::Drawing::Point(62, 663);
			this->button170->Name = L"button170";
			this->button170->Size = System::Drawing::Size(53, 49);
			this->button170->TabIndex = 169;
			this->button170->UseVisualStyleBackColor = true;
			this->button170->Click += gcnew System::EventHandler(this, &level3::button170_Click);
			// 
			// button171
			// 
			this->button171->Location = System::Drawing::Point(121, 663);
			this->button171->Name = L"button171";
			this->button171->Size = System::Drawing::Size(53, 49);
			this->button171->TabIndex = 170;
			this->button171->UseVisualStyleBackColor = true;
			this->button171->Click += gcnew System::EventHandler(this, &level3::button171_Click);
			// 
			// button172
			// 
			this->button172->Location = System::Drawing::Point(180, 663);
			this->button172->Name = L"button172";
			this->button172->Size = System::Drawing::Size(53, 49);
			this->button172->TabIndex = 171;
			this->button172->UseVisualStyleBackColor = true;
			this->button172->Click += gcnew System::EventHandler(this, &level3::button172_Click);
			// 
			// button173
			// 
			this->button173->Location = System::Drawing::Point(239, 663);
			this->button173->Name = L"button173";
			this->button173->Size = System::Drawing::Size(53, 49);
			this->button173->TabIndex = 172;
			this->button173->UseVisualStyleBackColor = true;
			this->button173->Click += gcnew System::EventHandler(this, &level3::button173_Click);
			// 
			// button174
			// 
			this->button174->Location = System::Drawing::Point(298, 663);
			this->button174->Name = L"button174";
			this->button174->Size = System::Drawing::Size(53, 49);
			this->button174->TabIndex = 173;
			this->button174->UseVisualStyleBackColor = true;
			this->button174->Click += gcnew System::EventHandler(this, &level3::button174_Click);
			// 
			// button175
			// 
			this->button175->Location = System::Drawing::Point(357, 663);
			this->button175->Name = L"button175";
			this->button175->Size = System::Drawing::Size(53, 49);
			this->button175->TabIndex = 174;
			this->button175->UseVisualStyleBackColor = true;
			this->button175->Click += gcnew System::EventHandler(this, &level3::button175_Click);
			// 
			// button176
			// 
			this->button176->Location = System::Drawing::Point(416, 663);
			this->button176->Name = L"button176";
			this->button176->Size = System::Drawing::Size(53, 49);
			this->button176->TabIndex = 175;
			this->button176->UseVisualStyleBackColor = true;
			this->button176->Click += gcnew System::EventHandler(this, &level3::button176_Click);
			// 
			// button177
			// 
			this->button177->Location = System::Drawing::Point(475, 663);
			this->button177->Name = L"button177";
			this->button177->Size = System::Drawing::Size(53, 49);
			this->button177->TabIndex = 176;
			this->button177->UseVisualStyleBackColor = true;
			this->button177->Click += gcnew System::EventHandler(this, &level3::button177_Click);
			// 
			// button178
			// 
			this->button178->Location = System::Drawing::Point(534, 663);
			this->button178->Name = L"button178";
			this->button178->Size = System::Drawing::Size(53, 49);
			this->button178->TabIndex = 177;
			this->button178->UseVisualStyleBackColor = true;
			this->button178->Click += gcnew System::EventHandler(this, &level3::button178_Click);
			// 
			// button179
			// 
			this->button179->Location = System::Drawing::Point(593, 663);
			this->button179->Name = L"button179";
			this->button179->Size = System::Drawing::Size(53, 49);
			this->button179->TabIndex = 178;
			this->button179->UseVisualStyleBackColor = true;
			this->button179->Click += gcnew System::EventHandler(this, &level3::button179_Click);
			// 
			// button180
			// 
			this->button180->Location = System::Drawing::Point(652, 663);
			this->button180->Name = L"button180";
			this->button180->Size = System::Drawing::Size(53, 49);
			this->button180->TabIndex = 179;
			this->button180->UseVisualStyleBackColor = true;
			this->button180->Click += gcnew System::EventHandler(this, &level3::button180_Click);
			// 
			// button181
			// 
			this->button181->Location = System::Drawing::Point(711, 663);
			this->button181->Name = L"button181";
			this->button181->Size = System::Drawing::Size(53, 49);
			this->button181->TabIndex = 180;
			this->button181->UseVisualStyleBackColor = true;
			this->button181->Click += gcnew System::EventHandler(this, &level3::button181_Click);
			// 
			// button182
			// 
			this->button182->Location = System::Drawing::Point(770, 663);
			this->button182->Name = L"button182";
			this->button182->Size = System::Drawing::Size(53, 49);
			this->button182->TabIndex = 181;
			this->button182->UseVisualStyleBackColor = true;
			this->button182->Click += gcnew System::EventHandler(this, &level3::button182_Click);
			// 
			// button183
			// 
			this->button183->Location = System::Drawing::Point(3, 718);
			this->button183->Name = L"button183";
			this->button183->Size = System::Drawing::Size(53, 49);
			this->button183->TabIndex = 182;
			this->button183->UseVisualStyleBackColor = true;
			this->button183->Click += gcnew System::EventHandler(this, &level3::button183_Click);
			// 
			// button184
			// 
			this->button184->Location = System::Drawing::Point(62, 718);
			this->button184->Name = L"button184";
			this->button184->Size = System::Drawing::Size(53, 49);
			this->button184->TabIndex = 183;
			this->button184->UseVisualStyleBackColor = true;
			this->button184->Click += gcnew System::EventHandler(this, &level3::button184_Click);
			// 
			// button185
			// 
			this->button185->Location = System::Drawing::Point(121, 718);
			this->button185->Name = L"button185";
			this->button185->Size = System::Drawing::Size(53, 49);
			this->button185->TabIndex = 184;
			this->button185->UseVisualStyleBackColor = true;
			this->button185->Click += gcnew System::EventHandler(this, &level3::button185_Click);
			// 
			// button186
			// 
			this->button186->Location = System::Drawing::Point(180, 718);
			this->button186->Name = L"button186";
			this->button186->Size = System::Drawing::Size(53, 49);
			this->button186->TabIndex = 185;
			this->button186->UseVisualStyleBackColor = true;
			this->button186->Click += gcnew System::EventHandler(this, &level3::button186_Click);
			// 
			// button187
			// 
			this->button187->Location = System::Drawing::Point(239, 718);
			this->button187->Name = L"button187";
			this->button187->Size = System::Drawing::Size(53, 49);
			this->button187->TabIndex = 186;
			this->button187->UseVisualStyleBackColor = true;
			this->button187->Click += gcnew System::EventHandler(this, &level3::button187_Click);
			// 
			// button188
			// 
			this->button188->Location = System::Drawing::Point(298, 718);
			this->button188->Name = L"button188";
			this->button188->Size = System::Drawing::Size(53, 49);
			this->button188->TabIndex = 187;
			this->button188->UseVisualStyleBackColor = true;
			this->button188->Click += gcnew System::EventHandler(this, &level3::button188_Click);
			// 
			// button189
			// 
			this->button189->Location = System::Drawing::Point(357, 718);
			this->button189->Name = L"button189";
			this->button189->Size = System::Drawing::Size(53, 49);
			this->button189->TabIndex = 188;
			this->button189->UseVisualStyleBackColor = true;
			this->button189->Click += gcnew System::EventHandler(this, &level3::button189_Click);
			// 
			// button190
			// 
			this->button190->Location = System::Drawing::Point(416, 718);
			this->button190->Name = L"button190";
			this->button190->Size = System::Drawing::Size(53, 49);
			this->button190->TabIndex = 189;
			this->button190->UseVisualStyleBackColor = true;
			this->button190->Click += gcnew System::EventHandler(this, &level3::button190_Click);
			// 
			// button191
			// 
			this->button191->Location = System::Drawing::Point(475, 718);
			this->button191->Name = L"button191";
			this->button191->Size = System::Drawing::Size(53, 49);
			this->button191->TabIndex = 190;
			this->button191->UseVisualStyleBackColor = true;
			this->button191->Click += gcnew System::EventHandler(this, &level3::button191_Click);
			// 
			// button192
			// 
			this->button192->Location = System::Drawing::Point(534, 718);
			this->button192->Name = L"button192";
			this->button192->Size = System::Drawing::Size(53, 49);
			this->button192->TabIndex = 191;
			this->button192->UseVisualStyleBackColor = true;
			this->button192->Click += gcnew System::EventHandler(this, &level3::button192_Click);
			// 
			// button193
			// 
			this->button193->Location = System::Drawing::Point(593, 718);
			this->button193->Name = L"button193";
			this->button193->Size = System::Drawing::Size(53, 49);
			this->button193->TabIndex = 192;
			this->button193->UseVisualStyleBackColor = true;
			this->button193->Click += gcnew System::EventHandler(this, &level3::button193_Click);
			// 
			// button194
			// 
			this->button194->Location = System::Drawing::Point(652, 718);
			this->button194->Name = L"button194";
			this->button194->Size = System::Drawing::Size(53, 49);
			this->button194->TabIndex = 193;
			this->button194->UseVisualStyleBackColor = true;
			this->button194->Click += gcnew System::EventHandler(this, &level3::button194_Click);
			// 
			// button195
			// 
			this->button195->Location = System::Drawing::Point(711, 718);
			this->button195->Name = L"button195";
			this->button195->Size = System::Drawing::Size(53, 49);
			this->button195->TabIndex = 194;
			this->button195->UseVisualStyleBackColor = true;
			this->button195->Click += gcnew System::EventHandler(this, &level3::button195_Click);
			// 
			// button196
			// 
			this->button196->Location = System::Drawing::Point(770, 718);
			this->button196->Name = L"button196";
			this->button196->Size = System::Drawing::Size(53, 49);
			this->button196->TabIndex = 195;
			this->button196->UseVisualStyleBackColor = true;
			this->button196->Click += gcnew System::EventHandler(this, &level3::button196_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"bomb.png");
			this->imageList1->Images->SetKeyName(1, L"flag (4).png");
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox1.BackgroundImage")));
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(999, 409);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(262, 21);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"check to set the flag";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button197
			// 
			this->button197->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button197.BackgroundImage")));
			this->button197->Font = (gcnew System::Drawing::Font(L"Glitch Inside", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button197->Location = System::Drawing::Point(999, 574);
			this->button197->Name = L"button197";
			this->button197->Size = System::Drawing::Size(262, 37);
			this->button197->TabIndex = 10;
			this->button197->Text = L"restart the game";
			this->button197->UseVisualStyleBackColor = true;
			this->button197->Click += gcnew System::EventHandler(this, &level3::button197_Click);
			// 
			// button198
			// 
			this->button198->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button198.BackgroundImage")));
			this->button198->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button198->ForeColor = System::Drawing::Color::LightBlue;
			this->button198->Location = System::Drawing::Point(1031, 701);
			this->button198->Name = L"button198";
			this->button198->Size = System::Drawing::Size(188, 39);
			this->button198->TabIndex = 11;
			this->button198->Text = L"start the game";
			this->button198->UseVisualStyleBackColor = true;
			this->button198->Click += gcnew System::EventHandler(this, &level3::button198_Click);
			// 
			// level3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1273, 848);
			this->Controls->Add(this->button198);
			this->Controls->Add(this->button197);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"level3";
			this->Text = L"level3";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*--------------------------------------------------------------------------------------------------------------------------------*/
		/*---------------------------------------------------------------------------------------------------------------------------------*/
		public: Void Lose()
		{
			button197->Visible = true;
			if (button1->Enabled == true)
			{
				button1->Enabled = false;
				button1->Text = "";
				if (data[1] == 1)
					//button1->BackColor = System::Drawing::Color::Red;
					button1->BackgroundImage = imageList1->Images[0];
				button1->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button2->Enabled == true)
			{
				button2->Enabled = false;
				button2->Text = "";
				if (data[2] == 1)
					//button2->BackColor = System::Drawing::Color::Red;
					button2->BackgroundImage = imageList1->Images[0];
				button2->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button3->Enabled == true)
			{
				button3->Enabled = false;
				button3->Text = "";
				if (data[3] == 1)
					//button3->BackColor = System::Drawing::Color::Red;
					button3->BackgroundImage = imageList1->Images[0];
				button3->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button4->Enabled == true)
			{
				button4->Enabled = false;
				button4->Text = "";
				if (data[4] == 1)
					//button4->BackColor = System::Drawing::Color::Red;
					button4->BackgroundImage = imageList1->Images[0];
				button4->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button5->Enabled == true)
			{
				button5->Enabled = false;
				button5->Text = "";
				if (data[5] == 1)
					//	button5->BackColor = System::Drawing::Color::Red;
					button5->BackgroundImage = imageList1->Images[0];
				button5->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button6->Enabled == true)
			{
				button6->Enabled = false;
				button6->Text = "";
				if (data[6] == 1)
					//button6->BackColor = System::Drawing::Color::Red;
					button6->BackgroundImage = imageList1->Images[0];
				button6->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button7->Enabled == true)
			{
				button7->Enabled = false;
				button7->Text = "";
				if (data[7] == 1)
					//button7->BackColor = System::Drawing::Color::Red;
					button7->BackgroundImage = imageList1->Images[0];
				button7->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button8->Enabled == true)
			{
				button8->Enabled = false;
				button8->Text = "";
				if (data[8] == 1)
					//button8->BackColor = System::Drawing::Color::Red;
					button8->BackgroundImage = imageList1->Images[0];
				button8->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button9->Enabled == true)
			{
				button9->Enabled = false;
				button9->Text = "";
				if (data[9] == 1)
					//button9->BackColor = System::Drawing::Color::Red;
					button9->BackgroundImage = imageList1->Images[0];
				button9->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button10->Enabled == true)
			{
				button10->Enabled = false;
				button10->Text = "";
				if (data[10] == 1)
					//button10->BackColor = System::Drawing::Color::Red;
					button10->BackgroundImage = imageList1->Images[0];
				button10->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button11->Enabled == true)
			{
				button11->Enabled = false;
				button11->Text = "";
				if (data[11] == 1)
					//button11->BackColor = System::Drawing::Color::Red;
					button11->BackgroundImage = imageList1->Images[0];
				button11->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button12->Enabled == true)
			{
				button12->Enabled = false;
				button12->Text = "";
				if (data[12] == 1)
					//button12->BackColor = System::Drawing::Color::Red;
					button12->BackgroundImage = imageList1->Images[0];
				button12->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button13->Enabled == true)
			{
				button13->Enabled = false;
				button13->Text = "";
				if (data[13] == 1)
					//	button13->BackColor = System::Drawing::Color::Red;
					button13->BackgroundImage = imageList1->Images[0];
				button13->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button14->Enabled == true)
			{
				button14->Enabled = false;
				button14->Text = "";
				if (data[14] == 1)
					//	button14->BackColor = System::Drawing::Color::Red;
					button14->BackgroundImage = imageList1->Images[0];
				button14->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button15->Enabled == true)
			{
				button15->Enabled = false;
				button15->Text = "";
				if (data[15] == 1)
					//	button15->BackColor = System::Drawing::Color::Red;
					button15->BackgroundImage = imageList1->Images[0];
				button15->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button16->Enabled == true)
			{
				button16->Enabled = false;
				button16->Text = "";
				if (data[16] == 1)
					//button16->BackColor = System::Drawing::Color::Red;
					button16->BackgroundImage = imageList1->Images[0];
				button16->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button17->Enabled == true)
			{
				button17->Enabled = false;
				button17->Text = "";
				if (data[17] == 1)
					//button17->BackColor = System::Drawing::Color::Red;
					button17->BackgroundImage = imageList1->Images[0];
				button17->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button18->Enabled == true)
			{
				button18->Enabled = false;
				button18->Text = "";
				if (data[18] == 1)
					//button18->BackColor = System::Drawing::Color::Red;
					button18->BackgroundImage = imageList1->Images[0];
				button18->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button19->Enabled == true)
			{
				button19->Enabled = false;
				button19->Text = "";
				if (data[19] == 1)
					//button19->BackColor = System::Drawing::Color::Red;
					button19->BackgroundImage = imageList1->Images[0];
				button19->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button20->Enabled == true)
			{
				button20->Enabled = false;
				button20->Text = "";
				if (data[20] == 1)
					//button20->BackColor = System::Drawing::Color::Red;
					button20->BackgroundImage = imageList1->Images[0];
				button20->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button21->Enabled == true)
			{
				button21->Enabled = false;
				button21->Text = "";
				if (data[21] == 1)
					//button21->BackColor = System::Drawing::Color::Red;
					button21->BackgroundImage = imageList1->Images[0];
				button21->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button22->Enabled == true)
			{
				button22->Enabled = false;
				button22->Text = "";
				if (data[22] == 1)
					//button22->BackColor = System::Drawing::Color::Red;
					button22->BackgroundImage = imageList1->Images[0];
				button22->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button23->Enabled == true)
			{
				button23->Enabled = false;
				button23->Text = "";
				if (data[23] == 1)
					//	button23->BackColor = System::Drawing::Color::Red;
					button23->BackgroundImage = imageList1->Images[0];
				button23->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button24->Enabled == true)
			{
				button24->Enabled = false;
				button24->Text = "";
				if (data[24] == 1)
					//button24->BackColor = System::Drawing::Color::Red;
					button24->BackgroundImage = imageList1->Images[0];
				button24->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button25->Enabled == true)
			{
				button25->Enabled = false;
				button25->Text = "";
				if (data[25] == 1)
					//button25->BackColor = System::Drawing::Color::Red;
					button25->BackgroundImage = imageList1->Images[0];
				button25->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button26->Enabled == true)
			{
				button26->Enabled = false;
				button26->Text = "";
				if (data[26] == 1)
					//button26->BackColor = System::Drawing::Color::Red;
					button26->BackgroundImage = imageList1->Images[0];
				button26->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button27->Enabled == true)
			{
				button27->Enabled = false;
				button27->Text = "";
				if (data[27] == 1)
					//button27->BackColor = System::Drawing::Color::Red;
					button27->BackgroundImage = imageList1->Images[0];
				button27->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button28->Enabled == true)
			{
				button28->Enabled = false;
				button28->Text = "";
				if (data[28] == 1)
					//button28->BackColor = System::Drawing::Color::Red;
					button28->BackgroundImage = imageList1->Images[0];
				button28->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button29->Enabled == true)
			{
				button29->Enabled = false;
				button29->Text = "";
				if (data[29] == 1)
					//	button29->BackColor = System::Drawing::Color::Red;
					button29->BackgroundImage = imageList1->Images[0];
				button29->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button30->Enabled == true)
			{
				button30->Enabled = false;
				button30->Text = "";
				if (data[30] == 1)
					//button30->BackColor = System::Drawing::Color::Red;
					button30->BackgroundImage = imageList1->Images[0];
				button30->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button31->Enabled == true)
			{
				button31->Enabled = false;
				button31->Text = "";
				if (data[31] == 1)
					//button31->BackColor = System::Drawing::Color::Red;
					button31->BackgroundImage = imageList1->Images[0];
				button31->BackgroundImageLayout = ImageLayout::Stretch;
			}
			if (button32->Enabled == true)
			{
				button32->Enabled = false;
				button32->Text = "";
				if (data[32] == 1)
					//button32->BackColor = System::Drawing::Color::Red;
					button32->BackgroundImage = imageList1->Images[0];
				button32->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button33->Enabled == true)
			{
				button33->Enabled = false;
				button33->Text = "";
				if (data[33] == 1)
					//	button33->BackColor = System::Drawing::Color::Red;
					button33->BackgroundImage = imageList1->Images[0];
				button33->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button34->Enabled == true)
			{
				button34->Enabled = false;
				button34->Text = "";
				if (data[34] == 1)
					//	button34->BackColor = System::Drawing::Color::Red;
					button34->BackgroundImage = imageList1->Images[0];
				button34->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button35->Enabled == true)
			{
				button35->Enabled = false;
				button35->Text = "";
				if (data[35] == 1)
					//	button35->BackColor = System::Drawing::Color::Red;
					button35->BackgroundImage = imageList1->Images[0];
				button35->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button36->Enabled == true)
			{
				button36->Enabled = false;
				button36->Text = "";
				if (data[36] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button36->BackgroundImage = imageList1->Images[0];
				button36->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button37->Enabled == true)
			{
				button37->Enabled = false;
				button37->Text = "";
				if (data[37] == 1)
					//button1->BackColor = System::Drawing::Color::Red;
					button37->BackgroundImage = imageList1->Images[0];
				button37->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button38->Enabled == true)
			{
				button38->Enabled = false;
				button38->Text = "";
				if (data[38] == 1)
					//button2->BackColor = System::Drawing::Color::Red;
					button38->BackgroundImage = imageList1->Images[0];
				button38->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button39->Enabled == true)
			{
				button39->Enabled = false;
				button39->Text = "";
				if (data[39] == 1)
					//button3->BackColor = System::Drawing::Color::Red;
					button39->BackgroundImage = imageList1->Images[0];
				button39->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button40->Enabled == true)
			{
				button40->Enabled = false;
				button40->Text = "";
				if (data[40] == 1)
					//button4->BackColor = System::Drawing::Color::Red;
					button40->BackgroundImage = imageList1->Images[0];
				button40->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button41->Enabled == true)
			{
				button41->Enabled = false;
				button41->Text = "";
				if (data[41] == 1)
					//	button5->BackColor = System::Drawing::Color::Red;
					button41->BackgroundImage = imageList1->Images[0];
				button41->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button42->Enabled == true)
			{
				button42->Enabled = false;
				button42->Text = "";
				if (data[42] == 1)
					//button6->BackColor = System::Drawing::Color::Red;
					button42->BackgroundImage = imageList1->Images[0];
				button42->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button43->Enabled == true)
			{
				button43->Enabled = false;
				button43->Text = "";
				if (data[43] == 1)
					//button7->BackColor = System::Drawing::Color::Red;
					button43->BackgroundImage = imageList1->Images[0];
				button43->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button44->Enabled == true)
			{
				button44->Enabled = false;
				button44->Text = "";
				if (data[44] == 1)
					//button8->BackColor = System::Drawing::Color::Red;
					button44->BackgroundImage = imageList1->Images[0];
				button44->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button45->Enabled == true)
			{
				button45->Enabled = false;
				button45->Text = "";
				if (data[45] == 1)
					//button9->BackColor = System::Drawing::Color::Red;
					button45->BackgroundImage = imageList1->Images[0];
				button45->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button46->Enabled == true)
			{
				button46->Enabled = false;
				button46->Text = "";
				if (data[46] == 1)
					//button10->BackColor = System::Drawing::Color::Red;
					button46->BackgroundImage = imageList1->Images[0];
				button46->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button47->Enabled == true)
			{
				button47->Enabled = false;
				button47->Text = "";
				if (data[47] == 1)
					//button11->BackColor = System::Drawing::Color::Red;
					button47->BackgroundImage = imageList1->Images[0];
				button47->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button48->Enabled == true)
			{
				button48->Enabled = false;
				button48->Text = "";
				if (data[48] == 1)
					//button12->BackColor = System::Drawing::Color::Red;
					button48->BackgroundImage = imageList1->Images[0];
				button48->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button49->Enabled == true)
			{
				button49->Enabled = false;
				button49->Text = "";
				if (data[49] == 1)
					//	button13->BackColor = System::Drawing::Color::Red;
					button49->BackgroundImage = imageList1->Images[0];
				button49->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button50->Enabled == true)
			{
				button50->Enabled = false;
				button50->Text = "";
				if (data[50] == 1)
					//	button14->BackColor = System::Drawing::Color::Red;
					button50->BackgroundImage = imageList1->Images[0];
				button50->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button51->Enabled == true)
			{
				button51->Enabled = false;
				button51->Text = "";
				if (data[51] == 1)
					//	button15->BackColor = System::Drawing::Color::Red;
					button51->BackgroundImage = imageList1->Images[0];
				button51->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button52->Enabled == true)
			{
				button52->Enabled = false;
				button52->Text = "";
				if (data[52] == 1)
					//button16->BackColor = System::Drawing::Color::Red;
					button52->BackgroundImage = imageList1->Images[0];
				button52->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button53->Enabled == true)
			{
				button53->Enabled = false;
				button53->Text = "";
				if (data[53] == 1)
					//button17->BackColor = System::Drawing::Color::Red;
					button53->BackgroundImage = imageList1->Images[0];
				button53->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button54->Enabled == true)
			{
				button54->Enabled = false;
				button54->Text = "";
				if (data[54] == 1)
					//button18->BackColor = System::Drawing::Color::Red;
					button54->BackgroundImage = imageList1->Images[0];
				button54->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button55->Enabled == true)
			{
				button55->Enabled = false;
				button55->Text = "";
				if (data[55] == 1)
					//button19->BackColor = System::Drawing::Color::Red;
					button55->BackgroundImage = imageList1->Images[0];
				button55->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button56->Enabled == true)
			{
				button56->Enabled = false;
				button56->Text = "";
				if (data[56] == 1)
					//button20->BackColor = System::Drawing::Color::Red;
					button56->BackgroundImage = imageList1->Images[0];
				button56->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button57->Enabled == true)
			{
				button57->Enabled = false;
				button57->Text = "";
				if (data[57] == 1)
					//button21->BackColor = System::Drawing::Color::Red;
					button57->BackgroundImage = imageList1->Images[0];
				button57->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button58->Enabled == true)
			{
				button58->Enabled = false;
				button58->Text = "";
				if (data[58] == 1)
					//button22->BackColor = System::Drawing::Color::Red;
					button58->BackgroundImage = imageList1->Images[0];
				button58->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button59->Enabled == true)
			{
				button59->Enabled = false;
				button59->Text = "";
				if (data[59] == 1)
					//	button23->BackColor = System::Drawing::Color::Red;
					button59->BackgroundImage = imageList1->Images[0];
				button59->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button60->Enabled == true)
			{
				button60->Enabled = false;
				button60->Text = "";
				if (data[60] == 1)
					//button24->BackColor = System::Drawing::Color::Red;
					button60->BackgroundImage = imageList1->Images[0];
				button60->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button61->Enabled == true)
			{
				button61->Enabled = false;
				button61->Text = "";
				if (data[61] == 1)
					//button25->BackColor = System::Drawing::Color::Red;
					button61->BackgroundImage = imageList1->Images[0];
				button61->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button62->Enabled == true)
			{
				button62->Enabled = false;
				button62->Text = "";
				if (data[62] == 1)
					//button26->BackColor = System::Drawing::Color::Red;
					button62->BackgroundImage = imageList1->Images[0];
				button62->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button63->Enabled == true)
			{
				button63->Enabled = false;
				button63->Text = "";
				if (data[63] == 1)
					//button27->BackColor = System::Drawing::Color::Red;
					button63->BackgroundImage = imageList1->Images[0];
				button63->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button64->Enabled == true)
			{
				button64->Enabled = false;
				button64->Text = "";
				if (data[64] == 1)
					//button28->BackColor = System::Drawing::Color::Red;
					button64->BackgroundImage = imageList1->Images[0];
				button64->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button65->Enabled == true)
			{
				button65->Enabled = false;
				button65->Text = "";
				if (data[65] == 1)
					//	button29->BackColor = System::Drawing::Color::Red;
					button65->BackgroundImage = imageList1->Images[0];
				button65->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button66->Enabled == true)
			{
				button66->Enabled = false;
				button66->Text = "";
				if (data[66] == 1)
					//button30->BackColor = System::Drawing::Color::Red;
					button66->BackgroundImage = imageList1->Images[0];
				button66->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button67->Enabled == true)
			{
				button67->Enabled = false;
				button67->Text = "";
				if (data[67] == 1)
					//button31->BackColor = System::Drawing::Color::Red;
					button67->BackgroundImage = imageList1->Images[0];
				button67->BackgroundImageLayout = ImageLayout::Stretch;
			}
			if (button68->Enabled == true)
			{
				button68->Enabled = false;
				button68->Text = "";
				if (data[68] == 1)
					//button32->BackColor = System::Drawing::Color::Red;
					button68->BackgroundImage = imageList1->Images[0];
				button68->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button69->Enabled == true)
			{
				button69->Enabled = false;
				button69->Text = "";
				if (data[69] == 1)
					//	button33->BackColor = System::Drawing::Color::Red;
					button69->BackgroundImage = imageList1->Images[0];
				button69->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button70->Enabled == true)
			{
				button70->Enabled = false;
				button70->Text = "";
				if (data[70] == 1)
					//	button34->BackColor = System::Drawing::Color::Red;
					button70->BackgroundImage = imageList1->Images[0];
				button70->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button71->Enabled == true)
			{
				button71->Enabled = false;
				button71->Text = "";
				if (data[71] == 1)
					//	button35->BackColor = System::Drawing::Color::Red;
					button71->BackgroundImage = imageList1->Images[0];
				button71->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button72->Enabled == true)
			{
				button72->Enabled = false;
				button72->Text = "";
				if (data[72] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button72->BackgroundImage = imageList1->Images[0];
				button72->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button73->Enabled == true)
			{
				button73->Enabled = false;
				button73->Text = "";
				if (data[73] == 1)
					//button1->BackColor = System::Drawing::Color::Red;
					button73->BackgroundImage = imageList1->Images[0];
				button73->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button74->Enabled == true)
			{
				button74->Enabled = false;
				button74->Text = "";
				if (data[74] == 1)
					//button2->BackColor = System::Drawing::Color::Red;
					button74->BackgroundImage = imageList1->Images[0];
				button74->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button75->Enabled == true)
			{
				button75->Enabled = false;
				button75->Text = "";
				if (data[75] == 1)
					//button3->BackColor = System::Drawing::Color::Red;
					button75->BackgroundImage = imageList1->Images[0];
				button75->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button76->Enabled == true)
			{
				button76->Enabled = false;
				button76->Text = "";
				if (data[76] == 1)
					//button4->BackColor = System::Drawing::Color::Red;
					button76->BackgroundImage = imageList1->Images[0];
				button76->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button77->Enabled == true)
			{
				button77->Enabled = false;
				button77->Text = "";
				if (data[77] == 1)
					//	button5->BackColor = System::Drawing::Color::Red;
					button77->BackgroundImage = imageList1->Images[0];
				button77->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button78->Enabled == true)
			{
				button78->Enabled = false;
				button78->Text = "";
				if (data[78] == 1)
					//button6->BackColor = System::Drawing::Color::Red;
					button78->BackgroundImage = imageList1->Images[0];
				button78->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button79->Enabled == true)
			{
				button79->Enabled = false;
				button79->Text = "";
				if (data[79] == 1)
					//button7->BackColor = System::Drawing::Color::Red;
					button79->BackgroundImage = imageList1->Images[0];
				button79->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button80->Enabled == true)
			{
				button80->Enabled = false;
				button80->Text = "";
				if (data[80] == 1)
					//button8->BackColor = System::Drawing::Color::Red;
					button80->BackgroundImage = imageList1->Images[0];
				button80->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button81->Enabled == true)
			{
				button81->Enabled = false;
				button81->Text = "";
				if (data[81] == 1)
					//button9->BackColor = System::Drawing::Color::Red;
					button81->BackgroundImage = imageList1->Images[0];
				button81->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button82->Enabled == true)
			{
				button82->Enabled = false;
				button82->Text = "";
				if (data[82] == 1)
					//button10->BackColor = System::Drawing::Color::Red;
					button82->BackgroundImage = imageList1->Images[0];
				button82->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button83->Enabled == true)
			{
				button83->Enabled = false;
				button83->Text = "";
				if (data[83] == 1)
					//button11->BackColor = System::Drawing::Color::Red;
					button83->BackgroundImage = imageList1->Images[0];
				button83->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button84->Enabled == true)
			{
				button84->Enabled = false;
				button84->Text = "";
				if (data[84] == 1)
					//button12->BackColor = System::Drawing::Color::Red;
					button84->BackgroundImage = imageList1->Images[0];
				button84->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button85->Enabled == true)
			{
				button85->Enabled = false;
				button85->Text = "";
				if (data[85] == 1)
					//	button13->BackColor = System::Drawing::Color::Red;
					button85->BackgroundImage = imageList1->Images[0];
				button85->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button86->Enabled == true)
			{
				button86->Enabled = false;
				button86->Text = "";
				if (data[86] == 1)
					//	button14->BackColor = System::Drawing::Color::Red;
					button86->BackgroundImage = imageList1->Images[0];
				button86->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button87->Enabled == true)
			{
				button87->Enabled = false;
				button87->Text = "";
				if (data[87] == 1)
					//	button15->BackColor = System::Drawing::Color::Red;
					button87->BackgroundImage = imageList1->Images[0];
				button87->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button88->Enabled == true)
			{
				button88->Enabled = false;
				button88->Text = "";
				if (data[88] == 1)
					//button16->BackColor = System::Drawing::Color::Red;
					button88->BackgroundImage = imageList1->Images[0];
				button88->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button89->Enabled == true)
			{
				button89->Enabled = false;
				button89->Text = "";
				if (data[89] == 1)
					//button17->BackColor = System::Drawing::Color::Red;
					button89->BackgroundImage = imageList1->Images[0];
				button89->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button90->Enabled == true)
			{
				button90->Enabled = false;
				button90->Text = "";
				if (data[90] == 1)
					//button18->BackColor = System::Drawing::Color::Red;
					button90->BackgroundImage = imageList1->Images[0];
				button90->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button91->Enabled == true)
			{
				button91->Enabled = false;
				button91->Text = "";
				if (data[91] == 1)
					//button19->BackColor = System::Drawing::Color::Red;
					button91->BackgroundImage = imageList1->Images[0];
				button91->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button92->Enabled == true)
			{
				button92->Enabled = false;
				button92->Text = "";
				if (data[92] == 1)
					//button20->BackColor = System::Drawing::Color::Red;
					button92->BackgroundImage = imageList1->Images[0];
				button92->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button93->Enabled == true)
			{
				button93->Enabled = false;
				button93->Text = "";
				if (data[93] == 1)
					//button21->BackColor = System::Drawing::Color::Red;
					button93->BackgroundImage = imageList1->Images[0];
				button93->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button94->Enabled == true)
			{
				button94->Enabled = false;
				button94->Text = "";
				if (data[94] == 1)
					//button22->BackColor = System::Drawing::Color::Red;
					button94->BackgroundImage = imageList1->Images[0];
				button94->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button95->Enabled == true)
			{
				button95->Enabled = false;
				button95->Text = "";
				if (data[95] == 1)
					//	button23->BackColor = System::Drawing::Color::Red;
					button95->BackgroundImage = imageList1->Images[0];
				button95->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button96->Enabled == true)
			{
				button96->Enabled = false;
				button96->Text = "";
				if (data[96] == 1)
					//button24->BackColor = System::Drawing::Color::Red;
					button96->BackgroundImage = imageList1->Images[0];
				button96->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button97->Enabled == true)
			{
				button97->Enabled = false;
				button97->Text = "";
				if (data[97] == 1)
					//button25->BackColor = System::Drawing::Color::Red;
					button97->BackgroundImage = imageList1->Images[0];
				button97->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button98->Enabled == true)
			{
				button98->Enabled = false;
				button98->Text = "";
				if (data[98] == 1)
					//button26->BackColor = System::Drawing::Color::Red;
					button98->BackgroundImage = imageList1->Images[0];
				button98->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button99->Enabled == true)
			{
				button99->Enabled = false;
				button99->Text = "";
				if (data[99] == 1)
					//button27->BackColor = System::Drawing::Color::Red;
					button99->BackgroundImage = imageList1->Images[0];
				button99->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button100->Enabled == true)
			{
				button100->Enabled = false;
				button100->Text = "";
				if (data[100] == 1)
					//button28->BackColor = System::Drawing::Color::Red;
					button100->BackgroundImage = imageList1->Images[0];
				button100->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button101->Enabled == true)
			{
				button101->Enabled = false;
				button101->Text = "";
				if (data[101] == 1)
					//	button29->BackColor = System::Drawing::Color::Red;
					button101->BackgroundImage = imageList1->Images[0];
				button101->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button102->Enabled == true)
			{
				button102->Enabled = false;
				button102->Text = "";
				if (data[102] == 1)
					//button30->BackColor = System::Drawing::Color::Red;
					button102->BackgroundImage = imageList1->Images[0];
				button102->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button103->Enabled == true)
			{
				button103->Enabled = false;
				button103->Text = "";
				if (data[103] == 1)
					//button31->BackColor = System::Drawing::Color::Red;
					button103->BackgroundImage = imageList1->Images[0];
				button103->BackgroundImageLayout = ImageLayout::Stretch;
			}
			if (button104->Enabled == true)
			{
				button104->Enabled = false;
				button104->Text = "";
				if (data[104] == 1)
					//button32->BackColor = System::Drawing::Color::Red;
					button104->BackgroundImage = imageList1->Images[0];
				button104->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button105->Enabled == true)
			{
				button105->Enabled = false;
				button105->Text = "";
				if (data[105] == 1)
					//	button33->BackColor = System::Drawing::Color::Red;
					button105->BackgroundImage = imageList1->Images[0];
				button105->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button106->Enabled == true)
			{
				button106->Enabled = false;
				button106->Text = "";
				if (data[106] == 1)
					//	button34->BackColor = System::Drawing::Color::Red;
					button106->BackgroundImage = imageList1->Images[0];
				button106->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button107->Enabled == true)
			{
				button107->Enabled = false;
				button107->Text = "";
				if (data[107] == 1)
					//	button35->BackColor = System::Drawing::Color::Red;
					button107->BackgroundImage = imageList1->Images[0];
				button107->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button108->Enabled == true)
			{
				button108->Enabled = false;
				button108->Text = "";
				if (data[108] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button108->BackgroundImage = imageList1->Images[0];
				button108->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button109->Enabled == true)
			{
				button109->Enabled = false;
				button109->Text = "";
				if (data[109] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button109->BackgroundImage = imageList1->Images[0];
				button109->BackgroundImageLayout = ImageLayout::Stretch;


			}

			if (button110->Enabled == true)
			{
				button110->Enabled = false;
				button110->Text = "";
				if (data[110] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button110->BackgroundImage = imageList1->Images[0];
				button110->BackgroundImageLayout = ImageLayout::Stretch;


			}

			if (button111->Enabled == true)
			{
				button111->Enabled = false;
				button111->Text = "";
				if (data[111] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button111->BackgroundImage = imageList1->Images[0];
				button111->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button112->Enabled == true)
			{
				button112->Enabled = false;
				button112->Text = "";
				if (data[112] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button112->BackgroundImage = imageList1->Images[0];
				button112->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button113->Enabled == true)
			{
				button113->Enabled = false;
				button113->Text = "";
				if (data[113] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button113->BackgroundImage = imageList1->Images[0];
				button113->BackgroundImageLayout = ImageLayout::Stretch;


			}


			if (button114->Enabled == true)
			{
				button114->Enabled = false;
				button114->Text = "";
				if (data[114] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button114->BackgroundImage = imageList1->Images[0];
				button114->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button115->Enabled == true)
			{
				button115->Enabled = false;
				button115->Text = "";
				if (data[115] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button115->BackgroundImage = imageList1->Images[0];
				button115->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button116->Enabled == true)
			{
				button116->Enabled = false;
				button116->Text = "";
				if (data[116] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button116->BackgroundImage = imageList1->Images[0];
				button116->BackgroundImageLayout = ImageLayout::Stretch;


			}

			if (button117->Enabled == true)
			{
				button117->Enabled = false;
				button117->Text = "";
				if (data[117] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button117->BackgroundImage = imageList1->Images[0];
				button117->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button118->Enabled == true)
			{
				button118->Enabled = false;
				button118->Text = "";
				if (data[118] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button118->BackgroundImage = imageList1->Images[0];
				button118->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button119->Enabled == true)
			{
				button119->Enabled = false;
				button119->Text = "";
				if (data[119] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button119->BackgroundImage = imageList1->Images[0];
				button119->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button120->Enabled == true)
			{
				button120->Enabled = false;
				button120->Text = "";
				if (data[120] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button120->BackgroundImage = imageList1->Images[0];
				button120->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button121->Enabled == true)
			{
				button121->Enabled = false;
				button121->Text = "";
				if (data[121] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button121->BackgroundImage = imageList1->Images[0];
				button121->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button122->Enabled == true)
			{
				button122->Enabled = false;
				button122->Text = "";
				if (data[122] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button122->BackgroundImage = imageList1->Images[0];
				button122->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button123->Enabled == true)
			{
				button123->Enabled = false;
				button123->Text = "";
				if (data[123] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button123->BackgroundImage = imageList1->Images[0];
				button123->BackgroundImageLayout = ImageLayout::Stretch;


			}

			if (button124->Enabled == true)
			{
				button124->Enabled = false;
				button124->Text = "";
				if (data[124] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button124->BackgroundImage = imageList1->Images[0];
				button124->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button125->Enabled == true)
			{
				button125->Enabled = false;
				button125->Text = "";
				if (data[125] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button125->BackgroundImage = imageList1->Images[0];
				button125->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button126->Enabled == true)
			{
				button126->Enabled = false;
				button126->Text = "";
				if (data[126] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button126->BackgroundImage = imageList1->Images[0];
				button126->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button127->Enabled == true)
			{
				button127->Enabled = false;
				button127->Text = "";
				if (data[127] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button127->BackgroundImage = imageList1->Images[0];
				button127->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button128->Enabled == true)
			{
				button128->Enabled = false;
				button128->Text = "";
				if (data[128] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button128->BackgroundImage = imageList1->Images[0];
				button128->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button129->Enabled == true)
			{
				button129->Enabled = false;
				button129->Text = "";
				if (data[129] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button129->BackgroundImage = imageList1->Images[0];
				button129->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button130->Enabled == true)
			{
				button130->Enabled = false;
				button130->Text = "";
				if (data[130] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button130->BackgroundImage = imageList1->Images[0];
				button130->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button131->Enabled == true)
			{
				button131->Enabled = false;
				button131->Text = "";
				if (data[131] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button131->BackgroundImage = imageList1->Images[0];
				button131->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button132->Enabled == true)
			{
				button132->Enabled = false;
				button132->Text = "";
				if (data[132] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button132->BackgroundImage = imageList1->Images[0];
				button132->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button133->Enabled == true)
			{
				button133->Enabled = false;
				button133->Text = "";
				if (data[133] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button133->BackgroundImage = imageList1->Images[0];
				button133->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button134->Enabled == true)
			{
				button134->Enabled = false;
				button134->Text = "";
				if (data[134] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button134->BackgroundImage = imageList1->Images[0];
				button134->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button135->Enabled == true)
			{
				button135->Enabled = false;
				button135->Text = "";
				if (data[135] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button135->BackgroundImage = imageList1->Images[0];
				button135->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button136->Enabled == true)
			{
				button136->Enabled = false;
				button136->Text = "";
				if (data[136] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button136->BackgroundImage = imageList1->Images[0];
				button136->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button136->Enabled == true)
			{
				button136->Enabled = false;
				button136->Text = "";
				if (data[136] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button136->BackgroundImage = imageList1->Images[0];
				button136->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button137->Enabled == true)
			{
				button137->Enabled = false;
				button137->Text = "";
				if (data[137] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button137->BackgroundImage = imageList1->Images[0];
				button137->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button138->Enabled == true)
			{
				button138->Enabled = false;
				button138->Text = "";
				if (data[138] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button138->BackgroundImage = imageList1->Images[0];
				button138->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button139->Enabled == true)
			{
				button139->Enabled = false;
				button139->Text = "";
				if (data[139] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button139->BackgroundImage = imageList1->Images[0];
				button139->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button140->Enabled == true)
			{
				button140->Enabled = false;
				button140->Text = "";
				if (data[140] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button140->BackgroundImage = imageList1->Images[0];
				button140->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button141->Enabled == true)
			{
				button141->Enabled = false;
				button141->Text = "";
				if (data[141] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button141->BackgroundImage = imageList1->Images[0];
				button141->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button142->Enabled == true)
			{
				button142->Enabled = false;
				button142->Text = "";
				if (data[142] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button142->BackgroundImage = imageList1->Images[0];
				button142->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button143->Enabled == true)
			{
				button143->Enabled = false;
				button143->Text = "";
				if (data[143] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button143->BackgroundImage = imageList1->Images[0];
				button143->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button144->Enabled == true)
			{
				button144->Enabled = false;
				button144->Text = "";
				if (data[144] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button144->BackgroundImage = imageList1->Images[0];
				button144->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button145->Enabled == true)
			{
				button145->Enabled = false;
				button145->Text = "";
				if (data[145] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button145->BackgroundImage = imageList1->Images[0];
				button145->BackgroundImageLayout = ImageLayout::Stretch;


			}


			if (button146->Enabled == true)
			{
				button146->Enabled = false;
				button146->Text = "";
				if (data[146] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button146->BackgroundImage = imageList1->Images[0];
				button146->BackgroundImageLayout = ImageLayout::Stretch;


			}


			if (button147->Enabled == true)
			{
				button147->Enabled = false;
				button147->Text = "";
				if (data[147] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button147->BackgroundImage = imageList1->Images[0];
				button147->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button148->Enabled == true)
			{
				button148->Enabled = false;
				button148->Text = "";
				if (data[148] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button148->BackgroundImage = imageList1->Images[0];
				button148->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button149->Enabled == true)
			{
				button149->Enabled = false;
				button149->Text = "";
				if (data[149] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button149->BackgroundImage = imageList1->Images[0];
				button149->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button150->Enabled == true)
			{
				button150->Enabled = false;
				button150->Text = "";
				if (data[150] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button150->BackgroundImage = imageList1->Images[0];
				button150->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button151->Enabled == true)
			{
				button151->Enabled = false;
				button151->Text = "";
				if (data[151] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button151->BackgroundImage = imageList1->Images[0];
				button151->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button152->Enabled == true)
			{
				button152->Enabled = false;
				button152->Text = "";
				if (data[152] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button152->BackgroundImage = imageList1->Images[0];
				button152->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button153->Enabled == true)
			{
				button153->Enabled = false;
				button153->Text = "";
				if (data[153] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button153->BackgroundImage = imageList1->Images[0];
				button153->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button154->Enabled == true)
			{
				button154->Enabled = false;
				button154->Text = "";
				if (data[154] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button154->BackgroundImage = imageList1->Images[0];
				button154->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button155->Enabled == true)
			{
				button155->Enabled = false;
				button155->Text = "";
				if (data[155] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button155->BackgroundImage = imageList1->Images[0];
				button155->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button156->Enabled == true)
			{
				button156->Enabled = false;
				button156->Text = "";
				if (data[156] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button156->BackgroundImage = imageList1->Images[0];
				button156->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button157->Enabled == true)
			{
				button157->Enabled = false;
				button157->Text = "";
				if (data[157] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button157->BackgroundImage = imageList1->Images[0];
				button157->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button158->Enabled == true)
			{
				button158->Enabled = false;
				button158->Text = "";
				if (data[158] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button158->BackgroundImage = imageList1->Images[0];
				button158->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button159->Enabled == true)
			{
				button159->Enabled = false;
				button159->Text = "";
				if (data[159] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button159->BackgroundImage = imageList1->Images[0];
				button159->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button160->Enabled == true)
			{
				button160->Enabled = false;
				button160->Text = "";
				if (data[160] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button160->BackgroundImage = imageList1->Images[0];
				button160->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button161->Enabled == true)
			{
				button161->Enabled = false;
				button161->Text = "";
				if (data[161] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button161->BackgroundImage = imageList1->Images[0];
				button161->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button162->Enabled == true)
			{
				button162->Enabled = false;
				button162->Text = "";
				if (data[162] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button162->BackgroundImage = imageList1->Images[0];
				button162->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button163->Enabled == true)
			{
				button163->Enabled = false;
				button163->Text = "";
				if (data[163] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button163->BackgroundImage = imageList1->Images[0];
				button163->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button164->Enabled == true)
			{
				button164->Enabled = false;
				button164->Text = "";
				if (data[164] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button164->BackgroundImage = imageList1->Images[0];
				button164->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button165->Enabled == true)
			{
				button165->Enabled = false;
				button165->Text = "";
				if (data[165] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button165->BackgroundImage = imageList1->Images[0];
				button165->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button166->Enabled == true)
			{
				button166->Enabled = false;
				button166->Text = "";
				if (data[166] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button166->BackgroundImage = imageList1->Images[0];
				button166->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button167->Enabled == true)
			{
				button167->Enabled = false;
				button167->Text = "";
				if (data[167] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button167->BackgroundImage = imageList1->Images[0];
				button167->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button168->Enabled == true)
			{
				button168->Enabled = false;
				button168->Text = "";
				if (data[168] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button168->BackgroundImage = imageList1->Images[0];
				button168->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button169->Enabled == true)
			{
				button169->Enabled = false;
				button169->Text = "";
				if (data[169] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button169->BackgroundImage = imageList1->Images[0];
				button169->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button170->Enabled == true)
			{
				button170->Enabled = false;
				button170->Text = "";
				if (data[170] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button170->BackgroundImage = imageList1->Images[0];
				button170->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button171->Enabled == true)
			{
				button171->Enabled = false;
				button171->Text = "";
				if (data[171] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button171->BackgroundImage = imageList1->Images[0];
				button171->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button172->Enabled == true)
			{
				button172->Enabled = false;
				button172->Text = "";
				if (data[172] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button172->BackgroundImage = imageList1->Images[0];
				button172->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button173->Enabled == true)
			{
				button173->Enabled = false;
				button173->Text = "";
				if (data[173] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button173->BackgroundImage = imageList1->Images[0];
				button173->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button174->Enabled == true)
			{
				button174->Enabled = false;
				button174->Text = "";
				if (data[174] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button174->BackgroundImage = imageList1->Images[0];
				button174->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button175->Enabled == true)
			{
				button175->Enabled = false;
				button175->Text = "";
				if (data[175] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button175->BackgroundImage = imageList1->Images[0];
				button175->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button176->Enabled == true)
			{
				button176->Enabled = false;
				button176->Text = "";
				if (data[176] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button176->BackgroundImage = imageList1->Images[0];
				button176->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button177->Enabled == true)
			{
				button177->Enabled = false;
				button177->Text = "";
				if (data[177] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button177->BackgroundImage = imageList1->Images[0];
				button177->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button178->Enabled == true)
			{
				button178->Enabled = false;
				button178->Text = "";
				if (data[178] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button178->BackgroundImage = imageList1->Images[0];
				button178->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button179->Enabled == true)
			{
				button179->Enabled = false;
				button179->Text = "";
				if (data[179] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button179->BackgroundImage = imageList1->Images[0];
				button179->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button180->Enabled == true)
			{
				button180->Enabled = false;
				button180->Text = "";
				if (data[180] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button180->BackgroundImage = imageList1->Images[0];
				button180->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button181->Enabled == true)
			{
				button181->Enabled = false;
				button181->Text = "";
				if (data[181] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button181->BackgroundImage = imageList1->Images[0];
				button181->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button182->Enabled == true)
			{
				button182->Enabled = false;
				button182->Text = "";
				if (data[182] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button182->BackgroundImage = imageList1->Images[0];
				button182->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button183->Enabled == true)
			{
				button183->Enabled = false;
				button183->Text = "";
				if (data[183] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button183->BackgroundImage = imageList1->Images[0];
				button183->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button184->Enabled == true)
			{
				button184->Enabled = false;
				button184->Text = "";
				if (data[184] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button184->BackgroundImage = imageList1->Images[0];
				button184->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button185->Enabled == true)
			{
				button185->Enabled = false;
				button185->Text = "";
				if (data[185] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button185->BackgroundImage = imageList1->Images[0];
				button185->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button186->Enabled == true)
			{
				button186->Enabled = false;
				button186->Text = "";
				if (data[186] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button186->BackgroundImage = imageList1->Images[0];
				button186->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button187->Enabled == true)
			{
				button187->Enabled = false;
				button187->Text = "";
				if (data[187] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button187->BackgroundImage = imageList1->Images[0];
				button187->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button188->Enabled == true)
			{
				button188->Enabled = false;
				button188->Text = "";
				if (data[188] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button188->BackgroundImage = imageList1->Images[0];
				button188->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button189->Enabled == true)
			{
				button189->Enabled = false;
				button189->Text = "";
				if (data[189] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button189->BackgroundImage = imageList1->Images[0];
				button189->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button190->Enabled == true)
			{
				button190->Enabled = false;
				button190->Text = "";
				if (data[190] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button190->BackgroundImage = imageList1->Images[0];
				button190->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button191->Enabled == true)
			{
				button191->Enabled = false;
				button191->Text = "";
				if (data[191] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button191->BackgroundImage = imageList1->Images[0];
				button191->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button192->Enabled == true)
			{
				button192->Enabled = false;
				button192->Text = "";
				if (data[192] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button192->BackgroundImage = imageList1->Images[0];
				button192->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button193->Enabled == true)
			{
				button193->Enabled = false;
				button193->Text = "";
				if (data[193] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button193->BackgroundImage = imageList1->Images[0];
				button193->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button194->Enabled == true)
			{
				button194->Enabled = false;
				button194->Text = "";
				if (data[194] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button194->BackgroundImage = imageList1->Images[0];
				button194->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button195->Enabled == true)
			{
				button195->Enabled = false;
				button195->Text = "";
				if (data[195] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button195->BackgroundImage = imageList1->Images[0];
				button195->BackgroundImageLayout = ImageLayout::Stretch;


			}
			if (button196->Enabled == true)
			{
				button196->Enabled = false;
				button196->Text = "";
				if (data[196] == 1)
					//	button36->BackColor = System::Drawing::Color::Red;
					button196->BackgroundImage = imageList1->Images[0];
				button196->BackgroundImageLayout = ImageLayout::Stretch;


			}
	
		}
	
		/************************************************************************************************************************************************/
		/****************************************************************************************************************************************************/


		public: Void Win()
		{
			button197->Visible = true;
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
			if (data[101] == 1)
			{
				button101->Enabled = false;
				button101->BackColor = System::Drawing::Color::Red;
				button101->Text = "";
			}
			if (data[102] == 1)
			{
				button102->Enabled = false;
				button102->BackColor = System::Drawing::Color::Red;
				button102->Text = "";
			}
			if (data[103] == 1)
			{
				button103->Enabled = false;
				button103->BackColor = System::Drawing::Color::Red;
				button103->Text = "";
			}
			if (data[104] == 1)
			{
				button104->Enabled = false;
				button104->BackColor = System::Drawing::Color::Red;
				button104->Text = "";
			}
			if (data[105] == 1)
			{
				button105->Enabled = false;
				button105->BackColor = System::Drawing::Color::Red;
				button105->Text = "";
			}
			if (data[106] == 1)
			{
				button106->Enabled = false;
				button106->BackColor = System::Drawing::Color::Red;
				button106->Text = "";
			}
			if (data[107] == 1)
			{
				button107->Enabled = false;
				button107->BackColor = System::Drawing::Color::Red;
				button107->Text = "";
			}
			if (data[108] == 1)
			{
				button108->Enabled = false;
				button108->BackColor = System::Drawing::Color::Red;
				button108->Text = "";
			}
			if (data[109] == 1)
			{
				button109->Enabled = false;
				button109->BackColor = System::Drawing::Color::Red;
				button109->Text = "";
			}
			if (data[110] == 1)
			{
				button110->Enabled = false;
				button110->BackColor = System::Drawing::Color::Red;
				button110->Text = "";
			}
			if (data[111] == 1)
			{
				button111->Enabled = false;
				button111->BackColor = System::Drawing::Color::Red;
				button111->Text = "";
			}
			if (data[112] == 1)
			{
				button112->Enabled = false;
				button112->BackColor = System::Drawing::Color::Red;
				button112->Text = "";
			}
			if (data[113] == 1)
			{
				button113->Enabled = false;
				button113->BackColor = System::Drawing::Color::Red;
				button113->Text = "";
			}
			if (data[114] == 1)
			{
				button114->Enabled = false;
				button114->BackColor = System::Drawing::Color::Red;
				button114->Text = "";
			}
			if (data[115] == 1)
			{
				button115->Enabled = false;
				button115->BackColor = System::Drawing::Color::Red;
				button115->Text = "";
			}
			if (data[116] == 1)
			{
				button116->Enabled = false;
				button116->BackColor = System::Drawing::Color::Red;
				button116->Text = "";
			}
			if (data[117] == 1)
			{
				button117->Enabled = false;
				button117->BackColor = System::Drawing::Color::Red;
				button117->Text = "";
			}
			if (data[118] == 1)
			{
				button118->Enabled = false;
				button118->BackColor = System::Drawing::Color::Red;
				button118->Text = "";
			}
			if (data[119] == 1)
			{
				button119->Enabled = false;
				button119->BackColor = System::Drawing::Color::Red;
				button119->Text = "";
			}
			if (data[120] == 1)
			{
				button120->Enabled = false;
				button120->BackColor = System::Drawing::Color::Red;
				button120->Text = "";
			}
			if (data[121] == 1)
			{
				button121->Enabled = false;
				button121->BackColor = System::Drawing::Color::Red;
				button121->Text = "";
			}
			if (data[122] == 1)
			{
				button122->Enabled = false;
				button122->BackColor = System::Drawing::Color::Red;
				button122->Text = "";
			}
			if (data[123] == 1)
			{
				button123->Enabled = false;
				button123->BackColor = System::Drawing::Color::Red;
				button123->Text = "";
			}
			if (data[123] == 1)
			{
				button123->Enabled = false;
				button123->BackColor = System::Drawing::Color::Red;
				button123->Text = "";
			}
			if (data[124] == 1)
			{
				button124->Enabled = false;
				button124->BackColor = System::Drawing::Color::Red;
				button124->Text = "";
			}
			if (data[125] == 1)
			{
				button125->Enabled = false;
				button125->BackColor = System::Drawing::Color::Red;
				button125->Text = "";
			}
			

			if (data[126] == 1)
			{
				button126->Enabled = false;
				button126->BackColor = System::Drawing::Color::Red;
				button126->Text = "";
			}


			if (data[127] == 1)
			{
				button127->Enabled = false;
				button127->BackColor = System::Drawing::Color::Red;
				button127->Text = "";
			}






			if (data[128] == 1)
			{
				button128->Enabled = false;
				button128->BackColor = System::Drawing::Color::Red;
				button128->Text = "";
			}






			if (data[129] == 1)
			{
				button129->Enabled = false;
				button129->BackColor = System::Drawing::Color::Red;
				button129->Text = "";
			}






			if (data[130] == 1)
			{
				button130->Enabled = false;
				button130->BackColor = System::Drawing::Color::Red;
				button130->Text = "";
			}






			if (data[131] == 1)
			{
				button131->Enabled = false;
				button131->BackColor = System::Drawing::Color::Red;
				button131->Text = "";
			}






			if (data[132] == 1)
			{
				button132->Enabled = false;
				button132->BackColor = System::Drawing::Color::Red;
				button132->Text = "";
			}






			if (data[133] == 1)
			{
				button133->Enabled = false;
				button133->BackColor = System::Drawing::Color::Red;
				button133->Text = "";
			}






			if (data[134] == 1)
			{
				button134->Enabled = false;
				button134->BackColor = System::Drawing::Color::Red;
				button134->Text = "";
			}






			if (data[135] == 1)
			{
				button135->Enabled = false;
				button135->BackColor = System::Drawing::Color::Red;
				button135->Text = "";
			}






			if (data[136] == 1)
			{
				button136->Enabled = false;
				button136->BackColor = System::Drawing::Color::Red;
				button136->Text = "";
			}






			if (data[137] == 1)
			{
				button137->Enabled = false;
				button137->BackColor = System::Drawing::Color::Red;
				button137->Text = "";
			}






			if (data[138] == 1)
			{
				button138->Enabled = false;
				button138->BackColor = System::Drawing::Color::Red;
				button138->Text = "";
			}






			if (data[139] == 1)
			{
				button139->Enabled = false;
				button139->BackColor = System::Drawing::Color::Red;
				button139->Text = "";
			}






			if (data[140] == 1)
			{
				button140->Enabled = false;
				button140->BackColor = System::Drawing::Color::Red;
				button140->Text = "";
			}






			if (data[141] == 1)
			{
				button141->Enabled = false;
				button141->BackColor = System::Drawing::Color::Red;
				button141->Text = "";
			}






			if (data[142] == 1)
			{
				button142->Enabled = false;
				button142->BackColor = System::Drawing::Color::Red;
				button142->Text = "";
			}






			if (data[143] == 1)
			{
				button143->Enabled = false;
				button143->BackColor = System::Drawing::Color::Red;
				button143->Text = "";
			}






			if (data[144] == 1)
			{
				button144->Enabled = false;
				button144->BackColor = System::Drawing::Color::Red;
				button144->Text = "";
			}






			if (data[145] == 1)
			{
				button145->Enabled = false;
				button145->BackColor = System::Drawing::Color::Red;
				button145->Text = "";
			}






			if (data[146] == 1)
			{
				button146->Enabled = false;
				button146->BackColor = System::Drawing::Color::Red;
				button146->Text = "";
			}






			if (data[147] == 1)
			{
				button147->Enabled = false;
				button147->BackColor = System::Drawing::Color::Red;
				button147->Text = "";
			}






			if (data[148] == 1)
			{
				button148->Enabled = false;
				button148->BackColor = System::Drawing::Color::Red;
				button148->Text = "";
			}






			if (data[149] == 1)
			{
				button149->Enabled = false;
				button149->BackColor = System::Drawing::Color::Red;
				button149->Text = "";
			}






			if (data[150] == 1)
			{
				button150->Enabled = false;
				button150->BackColor = System::Drawing::Color::Red;
				button150->Text = "";
			}






			if (data[151] == 1)
			{
				button151->Enabled = false;
				button151->BackColor = System::Drawing::Color::Red;
				button151->Text = "";
			}






			if (data[152] == 1)
			{
				button152->Enabled = false;
				button152->BackColor = System::Drawing::Color::Red;
				button152->Text = "";
			}






			if (data[153] == 1)
			{
				button153->Enabled = false;
				button153->BackColor = System::Drawing::Color::Red;
				button153->Text = "";
			}






			if (data[154] == 1)
			{
				button154->Enabled = false;
				button154->BackColor = System::Drawing::Color::Red;
				button154->Text = "";
			}






			if (data[155] == 1)
			{
				button155->Enabled = false;
				button155->BackColor = System::Drawing::Color::Red;
				button155->Text = "";
			}






			if (data[156] == 1)
			{
				button156->Enabled = false;
				button156->BackColor = System::Drawing::Color::Red;
				button156->Text = "";
			}






			if (data[157] == 1)
			{
				button157->Enabled = false;
				button157->BackColor = System::Drawing::Color::Red;
				button157->Text = "";
			}






			if (data[158] == 1)
			{
				button158->Enabled = false;
				button158->BackColor = System::Drawing::Color::Red;
				button158->Text = "";
			}






			if (data[159] == 1)
			{
				button159->Enabled = false;
				button159->BackColor = System::Drawing::Color::Red;
				button159->Text = "";
			}






			if (data[160] == 1)
			{
				button160->Enabled = false;
				button160->BackColor = System::Drawing::Color::Red;
				button160->Text = "";
			}






			if (data[161] == 1)
			{
				button161->Enabled = false;
				button161->BackColor = System::Drawing::Color::Red;
				button161->Text = "";
			}






			if (data[162] == 1)
			{
				button162->Enabled = false;
				button162->BackColor = System::Drawing::Color::Red;
				button162->Text = "";
			}






			if (data[163] == 1)
			{
				button163->Enabled = false;
				button163->BackColor = System::Drawing::Color::Red;
				button163->Text = "";
			}






			if (data[164] == 1)
			{
				button164->Enabled = false;
				button164->BackColor = System::Drawing::Color::Red;
				button164->Text = "";
			}






			if (data[165] == 1)
			{
				button165->Enabled = false;
				button165->BackColor = System::Drawing::Color::Red;
				button165->Text = "";
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
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Uncovertile(2);
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button16->Enabled == true)
							Uncovertile(16);
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
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (k == 0)
					{
						if (button1->Enabled == true)
							Uncovertile(1);
						if (button3->Enabled == true)
							Uncovertile(3);
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
					if (data[4] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Uncovertile(2);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
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
					if (data[5] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (k == 0)
					{
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
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
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[6] == 1)
						k++;
					if (k == 0)
					{
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button20->Enabled == true)
							Uncovertile(20);
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
					if (data[7] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (k == 0)
					{
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button7->Enabled == true)
							Uncovertile(7);
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
					if (data[6] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[8] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (k == 0)
					{
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button22->Enabled == true)
							Uncovertile(22);
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
					if (data[23] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[7] == 1)
						k++;
					if (data[9] == 1)
						k++;
					
					if (k == 0)
					{
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button22->Enabled == true)
							Uncovertile(22);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button7->Enabled == true)
							Uncovertile(7);
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
					/*label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;


					bomb = 1;
				}
				else
				{
					button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[22] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[8] == 1)
						k++;
					if (data[10] == 1)
						k++;
					
					if (k == 0)
					{
						if (button22->Enabled == true)
							Uncovertile(22);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button8->Enabled == true)
							Uncovertile(8);
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
					/*label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

					bomb = 1;
					checkBox1->Visible = false;

				}
				else
				{
					button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[23] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[9] == 1)
						k++;
					if (data[11] == 1)
						k++;
					
					if (k == 0)
					{
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button9->Enabled == true)
							Uncovertile(9);
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
					/*label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;


					bomb = 1;
				}
				else
				{
					button11->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[24] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[10] == 1)
						k++;
					if (data[12] == 1)
						k++;
					
					if (k == 0)
					{
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button12->Enabled == true)
							Uncovertile(12);
						
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
					if (data[25] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[11] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (k == 0)
					{
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button11->Enabled == true)
							Uncovertile(11);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button27->Enabled == true)
							Uncovertile(27);
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
					if (data[12] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (k == 0)
					{
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button26->Enabled == true)
							Uncovertile(26);
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

					/*label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;


					bomb = 1;
				}
				else
				{
					button14->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[27] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[13] == 1)
						k++;
					
					if (k == 0)
					{
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button28->Enabled == true)
							Uncovertile(28);
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
					/*label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;


					bomb = 1;
				}
				else
				{
					button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[3] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[1] == 1)
						k++;
					if (data[16] == 1)
						k++;
					
					if (k == 0)
					{
						if (button1->Enabled == true)
							Uncovertile(1);
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button16->Enabled == true)
							Uncovertile(16);
						
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
					if (data[1] == 1)
						k++;
					if (data[2] == 1)
						k++;
					if (data[3] == 1)
						k++;
					if (data[15] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[31] == 1)
						k++;
					if (k == 0)
					{
						if (button1->Enabled == true)
							Uncovertile(1);
						if (button2->Enabled == true)
							Uncovertile(2);
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button31->Enabled == true)
							Uncovertile(31);
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
					if (data[2] == 1)
						k++;
					if (data[3] == 1)
						k++;
					if (data[4] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[31] == 1)
						k++;
					if (data[32] == 1)
						k++;
					if (k == 0)
					{
						if (button2->Enabled == true)
							Uncovertile(2);
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button31->Enabled == true)
							Uncovertile(31);
						if (button32->Enabled == true)
							Uncovertile(32);
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
					if (data[3] == 1)
						k++;
					if (data[4] == 1)
						k++;
					if (data[6] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[32] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (k == 0)
					{
						if (button3->Enabled == true)
							Uncovertile(3);
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button33->Enabled == true)
							Uncovertile(33);
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
					if (data[4] == 1)
						k++;
					if (data[5] == 1)
						k++;
					if (data[6] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[32] == 1)
						k++;
					if (data[33] == 1)
						
							k++;
					if (data[34] == 1)
						k++;
					if (k == 0)
					{
						if (button4->Enabled == true)
							Uncovertile(4);
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button33->Enabled == true)
							Uncovertile(33);
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
					if (data[5] == 1)
						k++;
					if (data[6] == 1)
						k++;
					if (data[7] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (k == 0)
					{
						if (button5->Enabled == true)
							Uncovertile(5);
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button7->Enabled == true)
							Uncovertile(7);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button21->Enabled == true)
							Uncovertile(21);
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
					if (data[6] == 1)
						k++;
					if (data[7] == 1)
						k++;
					if (data[8] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (k == 0)
					{
						if (button6->Enabled == true)
							Uncovertile(6);
						if (button7->Enabled == true)
							Uncovertile(7);
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button22->Enabled == true)
							Uncovertile(22);
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
					if (data[7] == 1)
						k++;
					if (data[8] == 1)
						k++;
					if (data[9] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (k == 0)
					{
						if (button7->Enabled == true)
							Uncovertile(7);
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button9->Enabled == true)
							Uncovertile(8);
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button37->Enabled == true)
							Uncovertile(37);
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
					if (data[8] == 1)
						k++;
					if (data[9] == 1)
						k++;
					if (data[10] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (k == 0)
					{
						if (button8->Enabled == true)
							Uncovertile(8);
						if (button9->Enabled == true)
							Uncovertile(9);
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button22->Enabled == true)
							Uncovertile(22);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button38->Enabled == true)
							Uncovertile(38);
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
					if (data[9] == 1)
						k++;
					if (data[10] == 1)
						k++;
					if (data[11] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (k == 0)
					{
						if (button9->Enabled == true)
							Uncovertile(9);
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button11->Enabled == true)
							Uncovertile(11);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button39->Enabled == true)
							Uncovertile(39);
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
					if (data[10] == 1)
						k++;
					if (data[11] == 1)
						k++;
					if (data[12] == 1)
						k++;
					if (data[24] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (k == 0)
					{
						if (button10->Enabled == true)
							Uncovertile(10);
						if (button11->Enabled == true)
							Uncovertile(11);
						if (button12->Enabled == true)
							Uncovertile(12);
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button40->Enabled == true)
							Uncovertile(40);
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
					if (data[11] == 1)
						k++;
					if (data[12] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[39] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[41] == 1)
						k++;
					if (k == 0)
					{
						if (button11->Enabled == true)
							Uncovertile(11);
						if (button12->Enabled == true)
							Uncovertile(12);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button39->Enabled == true)
							Uncovertile(39);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button41->Enabled == true)
							Uncovertile(41);
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
					if (data[12] == 1)
						k++;
					if (data[13] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[28] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[41] == 1)
						k++;
					if (data[42] == 1)
						k++;
					if (k == 0)
					{
						if (button12->Enabled == true)
							Uncovertile(12);
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button28->Enabled == true)
							Uncovertile(28);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button41->Enabled == true)
							Uncovertile(41);
						if (button42->Enabled == true)
							Uncovertile(42);
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
					if (data[13] == 1)
						k++;
					if (data[14] == 1)
						k++;
					if (data[27] == 1)
						k++;
					if (data[41] == 1)
						k++;
					if (data[42] == 1)
						k++;
				
					if (k == 0)
					{
						if (button13->Enabled == true)
							Uncovertile(13);
						if (button14->Enabled == true)
							Uncovertile(14);
						if (button41->Enabled == true)
							Uncovertile(41);
						if (button27->Enabled == true)
							Uncovertile(27);
						if (button42->Enabled == true)
							Uncovertile(42);
						
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
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[30] == 1)
						k++;
				
					if (k == 0)
					{
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button30->Enabled == true)
							Uncovertile(30);
						;
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
					if (data[15] == 1)
						k++;
					if (data[16] == 1)
						k++;
					if (data[29] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[31] == 1)
						k++;
					if (data[43] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (k == 0)
					{
						if (button15->Enabled == true)
							Uncovertile(15);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button29->Enabled == true)
							Uncovertile(29);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button31->Enabled == true)
							Uncovertile(31);
						if (button43->Enabled == true)
							Uncovertile(43);
						if (button44->Enabled == true)
							Uncovertile(44);
						if (button45->Enabled == true)
							Uncovertile(45);
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
					if (data[16] == 1)
						k++;
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[30] == 1)
						k++;
					if (data[44] == 1)
						k++;
					if (data[32] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[46] == 1)
						k++;
					
					if (k == 0)
					{
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button16->Enabled == true)
							Uncovertile(16);
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button30->Enabled == true)
							Uncovertile(30);
						if (button44->Enabled == true)
							Uncovertile(44);
						
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
					if (data[17] == 1)
						k++;
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[31] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[45] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (k == 0)
					{
						if (button17->Enabled == true)
							Uncovertile(17);
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button31->Enabled == true)
							Uncovertile(31);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button45->Enabled == true)
							Uncovertile(45);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button47->Enabled == true)
							Uncovertile(47);
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
					if (data[18] == 1)
						k++;
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[32] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[46] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (k == 0)
					{
						if (button18->Enabled == true)
							Uncovertile(18);
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button32->Enabled == true)
							Uncovertile(32);
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button46->Enabled == true)
							Uncovertile(46);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button48->Enabled == true)
							Uncovertile(48);
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
					if (data[19] == 1)
						k++;
					if (data[20] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[33] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[47] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (k == 0)
					{
						if (button19->Enabled == true)
							Uncovertile(19);
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button33->Enabled == true)
							Uncovertile(33);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button47->Enabled == true)
							Uncovertile(47);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button49->Enabled == true)
							Uncovertile(49);
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
					if (data[20] == 1)
						k++;
					if (data[21] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (data[34] == 1)
						k++;
					if (data[36] == 1)
						k++;
					if (data[48] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (k == 0)
					{
						if (button20->Enabled == true)
							Uncovertile(20);
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button22->Enabled == true)
							Uncovertile(22);
						if (button34->Enabled == true)
							Uncovertile(34);
						if (button36->Enabled == true)
							Uncovertile(36);
						if (button48->Enabled == true)
							Uncovertile(48);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button50->Enabled == true)
							Uncovertile(50);
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
					if (data[21] == 1)
						k++;
					if (data[22] == 1)
						k++;
					if (data[23] == 1)
						k++;
					if (data[35] == 1)
						k++;
					if (data[37] == 1)
						k++;
					if (data[49] == 1)
						k++;
					if (data[50] == 1)
						k++;
					if (data[51] == 1)
						k++;

					if (k == 0)
					{
						if (button21->Enabled == true)
							Uncovertile(21);
						if (button22->Enabled == true)
							Uncovertile(22);
						if (button23->Enabled == true)
							Uncovertile(23);
						if (button35->Enabled == true)
							Uncovertile(35);
						if (button37->Enabled == true)
							Uncovertile(37);
						if (button49->Enabled == true)
							Uncovertile(49);
						if (button50->Enabled == true)
							Uncovertile(50);
						if (button51->Enabled == true)
							Uncovertile(51);

					}
				}
				if (k != 0)
				{
					button36->Text = System::Convert::ToString(k);
				}
				if (x == 37)
				{
					button37->Enabled = false;
					button37->Text = "";
					if (data[37] == 1)
					{
						button37->BackColor = System::Drawing::SystemColors::GrayText;
						/*label2->Text = "You lose!";
						label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button37->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[22] == 1)
							k++;
						if (data[23] == 1)
							k++;
						if (data[24] == 1)
							k++;
						if (data[36] == 1)
							k++;
						if (data[38] == 1)
							k++;
						if (data[50] == 1)
							k++;
						if (data[51] == 1)
							k++;
						if (data[52] == 1)
							k++;

						if (k == 0)
						{
							if (button22->Enabled == true)
								Uncovertile(22);
							if (button23->Enabled == true)
								Uncovertile(23);
							if (button24->Enabled == true)
								Uncovertile(24);
							if (button36->Enabled == true)
								Uncovertile(36);
							if (button38->Enabled == true)
								Uncovertile(38);
							if (button51->Enabled == true)
								Uncovertile(51);
							if (button50->Enabled == true)
								Uncovertile(50);
							if (button52->Enabled == true)
								Uncovertile(52);

						}
					}
					if (k != 0)
					{
						button37->Text = System::Convert::ToString(k);
					}
					if (x == 38)
					{
						button38->Enabled = false;
						button38->Text = "";
						if (data[38] == 1)
						{
							button38->BackColor = System::Drawing::SystemColors::GrayText;
							/*label2->Text = "You lose!";
							label2->ForeColor = System::Drawing::Color::Red;*/
							MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
							checkBox1->Visible = false;

							bomb = 1;
						}
						else
						{
							button38->BackColor = System::Drawing::SystemColors::ControlLightLight;
							if (data[24] == 1)
								k++;
							if (data[25] == 1)
								k++;
							if (data[23] == 1)
								k++;
							if (data[39] == 1)
								k++;
							if (data[37] == 1)
								k++;
							if (data[52] == 1)
								k++;
							if (data[53] == 1)
								k++;
							if (data[51] == 1)
								k++;

							if (k == 0)
							{
								if (button24->Enabled == true)
									Uncovertile(24);
								if (button25->Enabled == true)
									Uncovertile(25);
								if (button23->Enabled == true)
									Uncovertile(23);
								if (button39->Enabled == true)
									Uncovertile(39);
								if (button37->Enabled == true)
									Uncovertile(37);
								if (button52->Enabled == true)
									Uncovertile(52);
								if (button53->Enabled == true)
									Uncovertile(53);
								if (button51->Enabled == true)
									Uncovertile(51);

							}
						}
						if (k != 0)
						{
							button38->Text = System::Convert::ToString(k);
						}
					}
				}
			}

			if (x == 39)
			{
				button39->Enabled = false;
				button39->Text = "";
				if (data[39] == 1)
				{
					button39->BackColor = System::Drawing::SystemColors::GrayText;
					/*label2->Text = "You lose!";
					label2->ForeColor = System::Drawing::Color::Red;*/
					MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
					checkBox1->Visible = false;

					bomb = 1;
				}
				else
				{
					button39->BackColor = System::Drawing::SystemColors::ControlLightLight;
					if (data[24] == 1)
						k++;
					if (data[25] == 1)
						k++;
					if (data[26] == 1)
						k++;
					if (data[38] == 1)
						k++;
					if (data[40] == 1)
						k++;
					if (data[52] == 1)
						k++;
					if (data[53] == 1)
						k++;
					if (data[54] == 1)
						k++;

					if (k == 0)
					{
						if (button24->Enabled == true)
							Uncovertile(24);
						if (button25->Enabled == true)
							Uncovertile(25);
						if (button26->Enabled == true)
							Uncovertile(26);
						if (button38->Enabled == true)
							Uncovertile(38);
						if (button40->Enabled == true)
							Uncovertile(40);
						if (button52->Enabled == true)
							Uncovertile(52);
						if (button53->Enabled == true)
							Uncovertile(53);
						if (button54->Enabled == true)
							Uncovertile(54);

					}
				}
				if (k != 0)
				{
					button39->Text = System::Convert::ToString(k);
				}
				if (x == 40)
				{
					button40->Enabled = false;
					button40->Text = "";
					if (data[40] == 1)
					{
						button40->BackColor = System::Drawing::SystemColors::GrayText;
						/*label2->Text = "You lose!";
						label2->ForeColor = System::Drawing::Color::Red;*/
						MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
						checkBox1->Visible = false;

						bomb = 1;
					}
					else
					{
						button40->BackColor = System::Drawing::SystemColors::ControlLightLight;
						if (data[25] == 1)
							k++;
						if (data[26] == 1)
							k++;
						if (data[27] == 1)
							k++;
						if (data[39] == 1)
							k++;
						if (data[41] == 1)
							k++;
						if (data[53] == 1)
							k++;
						if (data[54] == 1)
							k++;
						if (data[55] == 1)
							k++;

						if (k == 0)
						{
							if (button25->Enabled == true)
								Uncovertile(25);
							if (button26->Enabled == true)
								Uncovertile(26);
							if (button27->Enabled == true)
								Uncovertile(27);
							if (button39->Enabled == true)
								Uncovertile(39);
							if (button41->Enabled == true)
								Uncovertile(41);
							if (button53->Enabled == true)
								Uncovertile(53);
							if (button54->Enabled == true)
								Uncovertile(54);
							if (button55->Enabled == true)
								Uncovertile(55);

						}
					}
					if (k != 0)
					{
						button40->Text = System::Convert::ToString(k);
					}
					if (x == 41)
					{
						button41->Enabled = false;
						button41->Text = "";
						if (data[41] == 1)
						{
							button41->BackColor = System::Drawing::SystemColors::GrayText;
							/*label2->Text = "You lose!";
							label2->ForeColor = System::Drawing::Color::Red;*/
							MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
							checkBox1->Visible = false;

							bomb = 1;
						}
						else
						{
							button41->BackColor = System::Drawing::SystemColors::ControlLightLight;
							if (data[26] == 1)
								k++;
							if (data[27] == 1)
								k++;
							if (data[28] == 1)
								k++;
							if (data[40] == 1)
								k++;
							if (data[42] == 1)
								k++;
							if (data[54] == 1)
								k++;
							if (data[55] == 1)
								k++;
							if (data[56] == 1)
								k++;

							if (k == 0)
							{
								if (button26->Enabled == true)
									Uncovertile(26);
								if (button27->Enabled == true)
									Uncovertile(27);
								if (button28->Enabled == true)
									Uncovertile(28);
								if (button40->Enabled == true)
									Uncovertile(40);
								if (button42->Enabled == true)
									Uncovertile(42);
								if (button54->Enabled == true)
									Uncovertile(54);
								if (button55->Enabled == true)
									Uncovertile(55);
								if (button56->Enabled == true)
									Uncovertile(56);

							}
						}
					

						if (k != 0)
						{
							button41->Text = System::Convert::ToString(k);
						}
						if (x == 42)
						{
							button42->Enabled = false;
							button42->Text = "";
							if (data[42] == 1)
							{
								button42->BackColor = System::Drawing::SystemColors::GrayText;
								/*label2->Text = "You lose!";
								label2->ForeColor = System::Drawing::Color::Red;*/
								MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
								checkBox1->Visible = false;

								bomb = 1;
							}
							else
							{
								button41->BackColor = System::Drawing::SystemColors::ControlLightLight;
								if (data[41] == 1)
									k++;
								if (data[27] == 1)
									k++;
								if (data[28] == 1)
									k++;
								if (data[55] == 1)
									k++;
								if (data[56] == 1)
									k++;


								if (k == 0)
								{
									if (button41->Enabled == true)
										Uncovertile(41);
									if (button27->Enabled == true)
										Uncovertile(27);
									if (button28->Enabled == true)
										Uncovertile(28);
									if (button55->Enabled == true)
										Uncovertile(55);
									if (button56->Enabled == true)
										Uncovertile(56);


								}
							}
							if (k != 0)
							{
								button42->Text = System::Convert::ToString(k);
							}
						}
						
					}
				}
			}

			

	if (x ==43 )
	{
		button43->Enabled = false;
		button43->Text = "";
		if (data[43] == 1)
		{
			button43->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button43->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[29] == 1)
				k++;
			if (data[30] == 1)
				k++;
			if (data[44] == 1)
				k++;
			if (data[57] == 1)
				k++;
			if (data[58] == 1)
				k++;
			if (k == 0)
			{
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button30->Enabled == true)
					Uncovertile(30);
				if (button44->Enabled == true)
					Uncovertile(44);
				if (button57->Enabled == true)
					Uncovertile(57);
				if (button58->Enabled == true)
					Uncovertile(58);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button44->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[29] == 1)
				k++;
			if (data[30] == 1)
				k++;
			if (data[31] == 1)
				k++;
			if (data[43] == 1)
				k++;
			if (data[45] == 1)
				k++;
			if (data[57] == 1)
				k++;
			if (data[58] == 1)
				k++;
			if (data[59] == 1)
				k++;
			if (k == 0)
			{
				if (button29->Enabled == true)
					Uncovertile(29);
				if (button30->Enabled == true)
					Uncovertile(30);
				if (button43->Enabled == true)
					Uncovertile(43);
				if (button45->Enabled == true)
					Uncovertile(45);
				if (button31->Enabled == true)
					Uncovertile(31);
				if (button57->Enabled == true)
					Uncovertile(57);
				if (button58->Enabled == true)
					Uncovertile(58);
				if (button59->Enabled == true)
					Uncovertile(59);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button45->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[30] == 1)
				k++;
			if (data[31] == 1)
				k++;
			if (data[32] == 1)
				k++;
			if (data[44] == 1)
				k++;
			if (data[46] == 1)
				k++;
			if (data[58] == 1)
				k++;
			if (data[59] == 1)
				k++;
			if (data[60] == 1)
				k++;
			if (k == 0)
			{
				if (button30->Enabled == true)
					Uncovertile(30);
				if (button31->Enabled == true)
					Uncovertile(31);
				if (button32->Enabled == true)
					Uncovertile(32);
				if (button44->Enabled == true)
					Uncovertile(44);
				if (button46->Enabled == true)
					Uncovertile(46);
				if (button58->Enabled == true)
					Uncovertile(58);
				if (button59->Enabled == true)
					Uncovertile(59);
				if (button60->Enabled == true)
					Uncovertile(60);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button46->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[31] == 1)
				k++;
			if (data[32] == 1)
				k++;
			if (data[33] == 1)
				k++;
			if (data[45] == 1)
				k++;
			if (data[47] == 1)
				k++;
			if (data[59] == 1)
				k++;
			if (data[60] == 1)
				k++;
			if (data[61] == 1)
				k++;
			if (k == 0)
			{
				if (button31->Enabled == true)
					Uncovertile(31);
				if (button32->Enabled == true)
					Uncovertile(32);
				if (button33->Enabled == true)
					Uncovertile(33);
				if (button45->Enabled == true)
					Uncovertile(45);
				if (button47->Enabled == true)
					Uncovertile(47);
				if (button59->Enabled == true)
					Uncovertile(59);
				if (button60->Enabled == true)
					Uncovertile(60);
				if (button61->Enabled == true)
					Uncovertile(61);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

		}
		else
		{
			button47->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[32] == 1)
				k++;
			if (data[33] == 1)
				k++;
			if (data[34] == 1)
				k++;
			if (data[46] == 1)
				k++;
			if (data[48] == 1)
				k++;
			if (data[60] == 1)
				k++;
			if (data[61] == 1)
				k++;
			if (data[62] == 1)
				k++;
			if (k == 0)
			{
				if (button34->Enabled == true)
					Uncovertile(34);
				if (button32->Enabled == true)
					Uncovertile(32);
				if (button33->Enabled == true)
					Uncovertile(33);
				if (button46->Enabled == true)
					Uncovertile(46);
				if (button60->Enabled == true)
					Uncovertile(60);
				if (button48->Enabled == true)
					Uncovertile(48);
				if (button61->Enabled == true)
					Uncovertile(61);
				if (button62->Enabled == true)
					Uncovertile(62);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button48->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[33] == 1)
				k++;
			if (data[34] == 1)
				k++;
			if (data[35] == 1)
				k++;
			if (data[47] == 1)
				k++;
			if (data[49] == 1)
				k++;
			if (data[61] == 1)
				k++;
			if (data[62] == 1)
				k++;
			if (data[63] == 1)
				k++;
			
			if (k == 0)
			{
				if (button33->Enabled == true)
					Uncovertile(33);
				if (button34->Enabled == true)
					Uncovertile(34);
				if (button35->Enabled == true)
					Uncovertile(35);
				if (button47->Enabled == true)
					Uncovertile(47);
				if (button49->Enabled == true)
					Uncovertile(49);
				if (button61->Enabled == true)
					Uncovertile(61);
				if (button62->Enabled == true)
					Uncovertile(62);
				if (button63->Enabled == true)
					Uncovertile(63);
				
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[34] == 1)
				k++;
			if (data[35] == 1)
				k++;
			if (data[36] == 1)
				k++;
			if (data[48] == 1)
				k++;
			if (data[50] == 1)
				k++;
			if (data[62] == 1)
				k++;
			if (data[63] == 1)
				k++;
			if (data[64] == 1)
				k++;
			if (k == 0)
			{
				if (button34->Enabled == true)
					Uncovertile(34);
				if (button35->Enabled == true)
					Uncovertile(35);
				if (button36->Enabled == true)
					Uncovertile(36);
				if (button48->Enabled == true)
					Uncovertile(48);
				if (button50->Enabled == true)
					Uncovertile(50);
				if (button62->Enabled == true)
					Uncovertile(62);
				if (button63->Enabled == true)
					Uncovertile(63);
				if (button64->Enabled == true)
					Uncovertile(64);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button50->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[35] == 1)
				k++;
			if (data[36] == 1)
				k++;
			if (data[37] == 1)
				k++;
			if (data[49] == 1)
				k++;
			if (data[51] == 1)
				k++;
			if (data[63] == 1)
				k++;
			if (data[64] == 1)
				k++;
			if (data[65] == 1)
				k++;
			if (k == 0)
			{
				if (button35->Enabled == true)
					Uncovertile(35);
				if (button36->Enabled == true)
					Uncovertile(36);
				if (button37->Enabled == true)
					Uncovertile(37);
				if (button49->Enabled == true)
					Uncovertile(49);
				if (button51->Enabled == true)
					Uncovertile(51);
				if (button63->Enabled == true)
					Uncovertile(63);
				if (button64->Enabled == true)
					Uncovertile(64);
				if (button65->Enabled == true)
					Uncovertile(65);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button51->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[36] == 1)
				k++;
			if (data[37] == 1)
				k++;
			if (data[38] == 1)
				k++;
			if (data[50] == 1)
				k++;
			if (data[52] == 1)
				k++;
			if (data[64] == 1)
				k++;
			if (data[65] == 1)
				k++;
			if (data[66] == 1)
				k++;
			if (k == 0)
			{
				if (button36->Enabled == true)
					Uncovertile(36);
				if (button37->Enabled == true)
					Uncovertile(37);
				if (button38->Enabled == true)
					Uncovertile(38);
				if (button50->Enabled == true)
					Uncovertile(50);
				if (button52->Enabled == true)
					Uncovertile(52);
				if (button64->Enabled == true)
					Uncovertile(64);
				if (button65->Enabled == true)
					Uncovertile(65);
				if (button66->Enabled == true)
					Uncovertile(66);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button52->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[37] == 1)
				k++;
			if (data[38] == 1)
				k++;
			if (data[39] == 1)
				k++;
			if (data[51] == 1)
				k++;
			if (data[53] == 1)
				k++;
			if (data[65] == 1)
				k++;
			if (data[66] == 1)
				k++;
			if (data[67] == 1)
				k++;
			if (k == 0)
			{
				if (button37->Enabled == true)
					Uncovertile(37);
				if (button38->Enabled == true)
					Uncovertile(38);
				if (button39->Enabled == true)
					Uncovertile(39);
				if (button51->Enabled == true)
					Uncovertile(51);
				if (button53->Enabled == true)
					Uncovertile(53);
				if (button65->Enabled == true)
					Uncovertile(65);
				if (button66->Enabled == true)
					Uncovertile(66);
				if (button67->Enabled == true)
					Uncovertile(67);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button53->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[38] == 1)
				k++;
			if (data[39] == 1)
				k++;
			if (data[40] == 1)
				k++;
			if (data[52] == 1)
				k++;
			if (data[54] == 1)
				k++;
			if (data[66] == 1)
				k++;
			if (data[67] == 1)
				k++;
			if (data[68] == 1)
				k++;
			if (k == 0)
			{
				if (button40->Enabled == true)
					Uncovertile(40);
				if (button38->Enabled == true)
					Uncovertile(38);
				if (button39->Enabled == true)
					Uncovertile(39);
				if (button52->Enabled == true)
					Uncovertile(52);
				if (button54->Enabled == true)
					Uncovertile(54);
				if (button66->Enabled == true)
					Uncovertile(66);
				if (button67->Enabled == true)
					Uncovertile(67);
				if (button68->Enabled == true)
					Uncovertile(68);
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
			button53->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button54->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[39] == 1)
				k++;
			if (data[40] == 1)
				k++;
			if (data[41] == 1)
				k++;
			if (data[53] == 1)
				k++;
			if (data[55] == 1)
				k++;
			if (data[67] == 1)
				k++;
			if (data[68] == 1)
				k++;
			if (data[69] == 1)
				k++;
			if (k == 0)
			{
				if (button39->Enabled == true)
					Uncovertile(39);
				if (button40->Enabled == true)
					Uncovertile(40);
				if (button41->Enabled == true)
					Uncovertile(41);
				if (button53->Enabled == true)
					Uncovertile(53);
				if (button55->Enabled == true)
					Uncovertile(55);
				if (button67->Enabled == true)
					Uncovertile(67);
				if (button68->Enabled == true)
					Uncovertile(68);
				if (button69->Enabled == true)
					Uncovertile(69);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button55->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[40] == 1)
				k++;
			if (data[41] == 1)
				k++;
			if (data[42] == 1)
				k++;
			if (data[54] == 1)
				k++;
			if (data[56] == 1)
				k++;
			if (data[68] == 1)
				k++;
			if (data[69] == 1)
				k++;
			if (data[70] == 1)
				k++;
			if (k == 0)
			{
				if (button40->Enabled == true)
					Uncovertile(40);
				if (button41->Enabled == true)
					Uncovertile(41);
				if (button42->Enabled == true)
					Uncovertile(42);
				if (button54->Enabled == true)
					Uncovertile(54);
				if (button56->Enabled == true)
					Uncovertile(56);
				if (button68->Enabled == true)
					Uncovertile(68);
				if (button69->Enabled == true)
					Uncovertile(69);
				if (button70->Enabled == true)
					Uncovertile(70);
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

			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button56->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[41] == 1)
				k++;
			if (data[42] == 1)
				k++;
			if (data[55] == 1)
				k++;
			if (data[69] == 1)
				k++;
			if (data[70] == 1)
				k++;
			
			if (k == 0)
			{
				if (button41->Enabled == true)
					Uncovertile(41);
				if (button42->Enabled == true)
					Uncovertile(42);
				if (button55->Enabled == true)
					Uncovertile(55);
				if (button69->Enabled == true)
					Uncovertile(69);
				if (button70->Enabled == true)
					Uncovertile(70);
				
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button57->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[44] == 1)
				k++;
			if (data[43] == 1)
				k++;
			if (data[58] == 1)
				k++;
			if (data[71] == 1)
				k++;
			if (data[72] == 1)
				k++;
			
			if (k == 0)
			{
				if (button44->Enabled == true)
					Uncovertile(44);
				if (button43->Enabled == true)
					Uncovertile(43);
				if (button58->Enabled == true)
					Uncovertile(58);
				if (button71->Enabled == true)
					Uncovertile(71);
				if (button72->Enabled == true)
					Uncovertile(72);
				
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button58->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[57] == 1)
				k++;
			if (data[59] == 1)
				k++;
			if (data[42] == 1)
				k++;
			if (data[43] == 1)
				k++;
			if (data[44] == 1)
				k++;
			if (data[71] == 1)
				k++;
			if (data[72] == 1)
				k++;
			if (data[73] == 1)
				k++;
			if (k == 0)
			{
				if (button57->Enabled == true)
					Uncovertile(57);
				if (button59->Enabled == true)
					Uncovertile(59);
				if (button42->Enabled == true)
					Uncovertile(42);
				if (button43->Enabled == true)
					Uncovertile(43);
				if (button44->Enabled == true)
					Uncovertile(44);
				if (button71->Enabled == true)
					Uncovertile(71);
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button73->Enabled == true)
					Uncovertile(73);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button59->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[58] == 1)
				k++;
			if (data[60] == 1)
				k++;
			if (data[43] == 1)
				k++;
			if (data[44] == 1)
				k++;
			if (data[45] == 1)
				k++;
			if (data[72] == 1)
				k++;
			if (data[73] == 1)
				k++;
			if (data[74] == 1)
				k++;
			if (k == 0)
			{
				if (button58->Enabled == true)
					Uncovertile(58);
				if (button60->Enabled == true)
					Uncovertile(60);
				if (button43->Enabled == true)
					Uncovertile(43);
				if (button44->Enabled == true)
					Uncovertile(44);
				if (button45->Enabled == true)
					Uncovertile(45);
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button73->Enabled == true)
					Uncovertile(73);
				if (button74->Enabled == true)
					Uncovertile(74);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button60->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[59] == 1)
				k++;
			if (data[61] == 1)
				k++;
			if (data[44] == 1)
				k++;
			if (data[45] == 1)
				k++;
			if (data[46] == 1)
				k++;
			if (data[72] == 1)
				k++;
			if (data[73] == 1)
				k++;
			if (data[74] == 1)
				k++;
			if (k == 0)
			{
				if (button59->Enabled == true)
					Uncovertile(59);
				if (button61->Enabled == true)
					Uncovertile(61);
				if (button44->Enabled == true)
					Uncovertile(44);
				if (button45->Enabled == true)
					Uncovertile(45);
				if (button46->Enabled == true)
					Uncovertile(46);
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button73->Enabled == true)
					Uncovertile(73);
				if (button74->Enabled == true)
					Uncovertile(74);
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
			/*	label2->Text = "You lose!";
				label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button61->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[60] == 1)
				k++;
			if (data[62] == 1)
				k++;
			if (data[45] == 1)
				k++;
			if (data[46] == 1)
				k++;
			if (data[47] == 1)
				k++;
			if (data[74] == 1)
				k++;
			if (data[75] == 1)
				k++;
			if (data[76] == 1)
				k++;
			if (k == 0)
			{
				if (button60->Enabled == true)
					Uncovertile(60);
				if (button62->Enabled == true)
					Uncovertile(62);
				if (button45->Enabled == true)
					Uncovertile(45);
				if (button46->Enabled == true)
					Uncovertile(46);
				if (button47->Enabled == true)
					Uncovertile(47);
				if (button74->Enabled == true)
					Uncovertile(74);
				if (button75->Enabled == true)
					Uncovertile(75);
				if (button76->Enabled == true)
					Uncovertile(76);

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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
		}
		else
		{
			button62->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[61] == 1)
				k++;
			if (data[63] == 1)
				k++;
			if (data[46] == 1)
				k++;
			if (data[47] == 1)
				k++;
			if (data[48] == 1)
				k++;
			if (data[75] == 1)
				k++;
			if (data[76] == 1)
				k++;
			if (data[79] == 1)
				k++;
			if (k == 0)
			{
				if (button61->Enabled == true)
					Uncovertile(61);
				if (button63->Enabled == true)
					Uncovertile(63);
				if (button46->Enabled == true)
					Uncovertile(46);
				if (button47->Enabled == true)
					Uncovertile(47);
				if (button48->Enabled == true)
					Uncovertile(48);
				if (button75->Enabled == true)
					Uncovertile(75);
				if (button76->Enabled == true)
					Uncovertile(76);
				if (button79->Enabled == true)
					Uncovertile(79);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button63->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[62] == 1)
				k++;
			if (data[64] == 1)
				k++;
			if (data[47] == 1)
				k++;
			if (data[48] == 1)
				k++;
			if (data[49] == 1)
				k++;
			if (data[76] == 1)
				k++;
			if (data[77] == 1)
				k++;
			if (data[78] == 1)
				k++;
			if (k == 0)
			{
				if (button62->Enabled == true)
					Uncovertile(62);
				if (button64->Enabled == true)
					Uncovertile(64);
				if (button47->Enabled == true)
					Uncovertile(47);
				if (button48->Enabled == true)
					Uncovertile(48);
				if (button49->Enabled == true)
					Uncovertile(49);
				if (button76->Enabled == true)
					Uncovertile(76);
				if (button77->Enabled == true)
					Uncovertile(77);
				if (button78->Enabled == true)
					Uncovertile(78);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button64->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[63] == 1)
				k++;
			if (data[65] == 1)
				k++;
			if (data[48] == 1)
				k++;
			if (data[49] == 1)
				k++;
			if (data[50] == 1)
				k++;
			if (data[77] == 1)
				k++;
			if (data[78] == 1)
				k++;
			if (data[79] == 1)
				k++;
			if (k == 0)
			{
				if (button63->Enabled == true)
					Uncovertile(63);
				if (button65->Enabled == true)
					Uncovertile(65);
				if (button48->Enabled == true)
					Uncovertile(48);
				if (button49->Enabled == true)
					Uncovertile(49);
				if (button50->Enabled == true)
					Uncovertile(50);
				if (button77->Enabled == true)
					Uncovertile(77);
				if (button78->Enabled == true)
					Uncovertile(78);
				if (button79->Enabled == true)
					Uncovertile(79);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button65->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[64] == 1)
				k++;
			if (data[66] == 1)
				k++;
			if (data[49] == 1)
				k++;
			if (data[50] == 1)
				k++;
			if (data[51] == 1)
				k++;
			if (data[78] == 1)
				k++;
			if (data[79] == 1)
				k++;
			if (data[80] == 1)
				k++;
			if (k == 0)
			{
				if (button64->Enabled == true)
					Uncovertile(64);
				if (button66->Enabled == true)
					Uncovertile(66);
				if (button49->Enabled == true)
					Uncovertile(49);
				if (button50->Enabled == true)
					Uncovertile(50);
				if (button51->Enabled == true)
					Uncovertile(51);
				if (button78->Enabled == true)
					Uncovertile(78);
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button80->Enabled == true)
					Uncovertile(80);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button66->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[65] == 1)
				k++;
			if (data[67] == 1)
				k++;
			if (data[50] == 1)
				k++;
			if (data[51] == 1)
				k++;
			if (data[52] == 1)
				k++;
			if (data[79] == 1)
				k++;
			if (data[80] == 1)
				k++;
			if (data[81] == 1)
				k++;
			if (k == 0)
			{
				if (button65->Enabled == true)
					Uncovertile(65);
				if (button67->Enabled == true)
					Uncovertile(67);
				if (button50->Enabled == true)
					Uncovertile(50);
				if (button51->Enabled == true)
					Uncovertile(51);
				if (button52->Enabled == true)
					Uncovertile(52);
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button80->Enabled == true)
					Uncovertile(80);
				if (button81->Enabled == true)
					Uncovertile(81);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button67->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[66] == 1)
				k++;
			if (data[68] == 1)
				k++;
			if (data[51] == 1)
				k++;
			if (data[52] == 1)
				k++;
			if (data[53] == 1)
				k++;
			if (data[80] == 1)
				k++;
			if (data[81] == 1)
				k++;
			if (data[82] == 1)
				k++;
			if (k == 0)
			{
				if (button66->Enabled == true)
					Uncovertile(66);
				if (button68->Enabled == true)
					Uncovertile(68);
				if (button51->Enabled == true)
					Uncovertile(51);
				if (button52->Enabled == true)
					Uncovertile(52);
				if (button53->Enabled == true)
					Uncovertile(53);
				if (button80->Enabled == true)
					Uncovertile(80);
				if (button81->Enabled == true)
					Uncovertile(81);
				if (button82->Enabled == true)
					Uncovertile(82);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button68->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[67] == 1)
				k++;
			if (data[69] == 1)
				k++;
			if (data[52] == 1)
				k++;
			if (data[53] == 1)
				k++;
			if (data[54] == 1)
				k++;
			if (data[81] == 1)
				k++;
			if (data[82] == 1)
				k++;
			if (data[83] == 1)
				k++;
			if (k == 0)
			{
				if (button67->Enabled == true)
					Uncovertile(67);
				if (button69->Enabled == true)
					Uncovertile(69);
				if (button52->Enabled == true)
					Uncovertile(52);
				if (button53->Enabled == true)
					Uncovertile(53);
				if (button54->Enabled == true)
					Uncovertile(54);
				if (button81->Enabled == true)
					Uncovertile(81);
				if (button82->Enabled == true)
					Uncovertile(82);
				if (button83->Enabled == true)
					Uncovertile(83);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button69->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[68] == 1)
				k++;
			if (data[70] == 1)
				k++;
			if (data[53] == 1)
				k++;
			if (data[54] == 1)
				k++;
			if (data[55] == 1)
				k++;
			if (data[82] == 1)
				k++;
			if (data[83] == 1)
				k++;
			if (data[84] == 1)
				k++;
			if (k == 0)
			{
				if (button68->Enabled == true)
					Uncovertile(68);
				if (button70->Enabled == true)
					Uncovertile(70);
				if (button53->Enabled == true)
					Uncovertile(53);
				if (button54->Enabled == true)
					Uncovertile(54);
				if (button55->Enabled == true)
					Uncovertile(55);
				if (button82->Enabled == true)
					Uncovertile(82);
				if (button83->Enabled == true)
					Uncovertile(83);
				if (button84->Enabled == true)
					Uncovertile(84);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button70->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[69] == 1)
				k++;
			if (data[84] == 1)
				k++;
			if (data[83] == 1)
				k++;
			if (data[56] == 1)
				k++;
			if (data[55] == 1)
				k++;
			if (k == 0)
			{
				if (button69->Enabled == true)
					Uncovertile(69);
				if (button84->Enabled == true)
					Uncovertile(84);
				if (button83->Enabled == true)
					Uncovertile(83);
				if (button56->Enabled == true)
					Uncovertile(56);
				if (button55->Enabled == true)
					Uncovertile(55);
				
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button71->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[57] == 1)
				k++;
			if (data[58] == 1)
				k++;
			if (data[72] == 1)
				k++;
			if (data[85] == 1)
				k++;
			if (data[86] == 1)
				k++;
			
			if (k == 0)
			{
				if (button57->Enabled == true)
					Uncovertile(57);
				if (button58->Enabled == true)
					Uncovertile(58);
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button85->Enabled == true)
					Uncovertile(85);
				if (button86->Enabled == true)
					Uncovertile(86);
			
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
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button72->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[71] == 1)
				k++;
			if (data[73] == 1)
				k++;
			if (data[57] == 1)
				k++;
			if (data[58] == 1)
				k++;
			if (data[59] == 1)
				k++;
			if (data[85] == 1)
				k++;
			if (data[86] == 1)
				k++;
			if (data[87] == 1)
				k++;
			if (k == 0)
			{
				if (button71->Enabled == true)
					Uncovertile(71);
				if (button73->Enabled == true)
					Uncovertile(73);
				if (button57->Enabled == true)
					Uncovertile(57);
				if (button58->Enabled == true)
					Uncovertile(58);
				if (button59->Enabled == true)
					Uncovertile(59);
				if (button85->Enabled == true)
					Uncovertile(85);
				if (button86->Enabled == true)
					Uncovertile(86);
				if (button87->Enabled == true)
					Uncovertile(87);
			}
		}
		if (k != 0)
		{
			button72->Text = System::Convert::ToString(k);
		}

	}
	if (x == 73)
	{
		button73->Enabled = false;
		button73->Text = "";
		if (data[73] == 1)
		{
			button73->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button73->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[72] == 1)
				k++;
			if (data[74] == 1)
				k++;
			if (data[58] == 1)
				k++;
			if (data[59] == 1)
				k++;
			if (data[60] == 1)
				k++;
			if (data[86] == 1)
				k++;
			if (data[87] == 1)
				k++;
			if (data[88] == 1)
				k++;
			
			if (k == 0)
			{
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button74->Enabled == true)
					Uncovertile(74);
				if (button58->Enabled == true)
					Uncovertile(58);

				if (button59->Enabled == true)
					Uncovertile(59);
				if (button60->Enabled == true)
					Uncovertile(60);
				if (button86->Enabled == true)
					Uncovertile(86);

				if (button87->Enabled == true)
					Uncovertile(87);
				if (button88->Enabled == true)
					Uncovertile(88);
				
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
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button74->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[73] == 1)
				k++;
			if (data[75] == 1)
				k++;
			if (data[59] == 1)
				k++;
			if (data[60] == 1)
				k++;
			if (data[61] == 1)
				k++;
			if (data[87] == 1)
				k++;
			if (data[88] == 1)
				k++;
			if (data[89] == 1)
				k++;
			if (k == 0)
			{
				if (button73->Enabled == true)
					Uncovertile(73);
				if (button75->Enabled == true)
					Uncovertile(75);
				if (button59->Enabled == true)
					Uncovertile(59);
				if (button60->Enabled == true)
					Uncovertile(60);
				if (button61->Enabled == true)
					Uncovertile(61);
				if (button87->Enabled == true)
					Uncovertile(87);
				if (button88->Enabled == true)
					Uncovertile(88);
				if (button89->Enabled == true)
					Uncovertile(89);
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
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button75->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[74] == 1)
				k++;
			if (data[76] == 1)
				k++;
			if (data[60] == 1)
				k++;
			if (data[61] == 1)
				k++;
			if (data[62] == 1)
				k++;
			if (data[88] == 1)
				k++;
			if (data[89] == 1)
				k++;
			if (data[90] == 1)
				k++;
			if (k == 0)
			{
				if (button74->Enabled == true)
					Uncovertile(74);
				if (button76->Enabled == true)
					Uncovertile(76);
				if (button60->Enabled == true)
					Uncovertile(60);
				if (button61->Enabled == true)
					Uncovertile(61);
				if (button62->Enabled == true)
					Uncovertile(62);
				if (button88->Enabled == true)
					Uncovertile(88);
				if (button89->Enabled == true)
					Uncovertile(89);
				if (button90->Enabled == true)
					Uncovertile(90);
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
		button76->Text ="";
		if (data[76] == 1)
		{
			button76->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button76->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[75] == 1)
				k++;
			if (data[77] == 1)
				k++;
			if (data[61] == 1)
				k++;
			if (data[62] == 1)
				k++;
			if (data[63] == 1)
				k++;
			if (data[89] == 1)
				k++;
			if (data[90] == 1)
				k++;
			if (data[91] == 1)
				k++;
			if (k == 0)
			{
				if (button75->Enabled == true)
					Uncovertile(75);
				if (button77->Enabled == true)
					Uncovertile(77);
				if (button61->Enabled == true)
					Uncovertile(61);
				if (button62->Enabled == true)
					Uncovertile(62);
				if (button63->Enabled == true)
					Uncovertile(63);
				if (button89->Enabled == true)
					Uncovertile(89);
				if (button90->Enabled == true)
					Uncovertile(90);
				if (button91->Enabled == true)
					Uncovertile(91);
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
			/*	label2->Text = "You lose!";
				label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button77->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[79] == 1)
				k++;
			if (data[78] == 1)
				k++;
			if (data[62] == 1)
				k++;
			if (data[63] == 1)
				k++;
			if (data[64] == 1)
				k++;
			if (data[90] == 1)
				k++;
			if (data[91] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (k == 0)
			{
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button78->Enabled == true)
					Uncovertile(78);
				if (button62->Enabled == true)
					Uncovertile(62);
				if (button63->Enabled == true)
					Uncovertile(63);
				if (button64->Enabled == true)
					Uncovertile(64);
				if (button90->Enabled == true)
					Uncovertile(90);
				if (button91->Enabled == true)
					Uncovertile(91);
				if (button92->Enabled == true)
					Uncovertile(92);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button78->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[77] == 1)
				k++;
			if (data[79] == 1)
				k++;
			if (data[63] == 1)
				k++;
			if (data[64] == 1)
				k++;
			if (data[65] == 1)
				k++;
			if (data[91] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (data[93] == 1)
				k++;
			
			if (k == 0)
			{
				if (button77->Enabled == true)
					Uncovertile(77);
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button63->Enabled == true)
					Uncovertile(63);
				if (button64->Enabled == true)
					Uncovertile(64);
				if (button65->Enabled == true)
					Uncovertile(65);
				if (button91->Enabled == true)
					Uncovertile(91);
				if (button92->Enabled == true)
					Uncovertile(92);
				if (button93->Enabled == true)
					Uncovertile(93);
				
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button79->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[78] == 1)
				k++;
			if (data[80] == 1)
				k++;
			if (data[64] == 1)
				k++;
			if (data[65] == 1)
				k++;
			if (data[66] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (data[93] == 1)
				k++;
			if (data[94] == 1)
				k++;
			
			if (k == 0)
			{
				if (button78->Enabled == true)
					Uncovertile(78);
				if (button80->Enabled == true)
					Uncovertile(80);
				if (button64->Enabled == true)
					Uncovertile(64);
				if (button65->Enabled == true)
					Uncovertile(65);
				if (button66->Enabled == true)
					Uncovertile(66);
				if (button92->Enabled == true)
					Uncovertile(92);
				if (button93->Enabled == true)
					Uncovertile(93);
				if (button94->Enabled == true)
					Uncovertile(94);
				
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button80->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[79] == 1)
				k++;
			if (data[81] == 1)
				k++;
			if (data[65] == 1)
				k++;
			if (data[66] == 1)
				k++;
			if (data[67] == 1)
				k++;
			if (data[93] == 1)
				k++;
			if (data[94] == 1)
				k++;
			if (data[95] == 1)
				k++;
			
			if (k == 0)
			{
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button81->Enabled == true)
					Uncovertile(81);
				if (button65->Enabled == true)
					Uncovertile(65);
				if (button66->Enabled == true)
					Uncovertile(66);
				if (button67->Enabled == true)
					Uncovertile(67);
				if (button93->Enabled == true)
					Uncovertile(93);
				if (button94->Enabled == true)
					Uncovertile(94);
				if (button95->Enabled == true)
					Uncovertile(95);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button81->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[80] == 1)
				k++;
			if (data[82] == 1)
				k++;
			if (data[66] == 1)
				k++;
			if (data[67] == 1)
				k++;
			if (data[68] == 1)
				k++;
			if (data[94] == 1)
				k++;
			if (data[95] == 1)
				k++;
			if (data[96] == 1)
				k++;
			if (k == 0)
			{
				if (button80->Enabled == true)
					Uncovertile(80);
				if (button82->Enabled == true)
					Uncovertile(82);
				if (button66->Enabled == true)
					Uncovertile(66);
				if (button67->Enabled == true)
					Uncovertile(67);
				if (button68->Enabled == true)
					Uncovertile(68);
				if (button94->Enabled == true)
					Uncovertile(94);
				if (button95->Enabled == true)
					Uncovertile(95);
				if (button96->Enabled == true)
					Uncovertile(96);
			}

		}
		if (k != 0)
		{
			button81->Text = System::Convert::ToString(k);
		}
	}
	if (x == 82)
	{
		button82->Enabled = false;
		button82->Text = "";
		if (data[82] == 1)
		{
			button82->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button82->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[81] == 1)
				k++;
			if (data[83] == 1)
				k++;
			if (data[67] == 1)
				k++;
			if (data[68] == 1)
				k++;
			if (data[69] == 1)
				k++;
			if (data[95] == 1)
				k++;
			if (data[96] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (k == 0)
			{
				if (button81->Enabled == true)
					Uncovertile(81);
				if (button83->Enabled == true)
					Uncovertile(83);
				if (button67->Enabled == true)
					Uncovertile(67);
				if (button68->Enabled == true)
					Uncovertile(68);
				if (button69->Enabled == true)
					Uncovertile(69);
				if (button95->Enabled == true)
					Uncovertile(95);
				if (button96->Enabled == true)
					Uncovertile(96);
				if (button97->Enabled == true)
					Uncovertile(97);
			}

		}
		if (k != 0)
		{
			button82->Text = System::Convert::ToString(k);
		}
	}
	if (x == 83)
	{
		button83->Enabled = false;
		button83->Text = "";
		if (data[83] == 1)
		{
			button83->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

		}
		else
		{
			button83->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[82] == 1)
				k++;
			if (data[84] == 1)
				k++;
			if (data[68] == 1)
				k++;
			if (data[69] == 1)
				k++;
			if (data[70] == 1)
				k++;
			if (data[96] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (data[98] == 1)
				k++;
			if (k == 0)
			{
				if (button82->Enabled == true)
					Uncovertile(82);
				if (button84->Enabled == true)
					Uncovertile(84);
				if (button68->Enabled == true)
					Uncovertile(68);
				if (button69->Enabled == true)
					Uncovertile(69);
				if (button70->Enabled == true)
					Uncovertile(70);
				if (button96->Enabled == true)
					Uncovertile(96);
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button98->Enabled == true)
					Uncovertile(98);
			}

		}
		if (k != 0)
		{
			button83->Text = System::Convert::ToString(k);
		}
	}
	if (x == 84)
	{
		button84->Enabled = false;
		button84->Text = "";
		if (data[84] == 1)
		{
			button84->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button84->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[83] == 1)
				k++;
			if (data[69] == 1)
				k++;
			if (data[70] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (data[98] == 1)
				k++;
			if (k == 0)
			{
				if (button83->Enabled == true)
					Uncovertile(83);
				if (button69->Enabled == true)
					Uncovertile(69);
				if (button70->Enabled == true)
					Uncovertile(70);
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button98->Enabled == true)
					Uncovertile(98);
			}

		}
		if (k != 0)
		{
			button84->Text = System::Convert::ToString(k);
		}
	}
	if (x == 85)
	{
		button85->Enabled = false;
		button85->Text = "";
		if (data[85] == 1)
		{
			button85->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER,You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button85->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[71] == 1)
				k++;
			if (data[72] == 1)
				k++;
			if (data[86] == 1)
				k++;
			if (data[99] == 1)
				k++;
			if (data[100] == 1)
				k++;
			if (k == 0)
			{
				if (button71->Enabled == true)
					Uncovertile(71);
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button86->Enabled == true)
					Uncovertile(86);
				if (button99->Enabled == true)
					Uncovertile(99);
				if (button100->Enabled == true)
					Uncovertile(100);
			}

		}
		if (k != 0)
		{
			button85->Text = System::Convert::ToString(k);
		}

	}
	if (x == 86)
	{
		button86->Enabled = false;
		button86->Text = "";
		if (data[86] == 1)
		{
			button86->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			bomb = 1;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


		}
		else
		{
			button86->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[71] == 1)
				k++;
			if (data[72] == 1)
				k++;
			if (data[73] == 1)
				k++;
			if (data[85] == 1)
				k++;
			if (data[87] == 1)
				k++;
			if (data[99] == 1)
				k++;
			if (data[100] == 1)
				k++;
			if (data[101] == 1)
				k++;
			if (k == 0)
			{
				if (button71->Enabled == true)
					Uncovertile(71);
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button73->Enabled == true)
					Uncovertile(73);
				if (button85->Enabled == true)
					Uncovertile(85);
				if (button87->Enabled == true)
					Uncovertile(87);
				if (button99->Enabled == true)
					Uncovertile(99);
				if (button100->Enabled == true)
					Uncovertile(100);
				if (button101->Enabled == true)
					Uncovertile(101);
			}
		}
		if (k != 0)
		{
			button86->Text = System::Convert::ToString(k);
		}
	}
	if (x == 87)
	{
		button87->Enabled = false;
		button87->Text = "";
		if (data[87] == 1)
		{
			button87->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button87->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[72] == 1)
				k++;
			if (data[73] == 1)
				k++;
			if (data[74] == 1)
				k++;
			if (data[86] == 1)
				k++;
			if (data[88] == 1)
				k++;
			if (data[100] == 1)
				k++;
			if (data[101] == 1)
				k++;
			if (data[102] == 1)
				k++;
			if (k == 0)
			{
				if (button72->Enabled == true)
					Uncovertile(72);
				if (button73->Enabled == true)
					Uncovertile(73);
				if (button74->Enabled == true)
					Uncovertile(74);
				if (button86->Enabled == true)
					Uncovertile(86);
				if (button88->Enabled == true)
					Uncovertile(88);
				if (button100->Enabled == true)
					Uncovertile(100);
				if (button101->Enabled == true)
					Uncovertile(101);
				if (button102->Enabled == true)
					Uncovertile(102);
			}

		}
		if (k != 0)
		{
			button87->Text = System::Convert::ToString(k);
		}

	}
	if (x == 88)
	{
		button88->Enabled = false;
		button88->Text = "";
		if (data[88] == 1)
		{
			button88->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button88->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[73] == 1)
				k++;
			if (data[74] == 1)
				k++;
			if (data[75] == 1)
				k++;
			if (data[87] == 1)
				k++;
			if (data[89] == 1)
				k++;
			if (data[101] == 1)
				k++;
			if (data[102] == 1)
				k++;
			if (data[103] == 1)
				k++;
			if (k == 0)
			{
				if (button73->Enabled == true)
					Uncovertile(73);
				if (button74->Enabled == true)
					Uncovertile(74);
				if (button75->Enabled == true)
					Uncovertile(75);
				if (button87->Enabled == true)
					Uncovertile(87);
				if (button89->Enabled == true)
					Uncovertile(89);
				if (button101->Enabled == true)
					Uncovertile(101);
				if (button102->Enabled == true)
					Uncovertile(102);
				if (button103->Enabled == true)
					Uncovertile(103);
			}

		}
		if (k != 0)
		{
			button88->Text = System::Convert::ToString(k);
		}

	}
	if (x == 89)
	{
		button89->Enabled = false;
		button89->Text = "";
		if (data[89] == 1)
		{
			button89->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button89->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[74] == 1)
				k++;
			if (data[75] == 1)
				k++;
			if (data[76] == 1)
				k++;
			if (data[88] == 1)
				k++;
			if (data[90] == 1)
				k++;
			if (data[102] == 1)
				k++;
			if (data[103] == 1)
				k++;
			if (data[104] == 1)
				k++;
			if (k == 0)
			{
				if (button74->Enabled == true)
					Uncovertile(74);
				if (button75->Enabled == true)
					Uncovertile(75);
				if (button76->Enabled == true)
					Uncovertile(76);
				if (button88->Enabled == true)
					Uncovertile(88);
				if (button90->Enabled == true)
					Uncovertile(90);
				if (button102->Enabled == true)
					Uncovertile(102);
				if (button103->Enabled == true)
					Uncovertile(103);
				if (button104->Enabled == true)
					Uncovertile(104);
			}

		}
		if (k != 0)
		{
			button89->Text = System::Convert::ToString(k);
		}

	}
	if (x == 90)
	{
		button90->Enabled = false;
		button90->Text = "";
		if (data[90] == 1)
		{
			button90->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button90->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[75] == 1)
				k++;
			if (data[76] == 1)
				k++;
			if (data[77] == 1)
				k++;
			if (data[103] == 1)
				k++;
			if (data[104] == 1)
				k++;
			if (data[105] == 1)
				k++;
			if (data[89] == 1)
				k++;
			if (data[91] == 1)
				k++;
			if (k == 0)
			{
				if (button75->Enabled == true)
					Uncovertile(75);
				if (button76->Enabled == true)
					Uncovertile(76);
				if (button77->Enabled == true)
					Uncovertile(77);
				if (button103->Enabled == true)
					Uncovertile(103);
				if (button104->Enabled == true)
					Uncovertile(104);
				if (button105->Enabled == true)
					Uncovertile(105);
				if (button89->Enabled == true)
					Uncovertile(89);
				if (button91->Enabled == true)
					Uncovertile(91);
			}
		}
		if (k != 0)
		{
			button90->Text = System::Convert::ToString(k);
		}
	}
	if (x == 91)
	{
		button91->Enabled = false;
		button91->Text = "";
		if (data[91] == 1)
		{
			button91->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button91->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[76] == 1)
				k++;
			if (data[77] == 1)
				k++;
			if (data[78] == 1)
				k++;
			if (data[104] == 1)
				k++;
			if (data[105] == 1)
				k++;
			if (data[106] == 1)
				k++;
			if (data[90] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (k == 0)
			{
				if (button76->Enabled == true)
					Uncovertile(76);
				if (button77->Enabled == true)
					Uncovertile(77);
				if (button78->Enabled == true)
					Uncovertile(78);
				if (button104->Enabled == true)
					Uncovertile(104);
				if (button105->Enabled == true)
					Uncovertile(105);
				if (button106->Enabled == true)
					Uncovertile(106);
				if (button92->Enabled == true)
					Uncovertile(92);
				if (button90->Enabled == true)
					Uncovertile(90);
			}
		}
		if (k != 0)
		{
			button91->Text = System::Convert::ToString(k);
		}
	}
	if (x == 92)
	{
		button92->Enabled = false;
		button92->Text = "";
		if (data[92] == 1)
		{
			button92->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button92->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[77] == 1)
				k++;
			if (data[78] == 1)
				k++;
			if (data[79] == 1)
				k++;
			if (data[106] == 1)
				k++;
			if (data[107] == 1)
				k++;
			if (data[91] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (data[93] == 1)
				k++;
			if (k == 0)
			{
				if (button77->Enabled == true)
					Uncovertile(77);
				if (button78->Enabled == true)
					Uncovertile(78);
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button106->Enabled == true)
					Uncovertile(106);
				if (button107->Enabled == true)
					Uncovertile(107);
				if (button91->Enabled == true)
					Uncovertile(91);
				if (button92->Enabled == true)
					Uncovertile(92);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button93->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[78] == 1)
				k++;
			if (data[79] == 1)
				k++;
			if (data[80] == 1)
				k++;
			if (data[107] == 1)
				k++;
			if (data[108] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (data[93] == 1)
				k++;
			if (data[94] == 1)
				k++;
			if (k == 0)
			{
				if (button78->Enabled == true)
					Uncovertile(78);
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button80->Enabled == true)
					Uncovertile(80);
				if (button107->Enabled == true)
					Uncovertile(107);
				if (button108->Enabled == true)
					Uncovertile(108);
				if (button92->Enabled == true)
					Uncovertile(92);
				if (button93->Enabled == true)
					Uncovertile(93);
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

			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button94->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[79] == 1)
				k++;
			if (data[80] == 1)
				k++;
			if (data[81] == 1)
				k++;
			if (data[108] == 1)
				k++;
			if (data[109] == 1)
				k++;
			if (data[93] == 1)
				k++;
			if (data[94] == 1)
				k++;
			if (data[95] == 1)
				k++;
			if (k == 0)
			{
				if (button79->Enabled == true)
					Uncovertile(79);
				if (button80->Enabled == true)
					Uncovertile(80);
				if (button81->Enabled == true)
					Uncovertile(81);
				if (button108->Enabled == true)
					Uncovertile(108);
				if (button109->Enabled == true)
					Uncovertile(109);
				if (button93->Enabled == true)
					Uncovertile(93);
				if (button94->Enabled == true)
					Uncovertile(94);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button95->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[80] == 1)
				k++;
			if (data[81] == 1)
				k++;
			if (data[82] == 1)
				k++;
			if (data[109] == 1)
				k++;
			if (data[110] == 1)
				k++;
			if (data[95] == 1)
				k++;
			if (data[96] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (k == 0)
			{
				if (button80->Enabled == true)
					Uncovertile(80);
				if (button81->Enabled == true)
					Uncovertile(81);
				if (button82->Enabled == true)
					Uncovertile(82);
				if (button109->Enabled == true)
					Uncovertile(109);
				if (button110->Enabled == true)
					Uncovertile(110);
				if (button95->Enabled == true)
					Uncovertile(95);
				if (button96->Enabled == true)
					Uncovertile(96);
				if (button97->Enabled == true)
					Uncovertile(97);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button96->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[81] == 1)
				k++;
			if (data[82] == 1)
				k++;
			if (data[83] == 1)
				k++;
			if (data[110] == 1)
				k++;
			if (data[111] == 1)
				k++;
			if (data[96] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (data[98] == 1)
				k++;
			if (k == 0)
			{
				if (button81->Enabled == true)
					Uncovertile(81);
				if (button82->Enabled == true)
					Uncovertile(82);
				if (button83->Enabled == true)
					Uncovertile(83);
				if (button110->Enabled == true)
					Uncovertile(110);
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button96->Enabled == true)
					Uncovertile(96);
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button98->Enabled == true)
					Uncovertile(98);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;


			bomb = 1;
		}
		else
		{
			button97->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[82] == 1)
				k++;
			if (data[83] == 1)
				k++;
			if (data[84] == 1)
				k++;
			if (data[111] == 1)
				k++;
			if (data[112] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (data[98] == 1)
				k++;
			if (data[99] == 1)
				k++;
			if (k == 0)
			{
				if (button82->Enabled == true)
					Uncovertile(82);
				if (button83->Enabled == true)
					Uncovertile(83);
				if (button84->Enabled == true)
					Uncovertile(84);
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button112->Enabled == true)
					Uncovertile(112);
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button98->Enabled == true)
					Uncovertile(98);
				if (button99->Enabled == true)
					Uncovertile(99);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button98->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[83] == 1)
				k++;
			if (data[84] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (data[111] == 1)
				k++;
			if (data[112] == 1)
				k++;
			if (k == 0)
			{
				if (button83->Enabled == true)
					Uncovertile(83);
				if (button84->Enabled == true)
					Uncovertile(84);
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button112->Enabled == true)
					Uncovertile(112);
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
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button99->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[84] == 1)
				k++;
			if (data[85] == 1)
				k++;
			if (data[86] == 1)
				k++;
			if (data[98] == 1)
				k++;
			if (data[100] == 1)
				k++;
			if (data[112] == 1)
				k++;
			if (data[113] == 1)
				k++;
			if (data[114] == 1)
				k++;
			if (k == 0)
			{
				if (button84->Enabled == true)
					Uncovertile(84);
				if (button85->Enabled == true)
					Uncovertile(85);
				if (button86->Enabled == true)
					Uncovertile(86);
				if (button98->Enabled == true)
					Uncovertile(98);
				if (button100->Enabled == true)
					Uncovertile(100);
				if (button112->Enabled == true)
					Uncovertile(112);
				if (button113->Enabled == true)
					Uncovertile(113);
				if (button114->Enabled == true)
					Uncovertile(114);
			}
		}
		if (k != 0)
		{
			button99->Text = System::Convert::ToString(k);
		}
	}if (x == 100)
	{
		button100->Enabled = false;
		button100->Text = "";
		if (data[100] == 1)
		{
			button100->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button100->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[85] == 1)
				k++;
			if (data[86] == 1)
				k++;
			if (data[87] == 1)
				k++;
			if (data[99] == 1)
				k++;
			if (data[101] == 1)
				k++;
			if (data[113] == 1)
				k++;
			if (data[114] == 1)
				k++;
			if (data[115] == 1)
				k++;
			if (k == 0)
			{
				if (button85->Enabled == true)
					Uncovertile(85);
				if (button86->Enabled == true)
					Uncovertile(86);
				if (button87->Enabled == true)
					Uncovertile(87);
				if (button99->Enabled == true)
					Uncovertile(99);
				if (button101->Enabled == true)
					Uncovertile(101);
				if (button113->Enabled == true)
					Uncovertile(113);
				if (button114->Enabled == true)
					Uncovertile(114);
				if (button115->Enabled == true)
					Uncovertile(115);
			}
		}
		if (k != 0)
		{
			button100->Text = System::Convert::ToString(k);
		}
	}if (x == 101)
	{
		button101->Enabled = false;
		button101->Text = "";
		if (data[101] == 1)
		{
			button101->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button101->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[86] == 1)
				k++;
			if (data[87] == 1)
				k++;
			if (data[88] == 1)
				k++;
			if (data[100] == 1)
				k++;
			if (data[102] == 1)
				k++;
			if (data[114] == 1)
				k++;
			if (data[115] == 1)
				k++;
			if (data[116] == 1)
				k++;
			if (k == 0)
			{
				if (button86->Enabled == true)
					Uncovertile(86);
				if (button87->Enabled == true)
					Uncovertile(87);
				if (button88->Enabled == true)
					Uncovertile(88);
				if (button100->Enabled == true)
					Uncovertile(100);
				if (button102->Enabled == true)
					Uncovertile(102);
				if (button114->Enabled == true)
					Uncovertile(114);
				if (button115->Enabled == true)
					Uncovertile(115);
				if (button116->Enabled == true)
					Uncovertile(116);
			}
		}
		if (k != 0)
		{
			button101->Text = System::Convert::ToString(k);
		}
	}if (x == 102)
	{
		button102->Enabled = false;
		button102->Text = "";
		if (data[102] == 1)
		{
			button102->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button102->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[87] == 1)
				k++;
			if (data[88] == 1)
				k++;
			if (data[89] == 1)
				k++;
			if (data[101] == 1)
				k++;
			if (data[103] == 1)
				k++;
			if (data[115] == 1)
				k++;
			if (data[116] == 1)
				k++;
			if (data[117] == 1)
				k++;
			if (k == 0)
			{
				if (button87->Enabled == true)
					Uncovertile(87);
				if (button88->Enabled == true)
					Uncovertile(88);
				if (button89->Enabled == true)
					Uncovertile(89);
				if (button101->Enabled == true)
					Uncovertile(101);
				if (button103->Enabled == true)
					Uncovertile(103);
				if (button115->Enabled == true)
					Uncovertile(115);
				if (button116->Enabled == true)
					Uncovertile(116);
				if (button117->Enabled == true)
					Uncovertile(117);
			}
		}
		if (k != 0)
		{
			button102->Text = System::Convert::ToString(k);
		}
	}if (x == 103)
	{
		button103->Enabled = false;
		button103->Text = "";
		if (data[103] == 1)
		{
			button103->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button103->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[88] == 1)
				k++;
			if (data[89] == 1)
				k++;
			if (data[90] == 1)
				k++;
			if (data[102] == 1)
				k++;
			if (data[104] == 1)
				k++;
			if (data[116] == 1)
				k++;
			if (data[117] == 1)
				k++;
			if (data[118] == 1)
				k++;
			if (k == 0)
			{
				if (button88->Enabled == true)
					Uncovertile(88);
				if (button89->Enabled == true)
					Uncovertile(89);
				if (button90->Enabled == true)
					Uncovertile(90);
				if (button102->Enabled == true)
					Uncovertile(102);
				if (button104->Enabled == true)
					Uncovertile(104);
				if (button116->Enabled == true)
					Uncovertile(116);
				if (button117->Enabled == true)
					Uncovertile(117);
				if (button118->Enabled == true)
					Uncovertile(118);
			}
		}
		if (k != 0)
		{
			button103->Text = System::Convert::ToString(k);
		}
	}if (x == 104)
	{
		button104->Enabled = false;
		button104->Text = "";
		if (data[104] == 1)
		{
			button104->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button104->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[89] == 1)
				k++;
			if (data[90] == 1)
				k++;
			if (data[91] == 1)
				k++;
			if (data[103] == 1)
				k++;
			if (data[105] == 1)
				k++;
			if (data[117] == 1)
				k++;
			if (data[118] == 1)
				k++;
			if (data[119] == 1)
				k++;
			if (k == 0)
			{
				if (button89->Enabled == true)
					Uncovertile(89);
				if (button90->Enabled == true)
					Uncovertile(90);
				if (button91->Enabled == true)
					Uncovertile(91);
				if (button103->Enabled == true)
					Uncovertile(103);
				if (button105->Enabled == true)
					Uncovertile(105);
				if (button117->Enabled == true)
					Uncovertile(117);
				if (button118->Enabled == true)
					Uncovertile(118);
				if (button119->Enabled == true)
					Uncovertile(119);
			}
		}
		if (k != 0)
		{
			button104->Text = System::Convert::ToString(k);
		}
	}if (x == 105)
	{
		button105->Enabled = false;
		button105->Text = "";
		if (data[105] == 1)
		{
			button105->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button105->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[90] == 1)
				k++;
			if (data[91] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (data[104] == 1)
				k++;
			if (data[106] == 1)
				k++;
			if (data[118] == 1)
				k++;
			if (data[119] == 1)
				k++;
			if (data[120] == 1)
				k++;
			if (k == 0)
			{
				if (button90->Enabled == true)
					Uncovertile(90);
				if (button91->Enabled == true)
					Uncovertile(91);
				if (button92->Enabled == true)
					Uncovertile(92);
				if (button104->Enabled == true)
					Uncovertile(104);
				if (button106->Enabled == true)
					Uncovertile(106);
				if (button118->Enabled == true)
					Uncovertile(118);
				if (button119->Enabled == true)
					Uncovertile(119);
				if (button120->Enabled == true)
					Uncovertile(120);
			}
		}
		if (k != 0)
		{
			button105->Text = System::Convert::ToString(k);
		}
	}if (x == 106)
	{
		button106->Enabled = false;
		button106->Text = "";
		if (data[106] == 1)
		{
			button106->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button106->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[91] == 1)
				k++;
			if (data[92] == 1)
				k++;
			if (data[93] == 1)
				k++;
			if (data[105] == 1)
				k++;
			if (data[107] == 1)
				k++;
			if (data[119] == 1)
				k++;
			if (data[120] == 1)
				k++;
			if (data[121] == 1)
				k++;
			if (k == 0)
			{
				if (button91->Enabled == true)
					Uncovertile(91);
				if (button92->Enabled == true)
					Uncovertile(92);
				if (button93->Enabled == true)
					Uncovertile(93);
				if (button105->Enabled == true)
					Uncovertile(105);
				if (button107->Enabled == true)
					Uncovertile(107);
				if (button119->Enabled == true)
					Uncovertile(119);
				if (button120->Enabled == true)
					Uncovertile(120);
				if (button121->Enabled == true)
					Uncovertile(121);
			}
		}
		if (k != 0)
		{
			button106->Text = System::Convert::ToString(k);
		}
	}if (x == 107)
	{
		button107->Enabled = false;
		button107->Text = "";
		if (data[107] == 1)
		{
			button107->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button107->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[92] == 1)
				k++;
			if (data[93] == 1)
				k++;
			if (data[94] == 1)
				k++;
			if (data[106] == 1)
				k++;
			if (data[108] == 1)
				k++;
			if (data[120] == 1)
				k++;
			if (data[121] == 1)
				k++;
			if (data[122] == 1)
				k++;
			if (k == 0)
			{
				if (button92->Enabled == true)
					Uncovertile(92);
				if (button93->Enabled == true)
					Uncovertile(93);
				if (button94->Enabled == true)
					Uncovertile(94);
				if (button106->Enabled == true)
					Uncovertile(106);
				if (button108->Enabled == true)
					Uncovertile(108);
				if (button120->Enabled == true)
					Uncovertile(120);
				if (button121->Enabled == true)
					Uncovertile(121);
				if (button122->Enabled == true)
					Uncovertile(122);
			}
		}
		if (k != 0)
		{
			button107->Text = System::Convert::ToString(k);
		}
	}if (x == 108)
	{
		button108->Enabled = false;
		button108->Text = "";
		if (data[108] == 1)
		{
			button108->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button108->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[93] == 1)
				k++;
			if (data[94] == 1)
				k++;
			if (data[95] == 1)
				k++;
			if (data[107] == 1)
				k++;
			if (data[109] == 1)
				k++;
			if (data[121] == 1)
				k++;
			if (data[122] == 1)
				k++;
			if (data[123] == 1)
				k++;
			if (k == 0)
			{
				if (button93->Enabled == true)
					Uncovertile(93);
				if (button94->Enabled == true)
					Uncovertile(94);
				if (button95->Enabled == true)
					Uncovertile(95);
				if (button107->Enabled == true)
					Uncovertile(107);
				if (button109->Enabled == true)
					Uncovertile(109);
				if (button121->Enabled == true)
					Uncovertile(121);
				if (button122->Enabled == true)
					Uncovertile(122);
				if (button123->Enabled == true)
					Uncovertile(123);
			}
		}
		if (k != 0)
		{
			button108->Text = System::Convert::ToString(k);
		}
	}if (x == 109)
	{
		button109->Enabled = false;
		button109->Text = "";
		if (data[109] == 1)
		{
			button109->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button109->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[94] == 1)
				k++;
			if (data[95] == 1)
				k++;
			if (data[96] == 1)
				k++;
			if (data[108] == 1)
				k++;
			if (data[110] == 1)
				k++;
			if (data[122] == 1)
				k++;
			if (data[123] == 1)
				k++;
			if (data[124] == 1)
				k++;
			if (k == 0)
			{
				if (button94->Enabled == true)
					Uncovertile(94);
				if (button95->Enabled == true)
					Uncovertile(95);
				if (button96->Enabled == true)
					Uncovertile(96);
				if (button108->Enabled == true)
					Uncovertile(108);
				if (button110->Enabled == true)
					Uncovertile(110);
				if (button122->Enabled == true)
					Uncovertile(122);
				if (button123->Enabled == true)
					Uncovertile(123);
				if (button124->Enabled == true)
					Uncovertile(124);
			}
		}
		if (k != 0)
		{
			button109->Text = System::Convert::ToString(k);
		}
	}if (x == 110)
	{
		button110->Enabled = false;
		button110->Text = "";
		if (data[110] == 1)
		{
			button110->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button110->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[95] == 1)
				k++;
			if (data[96] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (data[109] == 1)
				k++;
			if (data[111] == 1)
				k++;
			if (data[123] == 1)
				k++;
			if (data[124] == 1)
				k++;
			if (data[125] == 1)
				k++;
			if (k == 0)
			{
				if (button95->Enabled == true)
					Uncovertile(95);
				if (button96->Enabled == true)
					Uncovertile(96);
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button109->Enabled == true)
					Uncovertile(109);
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button123->Enabled == true)
					Uncovertile(123);
				if (button124->Enabled == true)
					Uncovertile(124);
				if (button125->Enabled == true)
					Uncovertile(125);
			}
		}
		if (k != 0)
		{
			button110->Text = System::Convert::ToString(k);
		}
	}if (x == 111)
	{
		button111->Enabled = false;
		button111->Text = "";
		if (data[111] == 1)
		{
			button111->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button111->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[96] == 1)
				k++;
			if (data[97] == 1)
				k++;
			if (data[98] == 1)
				k++;
			if (data[110] == 1)
				k++;
			if (data[112] == 1)
				k++;
			if (data[124] == 1)
				k++;
			if (data[125] == 1)
				k++;
			if (data[126] == 1)
				k++;
			if (k == 0)
			{
				if (button96->Enabled == true)
					Uncovertile(96);
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button98->Enabled == true)
					Uncovertile(98);
				if (button110->Enabled == true)
					Uncovertile(110);
				if (button112->Enabled == true)
					Uncovertile(112);
				if (button124->Enabled == true)
					Uncovertile(124);
				if (button125->Enabled == true)
					Uncovertile(125);
				if (button126->Enabled == true)
					Uncovertile(126);
			}
		}
		if (k != 0)
		{
			button111->Text = System::Convert::ToString(k);
		}
	}if (x == 112)
	{
		button112->Enabled = false;
		button112->Text = "";
		if (data[112] == 1)
		{
			button112->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button112->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[97] == 1)
				k++;
			if (data[98] == 1)
				k++;
			if (data[99] == 1)
				k++;
			if (data[111] == 1)
				k++;
			if (data[113] == 1)
				k++;
			if (data[125] == 1)
				k++;
			if (data[126] == 1)
				k++;
			if (data[127] == 1)
				k++;
			if (k == 0)
			{
				if (button97->Enabled == true)
					Uncovertile(97);
				if (button98->Enabled == true)
					Uncovertile(98);
				if (button99->Enabled == true)
					Uncovertile(99);
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button113->Enabled == true)
					Uncovertile(113);
				if (button125->Enabled == true)
					Uncovertile(125);
				if (button126->Enabled == true)
					Uncovertile(126);
				if (button127->Enabled == true)
					Uncovertile(127);
			}
		}
		if (k != 0)
		{
			button112->Text = System::Convert::ToString(k);
		}
	}if (x == 113)
	{
		button113->Enabled = false;
		button113->Text = "";
		if (data[113] == 1)
		{
			button113->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button113->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[98] == 1)
				k++;
			if (data[99] == 1)
				k++;
			if (data[100] == 1)
				k++;
			if (data[112] == 1)
				k++;
			if (data[114] == 1)
				k++;
			if (data[126] == 1)
				k++;
			if (data[127] == 1)
				k++;
			if (data[128] == 1)
				k++;
			if (k == 0)
			{
				if (button98->Enabled == true)
					Uncovertile(98);
				if (button99->Enabled == true)
					Uncovertile(99);
				if (button100->Enabled == true)
					Uncovertile(100);
				if (button112->Enabled == true)
					Uncovertile(112);
				if (button114->Enabled == true)
					Uncovertile(114);
				if (button126->Enabled == true)
					Uncovertile(126);
				if (button127->Enabled == true)
					Uncovertile(127);
				if (button128->Enabled == true)
					Uncovertile(128);
			}
		}
		if (k != 0)
		{
			button113->Text = System::Convert::ToString(k);
		}
	}if (x == 114)
	{
		button114->Enabled = false;
		button114->Text = "";
		if (data[114] == 1)
		{
			button114->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button114->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[99] == 1)
				k++;
			if (data[100] == 1)
				k++;
			if (data[101] == 1)
				k++;
			if (data[113] == 1)
				k++;
			if (data[115] == 1)
				k++;
			if (data[127] == 1)
				k++;
			if (data[128] == 1)
				k++;
			if (data[129] == 1)
				k++;
			if (k == 0)
			{
				if (button99->Enabled == true)
					Uncovertile(99);
				if (button100->Enabled == true)
					Uncovertile(100);
				if (button101->Enabled == true)
					Uncovertile(101);
				if (button113->Enabled == true)
					Uncovertile(113);
				if (button115->Enabled == true)
					Uncovertile(115);
				if (button127->Enabled == true)
					Uncovertile(127);
				if (button128->Enabled == true)
					Uncovertile(128);
				if (button129->Enabled == true)
					Uncovertile(129);
			}
		}
		if (k != 0)
		{
			button114->Text = System::Convert::ToString(k);
		}
	}if (x == 115)
	{
		button115->Enabled = false;
		button115->Text = "";
		if (data[115] == 1)
		{
			button115->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button115->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[100] == 1)
				k++;
			if (data[101] == 1)
				k++;
			if (data[102] == 1)
				k++;
			if (data[114] == 1)
				k++;
			if (data[116] == 1)
				k++;
			if (data[128] == 1)
				k++;
			if (data[129] == 1)
				k++;
			if (data[130] == 1)
				k++;
			if (k == 0)
			{
				if (button100->Enabled == true)
					Uncovertile(100);
				if (button101->Enabled == true)
					Uncovertile(101);
				if (button102->Enabled == true)
					Uncovertile(102);
				if (button114->Enabled == true)
					Uncovertile(114);
				if (button116->Enabled == true)
					Uncovertile(116);
				if (button128->Enabled == true)
					Uncovertile(128);
				if (button129->Enabled == true)
					Uncovertile(129);
				if (button130->Enabled == true)
					Uncovertile(130);
			}
		}
		if (k != 0)
		{
			button115->Text = System::Convert::ToString(k);
		}
	}if (x == 116)
	{
		button116->Enabled = false;
		button116->Text = "";
		if (data[116] == 1)
		{
			button116->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button116->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[101] == 1)
				k++;
			if (data[102] == 1)
				k++;
			if (data[103] == 1)
				k++;
			if (data[115] == 1)
				k++;
			if (data[117] == 1)
				k++;
			if (data[129] == 1)
				k++;
			if (data[130] == 1)
				k++;
			if (data[131] == 1)
				k++;
			if (k == 0)
			{
				if (button101->Enabled == true)
					Uncovertile(101);
				if (button102->Enabled == true)
					Uncovertile(102);
				if (button103->Enabled == true)
					Uncovertile(103);
				if (button115->Enabled == true)
					Uncovertile(115);
				if (button117->Enabled == true)
					Uncovertile(117);
				if (button129->Enabled == true)
					Uncovertile(129);
				if (button130->Enabled == true)
					Uncovertile(130);
				if (button131->Enabled == true)
					Uncovertile(131);
			}
		}
		if (k != 0)
		{
			button116->Text = System::Convert::ToString(k);
		}
	}if (x == 117)
	{
		button117->Enabled = false;
		button117->Text = "";
		if (data[117] == 1)
		{
			button117->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button117->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[102] == 1)
				k++;
			if (data[103] == 1)
				k++;
			if (data[104] == 1)
				k++;
			if (data[116] == 1)
				k++;
			if (data[118] == 1)
				k++;
			if (data[130] == 1)
				k++;
			if (data[131] == 1)
				k++;
			if (data[132] == 1)
				k++;
			if (k == 0)
			{
				if (button102->Enabled == true)
					Uncovertile(102);
				if (button103->Enabled == true)
					Uncovertile(103);
				if (button104->Enabled == true)
					Uncovertile(104);
				if (button116->Enabled == true)
					Uncovertile(116);
				if (button118->Enabled == true)
					Uncovertile(118);
				if (button130->Enabled == true)
					Uncovertile(130);
				if (button131->Enabled == true)
					Uncovertile(131);
				if (button132->Enabled == true)
					Uncovertile(132);
			}
		}
		if (k != 0)
		{
			button117->Text = System::Convert::ToString(k);
		}
	}if (x == 118)
	{
		button118->Enabled = false;
		button118->Text = "";
		if (data[118] == 1)
		{
			button118->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button118->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[103] == 1)
				k++;
			if (data[104] == 1)
				k++;
			if (data[105] == 1)
				k++;
			if (data[117] == 1)
				k++;
			if (data[119] == 1)
				k++;
			if (data[131] == 1)
				k++;
			if (data[132] == 1)
				k++;
			if (data[133] == 1)
				k++;
			if (k == 0)
			{
				if (button103->Enabled == true)
					Uncovertile(103);
				if (button104->Enabled == true)
					Uncovertile(104);
				if (button105->Enabled == true)
					Uncovertile(105);
				if (button117->Enabled == true)
					Uncovertile(117);
				if (button119->Enabled == true)
					Uncovertile(119);
				if (button131->Enabled == true)
					Uncovertile(131);
				if (button132->Enabled == true)
					Uncovertile(132);
				if (button133->Enabled == true)
					Uncovertile(133);
			}
		}
		if (k != 0)
		{
			button118->Text = System::Convert::ToString(k);
		}
	}if (x == 119)
	{
		button119->Enabled = false;
		button119->Text = "";
		if (data[119] == 1)
		{
			button119->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button119->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[104] == 1)
				k++;
			if (data[105] == 1)
				k++;
			if (data[106] == 1)
				k++;
			if (data[118] == 1)
				k++;
			if (data[120] == 1)
				k++;
			if (data[132] == 1)
				k++;
			if (data[133] == 1)
				k++;
			if (data[134] == 1)
				k++;
			if (k == 0)
			{
				if (button104->Enabled == true)
					Uncovertile(104);
				if (button105->Enabled == true)
					Uncovertile(105);
				if (button106->Enabled == true)
					Uncovertile(106);
				if (button118->Enabled == true)
					Uncovertile(118);
				if (button120->Enabled == true)
					Uncovertile(120);
				if (button132->Enabled == true)
					Uncovertile(132);
				if (button133->Enabled == true)
					Uncovertile(133);
				if (button134->Enabled == true)
					Uncovertile(134);
			}
		}
		if (k != 0)
		{
			button119->Text = System::Convert::ToString(k);
		}
	}if (x == 120)
	{
		button120->Enabled = false;
		button120->Text = "";
		if (data[120] == 1)
		{
			button120->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button120->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[105] == 1)
				k++;
			if (data[106] == 1)
				k++;
			if (data[107] == 1)
				k++;
			if (data[119] == 1)
				k++;
			if (data[121] == 1)
				k++;
			if (data[133] == 1)
				k++;
			if (data[134] == 1)
				k++;
			if (data[135] == 1)
				k++;
			if (k == 0)
			{
				if (button105->Enabled == true)
					Uncovertile(105);
				if (button106->Enabled == true)
					Uncovertile(106);
				if (button107->Enabled == true)
					Uncovertile(107);
				if (button119->Enabled == true)
					Uncovertile(119);
				if (button121->Enabled == true)
					Uncovertile(121);
				if (button133->Enabled == true)
					Uncovertile(133);
				if (button134->Enabled == true)
					Uncovertile(134);
				if (button135->Enabled == true)
					Uncovertile(135);
			}
		}
		if (k != 0)
		{
			button120->Text = System::Convert::ToString(k);
		}
	}if (x == 121)
	{
		button121->Enabled = false;
		button121->Text = "";
		if (data[121] == 1)
		{
			button121->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button121->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[106] == 1)
				k++;
			if (data[107] == 1)
				k++;
			if (data[108] == 1)
				k++;
			if (data[120] == 1)
				k++;
			if (data[122] == 1)
				k++;
			if (data[134] == 1)
				k++;
			if (data[135] == 1)
				k++;
			if (data[136] == 1)
				k++;
			if (k == 0)
			{
				if (button106->Enabled == true)
					Uncovertile(106);
				if (button107->Enabled == true)
					Uncovertile(107);
				if (button108->Enabled == true)
					Uncovertile(108);
				if (button120->Enabled == true)
					Uncovertile(120);
				if (button122->Enabled == true)
					Uncovertile(122);
				if (button134->Enabled == true)
					Uncovertile(134);
				if (button135->Enabled == true)
					Uncovertile(135);
				if (button136->Enabled == true)
					Uncovertile(136);
			}
		}
		if (k != 0)
		{
			button121->Text = System::Convert::ToString(k);
		}
	}if (x == 122)
	{
		button122->Enabled = false;
		button122->Text = "";
		if (data[122] == 1)
		{
			button122->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button122->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[107] == 1)
				k++;
			if (data[108] == 1)
				k++;
			if (data[109] == 1)
				k++;
			if (data[121] == 1)
				k++;
			if (data[123] == 1)
				k++;
			if (data[135] == 1)
				k++;
			if (data[136] == 1)
				k++;
			if (data[137] == 1)
				k++;
			if (k == 0)
			{
				if (button107->Enabled == true)
					Uncovertile(107);
				if (button108->Enabled == true)
					Uncovertile(108);
				if (button109->Enabled == true)
					Uncovertile(109);
				if (button121->Enabled == true)
					Uncovertile(121);
				if (button123->Enabled == true)
					Uncovertile(123);
				if (button135->Enabled == true)
					Uncovertile(135);
				if (button136->Enabled == true)
					Uncovertile(136);
				if (button137->Enabled == true)
					Uncovertile(137);
			}
		}
		if (k != 0)
		{
			button122->Text = System::Convert::ToString(k);
		}
	}if (x == 123)
	{
		button123->Enabled = false;
		button123->Text = "";
		if (data[123] == 1)
		{
			button123->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button123->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[108] == 1)
				k++;
			if (data[109] == 1)
				k++;
			if (data[110] == 1)
				k++;
			if (data[122] == 1)
				k++;
			if (data[124] == 1)
				k++;
			if (data[136] == 1)
				k++;
			if (data[137] == 1)
				k++;
			if (data[138] == 1)
				k++;
			if (k == 0)
			{
				if (button108->Enabled == true)
					Uncovertile(108);
				if (button109->Enabled == true)
					Uncovertile(109);
				if (button110->Enabled == true)
					Uncovertile(110);
				if (button122->Enabled == true)
					Uncovertile(122);
				if (button124->Enabled == true)
					Uncovertile(124);
				if (button136->Enabled == true)
					Uncovertile(136);
				if (button137->Enabled == true)
					Uncovertile(137);
				if (button138->Enabled == true)
					Uncovertile(138);
			}
		}
		if (k != 0)
		{
			button123->Text = System::Convert::ToString(k);
		}
	}if (x == 124)
	{
		button124->Enabled = false;
		button124->Text = "";
		if (data[124] == 1)
		{
			button124->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button124->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[109] == 1)
				k++;
			if (data[110] == 1)
				k++;
			if (data[111] == 1)
				k++;
			if (data[123] == 1)
				k++;
			if (data[125] == 1)
				k++;
			if (data[137] == 1)
				k++;
			if (data[138] == 1)
				k++;
			if (data[139] == 1)
				k++;
			if (k == 0)
			{
				if (button109->Enabled == true)
					Uncovertile(109);
				if (button110->Enabled == true)
					Uncovertile(110);
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button123->Enabled == true)
					Uncovertile(123);
				if (button125->Enabled == true)
					Uncovertile(125);
				if (button137->Enabled == true)
					Uncovertile(137);
				if (button138->Enabled == true)
					Uncovertile(138);
				if (button139->Enabled == true)
					Uncovertile(139);
			}
		}
		if (k != 0)
		{
			button124->Text = System::Convert::ToString(k);
		}
	}if (x == 125)
	{
		button125->Enabled = false;
		button125->Text = "";
		if (data[125] == 1)
		{
			button125->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button125->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[110] == 1)
				k++;
			if (data[111] == 1)
				k++;
			if (data[112] == 1)
				k++;
			if (data[124] == 1)
				k++;
			if (data[126] == 1)
				k++;
			if (data[138] == 1)
				k++;
			if (data[139] == 1)
				k++;
			if (data[140] == 1)
				k++;
			if (k == 0)
			{
				if (button110->Enabled == true)
					Uncovertile(110);
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button112->Enabled == true)
					Uncovertile(112);
				if (button124->Enabled == true)
					Uncovertile(124);
				if (button126->Enabled == true)
					Uncovertile(126);
				if (button138->Enabled == true)
					Uncovertile(138);
				if (button139->Enabled == true)
					Uncovertile(139);
				if (button140->Enabled == true)
					Uncovertile(140);
			}
		}
		if (k != 0)
		{
			button125->Text = System::Convert::ToString(k);
		}
	}if (x == 126)
	{
		button126->Enabled = false;
		button126->Text = "";
		if (data[126] == 1)
		{
			button126->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button126->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[111] == 1)
				k++;
			if (data[112] == 1)
				k++;
			if (data[113] == 1)
				k++;
			if (data[125] == 1)
				k++;
			if (data[127] == 1)
				k++;
			if (data[139] == 1)
				k++;
			if (data[140] == 1)
				k++;
			if (data[141] == 1)
				k++;
			if (k == 0)
			{
				if (button111->Enabled == true)
					Uncovertile(111);
				if (button112->Enabled == true)
					Uncovertile(112);
				if (button113->Enabled == true)
					Uncovertile(113);
				if (button125->Enabled == true)
					Uncovertile(125);
				if (button127->Enabled == true)
					Uncovertile(127);
				if (button139->Enabled == true)
					Uncovertile(139);
				if (button140->Enabled == true)
					Uncovertile(140);
				if (button141->Enabled == true)
					Uncovertile(141);
			}
		}
		if (k != 0)
		{
			button126->Text = System::Convert::ToString(k);
		}
	}if (x == 127)
	{
		button127->Enabled = false;
		button127->Text = "";
		if (data[127] == 1)
		{
			button127->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button127->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[112] == 1)
				k++;
			if (data[113] == 1)
				k++;
			if (data[114] == 1)
				k++;
			if (data[126] == 1)
				k++;
			if (data[128] == 1)
				k++;
			if (data[140] == 1)
				k++;
			if (data[141] == 1)
				k++;
			if (data[142] == 1)
				k++;
			if (k == 0)
			{
				if (button112->Enabled == true)
					Uncovertile(112);
				if (button113->Enabled == true)
					Uncovertile(113);
				if (button114->Enabled == true)
					Uncovertile(114);
				if (button126->Enabled == true)
					Uncovertile(126);
				if (button128->Enabled == true)
					Uncovertile(128);
				if (button140->Enabled == true)
					Uncovertile(140);
				if (button141->Enabled == true)
					Uncovertile(141);
				if (button142->Enabled == true)
					Uncovertile(142);
			}
		}
		if (k != 0)
		{
			button127->Text = System::Convert::ToString(k);
		}
	}if (x == 128)
	{
		button128->Enabled = false;
		button128->Text = "";
		if (data[128] == 1)
		{
			button128->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button128->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[113] == 1)
				k++;
			if (data[114] == 1)
				k++;
			if (data[115] == 1)
				k++;
			if (data[127] == 1)
				k++;
			if (data[129] == 1)
				k++;
			if (data[141] == 1)
				k++;
			if (data[142] == 1)
				k++;
			if (data[143] == 1)
				k++;
			if (k == 0)
			{
				if (button113->Enabled == true)
					Uncovertile(113);
				if (button114->Enabled == true)
					Uncovertile(114);
				if (button115->Enabled == true)
					Uncovertile(115);
				if (button127->Enabled == true)
					Uncovertile(127);
				if (button129->Enabled == true)
					Uncovertile(129);
				if (button141->Enabled == true)
					Uncovertile(141);
				if (button142->Enabled == true)
					Uncovertile(142);
				if (button143->Enabled == true)
					Uncovertile(143);
			}
		}
		if (k != 0)
		{
			button128->Text = System::Convert::ToString(k);
		}
	}if (x == 129)
	{
		button129->Enabled = false;
		button129->Text = "";
		if (data[129] == 1)
		{
			button129->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button129->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[114] == 1)
				k++;
			if (data[115] == 1)
				k++;
			if (data[116] == 1)
				k++;
			if (data[128] == 1)
				k++;
			if (data[130] == 1)
				k++;
			if (data[142] == 1)
				k++;
			if (data[143] == 1)
				k++;
			if (data[144] == 1)
				k++;
			if (k == 0)
			{
				if (button114->Enabled == true)
					Uncovertile(114);
				if (button115->Enabled == true)
					Uncovertile(115);
				if (button116->Enabled == true)
					Uncovertile(116);
				if (button128->Enabled == true)
					Uncovertile(128);
				if (button130->Enabled == true)
					Uncovertile(130);
				if (button142->Enabled == true)
					Uncovertile(142);
				if (button143->Enabled == true)
					Uncovertile(143);
				if (button144->Enabled == true)
					Uncovertile(144);
			}
		}
		if (k != 0)
		{
			button129->Text = System::Convert::ToString(k);
		}
	}if (x == 130)
	{
		button130->Enabled = false;
		button130->Text = "";
		if (data[130] == 1)
		{
			button130->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button130->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[115] == 1)
				k++;
			if (data[116] == 1)
				k++;
			if (data[117] == 1)
				k++;
			if (data[129] == 1)
				k++;
			if (data[131] == 1)
				k++;
			if (data[143] == 1)
				k++;
			if (data[144] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (k == 0)
			{
				if (button115->Enabled == true)
					Uncovertile(115);
				if (button116->Enabled == true)
					Uncovertile(116);
				if (button117->Enabled == true)
					Uncovertile(117);
				if (button129->Enabled == true)
					Uncovertile(129);
				if (button131->Enabled == true)
					Uncovertile(131);
				if (button143->Enabled == true)
					Uncovertile(143);
				if (button144->Enabled == true)
					Uncovertile(144);
				if (button145->Enabled == true)
					Uncovertile(145);
			}
		}
		if (k != 0)
		{
			button130->Text = System::Convert::ToString(k);
		}
	}if (x == 131)
	{
		button131->Enabled = false;
		button131->Text = "";
		if (data[131] == 1)
		{
			button131->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button131->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[116] == 1)
				k++;
			if (data[117] == 1)
				k++;
			if (data[118] == 1)
				k++;
			if (data[130] == 1)
				k++;
			if (data[132] == 1)
				k++;
			if (data[144] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (data[146] == 1)
				k++;
			if (k == 0)
			{
				if (button116->Enabled == true)
					Uncovertile(116);
				if (button117->Enabled == true)
					Uncovertile(117);
				if (button118->Enabled == true)
					Uncovertile(118);
				if (button130->Enabled == true)
					Uncovertile(130);
				if (button132->Enabled == true)
					Uncovertile(132);
				if (button144->Enabled == true)
					Uncovertile(144);
				if (button145->Enabled == true)
					Uncovertile(145);
				if (button146->Enabled == true)
					Uncovertile(146);
			}
		}
		if (k != 0)
		{
			button131->Text = System::Convert::ToString(k);
		}
	}if (x == 132)
	{
		button132->Enabled = false;
		button132->Text = "";
		if (data[132] == 1)
		{
			button132->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button132->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[117] == 1)
				k++;
			if (data[118] == 1)
				k++;
			if (data[119] == 1)
				k++;
			if (data[131] == 1)
				k++;
			if (data[133] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (data[146] == 1)
				k++;
			if (data[147] == 1)
				k++;
			if (k == 0)
			{
				if (button117->Enabled == true)
					Uncovertile(117);
				if (button118->Enabled == true)
					Uncovertile(118);
				if (button119->Enabled == true)
					Uncovertile(119);
				if (button131->Enabled == true)
					Uncovertile(131);
				if (button133->Enabled == true)
					Uncovertile(133);
				if (button145->Enabled == true)
					Uncovertile(145);
				if (button146->Enabled == true)
					Uncovertile(146);
				if (button147->Enabled == true)
					Uncovertile(147);
			}
		}
		if (k != 0)
		{
			button132->Text = System::Convert::ToString(k);
		}
	}if (x == 133)
	{
		button133->Enabled = false;
		button133->Text = "";
		if (data[133] == 1)
		{
			button133->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button133->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[118] == 1)
				k++;
			if (data[119] == 1)
				k++;
			if (data[120] == 1)
				k++;
			if (data[132] == 1)
				k++;
			if (data[134] == 1)
				k++;
			if (data[146] == 1)
				k++;
			if (data[147] == 1)
				k++;
			if (data[148] == 1)
				k++;
			if (k == 0)
			{
				if (button118->Enabled == true)
					Uncovertile(118);
				if (button119->Enabled == true)
					Uncovertile(119);
				if (button120->Enabled == true)
					Uncovertile(120);
				if (button132->Enabled == true)
					Uncovertile(132);
				if (button134->Enabled == true)
					Uncovertile(134);
				if (button146->Enabled == true)
					Uncovertile(146);
				if (button147->Enabled == true)
					Uncovertile(147);
				if (button148->Enabled == true)
					Uncovertile(148);
			}
		}
		if (k != 0)
		{
			button133->Text = System::Convert::ToString(k);
		}
	}if (x == 134)
	{
		button134->Enabled = false;
		button134->Text = "";
		if (data[134] == 1)
		{
			button134->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button134->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[119] == 1)
				k++;
			if (data[120] == 1)
				k++;
			if (data[121] == 1)
				k++;
			if (data[133] == 1)
				k++;
			if (data[135] == 1)
				k++;
			if (data[147] == 1)
				k++;
			if (data[148] == 1)
				k++;
			if (data[149] == 1)
				k++;
			if (k == 0)
			{
				if (button119->Enabled == true)
					Uncovertile(119);
				if (button120->Enabled == true)
					Uncovertile(120);
				if (button121->Enabled == true)
					Uncovertile(121);
				if (button133->Enabled == true)
					Uncovertile(133);
				if (button135->Enabled == true)
					Uncovertile(135);
				if (button147->Enabled == true)
					Uncovertile(147);
				if (button148->Enabled == true)
					Uncovertile(148);
				if (button149->Enabled == true)
					Uncovertile(149);
			}
		}
		if (k != 0)
		{
			button134->Text = System::Convert::ToString(k);
		}
	}if (x == 135)
	{
		button135->Enabled = false;
		button135->Text = "";
		if (data[135] == 1)
		{
			button135->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button135->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[120] == 1)
				k++;
			if (data[121] == 1)
				k++;
			if (data[122] == 1)
				k++;
			if (data[134] == 1)
				k++;
			if (data[136] == 1)
				k++;
			if (data[148] == 1)
				k++;
			if (data[149] == 1)
				k++;
			if (data[150] == 1)
				k++;
			if (k == 0)
			{
				if (button120->Enabled == true)
					Uncovertile(120);
				if (button121->Enabled == true)
					Uncovertile(121);
				if (button122->Enabled == true)
					Uncovertile(122);
				if (button134->Enabled == true)
					Uncovertile(134);
				if (button136->Enabled == true)
					Uncovertile(136);
				if (button148->Enabled == true)
					Uncovertile(148);
				if (button149->Enabled == true)
					Uncovertile(149);
				if (button150->Enabled == true)
					Uncovertile(150);
			}
		}
		if (k != 0)
		{
			button135->Text = System::Convert::ToString(k);
		}
	}if (x == 136)
	{
		button136->Enabled = false;
		button136->Text = "";
		if (data[136] == 1)
		{
			button136->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button136->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[121] == 1)
				k++;
			if (data[122] == 1)
				k++;
			if (data[123] == 1)
				k++;
			if (data[135] == 1)
				k++;
			if (data[137] == 1)
				k++;
			if (data[149] == 1)
				k++;
			if (data[150] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (k == 0)
			{
				if (button121->Enabled == true)
					Uncovertile(121);
				if (button122->Enabled == true)
					Uncovertile(122);
				if (button123->Enabled == true)
					Uncovertile(123);
				if (button135->Enabled == true)
					Uncovertile(135);
				if (button137->Enabled == true)
					Uncovertile(137);
				if (button149->Enabled == true)
					Uncovertile(149);
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button151->Enabled == true)
					Uncovertile(151);
			}
		}
		if (k != 0)
		{
			button136->Text = System::Convert::ToString(k);
		}
	}if (x == 137)
	{
		button137->Enabled = false;
		button137->Text = "";
		if (data[137] == 1)
		{
			button137->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button137->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[122] == 1)
				k++;
			if (data[123] == 1)
				k++;
			if (data[124] == 1)
				k++;
			if (data[136] == 1)
				k++;
			if (data[138] == 1)
				k++;
			if (data[150] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (data[152] == 1)
				k++;
			if (k == 0)
			{
				if (button122->Enabled == true)
					Uncovertile(122);
				if (button123->Enabled == true)
					Uncovertile(123);
				if (button124->Enabled == true)
					Uncovertile(124);
				if (button136->Enabled == true)
					Uncovertile(136);
				if (button138->Enabled == true)
					Uncovertile(138);
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button151->Enabled == true)
					Uncovertile(151);
				if (button152->Enabled == true)
					Uncovertile(152);
			}
		}
		if (k != 0)
		{
			button137->Text = System::Convert::ToString(k);
		}
	}if (x == 138)
	{
		button138->Enabled = false;
		button138->Text = "";
		if (data[138] == 1)
		{
			button138->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button138->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[123] == 1)
				k++;
			if (data[124] == 1)
				k++;
			if (data[125] == 1)
				k++;
			if (data[137] == 1)
				k++;
			if (data[139] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (data[152] == 1)
				k++;
			if (data[153] == 1)
				k++;
			if (k == 0)
			{
				if (button123->Enabled == true)
					Uncovertile(123);
				if (button124->Enabled == true)
					Uncovertile(124);
				if (button125->Enabled == true)
					Uncovertile(125);
				if (button137->Enabled == true)
					Uncovertile(137);
				if (button139->Enabled == true)
					Uncovertile(139);
				if (button151->Enabled == true)
					Uncovertile(151);
				if (button152->Enabled == true)
					Uncovertile(152);
				if (button153->Enabled == true)
					Uncovertile(153);
			}
		}
		if (k != 0)
		{
			button138->Text = System::Convert::ToString(k);
		}
	}if (x == 139)
	{
		button139->Enabled = false;
		button139->Text = "";
		if (data[139] == 1)
		{
			button139->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button139->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[124] == 1)
				k++;
			if (data[125] == 1)
				k++;
			if (data[126] == 1)
				k++;
			if (data[138] == 1)
				k++;
			if (data[140] == 1)
				k++;
			if (data[152] == 1)
				k++;
			if (data[153] == 1)
				k++;
			if (data[154] == 1)
				k++;
			if (k == 0)
			{
				if (button124->Enabled == true)
					Uncovertile(124);
				if (button125->Enabled == true)
					Uncovertile(125);
				if (button126->Enabled == true)
					Uncovertile(126);
				if (button138->Enabled == true)
					Uncovertile(138);
				if (button140->Enabled == true)
					Uncovertile(140);
				if (button152->Enabled == true)
					Uncovertile(152);
				if (button153->Enabled == true)
					Uncovertile(153);
				if (button154->Enabled == true)
					Uncovertile(154);
			}
		}
		if (k != 0)
		{
			button139->Text = System::Convert::ToString(k);
		}
	}if (x == 140)
	{
		button140->Enabled = false;
		button140->Text = "";
		if (data[140] == 1)
		{
			button140->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button140->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[125] == 1)
				k++;
			if (data[126] == 1)
				k++;
			if (data[127] == 1)
				k++;
			if (data[139] == 1)
				k++;
			if (data[141] == 1)
				k++;
			if (data[153] == 1)
				k++;
			if (data[154] == 1)
				k++;
			if (data[155] == 1)
				k++;
			if (k == 0)
			{
				if (button125->Enabled == true)
					Uncovertile(125);
				if (button126->Enabled == true)
					Uncovertile(126);
				if (button127->Enabled == true)
					Uncovertile(127);
				if (button139->Enabled == true)
					Uncovertile(139);
				if (button141->Enabled == true)
					Uncovertile(141);
				if (button153->Enabled == true)
					Uncovertile(153);
				if (button154->Enabled == true)
					Uncovertile(154);
				if (button155->Enabled == true)
					Uncovertile(155);
			}
		}
		if (k != 0)
		{
			button140->Text = System::Convert::ToString(k);
		}
	}if (x == 141)
	{
		button141->Enabled = false;
		button141->Text = "";
		if (data[141] == 1)
		{
			button141->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button141->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[126] == 1)
				k++;
			if (data[127] == 1)
				k++;
			if (data[128] == 1)
				k++;
			if (data[140] == 1)
				k++;
			if (data[142] == 1)
				k++;
			if (data[154] == 1)
				k++;
			if (data[155] == 1)
				k++;
			if (data[156] == 1)
				k++;
			if (k == 0)
			{
				if (button126->Enabled == true)
					Uncovertile(126);
				if (button127->Enabled == true)
					Uncovertile(127);
				if (button128->Enabled == true)
					Uncovertile(128);
				if (button140->Enabled == true)
					Uncovertile(140);
				if (button142->Enabled == true)
					Uncovertile(142);
				if (button154->Enabled == true)
					Uncovertile(154);
				if (button155->Enabled == true)
					Uncovertile(155);
				if (button156->Enabled == true)
					Uncovertile(156);
			}
		}
		if (k != 0)
		{
			button141->Text = System::Convert::ToString(k);
		}
	}if (x == 142)
	{
		button142->Enabled = false;
		button142->Text = "";
		if (data[142] == 1)
		{
			button142->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button142->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[127] == 1)
				k++;
			if (data[128] == 1)
				k++;
			if (data[129] == 1)
				k++;
			if (data[141] == 1)
				k++;
			if (data[143] == 1)
				k++;
			if (data[155] == 1)
				k++;
			if (data[156] == 1)
				k++;
			if (data[157] == 1)
				k++;
			if (k == 0)
			{
				if (button127->Enabled == true)
					Uncovertile(127);
				if (button128->Enabled == true)
					Uncovertile(128);
				if (button129->Enabled == true)
					Uncovertile(129);
				if (button141->Enabled == true)
					Uncovertile(141);
				if (button143->Enabled == true)
					Uncovertile(143);
				if (button155->Enabled == true)
					Uncovertile(155);
				if (button156->Enabled == true)
					Uncovertile(156);
				if (button157->Enabled == true)
					Uncovertile(157);
			}
		}
		if (k != 0)
		{
			button142->Text = System::Convert::ToString(k);
		}
	}if (x == 143)
	{
		button143->Enabled = false;
		button143->Text = "";
		if (data[143] == 1)
		{
			button143->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button143->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[128] == 1)
				k++;
			if (data[129] == 1)
				k++;
			if (data[130] == 1)
				k++;
			if (data[142] == 1)
				k++;
			if (data[144] == 1)
				k++;
			if (data[156] == 1)
				k++;
			if (data[157] == 1)
				k++;
			if (data[158] == 1)
				k++;
			if (k == 0)
			{
				if (button128->Enabled == true)
					Uncovertile(128);
				if (button129->Enabled == true)
					Uncovertile(129);
				if (button130->Enabled == true)
					Uncovertile(130);
				if (button142->Enabled == true)
					Uncovertile(142);
				if (button144->Enabled == true)
					Uncovertile(144);
				if (button156->Enabled == true)
					Uncovertile(156);
				if (button157->Enabled == true)
					Uncovertile(157);
				if (button158->Enabled == true)
					Uncovertile(158);
			}
		}
		if (k != 0)
		{
			button143->Text = System::Convert::ToString(k);
		}
	}if (x == 144)
	{
		button144->Enabled = false;
		button144->Text = "";
		if (data[144] == 1)
		{
			button144->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button144->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[129] == 1)
				k++;
			if (data[130] == 1)
				k++;
			if (data[131] == 1)
				k++;
			if (data[143] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (data[157] == 1)
				k++;
			if (data[158] == 1)
				k++;
			if (data[159] == 1)
				k++;
			if (k == 0)
			{
				if (button129->Enabled == true)
					Uncovertile(129);
				if (button130->Enabled == true)
					Uncovertile(130);
				if (button131->Enabled == true)
					Uncovertile(131);
				if (button143->Enabled == true)
					Uncovertile(143);
				if (button145->Enabled == true)
					Uncovertile(145);
				if (button157->Enabled == true)
					Uncovertile(157);
				if (button158->Enabled == true)
					Uncovertile(158);
				if (button159->Enabled == true)
					Uncovertile(159);
			}
		}
		if (k != 0)
		{
			button144->Text = System::Convert::ToString(k);
		}
	}if (x == 145)
	{
		button145->Enabled = false;
		button145->Text = "";
		if (data[145] == 1)
		{
			button145->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button145->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[130] == 1)
				k++;
			if (data[131] == 1)
				k++;
			if (data[132] == 1)
				k++;
			if (data[144] == 1)
				k++;
			if (data[146] == 1)
				k++;
			if (data[158] == 1)
				k++;
			if (data[159] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (k == 0)
			{
				if (button130->Enabled == true)
					Uncovertile(130);
				if (button131->Enabled == true)
					Uncovertile(131);
				if (button132->Enabled == true)
					Uncovertile(132);
				if (button144->Enabled == true)
					Uncovertile(144);
				if (button146->Enabled == true)
					Uncovertile(146);
				if (button158->Enabled == true)
					Uncovertile(158);
				if (button159->Enabled == true)
					Uncovertile(159);
				if (button160->Enabled == true)
					Uncovertile(160);
			}
		}
		if (k != 0)
		{
			button145->Text = System::Convert::ToString(k);
		}
	}if (x == 146)
	{
		button146->Enabled = false;
		button146->Text = "";
		if (data[146] == 1)
		{
			button146->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button146->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[131] == 1)
				k++;
			if (data[132] == 1)
				k++;
			if (data[133] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (data[147] == 1)
				k++;
			if (data[159] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (k == 0)
			{
				if (button131->Enabled == true)
					Uncovertile(131);
				if (button132->Enabled == true)
					Uncovertile(132);
				if (button133->Enabled == true)
					Uncovertile(133);
				if (button145->Enabled == true)
					Uncovertile(145);
				if (button147->Enabled == true)
					Uncovertile(147);
				if (button159->Enabled == true)
					Uncovertile(159);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button161->Enabled == true)
					Uncovertile(161);
			}
		}
		if (k != 0)
		{
			button146->Text = System::Convert::ToString(k);
		}
	}if (x == 147)
	{
		button147->Enabled = false;
		button147->Text = "";
		if (data[147] == 1)
		{
			button147->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button147->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[132] == 1)
				k++;
			if (data[133] == 1)
				k++;
			if (data[134] == 1)
				k++;
			if (data[146] == 1)
				k++;
			if (data[148] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (data[162] == 1)
				k++;
			if (k == 0)
			{
				if (button132->Enabled == true)
					Uncovertile(132);
				if (button133->Enabled == true)
					Uncovertile(133);
				if (button134->Enabled == true)
					Uncovertile(134);
				if (button146->Enabled == true)
					Uncovertile(146);
				if (button148->Enabled == true)
					Uncovertile(148);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button161->Enabled == true)
					Uncovertile(161);
				if (button162->Enabled == true)
					Uncovertile(162);
			}
		}
		if (k != 0)
		{
			button147->Text = System::Convert::ToString(k);
		}
	}if (x == 148)
	{
		button148->Enabled = false;
		button148->Text = "";
		if (data[148] == 1)
		{
			button148->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button148->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[133] == 1)
				k++;
			if (data[134] == 1)
				k++;
			if (data[135] == 1)
				k++;
			if (data[147] == 1)
				k++;
			if (data[149] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (data[162] == 1)
				k++;
			if (data[163] == 1)
				k++;
			if (k == 0)
			{
				if (button133->Enabled == true)
					Uncovertile(133);
				if (button134->Enabled == true)
					Uncovertile(134);
				if (button135->Enabled == true)
					Uncovertile(135);
				if (button147->Enabled == true)
					Uncovertile(147);
				if (button149->Enabled == true)
					Uncovertile(149);
				if (button161->Enabled == true)
					Uncovertile(161);
				if (button162->Enabled == true)
					Uncovertile(162);
				if (button163->Enabled == true)
					Uncovertile(163);
			}
		}
		if (k != 0)
		{
			button148->Text = System::Convert::ToString(k);
		}
	}if (x == 149)
	{
		button149->Enabled = false;
		button149->Text = "";
		if (data[149] == 1)
		{
			button149->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button149->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[134] == 1)
				k++;
			if (data[135] == 1)
				k++;
			if (data[136] == 1)
				k++;
			if (data[148] == 1)
				k++;
			if (data[150] == 1)
				k++;
			if (data[162] == 1)
				k++;
			if (data[163] == 1)
				k++;
			if (data[164] == 1)
				k++;
			if (k == 0)
			{
				if (button134->Enabled == true)
					Uncovertile(134);
				if (button135->Enabled == true)
					Uncovertile(135);
				if (button136->Enabled == true)
					Uncovertile(136);
				if (button148->Enabled == true)
					Uncovertile(148);
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button162->Enabled == true)
					Uncovertile(162);
				if (button163->Enabled == true)
					Uncovertile(163);
				if (button164->Enabled == true)
					Uncovertile(164);
			}
		}
		if (k != 0)
		{
			button149->Text = System::Convert::ToString(k);
		}
	}if (x == 150)
	{
		button150->Enabled = false;
		button150->Text = "";
		if (data[150] == 1)
		{
			button150->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button150->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[135] == 1)
				k++;
			if (data[136] == 1)
				k++;
			if (data[137] == 1)
				k++;
			if (data[149] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (data[163] == 1)
				k++;
			if (data[164] == 1)
				k++;
			if (data[165] == 1)
				k++;
			if (k == 0)
			{
				if (button135->Enabled == true)
					Uncovertile(135);
				if (button136->Enabled == true)
					Uncovertile(136);
				if (button137->Enabled == true)
					Uncovertile(137);
				if (button149->Enabled == true)
					Uncovertile(149);
				if (button151->Enabled == true)
					Uncovertile(151);
				if (button163->Enabled == true)
					Uncovertile(163);
				if (button164->Enabled == true)
					Uncovertile(164);
				if (button165->Enabled == true)
					Uncovertile(165);
			}
		}
		if (k != 0)
		{
			button150->Text = System::Convert::ToString(k);
		}
	}if (x == 151)
	{
		button151->Enabled = false;
		button151->Text = "";
		if (data[151] == 1)
		{
			button151->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button151->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[136] == 1)
				k++;
			if (data[137] == 1)
				k++;
			if (data[138] == 1)
				k++;
			if (data[150] == 1)
				k++;
			if (data[152] == 1)
				k++;
			if (data[164] == 1)
				k++;
			if (data[165] == 1)
				k++;
			if (data[166] == 1)
				k++;
			if (k == 0)
			{
				if (button136->Enabled == true)
					Uncovertile(136);
				if (button137->Enabled == true)
					Uncovertile(137);
				if (button138->Enabled == true)
					Uncovertile(138);
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button152->Enabled == true)
					Uncovertile(152);
				if (button164->Enabled == true)
					Uncovertile(164);
				if (button165->Enabled == true)
					Uncovertile(165);
				if (button166->Enabled == true)
					Uncovertile(166);
			}
		}
		if (k != 0)
		{
			button151->Text = System::Convert::ToString(k);
		}
	}if (x == 152)
	{
		button152->Enabled = false;
		button152->Text = "";
		if (data[152] == 1)
		{
			button152->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button152->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[137] == 1)
				k++;
			if (data[138] == 1)
				k++;
			if (data[139] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (data[153] == 1)
				k++;
			if (data[165] == 1)
				k++;
			if (data[166] == 1)
				k++;
			if (data[167] == 1)
				k++;
			if (k == 0)
			{
				if (button137->Enabled == true)
					Uncovertile(137);
				if (button138->Enabled == true)
					Uncovertile(138);
				if (button139->Enabled == true)
					Uncovertile(139);
				if (button151->Enabled == true)
					Uncovertile(151);
				if (button153->Enabled == true)
					Uncovertile(153);
				if (button165->Enabled == true)
					Uncovertile(165);
				if (button166->Enabled == true)
					Uncovertile(166);
				if (button167->Enabled == true)
					Uncovertile(167);
			}
		}
		if (k != 0)
		{
			button152->Text = System::Convert::ToString(k);
		}
	}if (x == 153)
	{
		button153->Enabled = false;
		button153->Text = "";
		if (data[153] == 1)
		{
			button153->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button153->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[138] == 1)
				k++;
			if (data[139] == 1)
				k++;
			if (data[140] == 1)
				k++;
			if (data[152] == 1)
				k++;
			if (data[154] == 1)
				k++;
			if (data[166] == 1)
				k++;
			if (data[167] == 1)
				k++;
			if (data[168] == 1)
				k++;
			if (k == 0)
			{
				if (button138->Enabled == true)
					Uncovertile(138);
				if (button139->Enabled == true)
					Uncovertile(139);
				if (button140->Enabled == true)
					Uncovertile(140);
				if (button152->Enabled == true)
					Uncovertile(152);
				if (button154->Enabled == true)
					Uncovertile(154);
				if (button166->Enabled == true)
					Uncovertile(166);
				if (button167->Enabled == true)
					Uncovertile(167);
				if (button168->Enabled == true)
					Uncovertile(168);
			}
		}
		if (k != 0)
		{
			button153->Text = System::Convert::ToString(k);
		}
	}if (x == 154)
	{
		button154->Enabled = false;
		button154->Text = "";
		if (data[154] == 1)
		{
			button154->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
			checkBox1->Visible = false;

		}
		else
		{
			button154->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[139] == 1)
				k++;
			if (data[140] == 1)
				k++;
			if (data[141] == 1)
				k++;
			if (data[153] == 1)
				k++;
			if (data[155] == 1)
				k++;
			if (data[167] == 1)
				k++;
			if (data[168] == 1)
				k++;
			if (data[169] == 1)
				k++;
			if (k == 0)
			{
				if (button139->Enabled == true)
					Uncovertile(139);
				if (button140->Enabled == true)
					Uncovertile(140);
				if (button141->Enabled == true)
					Uncovertile(141);
				if (button153->Enabled == true)
					Uncovertile(153);
				if (button155->Enabled == true)
					Uncovertile(155);
				if (button167->Enabled == true)
					Uncovertile(167);
				if (button168->Enabled == true)
					Uncovertile(168);
				if (button169->Enabled == true)
					Uncovertile(169);
			}
		}
		if (k != 0)
		{
			button154->Text = System::Convert::ToString(k);
		}
	}



	/*--------------------------------------------------------------------------------------*/

	if (x == 155)
	{
		button155->Enabled = false;
		button155->Text = "";
		if (data[155] == 1)
		{
			button155->BackColor = System::Drawing::SystemColors::GrayText;
			/*	label2->Text = "You lose!";
				label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button155->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[141] == 1)
				k++;
			if (data[142] == 1)
				k++;
			if (data[170] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (data[156] == 1)
				k++;
			
			if (k == 0)
			{
				if (button141->Enabled == true)
					Uncovertile(141);
				if (button142->Enabled == true)
					Uncovertile(142);
				if (button156->Enabled == true)
					Uncovertile(156);
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button171->Enabled == true)
					Uncovertile(171);
				
			}
		}
		if (k != 0)
		{
			button155->Text = System::Convert::ToString(k);
		}
	}

	if (x == 156)
	{
		button156->Enabled = false;
		button156->Text = "";
		if (data[156] == 1)
		{
			button156->BackColor = System::Drawing::SystemColors::GrayText;
			/*	label2->Text = "You lose!";
				label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button156->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[141] == 1)
				k++;
			if (data[142] == 1)
				k++;
			if (data[143] == 1)
				k++;
			if (data[155] == 1)
				k++;
			if (data[157] == 1)
				k++;
			if (data[169] == 1)
				k++;
			if (data[170] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (k == 0)
			{
				if (button141->Enabled == true)
					Uncovertile(141);
				if (button142->Enabled == true)
					Uncovertile(142);
				if (button143->Enabled == true)
					Uncovertile(143);
				if (button155->Enabled == true)
					Uncovertile(155);
				if (button157->Enabled == true)
					Uncovertile(157);
				if (button169->Enabled == true)
					Uncovertile(169);
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button171->Enabled == true)
					Uncovertile(171);
			}
		}
		if (k != 0)
		{
			button156->Text = System::Convert::ToString(k);
		}
	}




	if (x == 157)
	{
		button157->Enabled = false;
		button157->Text = "";
		if (data[157] == 1)
		{
			button157->BackColor = System::Drawing::SystemColors::GrayText;
			/*	label2->Text = "You lose!";
				label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button157->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[142] == 1)
				k++;
			if (data[143] == 1)
				k++;
			if (data[144] == 1)
				k++;
			if (data[156] == 1)
				k++;
			if (data[158] == 1)
				k++;
			if (data[170] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (data[172] == 1)
				k++;
			if (k == 0)
			{
				if (button142->Enabled == true)
					Uncovertile(142);
				if (button143->Enabled == true)
					Uncovertile(143);
				if (button144->Enabled == true)
					Uncovertile(144);
				if (button156->Enabled == true)
					Uncovertile(156);
				if (button158->Enabled == true)
					Uncovertile(158);
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button171->Enabled == true)
					Uncovertile(171);
				if (button172->Enabled == true)
					Uncovertile(172);
			}
		}
		if (k != 0)
		{
			button157->Text = System::Convert::ToString(k);
		}
	}
	if (x == 158)
	{
		button158->Enabled = false;
		button158->Text = "";
		if (data[158] == 1)
		{
			button158->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

			bomb = 1;
		}
		else
		{
			button158->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[143] == 1)
				k++;
			if (data[144] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (data[159] == 1)
				k++;
			if (data[157] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (data[172] == 1)
				k++;
			if (data[173] == 1)
				k++;
			if (k == 0)
			{
				if (button143->Enabled == true)
					Uncovertile(143);
				if (button144->Enabled == true)
					Uncovertile(144);
				if (button145->Enabled == true)
					Uncovertile(145);
				if (button159->Enabled == true)
					Uncovertile(159);
				if (button157->Enabled == true)
					Uncovertile(157);
				if (button171->Enabled == true)
					Uncovertile(171);
				if (button172->Enabled == true)
					Uncovertile(172);
				if (button173->Enabled == true)
					Uncovertile(173);
			}
		}
		if (k != 0)
		{
			button158->Text = System::Convert::ToString(k);
		}
	}
	if (x == 159)
	{
		button159->Enabled = false;
		button159->Text = "";
		if (data[159] == 1)
		{
			button159->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button159->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[144] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (data[146] == 1)
				k++;
			if (data[158] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (data[172] == 1)
				k++;
			if (data[173] == 1)
				k++;
			if (data[174] == 1)
				k++;
			if (k == 0)
			{
				if (button144->Enabled == true)
					Uncovertile(144);
				if (button145->Enabled == true)
					Uncovertile(145);
				if (button146->Enabled == true)
					Uncovertile(146);
				if (button158->Enabled == true)
					Uncovertile(158);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button172->Enabled == true)
					Uncovertile(172);
				if (button173->Enabled == true)
					Uncovertile(173);
				if (button174->Enabled == true)
					Uncovertile(174);
			}
		}
		if (k != 0)
		{
			button159->Text = System::Convert::ToString(k);
		}
	}
	if (x == 160)
	{
		button160->Enabled = false;
		button160->Text = "";
		if (data[160] == 1)
		{
			button160->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button160->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[159] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (data[173] == 1)
				k++;
			if (data[174] == 1)
				k++;
			if (data[175] == 1)
				k++;
			if (data[145] == 1)
				k++;
			if (data[146] == 1)
				k++;
			if (data[147] == 1)
				k++;
			if (k == 0)
			{
				if (button159->Enabled == true)
					Uncovertile(159);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button173->Enabled == true)
					Uncovertile(173);
				if (button174->Enabled == true)
					Uncovertile(174);
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button145->Enabled == true)
					Uncovertile(145);
				if (button146->Enabled == true)
					Uncovertile(146);
				if (button147->Enabled == true)
					Uncovertile(147);
			}
		}
		if (k != 0)
		{
			button160->Text = System::Convert::ToString(k);
		}
	}
	if (x == 161)
	{
		button161->Enabled = false;
		button161->Text = "";
		if (data[161] == 1)
		{
			button161->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button161->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[146] == 1)
				k++;
			if (data[147] == 1)
				k++;
			if (data[148] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (data[162] == 1)
				k++;
			if (data[174] == 1)
				k++;
			if (data[175] == 1)
				k++;
			if (data[176] == 1)
				k++;
			if (k == 0)
			{
				if (button146->Enabled == true)
					Uncovertile(146);
				if (button147->Enabled == true)
					Uncovertile(147);
				if (button148->Enabled == true)
					Uncovertile(148);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button162->Enabled == true)
					Uncovertile(162);
				if (button174->Enabled == true)
					Uncovertile(174);
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button176->Enabled == true)
					Uncovertile(176);
			}
		}
		if (k != 0)
		{
			button161->Text = System::Convert::ToString(k);
		}
	}
	if (x == 162)
	{
		button162->Enabled = false;
		button162->Text = "";
		if (data[162] == 1)
		{
			button162->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button162->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[147] == 1)
				k++;
			if (data[148] == 1)
				k++;
			if (data[149] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (data[163] == 1)
				k++;
			if (data[175] == 1)
				k++;
			if (data[176] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (k == 0)
			{
				if (button147->Enabled == true)
					Uncovertile(147);
				if (button148->Enabled == true)
					Uncovertile(148);
				if (button149->Enabled == true)
					Uncovertile(149);
				if (button161->Enabled == true)
					Uncovertile(161);
				if (button163->Enabled == true)
					Uncovertile(163);
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button177->Enabled == true)
					Uncovertile(177);
			}
		}
		if (k != 0)
		{
			button162->Text = System::Convert::ToString(k);
		}
	}
	if (x == 163)
	{
		button163->Enabled = false;
		button163->Text = "";
		if (data[163] == 1)
		{
			button163->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button163->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[148] == 1)
				k++;
			if (data[149] == 1)
				k++;
			if (data[150] == 1)
				k++;
			if (data[162] == 1)
				k++;
			if (data[164] == 1)
				k++;
			if (data[176] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (k == 0)
			{
				if (button148->Enabled == true)
					Uncovertile(148);
				if (button149->Enabled == true)
					Uncovertile(149);
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button162->Enabled == true)
					Uncovertile(162);
				if (button164->Enabled == true)
					Uncovertile(164);
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button178->Enabled == true)
					Uncovertile(178);
			}
		}
		if (k != 0)
		{
			button163->Text = System::Convert::ToString(k);
		}
	}
	if (x == 164)
	{
		button164->Enabled = false;
		button164->Text = "";
		if (data[164] == 1)
		{
			button164->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button164->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[149] == 1)
				k++;
			if (data[150] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (data[163] == 1)
				k++;
			if (data[165] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (k == 0)
			{
				if (button149->Enabled == true)
					Uncovertile(149);
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button151->Enabled == true)
					Uncovertile(151);
				if (button163->Enabled == true)
					Uncovertile(163);
				if (button165->Enabled == true)
					Uncovertile(165);
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button179->Enabled == true)
					Uncovertile(179);
			}
		}
		if (k != 0)
		{
			button164->Text = System::Convert::ToString(k);
		}
	}
	if (x == 165)
	{
		button165->Enabled = false;
		button165->Text = "";
		if (data[165] == 1)
		{
			button165->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button165->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[150] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (data[152] == 1)
				k++;
			if (data[164] == 1)
				k++;
			if (data[166] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (data[180] == 1)
				k++;
			if (k == 0)
			{
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button151->Enabled == true)
					Uncovertile(151);
				if (button152->Enabled == true)
					Uncovertile(152);
				if (button164->Enabled == true)
					Uncovertile(164);
				if (button166->Enabled == true)
					Uncovertile(166);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button179->Enabled == true)
					Uncovertile(179);
				if (button180->Enabled == true)
					Uncovertile(180);
			}
		}
		if (k != 0)
		{
			button165->Text = System::Convert::ToString(k);
		}

	}
	if (x == 166)
	{
		button166->Enabled = false;
		button166->Text = "";
		if (data[166] == 1)
		{
			button166->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button166->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[150] == 1)
				k++;
			if (data[151] == 1)
				k++;
			if (data[152] == 1)
				k++;
			if (data[165] == 1)
				k++;
			if (data[167] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (data[180] == 1)
				k++;
			if (data[181] == 1)
				k++;
			if (k == 0)
			{
				if (button150->Enabled == true)
					Uncovertile(150);
				if (button151->Enabled == true)
					Uncovertile(151);
				if (button152->Enabled == true)
					Uncovertile(152);
				if (button165->Enabled == true)
					Uncovertile(165);
				if (button167->Enabled == true)
					Uncovertile(167);
				if (button179->Enabled == true)
					Uncovertile(179);
				if (button180->Enabled == true)
					Uncovertile(180);
				if (button181->Enabled == true)
					Uncovertile(181);
			}
		}
		if (k != 0)
		{
			button166->Text = System::Convert::ToString(k);
		}

	}
	if (x == 167)
	{
		button167->Enabled = false;
		button167->Text = "";
		if (data[167] == 1)
		{
			button167->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;
			bomb = 1;
		}
		else
		{
			button167->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[152] == 1)
				k++;
			if (data[153] == 1)
				k++;
			if (data[154] == 1)
				k++;
			if (data[166] == 1)
				k++;
			if (data[168] == 1)
				k++;
			if (data[180] == 1)
				k++;
			if (data[181] == 1)
				k++;
			if (data[182] == 1)
				k++;
			if (k == 0)
			{
				if (button152->Enabled == true)
					Uncovertile(152);
				if (button153->Enabled == true)
					Uncovertile(153);
				if (button154->Enabled == true)
					Uncovertile(154);
				if (button166->Enabled == true)
					Uncovertile(166);
				if (button168->Enabled == true)
					Uncovertile(168);
				if (button180->Enabled == true)
					Uncovertile(180);
				if (button181->Enabled == true)
					Uncovertile(181);
				if (button182->Enabled == true)
					Uncovertile(182);
			}
		}
		if (k != 0)
		{
			button167->Text = System::Convert::ToString(k);
		}

	}
	if (x == 168)
	{
		button168->Enabled = false;
		button168->Text = "";
		if (data[168] == 1)
		{
			button168->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button168->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[153] == 1)
				k++;
			if (data[154] == 1)
				k++;
			if (data[167] == 1)
				k++;
			if (data[181] == 1)
				k++;
			if (data[182] == 1)
				k++;
			if (k == 0)
			{
				if (button153->Enabled == true)
					Uncovertile(153);
				if (button154->Enabled == true)
					Uncovertile(154);
				if (button167->Enabled == true)
					Uncovertile(167);
				if (button181->Enabled == true)
					Uncovertile(181);
				if (button182->Enabled == true)
					Uncovertile(182);
			}
		}
		if (k != 0)
		{
			button168->Text = System::Convert::ToString(k);
		}

	}
	if (x == 169)
	{
		button169->Enabled = false;
		button169->Text = "";
		if (data[169] == 1)
		{
			button169->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("You lose!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button169->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[155] == 1)
				k++;
			if (data[156] == 1)
				k++;
			if (data[170] == 1)
				k++;
			if (data[183] == 1)
				k++;
			if (data[184] == 1)
				k++;
			
			
			if (k == 0)
			{
				if (button155->Enabled == true)
					Uncovertile(155);
				if (button156->Enabled == true)
					Uncovertile(156);
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button183->Enabled == true)
					Uncovertile(183);
				if (button184->Enabled == true)
					Uncovertile(184);
				
			}
		}
		if (k != 0)
		{
			button169->Text = System::Convert::ToString(k);
		}

	}
	if (x == 170)
	{
		button170->Enabled = false;
		button170->Text = "";
		if (data[170] == 1)
		{
			button170->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button170->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[155] == 1)
				k++;
			if (data[156] == 1)
				k++;
			if (data[157] == 1)
				k++;
			if (data[169] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (data[183] == 1)
				k++;
			if (data[184] == 1)
				k++;
			if (data[185] == 1)
				k++;
			if (k == 0)
			{
				if (button155->Enabled == true)
					Uncovertile(155);
				if (button156->Enabled == true)
					Uncovertile(156);
				if (button157->Enabled == true)
					Uncovertile(157);
				if (button169->Enabled == true)
					Uncovertile(169);
				if (button171->Enabled == true)
					Uncovertile(171);
				if (button183->Enabled == true)
					Uncovertile(183);
				if (button184->Enabled == true)
					Uncovertile(184);
				if (button185->Enabled == true)
					Uncovertile(185);
			}
		}
		if (k != 0)
		{
			button170->Text = System::Convert::ToString(k);
		}
	}
	if (x == 171)
	{
		button171->Enabled = false;
		button171->Text = "";
		if (data[171] == 1)
		{
			button171->BackColor = System::Drawing::SystemColors::GrayText;
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button171->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[156] == 1)
				k++;
			if (data[157] == 1)
				k++;
			if (data[158] == 1)
				k++;
			if (data[170] == 1)
				k++;
			if (data[172] == 1)
				k++;
			if (data[184] == 1)
				k++;
			if (data[185] == 1)
				k++;
			if (data[186] == 1)
				k++;
			if (k == 0)
			{
				if (button156->Enabled == true)
					Uncovertile(156);
				if (button157->Enabled == true)
					Uncovertile(157);
				if (button158->Enabled == true)
					Uncovertile(158);
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button172->Enabled == true)
					Uncovertile(172);
				if (button184->Enabled == true)
					Uncovertile(184);
				if (button185->Enabled == true)
					Uncovertile(185);
				if (button186->Enabled == true)
					Uncovertile(186);
			}
		}
		if (k != 0)
		{
			button171->Text = System::Convert::ToString(k);
		}
	}
	if (x == 172)
	{
		button172->Enabled = false;
		button172->Text = "";
		if (data[172] == 1)
		{
			button172->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button172->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[157] == 1)
				k++;
			if (data[158] == 1)
				k++;
			if (data[159] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (data[173] == 1)
				k++;
			if (data[185] == 1)
				k++;
			if (data[186] == 1)
				k++;
			if (data[187] == 1)
				k++;
			if (k == 0)
			{
				if (button157->Enabled == true)
					Uncovertile(157);
				if (button158->Enabled == true)
					Uncovertile(158);
				if (button159->Enabled == true)
					Uncovertile(159);
				if (button171->Enabled == true)
					Uncovertile(171);
				if (button173->Enabled == true)
					Uncovertile(173);
				if (button185->Enabled == true)
					Uncovertile(185);
				if (button186->Enabled == true)
					Uncovertile(186);
				if (button187->Enabled == true)
					Uncovertile(187);
			}
		}
		if (k != 0)
		{
			button172->Text = System::Convert::ToString(k);
		}
	}
	if (x == 173)
	{
		button173->Enabled = false;
		button173->Text = "";
		if (data[173] == 1)
		{
			button173->BackColor = System::Drawing::SystemColors::GrayText;
			/*	label2->Text = "You lose!";
				label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button173->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[158] == 1)
				k++;
			if (data[159] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (data[172] == 1)
				k++;
			if (data[174] == 1)
				k++;
			if (data[186] == 1)
				k++;
			if (data[187] == 1)
				k++;
			if (data[188] == 1)
				k++;
			if (k == 0)
			{
				if (button158->Enabled == true)
					Uncovertile(158);
				if (button159->Enabled == true)
					Uncovertile(159);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button172->Enabled == true)
					Uncovertile(172);
				if (button174->Enabled == true)
					Uncovertile(174);
				if (button186->Enabled == true)
					Uncovertile(186);
				if (button187->Enabled == true)
					Uncovertile(187);
				if (button188->Enabled == true)
					Uncovertile(188);
			}
		}
		if (k != 0)
		{
			button173->Text = System::Convert::ToString(k);
		}
	}
	if (x == 174)
	{
		button174->Enabled = false;
		button174->Text = "";
		if (data[174] == 1)
		{
			button174->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button174->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[159] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (data[173] == 1)
				k++;
			if (data[175] == 1)
				k++;
			if (data[187] == 1)
				k++;
			if (data[188] == 1)
				k++;
			if (data[189] == 1)
				k++;
			
			if (k == 0)
			{
				if (button159->Enabled == true)
					Uncovertile(159);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button161->Enabled == true)
					Uncovertile(161);
				if (button173->Enabled == true)
					Uncovertile(173);
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button187->Enabled == true)
					Uncovertile(187);
				if (button188->Enabled == true)
					Uncovertile(188);
				if (button189->Enabled == true)
					Uncovertile(189);
				
			}
		}
		if (k != 0)
		{
			button174->Text = System::Convert::ToString(k);
		}
	}

	if (x == 175)
	{
		button175->Enabled = false;
		button175->Text = "";
		if (data[175] == 1)
		{
			button175->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button175->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[160] == 1)
				k++;
			if (data[162] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (data[174] == 1)
				k++;
			if (data[176] == 1)
				k++;
			if (data[188] == 1)
				k++;
			if (data[189] == 1)
				k++;
			if (data[190] == 1)
				k++;

			if (k == 0)
			{
				if (button162->Enabled == true)
					Uncovertile(162);
				if (button160->Enabled == true)
					Uncovertile(160);
				if (button161->Enabled == true)
					Uncovertile(161);
				if (button174->Enabled == true)
					Uncovertile(174);
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button190->Enabled == true)
					Uncovertile(190);
				if (button188->Enabled == true)
					Uncovertile(188);
				if (button189->Enabled == true)
					Uncovertile(189);

			}
		}
		if (k != 0)
		{
			button175->Text = System::Convert::ToString(k);
		}
	}

	if (x == 176)
	{
		button176->Enabled = false;
		button176->Text = "";
		if (data[176] == 1)
		{
			button176->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button176->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[163] == 1)
				k++;
			if (data[162] == 1)
				k++;
			if (data[161] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (data[175] == 1)
				k++;
			if (data[189] == 1)
				k++;
			if (data[190] == 1)
				k++;
			if (data[191] == 1)
				k++;

			if (k == 0)
			{
				if (button163->Enabled == true)
					Uncovertile(163);
				if (button162->Enabled == true)
					Uncovertile(162);
				if (button161->Enabled == true)
					Uncovertile(161);
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button190->Enabled == true)
					Uncovertile(190);
				if (button191->Enabled == true)
					Uncovertile(191);
				if (button189->Enabled == true)
					Uncovertile(189);

			}
		}
		if (k != 0)
		{
			button176->Text = System::Convert::ToString(k);
		}
	}

	if (x == 177)
	{
		button177->Enabled = false;
		button177->Text = "";
		if (data[177] == 1)
		{
			button177->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button177->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[162] == 1)
				k++;
			if (data[163] == 1)
				k++;
			if (data[164] == 1)
				k++;
			if (data[176] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[190] == 1)
				k++;
			if (data[191] == 1)
				k++;
			if (data[192] == 1)
				k++;

			if (k == 0)
			{
				if (button162->Enabled == true)
					Uncovertile(162);
				if (button163->Enabled == true)
					Uncovertile(163);
				if (button164->Enabled == true)
					Uncovertile(164);
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button190->Enabled == true)
					Uncovertile(190);
				if (button191->Enabled == true)
					Uncovertile(191);
				if (button192->Enabled == true)
					Uncovertile(192);

			}
		}
		if (k != 0)
		{
			button177->Text = System::Convert::ToString(k);
		}
	}


	if (x == 178)
	{
		button178->Enabled = false;
		button178->Text = "";
		if (data[178] == 1)
		{
			button178->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button178->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[163] == 1)
				k++;
			if (data[164] == 1)
				k++;
			if (data[165] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (data[191] == 1)
				k++;
			if (data[192] == 1)
				k++;
			if (data[193] == 1)
				k++;

			if (k == 0)
			{
				if (button163->Enabled == true)
					Uncovertile(163);
				if (button164->Enabled == true)
					Uncovertile(164);
				if (button165->Enabled == true)
					Uncovertile(165);
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button179->Enabled == true)
					Uncovertile(179);
				if (button191->Enabled == true)
					Uncovertile(191);
				if (button192->Enabled == true)
					Uncovertile(192);
				if (button193->Enabled == true)
					Uncovertile(193);

			}
		}
		if (k != 0)
		{
			button178->Text = System::Convert::ToString(k);
		}
	}




	if (x == 179)
	{
		button179->Enabled = false;
		button179->Text = "";
		if (data[179] == 1)
		{
			button179->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button179->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[164] == 1)
				k++;
			if (data[165] == 1)
				k++;
			if (data[166] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[180] == 1)
				k++;
			if (data[192] == 1)
				k++;
			if (data[193] == 1)
				k++;
			if (data[194] == 1)
				k++;

			if (k == 0)
			{
				if (button164->Enabled == true)
					Uncovertile(164);
				if (button165->Enabled == true)
					Uncovertile(165);
				if (button166->Enabled == true)
					Uncovertile(166);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button180->Enabled == true)
					Uncovertile(80);
				if (button192->Enabled == true)
					Uncovertile(192);
				if (button193->Enabled == true)
					Uncovertile(193);
				if (button194->Enabled == true)
					Uncovertile(194);

			}
		}
		if (k != 0)
		{
			button179->Text = System::Convert::ToString(k);
		}
	}


	if (x == 180)
	{
		button180->Enabled = false;
		button180->Text = "";
		if (data[180] == 1)
		{
			button180->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button180->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[165] == 1)
				k++;
			if (data[166] == 1)
				k++;
			if (data[167] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (data[181] == 1)
				k++;
			if (data[193] == 1)
				k++;
			if (data[194] == 1)
				k++;
			if (data[195] == 1)
				k++;

			if (k == 0)
			{
				if (button165->Enabled == true)
					Uncovertile(165);
				if (button166->Enabled == true)
					Uncovertile(166);
				if (button167->Enabled == true)
					Uncovertile(167);
				if (button179->Enabled == true)
					Uncovertile(179);
				if (button181->Enabled == true)
					Uncovertile(181);
				if (button193->Enabled == true)
					Uncovertile(193);
				if (button194->Enabled == true)
					Uncovertile(194);
				if (button195->Enabled == true)
					Uncovertile(195);

			}
		}
		if (k != 0)
		{
			button180->Text = System::Convert::ToString(k);
		}
	}


	if (x == 181)
	{
		button181->Enabled = false;
		button181->Text = "";
		if (data[181] == 1)
		{
			button181->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button181->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[166] == 1)
				k++;
			if (data[167] == 1)
				k++;
			if (data[168] == 1)
				k++;
			if (data[180] == 1)
				k++;
			if (data[182] == 1)
				k++;
			if (data[194] == 1)
				k++;
			if (data[195] == 1)
				k++;
			if (data[196] == 1)
				k++;

			if (k == 0)
			{
				if (button166->Enabled == true)
					Uncovertile(166);
				if (button167->Enabled == true)
					Uncovertile(167);
				if (button168->Enabled == true)
					Uncovertile(168);
				if (button180->Enabled == true)
					Uncovertile(180);
				if (button182->Enabled == true)
					Uncovertile(182);
				if (button194->Enabled == true)
					Uncovertile(194);
				if (button195->Enabled == true)
					Uncovertile(195);
				if (button196->Enabled == true)
					Uncovertile(196);

			}
		}
		if (k != 0)
		{
			button181->Text = System::Convert::ToString(k);
		}
	}



	if (x == 182)
	{
		button182->Enabled = false;
		button182->Text = "";
		if (data[182] == 1)
		{
			button182->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button182->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[168] == 1)
				k++;
			if (data[169] == 1)
				k++;
			if (data[181] == 1)
				k++;
			if (data[195] == 1)
				k++;
			if (data[196] == 1)
				k++;
			

			if (k == 0)
			{
				if (button168->Enabled == true)
					Uncovertile(168);
				if (button169->Enabled == true)
					Uncovertile(169);
				if (button181->Enabled == true)
					Uncovertile(181);
				if (button195->Enabled == true)
					Uncovertile(195);
				if (button196->Enabled == true)
					Uncovertile(196);
				

			}
		}
		if (k != 0)
		{
			button182->Text = System::Convert::ToString(k);
		}
	}

	/*-------------------------------------------------------------------*/
	if (x == 183)
	{
		button183->Enabled = false;
		button183->Text = "";
		if (data[183] == 1)
		{
			button183->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button183->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[169] == 1)
				k++;
			if (data[170] == 1)
				k++;
			if (data[184] == 1)
				k++;
			
			

			if (k == 0)
			{
				if (button169->Enabled == true)
					Uncovertile(169);
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button184->Enabled == true)
					Uncovertile(184);
				
				

			}
		}
		if (k != 0)
		{
			button183->Text = System::Convert::ToString(k);
		}
	}

	if (x == 184)
	{
		button184->Enabled = false;
		button184->Text = "";
		if (data[184] == 1)
		{
			button184->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button184->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[169] == 1)
				k++;
			if (data[170] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (data[183] == 1)
				k++;
			if (data[185] == 1)
				k++;
			

			if (k == 0)
			{
				if (button169->Enabled == true)
					Uncovertile(169);
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button171->Enabled == true)
					Uncovertile(171);
				if (button183->Enabled == true)
					Uncovertile(183);
				if (button185->Enabled == true)
					Uncovertile(185);
			

			}
		}
		if (k != 0)
		{
			button184->Text = System::Convert::ToString(k);
		}
	}



	if (x == 185)
	{
		button185->Enabled = false;
		button185->Text = "";
		if (data[185] == 1)
		{
			button185->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button185->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[170] == 1)
				k++;
			if (data[171] == 1)
				k++;
			if (data[172] == 1)
				k++;
			
			if (data[184] == 1)
				k++;
			if (data[186] == 1)
				k++;
			

			if (k == 0)
			{
				if (button170->Enabled == true)
					Uncovertile(170);
				if (button171->Enabled == true)
					Uncovertile(171);
				if (button172->Enabled == true)
					Uncovertile(172);
				if (button184->Enabled == true)
					Uncovertile(184);
				if (button186->Enabled == true)
					Uncovertile(186);
				

			}
		}
		if (k != 0)
		{
			button185->Text = System::Convert::ToString(k);
		}
	}



	if (x == 186)
	{
		button186->Enabled = false;
		button186->Text = "";
		if (data[186] == 1)
		{
			button186->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button186->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[171] == 1)
				k++;
			if (data[172] == 1)
				k++;
			if (data[173] == 1)
				k++;
			if (data[185] == 1)
				k++;
			if (data[187] == 1)
				k++;
			

			if (k == 0)
			{
				if (button171->Enabled == true)
					Uncovertile(171);
				if (button172->Enabled == true)
					Uncovertile(172);
				if (button173->Enabled == true)
					Uncovertile(173);
				if (button185->Enabled == true)
					Uncovertile(185);
				if (button187->Enabled == true)
					Uncovertile(187);
				

			}
		}
		if (k != 0)
		{
			button186->Text = System::Convert::ToString(k);
		}
	}


	if (x == 187)
	{
		button187->Enabled = false;
		button187->Text = "";
		if (data[187] == 1)
		{
			button187->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button187->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[172] == 1)
				k++;
			if (data[173] == 1)
				k++;
			if (data[174] == 1)
				k++;
			if (data[186] == 1)
				k++;
			if (data[188] == 1)
				k++;
			

			if (k == 0)
			{
				if (button172->Enabled == true)
					Uncovertile(172);
				if (button173->Enabled == true)
					Uncovertile(173);
				if (button174->Enabled == true)
					Uncovertile(174);
				if (button186->Enabled == true)
					Uncovertile(186);
				if (button188->Enabled == true)
					Uncovertile(188);
				

			}
		}
		if (k != 0)
		{
			button187->Text = System::Convert::ToString(k);
		}
	}




	if (x == 188)
	{
		button188->Enabled = false;
		button188->Text = "";
		if (data[188] == 1)
		{
			button188->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button188->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[173] == 1)
				k++;
			if (data[174] == 1)
				k++;
			if (data[175] == 1)
				k++;
			if (data[189] == 1)
				k++;
			if (data[187] == 1)
				k++;
			

			if (k == 0)
			{
				if (button173->Enabled == true)
					Uncovertile(173);
				if (button174->Enabled == true)
					Uncovertile(174);
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button189->Enabled == true)
					Uncovertile(189);
				if (button187->Enabled == true)
					Uncovertile(187);
				

			}
		}
		if (k != 0)
		{
			button188->Text = System::Convert::ToString(k);
		}
	}

	if (x == 189)
	{
		button189->Enabled = false;
		button189->Text = "";
		if (data[189] == 1)
		{
			button189->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button189->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[174] == 1)
				k++;
			if (data[175] == 1)
				k++;
			if (data[176] == 1)
				k++;
			if (data[188] == 1)
				k++;
			if (data[190] == 1)
				k++;


			if (k == 0)
			{
				if (button174->Enabled == true)
					Uncovertile(174);
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button188->Enabled == true)
					Uncovertile(188);
				if (button190->Enabled == true)
					Uncovertile(190);


			}
		}
		if (k != 0)
		{
			button189->Text = System::Convert::ToString(k);
		}
	}

	if (x == 190)
	{
		button190->Enabled = false;
		button190->Text = "";
		if (data[190] == 1)
		{
			button190->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button190->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[175] == 1)
				k++;
			if (data[176] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (data[190] == 1)
				k++;
			if (data[191] == 1)
				k++;


			if (k == 0)
			{
				if (button175->Enabled == true)
					Uncovertile(175);
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button190->Enabled == true)
					Uncovertile(190);
				if (button191->Enabled == true)
					Uncovertile(191);


			}
		}
		if (k != 0)
		{
			button190->Text = System::Convert::ToString(k);
		}
	}


	if (x == 191)
	{
		button191->Enabled = false;
		button191->Text = "";
		if (data[191] == 1)
		{
			button191->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button191->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[176] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[190] == 1)
				k++;
			if (data[192] == 1)
				k++;


			if (k == 0)
			{
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button190->Enabled == true)
					Uncovertile(190);
				if (button192->Enabled == true)
					Uncovertile(192);


			}
		}
		if (k != 0)
		{
			button191->Text = System::Convert::ToString(k);
		}
	}

	if (x == 192)
	{
		button192->Enabled = false;
		button192->Text = "";
		if (data[192] == 1)
		{
			button192->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button192->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[177] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (data[193] == 1)
				k++;
			if (data[191] == 1)
				k++;


			if (k == 0)
			{
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button179->Enabled == true)
					Uncovertile(179);
				if (button193->Enabled == true)
					Uncovertile(193);
				if (button191->Enabled == true)
					Uncovertile(191);


			}
		}
		if (k != 0)
		{
			button192->Text = System::Convert::ToString(k);
		}
	}

	if (x == 193)
	{
		button193->Enabled = false;
		button193->Text = "";
		if (data[193] == 1)
		{
			button193->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button193->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[176] == 1)
				k++;
			if (data[177] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[194] == 1)
				k++;
			if (data[192] == 1)
				k++;


			if (k == 0)
			{
				if (button176->Enabled == true)
					Uncovertile(176);
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button194->Enabled == true)
					Uncovertile(194);
				if (button192->Enabled == true)
					Uncovertile(192);


			}
		}
		if (k != 0)
		{
			button193->Text = System::Convert::ToString(k);
		}
	}

	if (x == 194)
	{
		button194->Enabled = false;
		button194->Text = "";
		if (data[194] == 1)
		{
			button194->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button194->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[177] == 1)
				k++;
			if (data[178] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (data[195] == 1)
				k++;
			if (data[193] == 1)
				k++;


			if (k == 0)
			{
				if (button177->Enabled == true)
					Uncovertile(177);
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button179->Enabled == true)
					Uncovertile(179);
				if (button195->Enabled == true)
					Uncovertile(195);
				if (button193->Enabled == true)
					Uncovertile(193);


			}
		}
		if (k != 0)
		{
			button194->Text = System::Convert::ToString(k);
		}
	}

	if (x == 195)
	{
		button195->Enabled = false;
		button195->Text = "";
		if (data[195] == 1)
		{
			button195->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button195->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[178] == 1)
				k++;
			if (data[179] == 1)
				k++;
			if (data[160] == 1)
				k++;
			if (data[196] == 1)
				k++;
			if (data[194] == 1)
				k++;


			if (k == 0)
			{
				if (button178->Enabled == true)
					Uncovertile(178);
				if (button179->Enabled == true)
					Uncovertile(179);
				if (button160->Enabled == true)
					Uncovertile(180);
				if (button196->Enabled == true)
					Uncovertile(196);
				if (button194->Enabled == true)
					Uncovertile(194);


			}
		}
		if (k != 0)
		{
			button195->Text = System::Convert::ToString(k);
		}
	}


	if (x == 196)
	{
		button196->Enabled = false;
		button196->Text = "";
		if (data[196] == 1)
		{
			button196->BackColor = System::Drawing::SystemColors::GrayText;
			/*label2->Text = "You lose!";
			label2->ForeColor = System::Drawing::Color::Red;*/
			MessageBox::Show("GAME OVER", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox1->Visible = false;

			bomb = 1;
		}
		else
		{
			button196->BackColor = System::Drawing::SystemColors::ControlLightLight;
			if (data[181] == 1)
				k++;
			if (data[182] == 1)
				k++;
			if (data[195] == 1)
				k++;
			


			if (k == 0)
			{
				if (button181->Enabled == true)
					Uncovertile(181);
				if (button182->Enabled == true)
					Uncovertile(182);
				if (button195->Enabled == true)
					Uncovertile(195);
				


			}
		}
		if (k != 0)
		{
			button196->Text = System::Convert::ToString(k);
		}
	}


	if (move == 145 && bomb == 0 && Second < 30)//29= nb de case - nbmines
	{
		MessageBox::Show("You Win!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
		checkBox1->Visible = false;
		/*label2->Text = "You Win!";
		label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;*/
		Win();
	}
	if (bomb != 0 )
		Lose();



	}





public: Void Bombs()
{

	for (int i = 0; i < 200; i++)
	{
		data[i] = 0;
	}
	int k = 1;
	srand(time(NULL));
	while (k <= 15)
	{

		int c = rand() % 196 + 1;
		if (data[c + 1] == 0)
		{
			data[c + 1] = 1;
			k++;
		}
	}
}
	  private:
		  System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		  {
			  if (checkBox1->Checked == true)
			  {
				  button1->BackgroundImage = imageList1->Images[1];
				  button1->BackgroundImageLayout = ImageLayout::Stretch;
			  }
			  else
				  Uncovertile(1);
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
				System::Void button101_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button101->BackgroundImage = imageList1->Images[1];
						button101->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(101);
				}
				private:
					System::Void button102_Click(System::Object^ sender, System::EventArgs^ e)
					{
						if (checkBox1->Checked == true)
						{
							button102->BackgroundImage = imageList1->Images[1];
							button102->BackgroundImageLayout = ImageLayout::Stretch;
						}
						else
							Uncovertile(102);
					}

			private:
				System::Void button103_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button103->BackgroundImage = imageList1->Images[1];
						button103->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(103);
				}

			private:
				System::Void button104_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button104->BackgroundImage = imageList1->Images[1];
						button104->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(104);
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

			private:
				System::Void button106_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button106->BackgroundImage = imageList1->Images[1];
						button106->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(106);
				}

			private:
				System::Void button107_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button107->BackgroundImage = imageList1->Images[1];
						button107->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(107);
				}

			private:
				System::Void button108_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button108->BackgroundImage = imageList1->Images[1];
						button108->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(108);
				}

			private:
				System::Void button109_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button109->BackgroundImage = imageList1->Images[1];
						button109->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(109);
				}

			private:
				System::Void button110_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button110->BackgroundImage = imageList1->Images[1];
						button110->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(110);
				}

			private:
				System::Void button111_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button111->BackgroundImage = imageList1->Images[1];
						button111->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(111);
				}

			private:
				System::Void button112_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button112->BackgroundImage = imageList1->Images[1];
						button112->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(112);
				}

			private:
				System::Void button113_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button113->BackgroundImage = imageList1->Images[1];
						button113->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(113);
				}

			private:
				System::Void button114_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button114->BackgroundImage = imageList1->Images[1];
						button114->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(114);
				}

			private:
				System::Void button115_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button115->BackgroundImage = imageList1->Images[1];
						button115->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(115);
				}

			private:
				System::Void button116_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button116->BackgroundImage = imageList1->Images[1];
						button116->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(116);
				}

			private:
				System::Void button117_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button117->BackgroundImage = imageList1->Images[1];
						button117->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(117);
				}

			private:
				System::Void button118_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button118->BackgroundImage = imageList1->Images[1];
						button118->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(118);
				}

			private:
				System::Void button119_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button119->BackgroundImage = imageList1->Images[1];
						button119->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(119);
				}

			private:
				System::Void button120_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button120->BackgroundImage = imageList1->Images[1];
						button120->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(120);
				}

			private:
				System::Void button121_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button121->BackgroundImage = imageList1->Images[1];
						button121->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(121);
				}

			private:
				System::Void button122_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button122->BackgroundImage = imageList1->Images[1];
						button122->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(122);
				}

			private:
				System::Void button123_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button123->BackgroundImage = imageList1->Images[1];
						button123->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(123);
				}

			private:
				System::Void button124_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button124->BackgroundImage = imageList1->Images[1];
						button124->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(124);
				}

			private:
				System::Void button125_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button125->BackgroundImage = imageList1->Images[1];
						button125->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(125);
				}

			private:
				System::Void button126_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button126->BackgroundImage = imageList1->Images[1];
						button126->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(126);
				}

			private:
				System::Void button127_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button127->BackgroundImage = imageList1->Images[1];
						button127->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(127);
				}

			private:
				System::Void button128_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button128->BackgroundImage = imageList1->Images[1];
						button128->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(128);
				}

			private:
				System::Void button129_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button129->BackgroundImage = imageList1->Images[1];
						button129->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(129);
				}

			private:
				System::Void button130_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button130->BackgroundImage = imageList1->Images[1];
						button130->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(130);
				}

			private:
				System::Void button131_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button131->BackgroundImage = imageList1->Images[1];
						button131->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(131);
				}

			private:
				System::Void button132_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button132->BackgroundImage = imageList1->Images[1];
						button132->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(132);
				}

			private:
				System::Void button133_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button133->BackgroundImage = imageList1->Images[1];
						button133->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(133);
				}

			private:
				System::Void button134_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button134->BackgroundImage = imageList1->Images[1];
						button134->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(134);
				}

			private:
				System::Void button135_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button135->BackgroundImage = imageList1->Images[1];
						button135->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(135);
				}

			private:
				System::Void button136_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button136->BackgroundImage = imageList1->Images[1];
						button136->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(136);
				}

			private:
				System::Void button137_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button137->BackgroundImage = imageList1->Images[1];
						button137->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(137);
				}

			private:
				System::Void button138_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button138->BackgroundImage = imageList1->Images[1];
						button138->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(138);
				}

			private:
				System::Void button139_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button139->BackgroundImage = imageList1->Images[1];
						button139->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(139);
				}

			private:
				System::Void button140_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button140->BackgroundImage = imageList1->Images[1];
						button140->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(140);
				}

			private:
				System::Void button141_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button141->BackgroundImage = imageList1->Images[1];
						button141->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(141);
				}

			private:
				System::Void button142_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button142->BackgroundImage = imageList1->Images[1];
						button142->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(142);
				}

			private:
				System::Void button143_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button143->BackgroundImage = imageList1->Images[1];
						button143->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(143);
				}

			private:
				System::Void button144_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button144->BackgroundImage = imageList1->Images[1];
						button144->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(144);
				}

			private:
				System::Void button145_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button145->BackgroundImage = imageList1->Images[1];
						button145->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(145);
				}

			private:
				System::Void button146_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button146->BackgroundImage = imageList1->Images[1];
						button146->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(146);
				}

			private:
				System::Void button147_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button147->BackgroundImage = imageList1->Images[1];
						button147->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(147);
				}

			private:
				System::Void button148_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button148->BackgroundImage = imageList1->Images[1];
						button148->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(148);
				}

			private:
				System::Void button149_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button149->BackgroundImage = imageList1->Images[1];
						button149->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(149);
				}

			private:
				System::Void button150_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button150->BackgroundImage = imageList1->Images[1];
						button150->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(150);
				}

			private:
				System::Void button151_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button151->BackgroundImage = imageList1->Images[1];
						button151->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(151);
				}

			private:
				System::Void button152_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button152->BackgroundImage = imageList1->Images[1];
						button152->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(152);
				}

			private:
				System::Void button153_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button153->BackgroundImage = imageList1->Images[1];
						button153->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(153);
				}

			private:
				System::Void button154_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button154->BackgroundImage = imageList1->Images[1];
						button154->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(154);
				}

			private:
				System::Void button155_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button155->BackgroundImage = imageList1->Images[1];
						button155->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(155);
				}

			private:
				System::Void button156_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button156->BackgroundImage = imageList1->Images[1];
						button156->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(156);
				}

			private:
				System::Void button157_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button157->BackgroundImage = imageList1->Images[1];
						button157->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(157);
				}

			private:
				System::Void button158_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button158->BackgroundImage = imageList1->Images[1];
						button158->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(158);
				}

			private:
				System::Void button159_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button159->BackgroundImage = imageList1->Images[1];
						button159->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(159);
				}

			private:
				System::Void button160_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button160->BackgroundImage = imageList1->Images[1];
						button160->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(160);
				}

			private:
				System::Void button161_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button161->BackgroundImage = imageList1->Images[1];
						button161->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(161);
				}

			private:
				System::Void button162_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button162->BackgroundImage = imageList1->Images[1];
						button162->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(162);
				}

			private:
				System::Void button163_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button163->BackgroundImage = imageList1->Images[1];
						button163->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(163);
				}

			private:
				System::Void button164_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button164->BackgroundImage = imageList1->Images[1];
						button164->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(164);
				}

			private:
				System::Void button165_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button165->BackgroundImage = imageList1->Images[1];
						button165->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(165);
				}

			private:
				System::Void button166_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button166->BackgroundImage = imageList1->Images[1];
						button166->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(166);
				}

			private:
				System::Void button167_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button167->BackgroundImage = imageList1->Images[1];
						button167->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(167);
				}

			private:
				System::Void button168_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button168->BackgroundImage = imageList1->Images[1];
						button168->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(168);
				}

			private:
				System::Void button169_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button169->BackgroundImage = imageList1->Images[1];
						button169->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(169);
				}

			private:
				System::Void button170_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button170->BackgroundImage = imageList1->Images[1];
						button170->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(170);
				}

			private:
				System::Void button171_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button171->BackgroundImage = imageList1->Images[1];
						button171->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(171);
				}

			private:
				System::Void button172_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button172->BackgroundImage = imageList1->Images[1];
						button172->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(172);
				}

			private:
				System::Void button173_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button173->BackgroundImage = imageList1->Images[1];
						button173->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(173);
				}

			private:
				System::Void button174_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button174->BackgroundImage = imageList1->Images[1];
						button174->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(174);
				}

			private:
				System::Void button175_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button175->BackgroundImage = imageList1->Images[1];
						button175->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(175);
				}

			private:
				System::Void button176_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button176->BackgroundImage = imageList1->Images[1];
						button176->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(176);
				}

			private:
				System::Void button177_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button177->BackgroundImage = imageList1->Images[1];
						button177->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(177);
				}

			private:
				System::Void button178_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button178->BackgroundImage = imageList1->Images[1];
						button178->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(178);
				}

			private:
				System::Void button179_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button179->BackgroundImage = imageList1->Images[1];
						button179->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(179);
				}

			private:
				System::Void button180_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button180->BackgroundImage = imageList1->Images[1];
						button180->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(180);
				}

			private:
				System::Void button181_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button181->BackgroundImage = imageList1->Images[1];
						button181->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(181);
				}

			private:
				System::Void button182_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button182->BackgroundImage = imageList1->Images[1];
						button182->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(182);
				}

			private:
				System::Void button183_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button183->BackgroundImage = imageList1->Images[1];
						button183->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(183);
				}

			private:
				System::Void button184_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button184->BackgroundImage = imageList1->Images[1];
						button184->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(184);
				}

			private:
				System::Void button185_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button185->BackgroundImage = imageList1->Images[1];
						button185->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(185);
				}

			private:
				System::Void button186_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button186->BackgroundImage = imageList1->Images[1];
						button186->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(186);
				}

			private:
				System::Void button187_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button187->BackgroundImage = imageList1->Images[1];
						button187->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(187);
				}

			private:
				System::Void button188_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button188->BackgroundImage = imageList1->Images[1];
						button188->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(188);
				}

			private:
				System::Void button189_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button189->BackgroundImage = imageList1->Images[1];
						button189->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(189);
				}

			private:
				System::Void button190_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button190->BackgroundImage = imageList1->Images[1];
						button190->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(190);
				}

			private:
				System::Void button191_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button191->BackgroundImage = imageList1->Images[1];
						button191->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(191);
				}

			private:
				System::Void button192_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button192->BackgroundImage = imageList1->Images[1];
						button192->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(192);
				}

			private:
				System::Void button193_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button193->BackgroundImage = imageList1->Images[1];
						button193->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(193);
				}

			private:
				System::Void button194_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button194->BackgroundImage = imageList1->Images[1];
						button194->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(194);
				}

			private:
				System::Void button195_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button195->BackgroundImage = imageList1->Images[1];
						button195->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(195);
				}

			private:
				System::Void button196_Click(System::Object^ sender, System::EventArgs^ e)
				{
					if (checkBox1->Checked == true)
					{
						button196->BackgroundImage = imageList1->Images[1];
						button196->BackgroundImageLayout = ImageLayout::Stretch;
					}
					else
						Uncovertile(196);
				}

			








/*	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button154_Click(System::Object^ sender, System::EventArgs^ e) {
}


*/
private: System::Void button198_Click(System::Object^ sender, System::EventArgs^ e) {


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
	button101->Visible = true;
	button102->Visible = true;
	button103->Visible = true;
	button104->Visible = true;
	button105->Visible = true;
	button106->Visible = true;
	button107->Visible = true;
	button108->Visible = true;
	button109->Visible = true;
	button110->Visible = true;
	button111->Visible = true;
	button112->Visible = true;
	button113->Visible = true;
	button114->Visible = true;
	button115->Visible = true;
	button116->Visible = true;
	button117->Visible = true;
	button118->Visible = true;
	button119->Visible = true;
	button120->Visible = true;
	button121->Visible = true;
	button122->Visible = true;
	button123->Visible = true;
	button124->Visible = true;
	button125->Visible = true;
	button126->Visible = true;
	button127->Visible = true;
	button128->Visible = true;
	button129->Visible = true;
	button130->Visible = true;
	button131->Visible = true;
	button132->Visible = true;
	button133->Visible = true;
	button134->Visible = true;
	button135->Visible = true;
	button136->Visible = true;
	button137->Visible = true;
	button138->Visible = true;
	button139->Visible = true;
	button140->Visible = true;
	button141->Visible = true;
	button142->Visible = true;
	button143->Visible = true;
	button144->Visible = true;
	button145->Visible = true;
	button146->Visible = true;
	button147->Visible = true;
	button148->Visible = true;
	button149->Visible = true;
	button150->Visible = true;
	button151->Visible = true;
	button152->Visible = true;
	button153->Visible = true;
	button154->Visible = true;
	button155->Visible = true;
	button156->Visible = true;
	button157->Visible = true;
	button158->Visible = true;
	button159->Visible = true;
	button160->Visible = true;
	button161->Visible = true;
	button162->Visible = true;
	button163->Visible = true;
	button164->Visible = true;
	button165->Visible = true;
	button166->Visible = true;
	button167->Visible = true;
	button168->Visible = true;
	button169->Visible = true;
	button170->Visible = true;
	button171->Visible = true;
	button172->Visible = true;
	button173->Visible = true;
	button174->Visible = true;
	button175->Visible = true;
	button176->Visible = true;
	button177->Visible = true;
	button178->Visible = true;
	button179->Visible = true;
	button180->Visible = true;
	button181->Visible = true;
	button182->Visible = true;
	button183->Visible = true;
	button184->Visible = true;
	button185->Visible = true;
	button186->Visible = true;
	button187->Visible = true;
	button188->Visible = true;
	button189->Visible = true;
	button190->Visible = true;
	button191->Visible = true;
	button192->Visible = true;
	button193->Visible = true;
	button194->Visible = true;
	button195->Visible = true;
	button196->Visible = true;

	checkBox1->Visible = true;

	button198->Enabled = false;
	button198->Visible = false;



}



private: System::Void button197_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Restart();
}
/*private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
}*/
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
/*private: System::Void button126_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button100_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button184_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button69_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button70_Click(System::Object^ sender, System::EventArgs^ e) {
}*/
};
}
