#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <iomanip>
#include "Account.h" // yahan Managed Account ki class 

namespace ATM_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			activeAccount = nullptr;
			isDepositMode = false;
		}

	protected:
		~MyForm()
		{
			if (components) { delete components; }
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnSignup;

		   // Main Menu Panel
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;

		   // Transaction Panel
	private: System::Windows::Forms::Panel^ panelTx;
	private: System::Windows::Forms::Label^ lblTxTitle;
	private: System::Windows::Forms::Button^ btnAmt1;
	private: System::Windows::Forms::Button^ btnAmt2;
	private: System::Windows::Forms::Button^ btnAmt3;
	private: System::Windows::Forms::Button^ btnAmt4;
	private: System::Windows::Forms::TextBox^ txtCustomAmt;
	private: System::Windows::Forms::Label^ lblCustom;
	private: System::Windows::Forms::Button^ btnSubmitTx;
	private: System::Windows::Forms::Button^ btnBackToMenu;

		   // Registration Panel
	private: System::Windows::Forms::Panel^ panelReg;
	private: System::Windows::Forms::Label^ lblRegTitle;
	private: System::Windows::Forms::Label^ lblFullName;
	private: System::Windows::Forms::TextBox^ txtFullName;
	private: System::Windows::Forms::Label^ lblMobile;
	private: System::Windows::Forms::TextBox^ txtMobile;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ lblPurpose;
	private: System::Windows::Forms::TextBox^ txtPurpose;
	private: System::Windows::Forms::Label^ lblRegPin;
	private: System::Windows::Forms::TextBox^ txtRegPin;
	private: System::Windows::Forms::Label^ lblConfirmPin;
	private: System::Windows::Forms::TextBox^ txtConfirmPin;
	private: System::Windows::Forms::Button^ btnRegisterSubmit;
	private: System::Windows::Forms::Button^ btnRegisterCancel;

	private: System::ComponentModel::Container^ components;

		   ManagedAccount^ activeAccount; // dusri file sy class ka data import krny k liye
	private: System::Windows::Forms::Label^ label4;
		   bool isDepositMode;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->btnSignup = (gcnew System::Windows::Forms::Button());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->panelTx = (gcnew System::Windows::Forms::Panel());
			   this->lblTxTitle = (gcnew System::Windows::Forms::Label());
			   this->btnAmt1 = (gcnew System::Windows::Forms::Button());
			   this->btnAmt2 = (gcnew System::Windows::Forms::Button());
			   this->btnAmt3 = (gcnew System::Windows::Forms::Button());
			   this->btnAmt4 = (gcnew System::Windows::Forms::Button());
			   this->lblCustom = (gcnew System::Windows::Forms::Label());
			   this->txtCustomAmt = (gcnew System::Windows::Forms::TextBox());
			   this->btnSubmitTx = (gcnew System::Windows::Forms::Button());
			   this->btnBackToMenu = (gcnew System::Windows::Forms::Button());
			   this->panelReg = (gcnew System::Windows::Forms::Panel());
			   this->lblRegTitle = (gcnew System::Windows::Forms::Label());
			   this->lblFullName = (gcnew System::Windows::Forms::Label());
			   this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			   this->lblMobile = (gcnew System::Windows::Forms::Label());
			   this->txtMobile = (gcnew System::Windows::Forms::TextBox());
			   this->lblEmail = (gcnew System::Windows::Forms::Label());
			   this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			   this->lblPurpose = (gcnew System::Windows::Forms::Label());
			   this->txtPurpose = (gcnew System::Windows::Forms::TextBox());
			   this->lblRegPin = (gcnew System::Windows::Forms::Label());
			   this->txtRegPin = (gcnew System::Windows::Forms::TextBox());
			   this->lblConfirmPin = (gcnew System::Windows::Forms::Label());
			   this->txtConfirmPin = (gcnew System::Windows::Forms::TextBox());
			   this->btnRegisterSubmit = (gcnew System::Windows::Forms::Button());
			   this->btnRegisterCancel = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->panel1->SuspendLayout();
			   this->panelTx->SuspendLayout();
			   this->panelReg->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->Location = System::Drawing::Point(113, 144);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(100, 20);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"Account Number:";
			   // 
			   // label2
			   // 
			   this->label2->Location = System::Drawing::Point(134, 203);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(100, 20);
			   this->label2->TabIndex = 7;
			   this->label2->Text = L"PIN Code:";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(281, 144);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(150, 20);
			   this->textBox1->TabIndex = 6;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(281, 203);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(150, 20);
			   this->textBox2->TabIndex = 5;
			   this->textBox2->UseSystemPasswordChar = true;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(161, 260);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(90, 30);
			   this->button1->TabIndex = 4;
			   this->button1->Text = L"Login";
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // btnSignup
			   // 
			   this->btnSignup->Location = System::Drawing::Point(311, 260);
			   this->btnSignup->Name = L"btnSignup";
			   this->btnSignup->Size = System::Drawing::Size(110, 30);
			   this->btnSignup->TabIndex = 3;
			   this->btnSignup->Text = L"Create Account";
			   this->btnSignup->Click += gcnew System::EventHandler(this, &MyForm::btnSignup_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->panel1->Controls->Add(this->button5);
			   this->panel1->Controls->Add(this->button4);
			   this->panel1->Controls->Add(this->button3);
			   this->panel1->Controls->Add(this->button2);
			   this->panel1->Controls->Add(this->label3);
			   this->panel1->Location = System::Drawing::Point(63, 35);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(550, 400);
			   this->panel1->TabIndex = 2;
			   this->panel1->Visible = false;
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(300, 233);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(160, 40);
			   this->button5->TabIndex = 0;
			   this->button5->Text = L"Log Out";
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(60, 233);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(160, 40);
			   this->button4->TabIndex = 1;
			   this->button4->Text = L"Withdraw Cash";
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(300, 153);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(160, 40);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"Deposit Cash";
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(60, 153);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(160, 40);
			   this->button2->TabIndex = 3;
			   this->button2->Text = L"Check Balance";
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // label3
			   // 
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			   this->label3->Location = System::Drawing::Point(56, 98);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(400, 30);
			   this->label3->TabIndex = 4;
			   this->label3->Text = L"Main Menu";
			   // 
			   // panelTx
			   // 
			   this->panelTx->Controls->Add(this->lblTxTitle);
			   this->panelTx->Controls->Add(this->btnAmt1);
			   this->panelTx->Controls->Add(this->btnAmt2);
			   this->panelTx->Controls->Add(this->btnAmt3);
			   this->panelTx->Controls->Add(this->btnAmt4);
			   this->panelTx->Controls->Add(this->lblCustom);
			   this->panelTx->Controls->Add(this->txtCustomAmt);
			   this->panelTx->Controls->Add(this->btnSubmitTx);
			   this->panelTx->Controls->Add(this->btnBackToMenu);
			   this->panelTx->Location = System::Drawing::Point(63, 49);
			   this->panelTx->Name = L"panelTx";
			   this->panelTx->Size = System::Drawing::Size(550, 400);
			   this->panelTx->TabIndex = 1;
			   this->panelTx->Visible = false;
			   // 
			   // lblTxTitle
			   // 
			   this->lblTxTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			   this->lblTxTitle->Location = System::Drawing::Point(53, 103);
			   this->lblTxTitle->Name = L"lblTxTitle";
			   this->lblTxTitle->Size = System::Drawing::Size(400, 30);
			   this->lblTxTitle->TabIndex = 0;
			   this->lblTxTitle->Text = L"Select Amount";
			   // 
			   // btnAmt1
			   // 
			   this->btnAmt1->Location = System::Drawing::Point(69, 159);
			   this->btnAmt1->Name = L"btnAmt1";
			   this->btnAmt1->Size = System::Drawing::Size(160, 35);
			   this->btnAmt1->TabIndex = 1;
			   this->btnAmt1->Text = L"Rs. 500";
			   this->btnAmt1->Click += gcnew System::EventHandler(this, &MyForm::btnFastAmount_Click);
			   // 
			   // btnAmt2
			   // 
			   this->btnAmt2->Location = System::Drawing::Point(280, 159);
			   this->btnAmt2->Name = L"btnAmt2";
			   this->btnAmt2->Size = System::Drawing::Size(160, 35);
			   this->btnAmt2->TabIndex = 2;
			   this->btnAmt2->Text = L"Rs. 1000";
			   this->btnAmt2->Click += gcnew System::EventHandler(this, &MyForm::btnFastAmount_Click);
			   // 
			   // btnAmt3
			   // 
			   this->btnAmt3->Location = System::Drawing::Point(67, 224);
			   this->btnAmt3->Name = L"btnAmt3";
			   this->btnAmt3->Size = System::Drawing::Size(160, 35);
			   this->btnAmt3->TabIndex = 3;
			   this->btnAmt3->Text = L"Rs. 5000";
			   this->btnAmt3->Click += gcnew System::EventHandler(this, &MyForm::btnFastAmount_Click);
			   // 
			   // btnAmt4
			   // 
			   this->btnAmt4->Location = System::Drawing::Point(280, 224);
			   this->btnAmt4->Name = L"btnAmt4";
			   this->btnAmt4->Size = System::Drawing::Size(160, 35);
			   this->btnAmt4->TabIndex = 4;
			   this->btnAmt4->Text = L"Rs. 10000";
			   this->btnAmt4->Click += gcnew System::EventHandler(this, &MyForm::btnFastAmount_Click);
			   // 
			   // lblCustom
			   // 
			   this->lblCustom->Location = System::Drawing::Point(64, 295);
			   this->lblCustom->Name = L"lblCustom";
			   this->lblCustom->Size = System::Drawing::Size(180, 20);
			   this->lblCustom->TabIndex = 5;
			   this->lblCustom->Text = L"Or Enter Custom Amount (PKR):";
			   this->lblCustom->Click += gcnew System::EventHandler(this, &MyForm::lblCustom_Click);
			   // 
			   // txtCustomAmt
			   // 
			   this->txtCustomAmt->Location = System::Drawing::Point(243, 292);
			   this->txtCustomAmt->Name = L"txtCustomAmt";
			   this->txtCustomAmt->Size = System::Drawing::Size(210, 20);
			   this->txtCustomAmt->TabIndex = 6;
			   // 
			   // btnSubmitTx
			   // 
			   this->btnSubmitTx->Location = System::Drawing::Point(137, 330);
			   this->btnSubmitTx->Name = L"btnSubmitTx";
			   this->btnSubmitTx->Size = System::Drawing::Size(120, 35);
			   this->btnSubmitTx->TabIndex = 7;
			   this->btnSubmitTx->Text = L"Confirm";
			   this->btnSubmitTx->Click += gcnew System::EventHandler(this, &MyForm::btnSubmitTx_Click);
			   // 
			   // btnBackToMenu
			   // 
			   this->btnBackToMenu->Location = System::Drawing::Point(300, 330);
			   this->btnBackToMenu->Name = L"btnBackToMenu";
			   this->btnBackToMenu->Size = System::Drawing::Size(120, 35);
			   this->btnBackToMenu->TabIndex = 8;
			   this->btnBackToMenu->Text = L"Cancel";
			   this->btnBackToMenu->Click += gcnew System::EventHandler(this, &MyForm::btnBackToMenu_Click);
			   // 
			   // panelReg
			   // 
			   this->panelReg->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->panelReg->Controls->Add(this->lblRegTitle);
			   this->panelReg->Controls->Add(this->lblFullName);
			   this->panelReg->Controls->Add(this->txtFullName);
			   this->panelReg->Controls->Add(this->lblMobile);
			   this->panelReg->Controls->Add(this->txtMobile);
			   this->panelReg->Controls->Add(this->lblEmail);
			   this->panelReg->Controls->Add(this->txtEmail);
			   this->panelReg->Controls->Add(this->lblPurpose);
			   this->panelReg->Controls->Add(this->txtPurpose);
			   this->panelReg->Controls->Add(this->lblRegPin);
			   this->panelReg->Controls->Add(this->txtRegPin);
			   this->panelReg->Controls->Add(this->lblConfirmPin);
			   this->panelReg->Controls->Add(this->txtConfirmPin);
			   this->panelReg->Controls->Add(this->btnRegisterSubmit);
			   this->panelReg->Controls->Add(this->btnRegisterCancel);
			   this->panelReg->Location = System::Drawing::Point(35, 52);
			   this->panelReg->Name = L"panelReg";
			   this->panelReg->Size = System::Drawing::Size(656, 450);
			   this->panelReg->TabIndex = 0;
			   this->panelReg->Visible = false;
			   // 
			   // lblRegTitle
			   // 
			   this->lblRegTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			   this->lblRegTitle->Location = System::Drawing::Point(29, 50);
			   this->lblRegTitle->Name = L"lblRegTitle";
			   this->lblRegTitle->Size = System::Drawing::Size(450, 25);
			   this->lblRegTitle->TabIndex = 0;
			   this->lblRegTitle->Text = L"Open New Digital Bank Account (Get 1000 PKR Bonus)";
			   // 
			   // lblFullName
			   // 
			   this->lblFullName->Location = System::Drawing::Point(29, 95);
			   this->lblFullName->Name = L"lblFullName";
			   this->lblFullName->Size = System::Drawing::Size(120, 20);
			   this->lblFullName->TabIndex = 1;
			   this->lblFullName->Text = L"1) Full Name:";
			   // 
			   // txtFullName
			   // 
			   this->txtFullName->Location = System::Drawing::Point(169, 92);
			   this->txtFullName->Name = L"txtFullName";
			   this->txtFullName->Size = System::Drawing::Size(250, 20);
			   this->txtFullName->TabIndex = 2;
			   // 
			   // lblMobile
			   // 
			   this->lblMobile->Location = System::Drawing::Point(29, 141);
			   this->lblMobile->Name = L"lblMobile";
			   this->lblMobile->Size = System::Drawing::Size(120, 20);
			   this->lblMobile->TabIndex = 3;
			   this->lblMobile->Text = L"2) Mobile No:";
			   this->lblMobile->Click += gcnew System::EventHandler(this, &MyForm::lblMobile_Click);
			   // 
			   // txtMobile
			   // 
			   this->txtMobile->Location = System::Drawing::Point(169, 141);
			   this->txtMobile->Name = L"txtMobile";
			   this->txtMobile->Size = System::Drawing::Size(250, 20);
			   this->txtMobile->TabIndex = 4;
			   // 
			   // lblEmail
			   // 
			   this->lblEmail->Location = System::Drawing::Point(29, 184);
			   this->lblEmail->Name = L"lblEmail";
			   this->lblEmail->Size = System::Drawing::Size(120, 20);
			   this->lblEmail->TabIndex = 5;
			   this->lblEmail->Text = L"3) Email Address:";
			   // 
			   // txtEmail
			   // 
			   this->txtEmail->Location = System::Drawing::Point(169, 184);
			   this->txtEmail->Name = L"txtEmail";
			   this->txtEmail->Size = System::Drawing::Size(250, 20);
			   this->txtEmail->TabIndex = 6;
			   // 
			   // lblPurpose
			   // 
			   this->lblPurpose->Location = System::Drawing::Point(29, 228);
			   this->lblPurpose->Name = L"lblPurpose";
			   this->lblPurpose->Size = System::Drawing::Size(120, 20);
			   this->lblPurpose->TabIndex = 7;
			   this->lblPurpose->Text = L"4) Purpose of Acc:";
			   // 
			   // txtPurpose
			   // 
			   this->txtPurpose->Location = System::Drawing::Point(172, 228);
			   this->txtPurpose->Name = L"txtPurpose";
			   this->txtPurpose->Size = System::Drawing::Size(250, 20);
			   this->txtPurpose->TabIndex = 8;
			   // 
			   // lblRegPin
			   // 
			   this->lblRegPin->Location = System::Drawing::Point(29, 275);
			   this->lblRegPin->Name = L"lblRegPin";
			   this->lblRegPin->Size = System::Drawing::Size(120, 20);
			   this->lblRegPin->TabIndex = 9;
			   this->lblRegPin->Text = L"5) Security PIN:";
			   this->lblRegPin->Click += gcnew System::EventHandler(this, &MyForm::lblRegPin_Click);
			   // 
			   // txtRegPin
			   // 
			   this->txtRegPin->Location = System::Drawing::Point(172, 275);
			   this->txtRegPin->Name = L"txtRegPin";
			   this->txtRegPin->Size = System::Drawing::Size(250, 20);
			   this->txtRegPin->TabIndex = 10;
			   this->txtRegPin->UseSystemPasswordChar = true;
			   this->txtRegPin->TextChanged += gcnew System::EventHandler(this, &MyForm::txtRegPin_TextChanged);
			   // 
			   // lblConfirmPin
			   // 
			   this->lblConfirmPin->Location = System::Drawing::Point(32, 314);
			   this->lblConfirmPin->Name = L"lblConfirmPin";
			   this->lblConfirmPin->Size = System::Drawing::Size(120, 20);
			   this->lblConfirmPin->TabIndex = 11;
			   this->lblConfirmPin->Text = L"6) Confirm PIN:";
			   // 
			   // txtConfirmPin
			   // 
			   this->txtConfirmPin->Location = System::Drawing::Point(172, 314);
			   this->txtConfirmPin->Name = L"txtConfirmPin";
			   this->txtConfirmPin->Size = System::Drawing::Size(250, 20);
			   this->txtConfirmPin->TabIndex = 12;
			   this->txtConfirmPin->UseSystemPasswordChar = true;
			   this->txtConfirmPin->TextChanged += gcnew System::EventHandler(this, &MyForm::txtConfirmPin_TextChanged);
			   // 
			   // btnRegisterSubmit
			   // 
			   this->btnRegisterSubmit->Location = System::Drawing::Point(122, 362);
			   this->btnRegisterSubmit->Name = L"btnRegisterSubmit";
			   this->btnRegisterSubmit->Size = System::Drawing::Size(130, 35);
			   this->btnRegisterSubmit->TabIndex = 13;
			   this->btnRegisterSubmit->Text = L"Generate Account";
			   this->btnRegisterSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnRegisterSubmit_Click);
			   // 
			   // btnRegisterCancel
			   // 
			   this->btnRegisterCancel->Location = System::Drawing::Point(309, 362);
			   this->btnRegisterCancel->Name = L"btnRegisterCancel";
			   this->btnRegisterCancel->Size = System::Drawing::Size(110, 35);
			   this->btnRegisterCancel->TabIndex = 14;
			   this->btnRegisterCancel->Text = L"Back to Login";
			   this->btnRegisterCancel->Click += gcnew System::EventHandler(this, &MyForm::btnRegisterCancel_Click);
			   // 
			   // label4
			   // 
			   this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Engravers MT", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(141, 54);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(293, 46);
			   this->label4->TabIndex = 15;
			   this->label4->Text = L"80\'s Banking System";
			   this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->ClientSize = System::Drawing::Size(680, 491);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->panelReg);
			   this->Controls->Add(this->panelTx);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->btnSignup);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"MyForm";
			   this->Text = L"ATM Multi-Screen System Pro";
			   this->panel1->ResumeLayout(false);
			   this->panelTx->ResumeLayout(false);
			   this->panelTx->PerformLayout();
			   this->panelReg->ResumeLayout(false);
			   this->panelReg->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btnSignup_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleLoginScreen(false);
		panelReg->Visible = true;
		txtFullName->Clear();
		txtMobile->Clear();
		txtEmail->Clear();
		txtPurpose->Clear();
		txtRegPin->Clear();
		txtConfirmPin->Clear();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		isDepositMode = true;
		lblTxTitle->Text = "Cash Deposit Hub (No Transaction Fee)";
		panel1->Visible = false;
		panelTx->Visible = true;
		txtCustomAmt->Clear();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		isDepositMode = false;
		lblTxTitle->Text = "Cash Withdrawal Hub (5.00 PKR Fee Applies)";
		panel1->Visible = false;
		panelTx->Visible = true;
		txtCustomAmt->Clear();
	}

	private: System::Void btnFastAmount_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedBtn = safe_cast<Button^>(sender);
		String^ txt = clickedBtn->Text->Replace("Rs. ", "");
		txtCustomAmt->Text = txt;
	}

	private: System::Void btnSubmitTx_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btnBackToMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		panelTx->Visible = false;
		panel1->Visible = true;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		activeAccount = nullptr;
		panel1->Visible = false;
		ToggleLoginScreen(true);
		textBox1->Clear();
		textBox2->Clear();
	}

	private: System::Void btnRegisterSubmit_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btnRegisterCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		panelReg->Visible = false;
		ToggleLoginScreen(true);
	}

		   void ToggleLoginScreen(bool state) {
			   label1->Visible = state;
			   label2->Visible = state;
			   textBox1->Visible = state;
			   textBox2->Visible = state;
			   button1->Visible = state;
			   btnSignup->Visible = state;
		   }

		   void UpdateDatabaseFile();
	private: System::Void lblCustom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtConfirmPin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblRegPin_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtRegPin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblMobile_Click(System::Object^ sender, System::EventArgs^ e) {}
};


	inline System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inputAcc = textBox1->Text;
		String^ inputPin = textBox2->Text;

		if (String::IsNullOrEmpty(inputAcc) || String::IsNullOrEmpty(inputPin)) {
			MessageBox::Show("Please enter fields to authenticate!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		std::string stdAcc = msclr::interop::marshal_as<std::string>(inputAcc);
		std::string stdPin = msclr::interop::marshal_as<std::string>(inputPin);

		std::ifstream inFile("accounts.txt");
		if (!inFile) {
			MessageBox::Show("Database file empty! Create an account first.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		std::string fAcc, fPin, fName, fMobile, fEmail, fPurpose;
		double fBal;
		bool found = false;

		while (inFile >> fAcc >> fPin >> fName >> fMobile >> fEmail >> fPurpose >> fBal) {
			if (fAcc == stdAcc && fPin == stdPin) {
				found = true;
				activeAccount = gcnew ManagedAccount(gcnew String(fAcc.c_str()), gcnew String(fPin.c_str()), gcnew String(fName.c_str()), fBal);
				break;
			}
		}
		inFile.close();

		if (found) {
			label3->Text = "Welcome back, " + activeAccount->getName() + "!";
			ToggleLoginScreen(false);
			panel1->Visible = true;
		}
		else {
			MessageBox::Show("Invalid Account Number or PIN!", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline System::Void MyForm::btnRegisterSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtFullName->Text;
		String^ mobile = txtMobile->Text;
		String^ email = txtEmail->Text;
		String^ purpose = txtPurpose->Text;
		String^ pin = txtRegPin->Text;
		String^ cPin = txtConfirmPin->Text;

		if (String::IsNullOrEmpty(name) || String::IsNullOrEmpty(mobile) || String::IsNullOrEmpty(email) ||
			String::IsNullOrEmpty(purpose) || String::IsNullOrEmpty(pin) || String::IsNullOrEmpty(cPin)) {
			MessageBox::Show("All 6 fields are mandatory to build your account!", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (pin != cPin) {
			MessageBox::Show("PIN entries mismatch! Please enter matching codes.", "Security Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int count = 0;
		std::ifstream inFile("accounts.txt");
		if (inFile) {
			std::string dummyAcc, dummyPin, dummyNm, dummyMob, dummyEmail, dummyPurp;
			double dummyBal;
			while (inFile >> dummyAcc >> dummyPin >> dummyNm >> dummyMob >> dummyEmail >> dummyPurp >> dummyBal) {
				count++;
			}
			inFile.close();
		}

		std::ostringstream ss;
		ss << std::setw(5) << std::setfill('0') << (count + 1);
		std::string finalAccNum = ss.str();

		std::string sName = msclr::interop::marshal_as<std::string>(name->Replace(" ", "_"));
		std::string sMobile = msclr::interop::marshal_as<std::string>(mobile->Replace(" ", "_"));
		std::string sEmail = msclr::interop::marshal_as<std::string>(email->Replace(" ", "_"));
		std::string sPurpose = msclr::interop::marshal_as<std::string>(purpose->Replace(" ", "_"));
		std::string sPin = msclr::interop::marshal_as<std::string>(pin);

		std::ofstream outFile("accounts.txt", std::ios::app);
		outFile << finalAccNum << " " << sPin << " " << sName << " " << sMobile << " " << sEmail << " " << sPurpose << " " << 1000.00 << "\n";
		outFile.close();

		String^ managedAccShow = gcnew String(finalAccNum.c_str());
		MessageBox::Show("Account processed successfully!\n\nYOUR ASSIGNED ACC NUMBER: " + managedAccShow + "\nInitial Balance Credited: 1000 PKR", "Registration Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		panelReg->Visible = false;
		ToggleLoginScreen(true);
	}

	inline System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Your active balance is: PKR " + activeAccount->getBalance().ToString("F2"), "Balance Status", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	inline System::Void MyForm::btnSubmitTx_Click(System::Object^ sender, System::EventArgs^ e) {
		double amt = 0;
		if (!Double::TryParse(txtCustomAmt->Text, amt) || amt <= 0) {
			MessageBox::Show("Please provide a valid numeric value!", "Invalid Amount", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (isDepositMode) {
			activeAccount->deposit(amt);
			MessageBox::Show("PKR " + amt.ToString("F2") + " deposited to your database entry.", "Deposit Complete", MessageBoxButtons::OK, MessageBoxIcon::Information);
			UpdateDatabaseFile();
			btnBackToMenu_Click(this, e);
		}
		else {
			double totalRequired = amt + 5.0;
			if (activeAccount->withdraw(amt)) {
				MessageBox::Show("Withdrawal Successful!\nAmount: PKR " + amt.ToString("F2") + "\nService Fee: 5.00 PKR", "Transaction Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				UpdateDatabaseFile();
				btnBackToMenu_Click(this, e);
			}
			else {
				double currentBal = activeAccount->getBalance();
				double shortfall = totalRequired - currentBal;

				MessageBox::Show("Transaction Failed! Insufficient Balance.\n\nYou need PKR " + shortfall.ToString("F2") + " more to complete this request (including 5 PKR fee).",
					"Balance Shortfall Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	inline void MyForm::UpdateDatabaseFile() {
		if (activeAccount == nullptr) return;
		std::ifstream readIn("accounts.txt");
		std::string outData = "";
		std::string fAcc, fPin, fName, fMobile, fEmail, fPurpose;
		double fBal;

		std::string targetAcc = msclr::interop::marshal_as<std::string>(activeAccount->getAcc());

		while (readIn >> fAcc >> fPin >> fName >> fMobile >> fEmail >> fPurpose >> fBal) {
			if (fAcc == targetAcc) {
				std::ostringstream ss;
				ss << fAcc << " " << fPin << " " << fName << " " << fMobile << " " << fEmail << " " << fPurpose << " " << activeAccount->getBalance() << "\n";
				outData += ss.str();
			}
			else {
				std::ostringstream ss;
				ss << fAcc << " " << fPin << " " << fName << " " << fMobile << " " << fEmail << " " << fPurpose << " " << fBal << "\n";
				outData += ss.str();
			}
		}
		readIn.close();

		std::ofstream writeOut("accounts.txt");
		writeOut << outData;
		writeOut.close();
	}
}