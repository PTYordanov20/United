#pragma once
#include "PlayerVSComputer.h"
#include "PlayerVSPlayer.h"

namespace UnitedLogicGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ UnitedTitle;
	protected:


	private: System::Windows::Forms::Button^ PVCButton;
	private: System::Windows::Forms::Button^ PVPButton;
	private: System::Windows::Forms::Button^ minimizeButton;
	private: System::Windows::Forms::Button^ ExitButton;

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
			this->UnitedTitle = (gcnew System::Windows::Forms::Label());
			this->PVCButton = (gcnew System::Windows::Forms::Button());
			this->PVPButton = (gcnew System::Windows::Forms::Button());
			this->minimizeButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// UnitedTitle
			// 
			this->UnitedTitle->AutoSize = true;
			this->UnitedTitle->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UnitedTitle->ForeColor = System::Drawing::Color::White;
			this->UnitedTitle->Location = System::Drawing::Point(12, 9);
			this->UnitedTitle->Name = L"UnitedTitle";
			this->UnitedTitle->Size = System::Drawing::Size(65, 46);
			this->UnitedTitle->TabIndex = 0;
			this->UnitedTitle->Text = L"United\r\nb00le0\r\n";
			// 
			// PVCButton
			// 
			this->PVCButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PVCButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PVCButton->ForeColor = System::Drawing::Color::White;
			this->PVCButton->Location = System::Drawing::Point(51, 155);
			this->PVCButton->Name = L"PVCButton";
			this->PVCButton->Size = System::Drawing::Size(192, 60);
			this->PVCButton->TabIndex = 3;
			this->PVCButton->Text = L"Player VS Computer";
			this->PVCButton->UseVisualStyleBackColor = true;
			this->PVCButton->Click += gcnew System::EventHandler(this, &MainForm::PVCButton_Click);
			// 
			// PVPButton
			// 
			this->PVPButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PVPButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PVPButton->ForeColor = System::Drawing::Color::White;
			this->PVPButton->Location = System::Drawing::Point(51, 238);
			this->PVPButton->Name = L"PVPButton";
			this->PVPButton->Size = System::Drawing::Size(192, 60);
			this->PVPButton->TabIndex = 4;
			this->PVPButton->Text = L"Player VS Player";
			this->PVPButton->UseVisualStyleBackColor = true;
			this->PVPButton->Click += gcnew System::EventHandler(this, &MainForm::PVPButton_Click);
			// 
			// minimizeButton
			// 
			this->minimizeButton->FlatAppearance->BorderSize = 0;
			this->minimizeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minimizeButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minimizeButton->ForeColor = System::Drawing::Color::White;
			this->minimizeButton->Location = System::Drawing::Point(223, 0);
			this->minimizeButton->Name = L"minimizeButton";
			this->minimizeButton->Size = System::Drawing::Size(35, 30);
			this->minimizeButton->TabIndex = 5;
			this->minimizeButton->Text = L"—";
			this->minimizeButton->UseVisualStyleBackColor = true;
			this->minimizeButton->Click += gcnew System::EventHandler(this, &MainForm::minimizeButton_Click_1);
			// 
			// ExitButton
			// 
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->ForeColor = System::Drawing::Color::White;
			this->ExitButton->Location = System::Drawing::Point(264, 0);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(35, 30);
			this->ExitButton->TabIndex = 6;
			this->ExitButton->Text = L"✕";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::ExitButton_Click_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(300, 400);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->minimizeButton);
			this->Controls->Add(this->PVPButton);
			this->Controls->Add(this->PVCButton);
			this->Controls->Add(this->UnitedTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void minimizeButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MainForm::WindowState == FormWindowState::Minimized)
			MainForm::WindowState = FormWindowState::Normal;
		else if (MainForm::WindowState == FormWindowState::Normal)
			MainForm::WindowState = FormWindowState::Minimized;
	}
	private: System::Void ExitButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void PVCButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PlayerVSComputer^ frm = gcnew PlayerVSComputer(this);
		frm->Show();
	}
	private: System::Void PVPButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PlayerVSPlayer^ frm = gcnew PlayerVSPlayer(this);
		frm->Show();
	}
};
}
