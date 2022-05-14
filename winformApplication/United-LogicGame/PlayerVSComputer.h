#pragma once

namespace UnitedLogicGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlayerVSComputer
	/// </summary>
	public ref class PlayerVSComputer : public System::Windows::Forms::Form
	{
	private: Form^ mainForm;
	public:
		PlayerVSComputer(Form^ mainForm)
		{
			InitializeComponent();
			
			this->mainForm = mainForm;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlayerVSComputer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ minimizeButton;
	private: System::Windows::Forms::Button^ ExitButton;
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
			this->minimizeButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// minimizeButton
			// 
			this->minimizeButton->FlatAppearance->BorderSize = 0;
			this->minimizeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minimizeButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minimizeButton->ForeColor = System::Drawing::Color::White;
			this->minimizeButton->Location = System::Drawing::Point(724, 0);
			this->minimizeButton->Name = L"minimizeButton";
			this->minimizeButton->Size = System::Drawing::Size(35, 30);
			this->minimizeButton->TabIndex = 6;
			this->minimizeButton->Text = L"—";
			this->minimizeButton->UseVisualStyleBackColor = true;
			this->minimizeButton->Click += gcnew System::EventHandler(this, &PlayerVSComputer::minimizeButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->ForeColor = System::Drawing::Color::White;
			this->ExitButton->Location = System::Drawing::Point(765, 0);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(35, 30);
			this->ExitButton->TabIndex = 7;
			this->ExitButton->Text = L"✕";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &PlayerVSComputer::ExitButton_Click);
			// 
			// PlayerVSComputer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->minimizeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PlayerVSComputer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PlayerVSComputer";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void minimizeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PlayerVSComputer::WindowState == FormWindowState::Minimized)
			PlayerVSComputer::WindowState = FormWindowState::Normal;
		else if (PlayerVSComputer::WindowState == FormWindowState::Normal)
			PlayerVSComputer::WindowState = FormWindowState::Minimized;
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->mainForm->Show();
		this->Close();
	}
	};
}
