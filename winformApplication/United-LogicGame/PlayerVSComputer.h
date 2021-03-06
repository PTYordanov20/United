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
	private: System::Windows::Forms::Label^ messageLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayerVSComputer::typeid));
			this->minimizeButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->messageLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			// messageLabel
			// 
			this->messageLabel->AutoSize = true;
			this->messageLabel->Font = (gcnew System::Drawing::Font(L"Impact", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->messageLabel->ForeColor = System::Drawing::Color::White;
			this->messageLabel->Location = System::Drawing::Point(12, 247);
			this->messageLabel->Name = L"messageLabel";
			this->messageLabel->Size = System::Drawing::Size(544, 80);
			this->messageLabel->TabIndex = 8;
			this->messageLabel->Text = L"Under Construction";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 326;
			this->pictureBox1->TabStop = false;
			// 
			// PlayerVSComputer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->messageLabel);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->minimizeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PlayerVSComputer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"United";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
