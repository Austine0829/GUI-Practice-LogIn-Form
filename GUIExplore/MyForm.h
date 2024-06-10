#pragma once

namespace GUIExplore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panelTerms->Hide();		
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ cbTerms;
	private: System::Windows::Forms::Label^ lblTerms;



	private: System::Windows::Forms::Button^ btnSignIn;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ panelTerms;




	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnMaximize;
	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Button^ btnClose;






	protected:

	protected:

	protected:


	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cbTerms = (gcnew System::Windows::Forms::CheckBox());
			this->lblTerms = (gcnew System::Windows::Forms::Label());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panelTerms = (gcnew System::Windows::Forms::Panel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnMaximize = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->panelTerms->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(57, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Username";
			// 
			// txtUsername
			// 
			this->txtUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtUsername->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->txtUsername->Location = System::Drawing::Point(61, 201);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(257, 22);
			this->txtUsername->TabIndex = 3;
			this->txtUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::txtUsername_KeyDown);
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->ForeColor = System::Drawing::SystemColors::Control;
			this->txtPassword->Location = System::Drawing::Point(61, 278);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(257, 22);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::txtPassword_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(61, 229);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(257, 2);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Location = System::Drawing::Point(61, 306);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 2);
			this->panel2->TabIndex = 6;
			// 
			// cbTerms
			// 
			this->cbTerms->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbTerms->AutoSize = true;
			this->cbTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbTerms->Location = System::Drawing::Point(61, 329);
			this->cbTerms->Name = L"cbTerms";
			this->cbTerms->Size = System::Drawing::Size(106, 21);
			this->cbTerms->TabIndex = 7;
			this->cbTerms->Text = L"I agree to the";
			this->cbTerms->UseVisualStyleBackColor = true;
			this->cbTerms->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnTerms_CheckedChanged);
			// 
			// lblTerms
			// 
			this->lblTerms->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblTerms->AutoSize = true;
			this->lblTerms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTerms->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblTerms->Location = System::Drawing::Point(159, 330);
			this->lblTerms->Name = L"lblTerms";
			this->lblTerms->Size = System::Drawing::Size(129, 17);
			this->lblTerms->TabIndex = 8;
			this->lblTerms->Text = L"Terms and Condition";
			this->lblTerms->Click += gcnew System::EventHandler(this, &MyForm::lblTerms_Click);
			// 
			// btnSignIn
			// 
			this->btnSignIn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSignIn->BackColor = System::Drawing::Color::MediumBlue;
			this->btnSignIn->Enabled = false;
			this->btnSignIn->FlatAppearance->BorderColor = System::Drawing::Color::MediumBlue;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignIn->ForeColor = System::Drawing::SystemColors::Control;
			this->btnSignIn->Location = System::Drawing::Point(61, 369);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(106, 34);
			this->btnSignIn->TabIndex = 9;
			this->btnSignIn->Text = L"Sign in";
			this->btnSignIn->UseVisualStyleBackColor = false;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &MyForm::btnSignIn_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnExit->BackColor = System::Drawing::Color::Black;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::MediumBlue;
			this->btnExit->Location = System::Drawing::Point(182, 369);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(106, 34);
			this->btnExit->TabIndex = 10;
			this->btnExit->Text = L"Sign Up";
			this->btnExit->UseVisualStyleBackColor = false;
			// 
			// panelTerms
			// 
			this->panelTerms->Controls->Add(this->btnOK);
			this->panelTerms->Controls->Add(this->richTextBox1);
			this->panelTerms->Controls->Add(this->label5);
			this->panelTerms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTerms->Location = System::Drawing::Point(0, 0);
			this->panelTerms->Name = L"panelTerms";
			this->panelTerms->Size = System::Drawing::Size(734, 511);
			this->panelTerms->TabIndex = 11;
			this->panelTerms->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->panelTerms->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->panelTerms->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->BackColor = System::Drawing::Color::MediumBlue;
			this->btnOK->FlatAppearance->BorderColor = System::Drawing::Color::MediumBlue;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->ForeColor = System::Drawing::SystemColors::Control;
			this->btnOK->Location = System::Drawing::Point(438, 387);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(106, 34);
			this->btnOK->TabIndex = 10;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyForm::btnOK_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->richTextBox1->Location = System::Drawing::Point(60, 105);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(484, 276);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(55, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(249, 32);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Terms And Conditions";
			// 
			// btnMaximize
			// 
			this->btnMaximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMaximize->BackColor = System::Drawing::Color::Black;
			this->btnMaximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMaximize.BackgroundImage")));
			this->btnMaximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaximize->Location = System::Drawing::Point(677, 0);
			this->btnMaximize->Name = L"btnMaximize";
			this->btnMaximize->Size = System::Drawing::Size(27, 28);
			this->btnMaximize->TabIndex = 12;
			this->btnMaximize->UseVisualStyleBackColor = false;
			this->btnMaximize->Click += gcnew System::EventHandler(this, &MyForm::btnMaximize_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->BackColor = System::Drawing::Color::Black;
			this->btnMinimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.BackgroundImage")));
			this->btnMinimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->Location = System::Drawing::Point(647, 0);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(27, 28);
			this->btnMinimize->TabIndex = 13;
			this->btnMinimize->UseVisualStyleBackColor = false;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &MyForm::btnMinimize_Click);
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->BackColor = System::Drawing::Color::Black;
			this->btnClose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.BackgroundImage")));
			this->btnClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Location = System::Drawing::Point(707, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(27, 28);
			this->btnClose->TabIndex = 14;
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(734, 511);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnMinimize);
			this->Controls->Add(this->btnMaximize);
			this->Controls->Add(this->panelTerms);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSignIn);
			this->Controls->Add(this->lblTerms);
			this->Controls->Add(this->cbTerms);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panelTerms->ResumeLayout(false);
			this->panelTerms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

bool dragging;
Point offset;

private: System::Void btnTerms_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (cbTerms->Checked)
	{
		btnSignIn->Enabled = true;
	}
	
	else
	{
		btnSignIn->Enabled = false;
	}
}

private: System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtUsername->Text == "admin" && txtPassword->Text == "admin")
	{
		MessageBox::Show("Welcome");
	}

	else
	{
		MessageBox::Show("Invalid Username Or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	panelTerms->Hide();
}

private: System::Void lblTerms_Click(System::Object^ sender, System::EventArgs^ e) {
	panelTerms->Show();
}

private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}

private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}

private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	dragging = false;
}

private: System::Void txtUsername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
	if (e->KeyValue == (int)Keys::Enter)
	{
		txtPassword->Focus();
	}
}

private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
		btnSignIn->PerformClick();
	}
}

private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {

	WindowState = FormWindowState::Minimized;
}

private: System::Void btnMaximize_Click(System::Object^ sender, System::EventArgs^ e) {

	if (WindowState == FormWindowState::Normal)
	{
		WindowState = FormWindowState::Maximized;
	}

	else
	{
		WindowState = FormWindowState::Normal;
	}
	
}

private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Application::Exit();
}

};

}
