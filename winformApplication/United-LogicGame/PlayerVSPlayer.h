#pragma once

namespace UnitedLogicGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlayerVSPlayer
	/// </summary>
	public ref class PlayerVSPlayer : public System::Windows::Forms::Form
	{
	private: Form^ mainForm;
	public:
		PlayerVSPlayer(Form^ mainForm)
		{
			InitializeComponent();

			this->mainForm = mainForm;

			this->p
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlayerVSPlayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ minimizeButton;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::PictureBox^ p1CardInHand4;

	private: System::Windows::Forms::PictureBox^ p1CardInHand3;









	private: System::Windows::Forms::PictureBox^ p1CardInHand2;


	private: System::Windows::Forms::PictureBox^ p1CardInHand1;




	private: System::Windows::Forms::PictureBox^ DeckImage;
	private: System::Windows::Forms::Button^ Player1Button;

	private: System::Windows::Forms::Button^ Player2Button;

	private: System::Windows::Forms::PictureBox^ startCard1;
	private: System::Windows::Forms::PictureBox^ startCard2;
	private: System::Windows::Forms::PictureBox^ startCard3;
	private: System::Windows::Forms::PictureBox^ startCard4;
	private: System::Windows::Forms::PictureBox^ p1AND_0_11;
	private: System::Windows::Forms::PictureBox^ p1AND_0_15;



	private: System::Windows::Forms::PictureBox^ p1AND_0_14;



	private: System::Windows::Forms::PictureBox^ p1AND_0_12;
	private: System::Windows::Forms::PictureBox^ p1AND_0_13;


















	private: System::Windows::Forms::PictureBox^ startCard6;

	private: System::Windows::Forms::PictureBox^ startCard5;
	private: System::Windows::Forms::PictureBox^ p1AND_0_22;

	private: System::Windows::Forms::PictureBox^ p1AND_0_21;
	private: System::Windows::Forms::PictureBox^ p1AND_0_24;




	private: System::Windows::Forms::PictureBox^ p1AND_0_23;
	private: System::Windows::Forms::PictureBox^ p1AND_0_31;
	private: System::Windows::Forms::PictureBox^ p1AND_0_33;







private: System::Windows::Forms::PictureBox^ p1AND_0_32;
private: System::Windows::Forms::PictureBox^ p1AND_0_42;






private: System::Windows::Forms::PictureBox^ p1AND_0_41;
private: System::Windows::Forms::PictureBox^ p1AND_0_5;




































	private: System::Windows::Forms::PictureBox^ p2CardInHand4;

	private: System::Windows::Forms::PictureBox^ p2CardInHand3;

	private: System::Windows::Forms::PictureBox^ p2CardInHand2;

	private: System::Windows::Forms::PictureBox^ p2CardInHand1;















private: System::Windows::Forms::PictureBox^ p1AND_1_5;

private: System::Windows::Forms::PictureBox^ p1AND_1_42;

private: System::Windows::Forms::PictureBox^ p1AND_1_41;

private: System::Windows::Forms::PictureBox^ p1AND_1_31;
private: System::Windows::Forms::PictureBox^ p1AND_1_33;

private: System::Windows::Forms::PictureBox^ p1AND_1_32;
private: System::Windows::Forms::PictureBox^ p1AND_1_22;
private: System::Windows::Forms::PictureBox^ p1AND_1_21;
private: System::Windows::Forms::PictureBox^ p1AND_1_24;
private: System::Windows::Forms::PictureBox^ p1AND_1_23;
private: System::Windows::Forms::PictureBox^ p1AND_1_13;
private: System::Windows::Forms::PictureBox^ p1AND_1_12;
private: System::Windows::Forms::PictureBox^ p1AND_1_15;
private: System::Windows::Forms::PictureBox^ p1AND_1_14;
private: System::Windows::Forms::PictureBox^ p1AND_1_11;
private: System::Windows::Forms::PictureBox^ p1OR_0_5;
private: System::Windows::Forms::PictureBox^ p1OR_0_42;
private: System::Windows::Forms::PictureBox^ p1OR_0_41;
private: System::Windows::Forms::PictureBox^ p1OR_0_31;
private: System::Windows::Forms::PictureBox^ p1OR_0_33;
private: System::Windows::Forms::PictureBox^ p1OR_0_32;
private: System::Windows::Forms::PictureBox^ p1OR_0_22;
private: System::Windows::Forms::PictureBox^ p1OR_0_21;
private: System::Windows::Forms::PictureBox^ p1OR_0_24;
private: System::Windows::Forms::PictureBox^ p1OR_0_23;
private: System::Windows::Forms::PictureBox^ p1OR_0_13;
private: System::Windows::Forms::PictureBox^ p1OR_0_12;
private: System::Windows::Forms::PictureBox^ p1OR_0_15;
private: System::Windows::Forms::PictureBox^ p1OR_0_14;
private: System::Windows::Forms::PictureBox^ p1OR_0_11;
private: System::Windows::Forms::PictureBox^ p1OR_1_5;
private: System::Windows::Forms::PictureBox^ p1OR_1_42;
private: System::Windows::Forms::PictureBox^ p1OR_1_41;
private: System::Windows::Forms::PictureBox^ p1OR_1_31;
private: System::Windows::Forms::PictureBox^ p1OR_1_33;
private: System::Windows::Forms::PictureBox^ p1OR_1_32;
private: System::Windows::Forms::PictureBox^ p1OR_1_22;
private: System::Windows::Forms::PictureBox^ p1OR_1_21;
private: System::Windows::Forms::PictureBox^ p1OR_1_24;
private: System::Windows::Forms::PictureBox^ p1OR_1_23;
private: System::Windows::Forms::PictureBox^ p1OR_1_13;
private: System::Windows::Forms::PictureBox^ p1OR_1_12;
private: System::Windows::Forms::PictureBox^ p1OR_1_15;
private: System::Windows::Forms::PictureBox^ p1OR_1_14;
private: System::Windows::Forms::PictureBox^ p1OR_1_11;
private: System::Windows::Forms::PictureBox^ p1XOR_0_5;
private: System::Windows::Forms::PictureBox^ p1XOR_0_42;
private: System::Windows::Forms::PictureBox^ p1XOR_0_41;
private: System::Windows::Forms::PictureBox^ p1XOR_0_31;
private: System::Windows::Forms::PictureBox^ p1XOR_0_33;
private: System::Windows::Forms::PictureBox^ p1XOR_0_32;
private: System::Windows::Forms::PictureBox^ p1XOR_0_22;
private: System::Windows::Forms::PictureBox^ p1XOR_0_21;
private: System::Windows::Forms::PictureBox^ p1XOR_0_24;
private: System::Windows::Forms::PictureBox^ p1XOR_0_23;
private: System::Windows::Forms::PictureBox^ p1XOR_0_13;
private: System::Windows::Forms::PictureBox^ p1XOR_0_12;
private: System::Windows::Forms::PictureBox^ p1XOR_0_15;
private: System::Windows::Forms::PictureBox^ p1XOR_0_14;
private: System::Windows::Forms::PictureBox^ p1XOR_0_11;
private: System::Windows::Forms::PictureBox^ p1XOR_1_5;
private: System::Windows::Forms::PictureBox^ p1XOR_1_42;
private: System::Windows::Forms::PictureBox^ p1XOR_1_41;
private: System::Windows::Forms::PictureBox^ p1XOR_1_31;
private: System::Windows::Forms::PictureBox^ p1XOR_1_33;
private: System::Windows::Forms::PictureBox^ p1XOR_1_32;
private: System::Windows::Forms::PictureBox^ p1XOR_1_22;
private: System::Windows::Forms::PictureBox^ p1XOR_1_21;
private: System::Windows::Forms::PictureBox^ p1XOR_1_24;
private: System::Windows::Forms::PictureBox^ p1XOR_1_23;
private: System::Windows::Forms::PictureBox^ p1XOR_1_13;
private: System::Windows::Forms::PictureBox^ p1XOR_1_12;
private: System::Windows::Forms::PictureBox^ p1XOR_1_15;
private: System::Windows::Forms::PictureBox^ p1XOR_1_14;
private: System::Windows::Forms::PictureBox^ p1XOR_1_11;
private: System::Windows::Forms::PictureBox^ p1pHere5;
private: System::Windows::Forms::PictureBox^ p1pHere42;
private: System::Windows::Forms::PictureBox^ p1pHere41;
private: System::Windows::Forms::PictureBox^ p1pHere31;
private: System::Windows::Forms::PictureBox^ p1pHere33;
private: System::Windows::Forms::PictureBox^ p1pHere32;
private: System::Windows::Forms::PictureBox^ p1pHere22;
private: System::Windows::Forms::PictureBox^ p1pHere21;
private: System::Windows::Forms::PictureBox^ p1pHere24;
private: System::Windows::Forms::PictureBox^ p1pHere23;
private: System::Windows::Forms::PictureBox^ p1pHere13;
private: System::Windows::Forms::PictureBox^ p1pHere12;
private: System::Windows::Forms::PictureBox^ p1pHere15;
private: System::Windows::Forms::PictureBox^ p1pHere14;
private: System::Windows::Forms::PictureBox^ p1pHere11;
private: System::Windows::Forms::PictureBox^ p2AND_0_5;
private: System::Windows::Forms::PictureBox^ p2AND_0_42;
private: System::Windows::Forms::PictureBox^ p2AND_0_41;
private: System::Windows::Forms::PictureBox^ p2AND_0_31;
private: System::Windows::Forms::PictureBox^ p2AND_0_33;
private: System::Windows::Forms::PictureBox^ p2AND_0_32;
private: System::Windows::Forms::PictureBox^ p2AND_0_22;
private: System::Windows::Forms::PictureBox^ p2AND_0_21;
private: System::Windows::Forms::PictureBox^ p2AND_0_24;
private: System::Windows::Forms::PictureBox^ p2AND_0_23;
private: System::Windows::Forms::PictureBox^ p2AND_0_13;
private: System::Windows::Forms::PictureBox^ p2AND_0_12;
private: System::Windows::Forms::PictureBox^ p2AND_0_15;
private: System::Windows::Forms::PictureBox^ p2AND_0_14;
private: System::Windows::Forms::PictureBox^ p2AND_0_11;
private: System::Windows::Forms::PictureBox^ p2AND_1_5;
private: System::Windows::Forms::PictureBox^ p2AND_1_42;
private: System::Windows::Forms::PictureBox^ p2AND_1_41;
private: System::Windows::Forms::PictureBox^ p2AND_1_31;
private: System::Windows::Forms::PictureBox^ p2AND_1_33;
private: System::Windows::Forms::PictureBox^ p2AND_1_32;
private: System::Windows::Forms::PictureBox^ p2AND_1_22;
private: System::Windows::Forms::PictureBox^ p2AND_1_21;
private: System::Windows::Forms::PictureBox^ p2AND_1_24;
private: System::Windows::Forms::PictureBox^ p2AND_1_23;
private: System::Windows::Forms::PictureBox^ p2AND_1_13;
private: System::Windows::Forms::PictureBox^ p2AND_1_12;
private: System::Windows::Forms::PictureBox^ p2AND_1_15;
private: System::Windows::Forms::PictureBox^ p2AND_1_14;
private: System::Windows::Forms::PictureBox^ p2AND_1_11;
private: System::Windows::Forms::PictureBox^ p2OR_0_5;
private: System::Windows::Forms::PictureBox^ p2OR_0_42;
private: System::Windows::Forms::PictureBox^ p2OR_0_41;
private: System::Windows::Forms::PictureBox^ p2OR_0_31;
private: System::Windows::Forms::PictureBox^ p2OR_0_33;
private: System::Windows::Forms::PictureBox^ p2OR_0_32;
private: System::Windows::Forms::PictureBox^ p2OR_0_22;
private: System::Windows::Forms::PictureBox^ p2OR_0_21;
private: System::Windows::Forms::PictureBox^ p2OR_0_24;
private: System::Windows::Forms::PictureBox^ p2OR_0_23;
private: System::Windows::Forms::PictureBox^ p2OR_0_13;
private: System::Windows::Forms::PictureBox^ p2OR_0_12;
private: System::Windows::Forms::PictureBox^ p2OR_0_15;
private: System::Windows::Forms::PictureBox^ p2OR_0_14;
private: System::Windows::Forms::PictureBox^ p2OR_0_11;
private: System::Windows::Forms::PictureBox^ p2pHere5;
private: System::Windows::Forms::PictureBox^ p2OR_1_42;
private: System::Windows::Forms::PictureBox^ p2OR_1_41;
private: System::Windows::Forms::PictureBox^ p2OR_1_31;
private: System::Windows::Forms::PictureBox^ p2OR_1_33;
private: System::Windows::Forms::PictureBox^ p2OR_1_32;
private: System::Windows::Forms::PictureBox^ p2OR_1_22;
private: System::Windows::Forms::PictureBox^ p2OR_1_21;
private: System::Windows::Forms::PictureBox^ p2OR_1_24;
private: System::Windows::Forms::PictureBox^ p2OR_1_23;
private: System::Windows::Forms::PictureBox^ p2OR_1_13;
private: System::Windows::Forms::PictureBox^ p2OR_1_12;
private: System::Windows::Forms::PictureBox^ p2OR_1_15;
private: System::Windows::Forms::PictureBox^ p2OR_1_14;
private: System::Windows::Forms::PictureBox^ p2OR_1_11;
private: System::Windows::Forms::PictureBox^ p2XOR_0_5;
private: System::Windows::Forms::PictureBox^ p2XOR_0_42;
private: System::Windows::Forms::PictureBox^ p2XOR_0_41;
private: System::Windows::Forms::PictureBox^ p2XOR_0_31;
private: System::Windows::Forms::PictureBox^ p2XOR_0_33;
private: System::Windows::Forms::PictureBox^ p2XOR_0_32;
private: System::Windows::Forms::PictureBox^ p2XOR_0_22;
private: System::Windows::Forms::PictureBox^ p2XOR_0_21;
private: System::Windows::Forms::PictureBox^ p2XOR_0_24;
private: System::Windows::Forms::PictureBox^ p2XOR_0_23;
private: System::Windows::Forms::PictureBox^ p2XOR_0_13;
private: System::Windows::Forms::PictureBox^ p2XOR_0_12;
private: System::Windows::Forms::PictureBox^ p2XOR_0_15;
private: System::Windows::Forms::PictureBox^ p2XOR_0_14;
private: System::Windows::Forms::PictureBox^ p2XOR_0_11;
private: System::Windows::Forms::PictureBox^ p2XOR_1_5;
private: System::Windows::Forms::PictureBox^ p2XOR_1_42;
private: System::Windows::Forms::PictureBox^ p2XOR_1_41;
private: System::Windows::Forms::PictureBox^ p2XOR_1_31;
private: System::Windows::Forms::PictureBox^ p2XOR_1_33;
private: System::Windows::Forms::PictureBox^ p2XOR_1_32;
private: System::Windows::Forms::PictureBox^ p2XOR_1_22;
private: System::Windows::Forms::PictureBox^ p2XOR_1_21;
private: System::Windows::Forms::PictureBox^ p2XOR_1_24;
private: System::Windows::Forms::PictureBox^ p2XOR_1_23;
private: System::Windows::Forms::PictureBox^ p2XOR_1_13;
private: System::Windows::Forms::PictureBox^ p2XOR_1_12;
private: System::Windows::Forms::PictureBox^ p2XOR_1_15;
private: System::Windows::Forms::PictureBox^ p2XOR_1_14;
private: System::Windows::Forms::PictureBox^ p2XOR_1_11;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ p2pHere42;
private: System::Windows::Forms::PictureBox^ p2pHere41;
private: System::Windows::Forms::PictureBox^ p2pHere31;
private: System::Windows::Forms::PictureBox^ p2pHere33;
private: System::Windows::Forms::PictureBox^ p2pHere32;
private: System::Windows::Forms::PictureBox^ p2pHere22;
private: System::Windows::Forms::PictureBox^ p2pHere21;
private: System::Windows::Forms::PictureBox^ p2pHere24;
private: System::Windows::Forms::PictureBox^ p2pHere23;
private: System::Windows::Forms::PictureBox^ p2pHere13;
private: System::Windows::Forms::PictureBox^ p2pHere12;
private: System::Windows::Forms::PictureBox^ p2pHere15;
private: System::Windows::Forms::PictureBox^ p2pHere14;
private: System::Windows::Forms::PictureBox^ p2pHere11;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayerVSPlayer::typeid));
			this->minimizeButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->p1CardInHand4 = (gcnew System::Windows::Forms::PictureBox());
			this->p1CardInHand3 = (gcnew System::Windows::Forms::PictureBox());
			this->p1CardInHand2 = (gcnew System::Windows::Forms::PictureBox());
			this->p1CardInHand1 = (gcnew System::Windows::Forms::PictureBox());
			this->DeckImage = (gcnew System::Windows::Forms::PictureBox());
			this->Player1Button = (gcnew System::Windows::Forms::Button());
			this->Player2Button = (gcnew System::Windows::Forms::Button());
			this->startCard1 = (gcnew System::Windows::Forms::PictureBox());
			this->startCard2 = (gcnew System::Windows::Forms::PictureBox());
			this->startCard3 = (gcnew System::Windows::Forms::PictureBox());
			this->startCard4 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_13 = (gcnew System::Windows::Forms::PictureBox());
			this->startCard6 = (gcnew System::Windows::Forms::PictureBox());
			this->startCard5 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p2CardInHand4 = (gcnew System::Windows::Forms::PictureBox());
			this->p2CardInHand3 = (gcnew System::Windows::Forms::PictureBox());
			this->p2CardInHand2 = (gcnew System::Windows::Forms::PictureBox());
			this->p2CardInHand1 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p1AND_1_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_0_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p1OR_1_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_0_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p1XOR_1_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere5 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere42 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere41 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere31 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere33 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere32 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere22 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere21 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere24 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere23 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere13 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere12 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere15 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere14 = (gcnew System::Windows::Forms::PictureBox());
			this->p1pHere11 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_0_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p2AND_1_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_0_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere5 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p2OR_1_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_0_11 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_42 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_41 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_31 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_33 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_32 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_22 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_21 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_24 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_23 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_13 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_12 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_15 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_14 = (gcnew System::Windows::Forms::PictureBox());
			this->p2XOR_1_11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere42 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere41 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere31 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere33 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere32 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere22 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere21 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere24 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere23 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere13 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere12 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere15 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere14 = (gcnew System::Windows::Forms::PictureBox());
			this->p2pHere11 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeckImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere11))->BeginInit();
			this->SuspendLayout();
			// 
			// minimizeButton
			// 
			this->minimizeButton->FlatAppearance->BorderSize = 0;
			this->minimizeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minimizeButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minimizeButton->ForeColor = System::Drawing::Color::White;
			this->minimizeButton->Location = System::Drawing::Point(724, 3);
			this->minimizeButton->Name = L"minimizeButton";
			this->minimizeButton->Size = System::Drawing::Size(35, 30);
			this->minimizeButton->TabIndex = 6;
			this->minimizeButton->Text = L"—";
			this->minimizeButton->UseVisualStyleBackColor = true;
			this->minimizeButton->Click += gcnew System::EventHandler(this, &PlayerVSPlayer::minimizeButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->ForeColor = System::Drawing::Color::White;
			this->ExitButton->Location = System::Drawing::Point(765, 3);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(35, 30);
			this->ExitButton->TabIndex = 7;
			this->ExitButton->Text = L"✕";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &PlayerVSPlayer::ExitButton_Click);
			// 
			// p1CardInHand4
			// 
			this->p1CardInHand4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1CardInHand4.Image")));
			this->p1CardInHand4->Location = System::Drawing::Point(153, 661);
			this->p1CardInHand4->Name = L"p1CardInHand4";
			this->p1CardInHand4->Size = System::Drawing::Size(41, 69);
			this->p1CardInHand4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1CardInHand4->TabIndex = 31;
			this->p1CardInHand4->TabStop = false;
			// 
			// p1CardInHand3
			// 
			this->p1CardInHand3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1CardInHand3.Image")));
			this->p1CardInHand3->Location = System::Drawing::Point(106, 661);
			this->p1CardInHand3->Name = L"p1CardInHand3";
			this->p1CardInHand3->Size = System::Drawing::Size(41, 69);
			this->p1CardInHand3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1CardInHand3->TabIndex = 30;
			this->p1CardInHand3->TabStop = false;
			// 
			// p1CardInHand2
			// 
			this->p1CardInHand2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1CardInHand2.Image")));
			this->p1CardInHand2->Location = System::Drawing::Point(59, 661);
			this->p1CardInHand2->Name = L"p1CardInHand2";
			this->p1CardInHand2->Size = System::Drawing::Size(41, 69);
			this->p1CardInHand2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1CardInHand2->TabIndex = 29;
			this->p1CardInHand2->TabStop = false;
			// 
			// p1CardInHand1
			// 
			this->p1CardInHand1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1CardInHand1.Image")));
			this->p1CardInHand1->Location = System::Drawing::Point(12, 661);
			this->p1CardInHand1->Name = L"p1CardInHand1";
			this->p1CardInHand1->Size = System::Drawing::Size(41, 69);
			this->p1CardInHand1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1CardInHand1->TabIndex = 28;
			this->p1CardInHand1->TabStop = false;
			// 
			// DeckImage
			// 
			this->DeckImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeckImage.Image")));
			this->DeckImage->Location = System::Drawing::Point(85, 366);
			this->DeckImage->Name = L"DeckImage";
			this->DeckImage->Size = System::Drawing::Size(61, 53);
			this->DeckImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->DeckImage->TabIndex = 26;
			this->DeckImage->TabStop = false;
			this->DeckImage->Click += gcnew System::EventHandler(this, &PlayerVSPlayer::DeckImage_Click);
			// 
			// Player1Button
			// 
			this->Player1Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Player1Button->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Player1Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Player1Button->Location = System::Drawing::Point(619, 694);
			this->Player1Button->Name = L"Player1Button";
			this->Player1Button->Size = System::Drawing::Size(181, 36);
			this->Player1Button->TabIndex = 39;
			this->Player1Button->Text = L"Player 1";
			this->Player1Button->UseVisualStyleBackColor = true;
			// 
			// Player2Button
			// 
			this->Player2Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Player2Button->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Player2Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Player2Button->Location = System::Drawing::Point(619, 66);
			this->Player2Button->Name = L"Player2Button";
			this->Player2Button->Size = System::Drawing::Size(181, 36);
			this->Player2Button->TabIndex = 40;
			this->Player2Button->Text = L"Player 2";
			this->Player2Button->UseVisualStyleBackColor = true;
			// 
			// startCard1
			// 
			this->startCard1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startCard1.Image")));
			this->startCard1->Location = System::Drawing::Point(237, 366);
			this->startCard1->Name = L"startCard1";
			this->startCard1->Size = System::Drawing::Size(61, 53);
			this->startCard1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->startCard1->TabIndex = 27;
			this->startCard1->TabStop = false;
			// 
			// startCard2
			// 
			this->startCard2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startCard2.Image")));
			this->startCard2->Location = System::Drawing::Point(295, 366);
			this->startCard2->Name = L"startCard2";
			this->startCard2->Size = System::Drawing::Size(61, 53);
			this->startCard2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->startCard2->TabIndex = 34;
			this->startCard2->TabStop = false;
			// 
			// startCard3
			// 
			this->startCard3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startCard3.Image")));
			this->startCard3->Location = System::Drawing::Point(352, 366);
			this->startCard3->Name = L"startCard3";
			this->startCard3->Size = System::Drawing::Size(61, 53);
			this->startCard3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->startCard3->TabIndex = 35;
			this->startCard3->TabStop = false;
			// 
			// startCard4
			// 
			this->startCard4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startCard4.Image")));
			this->startCard4->Location = System::Drawing::Point(412, 366);
			this->startCard4->Name = L"startCard4";
			this->startCard4->Size = System::Drawing::Size(61, 53);
			this->startCard4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->startCard4->TabIndex = 36;
			this->startCard4->TabStop = false;
			// 
			// p1AND_0_11
			// 
			this->p1AND_0_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_11.Image")));
			this->p1AND_0_11->Location = System::Drawing::Point(263, 418);
			this->p1AND_0_11->Name = L"p1AND_0_11";
			this->p1AND_0_11->Size = System::Drawing::Size(52, 53);
			this->p1AND_0_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_11->TabIndex = 41;
			this->p1AND_0_11->TabStop = false;
			// 
			// p1AND_0_15
			// 
			this->p1AND_0_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_15.Image")));
			this->p1AND_0_15->Location = System::Drawing::Point(491, 418);
			this->p1AND_0_15->Name = L"p1AND_0_15";
			this->p1AND_0_15->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_15->TabIndex = 44;
			this->p1AND_0_15->TabStop = false;
			// 
			// p1AND_0_14
			// 
			this->p1AND_0_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_14.Image")));
			this->p1AND_0_14->Location = System::Drawing::Point(432, 418);
			this->p1AND_0_14->Name = L"p1AND_0_14";
			this->p1AND_0_14->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_14->TabIndex = 43;
			this->p1AND_0_14->TabStop = false;
			// 
			// p1AND_0_12
			// 
			this->p1AND_0_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_12.Image")));
			this->p1AND_0_12->Location = System::Drawing::Point(315, 418);
			this->p1AND_0_12->Name = L"p1AND_0_12";
			this->p1AND_0_12->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_12->TabIndex = 45;
			this->p1AND_0_12->TabStop = false;
			// 
			// p1AND_0_13
			// 
			this->p1AND_0_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_13.Image")));
			this->p1AND_0_13->Location = System::Drawing::Point(377, 418);
			this->p1AND_0_13->Name = L"p1AND_0_13";
			this->p1AND_0_13->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_13->TabIndex = 46;
			this->p1AND_0_13->TabStop = false;
			// 
			// startCard6
			// 
			this->startCard6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startCard6.Image")));
			this->startCard6->Location = System::Drawing::Point(529, 366);
			this->startCard6->Name = L"startCard6";
			this->startCard6->Size = System::Drawing::Size(61, 53);
			this->startCard6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->startCard6->TabIndex = 58;
			this->startCard6->TabStop = false;
			// 
			// startCard5
			// 
			this->startCard5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startCard5.Image")));
			this->startCard5->Location = System::Drawing::Point(471, 366);
			this->startCard5->Name = L"startCard5";
			this->startCard5->Size = System::Drawing::Size(61, 53);
			this->startCard5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->startCard5->TabIndex = 57;
			this->startCard5->TabStop = false;
			// 
			// p1AND_0_22
			// 
			this->p1AND_0_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_22.Image")));
			this->p1AND_0_22->Location = System::Drawing::Point(349, 471);
			this->p1AND_0_22->Name = L"p1AND_0_22";
			this->p1AND_0_22->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_22->TabIndex = 62;
			this->p1AND_0_22->TabStop = false;
			// 
			// p1AND_0_21
			// 
			this->p1AND_0_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_21.Image")));
			this->p1AND_0_21->Location = System::Drawing::Point(289, 471);
			this->p1AND_0_21->Name = L"p1AND_0_21";
			this->p1AND_0_21->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_21->TabIndex = 61;
			this->p1AND_0_21->TabStop = false;
			// 
			// p1AND_0_24
			// 
			this->p1AND_0_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_24.Image")));
			this->p1AND_0_24->Location = System::Drawing::Point(465, 471);
			this->p1AND_0_24->Name = L"p1AND_0_24";
			this->p1AND_0_24->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_24->TabIndex = 60;
			this->p1AND_0_24->TabStop = false;
			// 
			// p1AND_0_23
			// 
			this->p1AND_0_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_23.Image")));
			this->p1AND_0_23->Location = System::Drawing::Point(406, 471);
			this->p1AND_0_23->Name = L"p1AND_0_23";
			this->p1AND_0_23->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_23->TabIndex = 59;
			this->p1AND_0_23->TabStop = false;
			// 
			// p1AND_0_31
			// 
			this->p1AND_0_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_31.Image")));
			this->p1AND_0_31->Location = System::Drawing::Point(317, 524);
			this->p1AND_0_31->Name = L"p1AND_0_31";
			this->p1AND_0_31->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_31->TabIndex = 65;
			this->p1AND_0_31->TabStop = false;
			// 
			// p1AND_0_33
			// 
			this->p1AND_0_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_33.Image")));
			this->p1AND_0_33->Location = System::Drawing::Point(436, 524);
			this->p1AND_0_33->Name = L"p1AND_0_33";
			this->p1AND_0_33->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_33->TabIndex = 64;
			this->p1AND_0_33->TabStop = false;
			// 
			// p1AND_0_32
			// 
			this->p1AND_0_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_32.Image")));
			this->p1AND_0_32->Location = System::Drawing::Point(378, 524);
			this->p1AND_0_32->Name = L"p1AND_0_32";
			this->p1AND_0_32->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_32->TabIndex = 63;
			this->p1AND_0_32->TabStop = false;
			// 
			// p1AND_0_42
			// 
			this->p1AND_0_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_42.Image")));
			this->p1AND_0_42->Location = System::Drawing::Point(408, 577);
			this->p1AND_0_42->Name = L"p1AND_0_42";
			this->p1AND_0_42->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_42->TabIndex = 67;
			this->p1AND_0_42->TabStop = false;
			// 
			// p1AND_0_41
			// 
			this->p1AND_0_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_41.Image")));
			this->p1AND_0_41->Location = System::Drawing::Point(349, 577);
			this->p1AND_0_41->Name = L"p1AND_0_41";
			this->p1AND_0_41->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_41->TabIndex = 66;
			this->p1AND_0_41->TabStop = false;
			// 
			// p1AND_0_5
			// 
			this->p1AND_0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_0_5.Image")));
			this->p1AND_0_5->Location = System::Drawing::Point(378, 630);
			this->p1AND_0_5->Name = L"p1AND_0_5";
			this->p1AND_0_5->Size = System::Drawing::Size(61, 53);
			this->p1AND_0_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_0_5->TabIndex = 68;
			this->p1AND_0_5->TabStop = false;
			// 
			// p2CardInHand4
			// 
			this->p2CardInHand4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2CardInHand4.Image")));
			this->p2CardInHand4->Location = System::Drawing::Point(153, 66);
			this->p2CardInHand4->Name = L"p2CardInHand4";
			this->p2CardInHand4->Size = System::Drawing::Size(41, 69);
			this->p2CardInHand4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2CardInHand4->TabIndex = 87;
			this->p2CardInHand4->TabStop = false;
			// 
			// p2CardInHand3
			// 
			this->p2CardInHand3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2CardInHand3.Image")));
			this->p2CardInHand3->Location = System::Drawing::Point(106, 66);
			this->p2CardInHand3->Name = L"p2CardInHand3";
			this->p2CardInHand3->Size = System::Drawing::Size(41, 69);
			this->p2CardInHand3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2CardInHand3->TabIndex = 86;
			this->p2CardInHand3->TabStop = false;
			// 
			// p2CardInHand2
			// 
			this->p2CardInHand2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2CardInHand2.Image")));
			this->p2CardInHand2->Location = System::Drawing::Point(59, 66);
			this->p2CardInHand2->Name = L"p2CardInHand2";
			this->p2CardInHand2->Size = System::Drawing::Size(41, 69);
			this->p2CardInHand2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2CardInHand2->TabIndex = 85;
			this->p2CardInHand2->TabStop = false;
			// 
			// p2CardInHand1
			// 
			this->p2CardInHand1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2CardInHand1.Image")));
			this->p2CardInHand1->Location = System::Drawing::Point(12, 66);
			this->p2CardInHand1->Name = L"p2CardInHand1";
			this->p2CardInHand1->Size = System::Drawing::Size(41, 69);
			this->p2CardInHand1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2CardInHand1->TabIndex = 84;
			this->p2CardInHand1->TabStop = false;
			// 
			// p1AND_1_5
			// 
			this->p1AND_1_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_5.Image")));
			this->p1AND_1_5->Location = System::Drawing::Point(378, 630);
			this->p1AND_1_5->Name = L"p1AND_1_5";
			this->p1AND_1_5->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_5->TabIndex = 117;
			this->p1AND_1_5->TabStop = false;
			// 
			// p1AND_1_42
			// 
			this->p1AND_1_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_42.Image")));
			this->p1AND_1_42->Location = System::Drawing::Point(408, 577);
			this->p1AND_1_42->Name = L"p1AND_1_42";
			this->p1AND_1_42->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_42->TabIndex = 116;
			this->p1AND_1_42->TabStop = false;
			// 
			// p1AND_1_41
			// 
			this->p1AND_1_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_41.Image")));
			this->p1AND_1_41->Location = System::Drawing::Point(349, 577);
			this->p1AND_1_41->Name = L"p1AND_1_41";
			this->p1AND_1_41->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_41->TabIndex = 115;
			this->p1AND_1_41->TabStop = false;
			// 
			// p1AND_1_31
			// 
			this->p1AND_1_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_31.Image")));
			this->p1AND_1_31->Location = System::Drawing::Point(317, 524);
			this->p1AND_1_31->Name = L"p1AND_1_31";
			this->p1AND_1_31->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_31->TabIndex = 114;
			this->p1AND_1_31->TabStop = false;
			// 
			// p1AND_1_33
			// 
			this->p1AND_1_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_33.Image")));
			this->p1AND_1_33->Location = System::Drawing::Point(436, 524);
			this->p1AND_1_33->Name = L"p1AND_1_33";
			this->p1AND_1_33->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_33->TabIndex = 113;
			this->p1AND_1_33->TabStop = false;
			this->p1AND_1_33->Click += gcnew System::EventHandler(this, &PlayerVSPlayer::pictureBox20_Click);
			// 
			// p1AND_1_32
			// 
			this->p1AND_1_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_32.Image")));
			this->p1AND_1_32->Location = System::Drawing::Point(378, 524);
			this->p1AND_1_32->Name = L"p1AND_1_32";
			this->p1AND_1_32->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_32->TabIndex = 112;
			this->p1AND_1_32->TabStop = false;
			// 
			// p1AND_1_22
			// 
			this->p1AND_1_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_22.Image")));
			this->p1AND_1_22->Location = System::Drawing::Point(349, 471);
			this->p1AND_1_22->Name = L"p1AND_1_22";
			this->p1AND_1_22->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_22->TabIndex = 111;
			this->p1AND_1_22->TabStop = false;
			// 
			// p1AND_1_21
			// 
			this->p1AND_1_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_21.Image")));
			this->p1AND_1_21->Location = System::Drawing::Point(289, 471);
			this->p1AND_1_21->Name = L"p1AND_1_21";
			this->p1AND_1_21->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_21->TabIndex = 110;
			this->p1AND_1_21->TabStop = false;
			// 
			// p1AND_1_24
			// 
			this->p1AND_1_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_24.Image")));
			this->p1AND_1_24->Location = System::Drawing::Point(465, 471);
			this->p1AND_1_24->Name = L"p1AND_1_24";
			this->p1AND_1_24->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_24->TabIndex = 109;
			this->p1AND_1_24->TabStop = false;
			// 
			// p1AND_1_23
			// 
			this->p1AND_1_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_23.Image")));
			this->p1AND_1_23->Location = System::Drawing::Point(406, 471);
			this->p1AND_1_23->Name = L"p1AND_1_23";
			this->p1AND_1_23->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_23->TabIndex = 108;
			this->p1AND_1_23->TabStop = false;
			// 
			// p1AND_1_13
			// 
			this->p1AND_1_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_13.Image")));
			this->p1AND_1_13->Location = System::Drawing::Point(377, 418);
			this->p1AND_1_13->Name = L"p1AND_1_13";
			this->p1AND_1_13->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_13->TabIndex = 107;
			this->p1AND_1_13->TabStop = false;
			// 
			// p1AND_1_12
			// 
			this->p1AND_1_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_12.Image")));
			this->p1AND_1_12->Location = System::Drawing::Point(315, 418);
			this->p1AND_1_12->Name = L"p1AND_1_12";
			this->p1AND_1_12->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_12->TabIndex = 106;
			this->p1AND_1_12->TabStop = false;
			// 
			// p1AND_1_15
			// 
			this->p1AND_1_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_15.Image")));
			this->p1AND_1_15->Location = System::Drawing::Point(491, 418);
			this->p1AND_1_15->Name = L"p1AND_1_15";
			this->p1AND_1_15->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_15->TabIndex = 105;
			this->p1AND_1_15->TabStop = false;
			// 
			// p1AND_1_14
			// 
			this->p1AND_1_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_14.Image")));
			this->p1AND_1_14->Location = System::Drawing::Point(432, 418);
			this->p1AND_1_14->Name = L"p1AND_1_14";
			this->p1AND_1_14->Size = System::Drawing::Size(61, 53);
			this->p1AND_1_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_14->TabIndex = 104;
			this->p1AND_1_14->TabStop = false;
			// 
			// p1AND_1_11
			// 
			this->p1AND_1_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1AND_1_11.Image")));
			this->p1AND_1_11->Location = System::Drawing::Point(263, 418);
			this->p1AND_1_11->Name = L"p1AND_1_11";
			this->p1AND_1_11->Size = System::Drawing::Size(52, 53);
			this->p1AND_1_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1AND_1_11->TabIndex = 103;
			this->p1AND_1_11->TabStop = false;
			// 
			// p1OR_0_5
			// 
			this->p1OR_0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_5.Image")));
			this->p1OR_0_5->Location = System::Drawing::Point(378, 630);
			this->p1OR_0_5->Name = L"p1OR_0_5";
			this->p1OR_0_5->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_5->TabIndex = 132;
			this->p1OR_0_5->TabStop = false;
			// 
			// p1OR_0_42
			// 
			this->p1OR_0_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_42.Image")));
			this->p1OR_0_42->Location = System::Drawing::Point(408, 577);
			this->p1OR_0_42->Name = L"p1OR_0_42";
			this->p1OR_0_42->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_42->TabIndex = 131;
			this->p1OR_0_42->TabStop = false;
			// 
			// p1OR_0_41
			// 
			this->p1OR_0_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_41.Image")));
			this->p1OR_0_41->Location = System::Drawing::Point(349, 577);
			this->p1OR_0_41->Name = L"p1OR_0_41";
			this->p1OR_0_41->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_41->TabIndex = 130;
			this->p1OR_0_41->TabStop = false;
			// 
			// p1OR_0_31
			// 
			this->p1OR_0_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_31.Image")));
			this->p1OR_0_31->Location = System::Drawing::Point(317, 524);
			this->p1OR_0_31->Name = L"p1OR_0_31";
			this->p1OR_0_31->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_31->TabIndex = 129;
			this->p1OR_0_31->TabStop = false;
			// 
			// p1OR_0_33
			// 
			this->p1OR_0_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_33.Image")));
			this->p1OR_0_33->Location = System::Drawing::Point(436, 524);
			this->p1OR_0_33->Name = L"p1OR_0_33";
			this->p1OR_0_33->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_33->TabIndex = 128;
			this->p1OR_0_33->TabStop = false;
			// 
			// p1OR_0_32
			// 
			this->p1OR_0_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_32.Image")));
			this->p1OR_0_32->Location = System::Drawing::Point(378, 524);
			this->p1OR_0_32->Name = L"p1OR_0_32";
			this->p1OR_0_32->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_32->TabIndex = 127;
			this->p1OR_0_32->TabStop = false;
			// 
			// p1OR_0_22
			// 
			this->p1OR_0_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_22.Image")));
			this->p1OR_0_22->Location = System::Drawing::Point(349, 471);
			this->p1OR_0_22->Name = L"p1OR_0_22";
			this->p1OR_0_22->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_22->TabIndex = 126;
			this->p1OR_0_22->TabStop = false;
			// 
			// p1OR_0_21
			// 
			this->p1OR_0_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_21.Image")));
			this->p1OR_0_21->Location = System::Drawing::Point(289, 471);
			this->p1OR_0_21->Name = L"p1OR_0_21";
			this->p1OR_0_21->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_21->TabIndex = 125;
			this->p1OR_0_21->TabStop = false;
			// 
			// p1OR_0_24
			// 
			this->p1OR_0_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_24.Image")));
			this->p1OR_0_24->Location = System::Drawing::Point(465, 471);
			this->p1OR_0_24->Name = L"p1OR_0_24";
			this->p1OR_0_24->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_24->TabIndex = 124;
			this->p1OR_0_24->TabStop = false;
			// 
			// p1OR_0_23
			// 
			this->p1OR_0_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_23.Image")));
			this->p1OR_0_23->Location = System::Drawing::Point(406, 471);
			this->p1OR_0_23->Name = L"p1OR_0_23";
			this->p1OR_0_23->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_23->TabIndex = 123;
			this->p1OR_0_23->TabStop = false;
			// 
			// p1OR_0_13
			// 
			this->p1OR_0_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_13.Image")));
			this->p1OR_0_13->Location = System::Drawing::Point(377, 418);
			this->p1OR_0_13->Name = L"p1OR_0_13";
			this->p1OR_0_13->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_13->TabIndex = 122;
			this->p1OR_0_13->TabStop = false;
			// 
			// p1OR_0_12
			// 
			this->p1OR_0_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_12.Image")));
			this->p1OR_0_12->Location = System::Drawing::Point(315, 418);
			this->p1OR_0_12->Name = L"p1OR_0_12";
			this->p1OR_0_12->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_12->TabIndex = 121;
			this->p1OR_0_12->TabStop = false;
			// 
			// p1OR_0_15
			// 
			this->p1OR_0_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_15.Image")));
			this->p1OR_0_15->Location = System::Drawing::Point(491, 418);
			this->p1OR_0_15->Name = L"p1OR_0_15";
			this->p1OR_0_15->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_15->TabIndex = 120;
			this->p1OR_0_15->TabStop = false;
			// 
			// p1OR_0_14
			// 
			this->p1OR_0_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_14.Image")));
			this->p1OR_0_14->Location = System::Drawing::Point(432, 418);
			this->p1OR_0_14->Name = L"p1OR_0_14";
			this->p1OR_0_14->Size = System::Drawing::Size(61, 53);
			this->p1OR_0_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_14->TabIndex = 119;
			this->p1OR_0_14->TabStop = false;
			// 
			// p1OR_0_11
			// 
			this->p1OR_0_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_0_11.Image")));
			this->p1OR_0_11->Location = System::Drawing::Point(263, 418);
			this->p1OR_0_11->Name = L"p1OR_0_11";
			this->p1OR_0_11->Size = System::Drawing::Size(52, 53);
			this->p1OR_0_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_0_11->TabIndex = 118;
			this->p1OR_0_11->TabStop = false;
			// 
			// p1OR_1_5
			// 
			this->p1OR_1_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_5.Image")));
			this->p1OR_1_5->Location = System::Drawing::Point(378, 630);
			this->p1OR_1_5->Name = L"p1OR_1_5";
			this->p1OR_1_5->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_5->TabIndex = 147;
			this->p1OR_1_5->TabStop = false;
			// 
			// p1OR_1_42
			// 
			this->p1OR_1_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_42.Image")));
			this->p1OR_1_42->Location = System::Drawing::Point(408, 577);
			this->p1OR_1_42->Name = L"p1OR_1_42";
			this->p1OR_1_42->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_42->TabIndex = 146;
			this->p1OR_1_42->TabStop = false;
			// 
			// p1OR_1_41
			// 
			this->p1OR_1_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_41.Image")));
			this->p1OR_1_41->Location = System::Drawing::Point(349, 577);
			this->p1OR_1_41->Name = L"p1OR_1_41";
			this->p1OR_1_41->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_41->TabIndex = 145;
			this->p1OR_1_41->TabStop = false;
			// 
			// p1OR_1_31
			// 
			this->p1OR_1_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_31.Image")));
			this->p1OR_1_31->Location = System::Drawing::Point(317, 524);
			this->p1OR_1_31->Name = L"p1OR_1_31";
			this->p1OR_1_31->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_31->TabIndex = 144;
			this->p1OR_1_31->TabStop = false;
			// 
			// p1OR_1_33
			// 
			this->p1OR_1_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_33.Image")));
			this->p1OR_1_33->Location = System::Drawing::Point(436, 524);
			this->p1OR_1_33->Name = L"p1OR_1_33";
			this->p1OR_1_33->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_33->TabIndex = 143;
			this->p1OR_1_33->TabStop = false;
			// 
			// p1OR_1_32
			// 
			this->p1OR_1_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_32.Image")));
			this->p1OR_1_32->Location = System::Drawing::Point(378, 524);
			this->p1OR_1_32->Name = L"p1OR_1_32";
			this->p1OR_1_32->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_32->TabIndex = 142;
			this->p1OR_1_32->TabStop = false;
			// 
			// p1OR_1_22
			// 
			this->p1OR_1_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_22.Image")));
			this->p1OR_1_22->Location = System::Drawing::Point(349, 471);
			this->p1OR_1_22->Name = L"p1OR_1_22";
			this->p1OR_1_22->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_22->TabIndex = 141;
			this->p1OR_1_22->TabStop = false;
			// 
			// p1OR_1_21
			// 
			this->p1OR_1_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_21.Image")));
			this->p1OR_1_21->Location = System::Drawing::Point(289, 471);
			this->p1OR_1_21->Name = L"p1OR_1_21";
			this->p1OR_1_21->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_21->TabIndex = 140;
			this->p1OR_1_21->TabStop = false;
			// 
			// p1OR_1_24
			// 
			this->p1OR_1_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_24.Image")));
			this->p1OR_1_24->Location = System::Drawing::Point(465, 471);
			this->p1OR_1_24->Name = L"p1OR_1_24";
			this->p1OR_1_24->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_24->TabIndex = 139;
			this->p1OR_1_24->TabStop = false;
			// 
			// p1OR_1_23
			// 
			this->p1OR_1_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_23.Image")));
			this->p1OR_1_23->Location = System::Drawing::Point(406, 471);
			this->p1OR_1_23->Name = L"p1OR_1_23";
			this->p1OR_1_23->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_23->TabIndex = 138;
			this->p1OR_1_23->TabStop = false;
			// 
			// p1OR_1_13
			// 
			this->p1OR_1_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_13.Image")));
			this->p1OR_1_13->Location = System::Drawing::Point(377, 418);
			this->p1OR_1_13->Name = L"p1OR_1_13";
			this->p1OR_1_13->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_13->TabIndex = 137;
			this->p1OR_1_13->TabStop = false;
			// 
			// p1OR_1_12
			// 
			this->p1OR_1_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_12.Image")));
			this->p1OR_1_12->Location = System::Drawing::Point(315, 418);
			this->p1OR_1_12->Name = L"p1OR_1_12";
			this->p1OR_1_12->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_12->TabIndex = 136;
			this->p1OR_1_12->TabStop = false;
			// 
			// p1OR_1_15
			// 
			this->p1OR_1_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_15.Image")));
			this->p1OR_1_15->Location = System::Drawing::Point(491, 418);
			this->p1OR_1_15->Name = L"p1OR_1_15";
			this->p1OR_1_15->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_15->TabIndex = 135;
			this->p1OR_1_15->TabStop = false;
			// 
			// p1OR_1_14
			// 
			this->p1OR_1_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_14.Image")));
			this->p1OR_1_14->Location = System::Drawing::Point(432, 418);
			this->p1OR_1_14->Name = L"p1OR_1_14";
			this->p1OR_1_14->Size = System::Drawing::Size(61, 53);
			this->p1OR_1_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_14->TabIndex = 134;
			this->p1OR_1_14->TabStop = false;
			// 
			// p1OR_1_11
			// 
			this->p1OR_1_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1OR_1_11.Image")));
			this->p1OR_1_11->Location = System::Drawing::Point(263, 418);
			this->p1OR_1_11->Name = L"p1OR_1_11";
			this->p1OR_1_11->Size = System::Drawing::Size(52, 53);
			this->p1OR_1_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1OR_1_11->TabIndex = 133;
			this->p1OR_1_11->TabStop = false;
			// 
			// p1XOR_0_5
			// 
			this->p1XOR_0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_5.Image")));
			this->p1XOR_0_5->Location = System::Drawing::Point(378, 630);
			this->p1XOR_0_5->Name = L"p1XOR_0_5";
			this->p1XOR_0_5->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_5->TabIndex = 162;
			this->p1XOR_0_5->TabStop = false;
			// 
			// p1XOR_0_42
			// 
			this->p1XOR_0_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_42.Image")));
			this->p1XOR_0_42->Location = System::Drawing::Point(408, 577);
			this->p1XOR_0_42->Name = L"p1XOR_0_42";
			this->p1XOR_0_42->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_42->TabIndex = 161;
			this->p1XOR_0_42->TabStop = false;
			// 
			// p1XOR_0_41
			// 
			this->p1XOR_0_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_41.Image")));
			this->p1XOR_0_41->Location = System::Drawing::Point(349, 577);
			this->p1XOR_0_41->Name = L"p1XOR_0_41";
			this->p1XOR_0_41->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_41->TabIndex = 160;
			this->p1XOR_0_41->TabStop = false;
			// 
			// p1XOR_0_31
			// 
			this->p1XOR_0_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_31.Image")));
			this->p1XOR_0_31->Location = System::Drawing::Point(317, 524);
			this->p1XOR_0_31->Name = L"p1XOR_0_31";
			this->p1XOR_0_31->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_31->TabIndex = 159;
			this->p1XOR_0_31->TabStop = false;
			// 
			// p1XOR_0_33
			// 
			this->p1XOR_0_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_33.Image")));
			this->p1XOR_0_33->Location = System::Drawing::Point(436, 524);
			this->p1XOR_0_33->Name = L"p1XOR_0_33";
			this->p1XOR_0_33->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_33->TabIndex = 158;
			this->p1XOR_0_33->TabStop = false;
			// 
			// p1XOR_0_32
			// 
			this->p1XOR_0_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_32.Image")));
			this->p1XOR_0_32->Location = System::Drawing::Point(378, 524);
			this->p1XOR_0_32->Name = L"p1XOR_0_32";
			this->p1XOR_0_32->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_32->TabIndex = 157;
			this->p1XOR_0_32->TabStop = false;
			// 
			// p1XOR_0_22
			// 
			this->p1XOR_0_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_22.Image")));
			this->p1XOR_0_22->Location = System::Drawing::Point(349, 471);
			this->p1XOR_0_22->Name = L"p1XOR_0_22";
			this->p1XOR_0_22->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_22->TabIndex = 156;
			this->p1XOR_0_22->TabStop = false;
			// 
			// p1XOR_0_21
			// 
			this->p1XOR_0_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_21.Image")));
			this->p1XOR_0_21->Location = System::Drawing::Point(289, 471);
			this->p1XOR_0_21->Name = L"p1XOR_0_21";
			this->p1XOR_0_21->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_21->TabIndex = 155;
			this->p1XOR_0_21->TabStop = false;
			// 
			// p1XOR_0_24
			// 
			this->p1XOR_0_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_24.Image")));
			this->p1XOR_0_24->Location = System::Drawing::Point(465, 471);
			this->p1XOR_0_24->Name = L"p1XOR_0_24";
			this->p1XOR_0_24->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_24->TabIndex = 154;
			this->p1XOR_0_24->TabStop = false;
			// 
			// p1XOR_0_23
			// 
			this->p1XOR_0_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_23.Image")));
			this->p1XOR_0_23->Location = System::Drawing::Point(406, 471);
			this->p1XOR_0_23->Name = L"p1XOR_0_23";
			this->p1XOR_0_23->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_23->TabIndex = 153;
			this->p1XOR_0_23->TabStop = false;
			// 
			// p1XOR_0_13
			// 
			this->p1XOR_0_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_13.Image")));
			this->p1XOR_0_13->Location = System::Drawing::Point(377, 418);
			this->p1XOR_0_13->Name = L"p1XOR_0_13";
			this->p1XOR_0_13->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_13->TabIndex = 152;
			this->p1XOR_0_13->TabStop = false;
			// 
			// p1XOR_0_12
			// 
			this->p1XOR_0_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_12.Image")));
			this->p1XOR_0_12->Location = System::Drawing::Point(315, 418);
			this->p1XOR_0_12->Name = L"p1XOR_0_12";
			this->p1XOR_0_12->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_12->TabIndex = 151;
			this->p1XOR_0_12->TabStop = false;
			// 
			// p1XOR_0_15
			// 
			this->p1XOR_0_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_15.Image")));
			this->p1XOR_0_15->Location = System::Drawing::Point(491, 418);
			this->p1XOR_0_15->Name = L"p1XOR_0_15";
			this->p1XOR_0_15->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_15->TabIndex = 150;
			this->p1XOR_0_15->TabStop = false;
			// 
			// p1XOR_0_14
			// 
			this->p1XOR_0_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_14.Image")));
			this->p1XOR_0_14->Location = System::Drawing::Point(432, 418);
			this->p1XOR_0_14->Name = L"p1XOR_0_14";
			this->p1XOR_0_14->Size = System::Drawing::Size(61, 53);
			this->p1XOR_0_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_14->TabIndex = 149;
			this->p1XOR_0_14->TabStop = false;
			// 
			// p1XOR_0_11
			// 
			this->p1XOR_0_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_0_11.Image")));
			this->p1XOR_0_11->Location = System::Drawing::Point(263, 418);
			this->p1XOR_0_11->Name = L"p1XOR_0_11";
			this->p1XOR_0_11->Size = System::Drawing::Size(52, 53);
			this->p1XOR_0_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_0_11->TabIndex = 148;
			this->p1XOR_0_11->TabStop = false;
			// 
			// p1XOR_1_5
			// 
			this->p1XOR_1_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_5.Image")));
			this->p1XOR_1_5->Location = System::Drawing::Point(378, 630);
			this->p1XOR_1_5->Name = L"p1XOR_1_5";
			this->p1XOR_1_5->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_5->TabIndex = 177;
			this->p1XOR_1_5->TabStop = false;
			// 
			// p1XOR_1_42
			// 
			this->p1XOR_1_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_42.Image")));
			this->p1XOR_1_42->Location = System::Drawing::Point(408, 577);
			this->p1XOR_1_42->Name = L"p1XOR_1_42";
			this->p1XOR_1_42->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_42->TabIndex = 176;
			this->p1XOR_1_42->TabStop = false;
			// 
			// p1XOR_1_41
			// 
			this->p1XOR_1_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_41.Image")));
			this->p1XOR_1_41->Location = System::Drawing::Point(349, 577);
			this->p1XOR_1_41->Name = L"p1XOR_1_41";
			this->p1XOR_1_41->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_41->TabIndex = 175;
			this->p1XOR_1_41->TabStop = false;
			// 
			// p1XOR_1_31
			// 
			this->p1XOR_1_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_31.Image")));
			this->p1XOR_1_31->Location = System::Drawing::Point(317, 524);
			this->p1XOR_1_31->Name = L"p1XOR_1_31";
			this->p1XOR_1_31->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_31->TabIndex = 174;
			this->p1XOR_1_31->TabStop = false;
			// 
			// p1XOR_1_33
			// 
			this->p1XOR_1_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_33.Image")));
			this->p1XOR_1_33->Location = System::Drawing::Point(436, 524);
			this->p1XOR_1_33->Name = L"p1XOR_1_33";
			this->p1XOR_1_33->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_33->TabIndex = 173;
			this->p1XOR_1_33->TabStop = false;
			// 
			// p1XOR_1_32
			// 
			this->p1XOR_1_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_32.Image")));
			this->p1XOR_1_32->Location = System::Drawing::Point(378, 524);
			this->p1XOR_1_32->Name = L"p1XOR_1_32";
			this->p1XOR_1_32->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_32->TabIndex = 172;
			this->p1XOR_1_32->TabStop = false;
			// 
			// p1XOR_1_22
			// 
			this->p1XOR_1_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_22.Image")));
			this->p1XOR_1_22->Location = System::Drawing::Point(349, 471);
			this->p1XOR_1_22->Name = L"p1XOR_1_22";
			this->p1XOR_1_22->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_22->TabIndex = 171;
			this->p1XOR_1_22->TabStop = false;
			// 
			// p1XOR_1_21
			// 
			this->p1XOR_1_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_21.Image")));
			this->p1XOR_1_21->Location = System::Drawing::Point(289, 471);
			this->p1XOR_1_21->Name = L"p1XOR_1_21";
			this->p1XOR_1_21->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_21->TabIndex = 170;
			this->p1XOR_1_21->TabStop = false;
			// 
			// p1XOR_1_24
			// 
			this->p1XOR_1_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_24.Image")));
			this->p1XOR_1_24->Location = System::Drawing::Point(465, 471);
			this->p1XOR_1_24->Name = L"p1XOR_1_24";
			this->p1XOR_1_24->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_24->TabIndex = 169;
			this->p1XOR_1_24->TabStop = false;
			// 
			// p1XOR_1_23
			// 
			this->p1XOR_1_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_23.Image")));
			this->p1XOR_1_23->Location = System::Drawing::Point(406, 471);
			this->p1XOR_1_23->Name = L"p1XOR_1_23";
			this->p1XOR_1_23->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_23->TabIndex = 168;
			this->p1XOR_1_23->TabStop = false;
			// 
			// p1XOR_1_13
			// 
			this->p1XOR_1_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_13.Image")));
			this->p1XOR_1_13->Location = System::Drawing::Point(377, 418);
			this->p1XOR_1_13->Name = L"p1XOR_1_13";
			this->p1XOR_1_13->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_13->TabIndex = 167;
			this->p1XOR_1_13->TabStop = false;
			// 
			// p1XOR_1_12
			// 
			this->p1XOR_1_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_12.Image")));
			this->p1XOR_1_12->Location = System::Drawing::Point(315, 418);
			this->p1XOR_1_12->Name = L"p1XOR_1_12";
			this->p1XOR_1_12->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_12->TabIndex = 166;
			this->p1XOR_1_12->TabStop = false;
			// 
			// p1XOR_1_15
			// 
			this->p1XOR_1_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_15.Image")));
			this->p1XOR_1_15->Location = System::Drawing::Point(491, 418);
			this->p1XOR_1_15->Name = L"p1XOR_1_15";
			this->p1XOR_1_15->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_15->TabIndex = 165;
			this->p1XOR_1_15->TabStop = false;
			// 
			// p1XOR_1_14
			// 
			this->p1XOR_1_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_14.Image")));
			this->p1XOR_1_14->Location = System::Drawing::Point(432, 418);
			this->p1XOR_1_14->Name = L"p1XOR_1_14";
			this->p1XOR_1_14->Size = System::Drawing::Size(61, 53);
			this->p1XOR_1_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_14->TabIndex = 164;
			this->p1XOR_1_14->TabStop = false;
			// 
			// p1XOR_1_11
			// 
			this->p1XOR_1_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1XOR_1_11.Image")));
			this->p1XOR_1_11->Location = System::Drawing::Point(263, 418);
			this->p1XOR_1_11->Name = L"p1XOR_1_11";
			this->p1XOR_1_11->Size = System::Drawing::Size(52, 53);
			this->p1XOR_1_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1XOR_1_11->TabIndex = 163;
			this->p1XOR_1_11->TabStop = false;
			// 
			// p1pHere5
			// 
			this->p1pHere5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere5.Image")));
			this->p1pHere5->Location = System::Drawing::Point(379, 630);
			this->p1pHere5->Name = L"p1pHere5";
			this->p1pHere5->Size = System::Drawing::Size(61, 53);
			this->p1pHere5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere5->TabIndex = 192;
			this->p1pHere5->TabStop = false;
			// 
			// p1pHere42
			// 
			this->p1pHere42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere42.Image")));
			this->p1pHere42->Location = System::Drawing::Point(409, 577);
			this->p1pHere42->Name = L"p1pHere42";
			this->p1pHere42->Size = System::Drawing::Size(61, 53);
			this->p1pHere42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere42->TabIndex = 191;
			this->p1pHere42->TabStop = false;
			// 
			// p1pHere41
			// 
			this->p1pHere41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere41.Image")));
			this->p1pHere41->Location = System::Drawing::Point(350, 577);
			this->p1pHere41->Name = L"p1pHere41";
			this->p1pHere41->Size = System::Drawing::Size(61, 53);
			this->p1pHere41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere41->TabIndex = 190;
			this->p1pHere41->TabStop = false;
			// 
			// p1pHere31
			// 
			this->p1pHere31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere31.Image")));
			this->p1pHere31->Location = System::Drawing::Point(318, 524);
			this->p1pHere31->Name = L"p1pHere31";
			this->p1pHere31->Size = System::Drawing::Size(61, 53);
			this->p1pHere31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere31->TabIndex = 189;
			this->p1pHere31->TabStop = false;
			// 
			// p1pHere33
			// 
			this->p1pHere33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere33.Image")));
			this->p1pHere33->Location = System::Drawing::Point(437, 524);
			this->p1pHere33->Name = L"p1pHere33";
			this->p1pHere33->Size = System::Drawing::Size(61, 53);
			this->p1pHere33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere33->TabIndex = 188;
			this->p1pHere33->TabStop = false;
			// 
			// p1pHere32
			// 
			this->p1pHere32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere32.Image")));
			this->p1pHere32->Location = System::Drawing::Point(379, 524);
			this->p1pHere32->Name = L"p1pHere32";
			this->p1pHere32->Size = System::Drawing::Size(61, 53);
			this->p1pHere32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere32->TabIndex = 187;
			this->p1pHere32->TabStop = false;
			// 
			// p1pHere22
			// 
			this->p1pHere22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere22.Image")));
			this->p1pHere22->Location = System::Drawing::Point(350, 471);
			this->p1pHere22->Name = L"p1pHere22";
			this->p1pHere22->Size = System::Drawing::Size(61, 53);
			this->p1pHere22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere22->TabIndex = 186;
			this->p1pHere22->TabStop = false;
			// 
			// p1pHere21
			// 
			this->p1pHere21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere21.Image")));
			this->p1pHere21->Location = System::Drawing::Point(290, 471);
			this->p1pHere21->Name = L"p1pHere21";
			this->p1pHere21->Size = System::Drawing::Size(61, 53);
			this->p1pHere21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere21->TabIndex = 185;
			this->p1pHere21->TabStop = false;
			// 
			// p1pHere24
			// 
			this->p1pHere24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere24.Image")));
			this->p1pHere24->Location = System::Drawing::Point(466, 471);
			this->p1pHere24->Name = L"p1pHere24";
			this->p1pHere24->Size = System::Drawing::Size(61, 53);
			this->p1pHere24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere24->TabIndex = 184;
			this->p1pHere24->TabStop = false;
			// 
			// p1pHere23
			// 
			this->p1pHere23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere23.Image")));
			this->p1pHere23->Location = System::Drawing::Point(407, 471);
			this->p1pHere23->Name = L"p1pHere23";
			this->p1pHere23->Size = System::Drawing::Size(61, 53);
			this->p1pHere23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere23->TabIndex = 183;
			this->p1pHere23->TabStop = false;
			// 
			// p1pHere13
			// 
			this->p1pHere13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere13.Image")));
			this->p1pHere13->Location = System::Drawing::Point(378, 418);
			this->p1pHere13->Name = L"p1pHere13";
			this->p1pHere13->Size = System::Drawing::Size(61, 53);
			this->p1pHere13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere13->TabIndex = 182;
			this->p1pHere13->TabStop = false;
			// 
			// p1pHere12
			// 
			this->p1pHere12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere12.Image")));
			this->p1pHere12->Location = System::Drawing::Point(316, 418);
			this->p1pHere12->Name = L"p1pHere12";
			this->p1pHere12->Size = System::Drawing::Size(61, 53);
			this->p1pHere12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere12->TabIndex = 181;
			this->p1pHere12->TabStop = false;
			// 
			// p1pHere15
			// 
			this->p1pHere15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere15.Image")));
			this->p1pHere15->Location = System::Drawing::Point(492, 418);
			this->p1pHere15->Name = L"p1pHere15";
			this->p1pHere15->Size = System::Drawing::Size(61, 53);
			this->p1pHere15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere15->TabIndex = 180;
			this->p1pHere15->TabStop = false;
			// 
			// p1pHere14
			// 
			this->p1pHere14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere14.Image")));
			this->p1pHere14->Location = System::Drawing::Point(433, 418);
			this->p1pHere14->Name = L"p1pHere14";
			this->p1pHere14->Size = System::Drawing::Size(61, 53);
			this->p1pHere14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere14->TabIndex = 179;
			this->p1pHere14->TabStop = false;
			// 
			// p1pHere11
			// 
			this->p1pHere11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p1pHere11.Image")));
			this->p1pHere11->Location = System::Drawing::Point(264, 418);
			this->p1pHere11->Name = L"p1pHere11";
			this->p1pHere11->Size = System::Drawing::Size(52, 53);
			this->p1pHere11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p1pHere11->TabIndex = 178;
			this->p1pHere11->TabStop = false;
			// 
			// p2AND_0_5
			// 
			this->p2AND_0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_5.Image")));
			this->p2AND_0_5->Location = System::Drawing::Point(378, 101);
			this->p2AND_0_5->Name = L"p2AND_0_5";
			this->p2AND_0_5->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_5->TabIndex = 207;
			this->p2AND_0_5->TabStop = false;
			// 
			// p2AND_0_42
			// 
			this->p2AND_0_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_42.Image")));
			this->p2AND_0_42->Location = System::Drawing::Point(408, 154);
			this->p2AND_0_42->Name = L"p2AND_0_42";
			this->p2AND_0_42->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_42->TabIndex = 206;
			this->p2AND_0_42->TabStop = false;
			// 
			// p2AND_0_41
			// 
			this->p2AND_0_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_41.Image")));
			this->p2AND_0_41->Location = System::Drawing::Point(349, 154);
			this->p2AND_0_41->Name = L"p2AND_0_41";
			this->p2AND_0_41->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_41->TabIndex = 205;
			this->p2AND_0_41->TabStop = false;
			// 
			// p2AND_0_31
			// 
			this->p2AND_0_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_31.Image")));
			this->p2AND_0_31->Location = System::Drawing::Point(317, 207);
			this->p2AND_0_31->Name = L"p2AND_0_31";
			this->p2AND_0_31->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_31->TabIndex = 204;
			this->p2AND_0_31->TabStop = false;
			// 
			// p2AND_0_33
			// 
			this->p2AND_0_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_33.Image")));
			this->p2AND_0_33->Location = System::Drawing::Point(436, 207);
			this->p2AND_0_33->Name = L"p2AND_0_33";
			this->p2AND_0_33->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_33->TabIndex = 203;
			this->p2AND_0_33->TabStop = false;
			// 
			// p2AND_0_32
			// 
			this->p2AND_0_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_32.Image")));
			this->p2AND_0_32->Location = System::Drawing::Point(377, 207);
			this->p2AND_0_32->Name = L"p2AND_0_32";
			this->p2AND_0_32->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_32->TabIndex = 202;
			this->p2AND_0_32->TabStop = false;
			// 
			// p2AND_0_22
			// 
			this->p2AND_0_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_22.Image")));
			this->p2AND_0_22->Location = System::Drawing::Point(346, 260);
			this->p2AND_0_22->Name = L"p2AND_0_22";
			this->p2AND_0_22->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_22->TabIndex = 201;
			this->p2AND_0_22->TabStop = false;
			// 
			// p2AND_0_21
			// 
			this->p2AND_0_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_21.Image")));
			this->p2AND_0_21->Location = System::Drawing::Point(289, 260);
			this->p2AND_0_21->Name = L"p2AND_0_21";
			this->p2AND_0_21->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_21->TabIndex = 200;
			this->p2AND_0_21->TabStop = false;
			// 
			// p2AND_0_24
			// 
			this->p2AND_0_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_24.Image")));
			this->p2AND_0_24->Location = System::Drawing::Point(465, 260);
			this->p2AND_0_24->Name = L"p2AND_0_24";
			this->p2AND_0_24->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_24->TabIndex = 199;
			this->p2AND_0_24->TabStop = false;
			// 
			// p2AND_0_23
			// 
			this->p2AND_0_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_23.Image")));
			this->p2AND_0_23->Location = System::Drawing::Point(406, 260);
			this->p2AND_0_23->Name = L"p2AND_0_23";
			this->p2AND_0_23->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_23->TabIndex = 198;
			this->p2AND_0_23->TabStop = false;
			// 
			// p2AND_0_13
			// 
			this->p2AND_0_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_13.Image")));
			this->p2AND_0_13->Location = System::Drawing::Point(372, 313);
			this->p2AND_0_13->Name = L"p2AND_0_13";
			this->p2AND_0_13->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_13->TabIndex = 197;
			this->p2AND_0_13->TabStop = false;
			// 
			// p2AND_0_12
			// 
			this->p2AND_0_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_12.Image")));
			this->p2AND_0_12->Location = System::Drawing::Point(315, 313);
			this->p2AND_0_12->Name = L"p2AND_0_12";
			this->p2AND_0_12->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_12->TabIndex = 196;
			this->p2AND_0_12->TabStop = false;
			// 
			// p2AND_0_15
			// 
			this->p2AND_0_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_15.Image")));
			this->p2AND_0_15->Location = System::Drawing::Point(491, 313);
			this->p2AND_0_15->Name = L"p2AND_0_15";
			this->p2AND_0_15->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_15->TabIndex = 195;
			this->p2AND_0_15->TabStop = false;
			// 
			// p2AND_0_14
			// 
			this->p2AND_0_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_14.Image")));
			this->p2AND_0_14->Location = System::Drawing::Point(432, 313);
			this->p2AND_0_14->Name = L"p2AND_0_14";
			this->p2AND_0_14->Size = System::Drawing::Size(61, 53);
			this->p2AND_0_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_14->TabIndex = 194;
			this->p2AND_0_14->TabStop = false;
			// 
			// p2AND_0_11
			// 
			this->p2AND_0_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_0_11.Image")));
			this->p2AND_0_11->Location = System::Drawing::Point(263, 313);
			this->p2AND_0_11->Name = L"p2AND_0_11";
			this->p2AND_0_11->Size = System::Drawing::Size(52, 53);
			this->p2AND_0_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_0_11->TabIndex = 193;
			this->p2AND_0_11->TabStop = false;
			// 
			// p2AND_1_5
			// 
			this->p2AND_1_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_5.Image")));
			this->p2AND_1_5->Location = System::Drawing::Point(379, 101);
			this->p2AND_1_5->Name = L"p2AND_1_5";
			this->p2AND_1_5->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_5->TabIndex = 222;
			this->p2AND_1_5->TabStop = false;
			// 
			// p2AND_1_42
			// 
			this->p2AND_1_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_42.Image")));
			this->p2AND_1_42->Location = System::Drawing::Point(409, 154);
			this->p2AND_1_42->Name = L"p2AND_1_42";
			this->p2AND_1_42->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_42->TabIndex = 221;
			this->p2AND_1_42->TabStop = false;
			// 
			// p2AND_1_41
			// 
			this->p2AND_1_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_41.Image")));
			this->p2AND_1_41->Location = System::Drawing::Point(350, 154);
			this->p2AND_1_41->Name = L"p2AND_1_41";
			this->p2AND_1_41->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_41->TabIndex = 220;
			this->p2AND_1_41->TabStop = false;
			// 
			// p2AND_1_31
			// 
			this->p2AND_1_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_31.Image")));
			this->p2AND_1_31->Location = System::Drawing::Point(318, 207);
			this->p2AND_1_31->Name = L"p2AND_1_31";
			this->p2AND_1_31->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_31->TabIndex = 219;
			this->p2AND_1_31->TabStop = false;
			// 
			// p2AND_1_33
			// 
			this->p2AND_1_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_33.Image")));
			this->p2AND_1_33->Location = System::Drawing::Point(437, 207);
			this->p2AND_1_33->Name = L"p2AND_1_33";
			this->p2AND_1_33->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_33->TabIndex = 218;
			this->p2AND_1_33->TabStop = false;
			// 
			// p2AND_1_32
			// 
			this->p2AND_1_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_32.Image")));
			this->p2AND_1_32->Location = System::Drawing::Point(378, 207);
			this->p2AND_1_32->Name = L"p2AND_1_32";
			this->p2AND_1_32->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_32->TabIndex = 217;
			this->p2AND_1_32->TabStop = false;
			// 
			// p2AND_1_22
			// 
			this->p2AND_1_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_22.Image")));
			this->p2AND_1_22->Location = System::Drawing::Point(347, 260);
			this->p2AND_1_22->Name = L"p2AND_1_22";
			this->p2AND_1_22->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_22->TabIndex = 216;
			this->p2AND_1_22->TabStop = false;
			// 
			// p2AND_1_21
			// 
			this->p2AND_1_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_21.Image")));
			this->p2AND_1_21->Location = System::Drawing::Point(290, 260);
			this->p2AND_1_21->Name = L"p2AND_1_21";
			this->p2AND_1_21->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_21->TabIndex = 215;
			this->p2AND_1_21->TabStop = false;
			// 
			// p2AND_1_24
			// 
			this->p2AND_1_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_24.Image")));
			this->p2AND_1_24->Location = System::Drawing::Point(466, 260);
			this->p2AND_1_24->Name = L"p2AND_1_24";
			this->p2AND_1_24->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_24->TabIndex = 214;
			this->p2AND_1_24->TabStop = false;
			// 
			// p2AND_1_23
			// 
			this->p2AND_1_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_23.Image")));
			this->p2AND_1_23->Location = System::Drawing::Point(407, 260);
			this->p2AND_1_23->Name = L"p2AND_1_23";
			this->p2AND_1_23->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_23->TabIndex = 213;
			this->p2AND_1_23->TabStop = false;
			// 
			// p2AND_1_13
			// 
			this->p2AND_1_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_13.Image")));
			this->p2AND_1_13->Location = System::Drawing::Point(373, 313);
			this->p2AND_1_13->Name = L"p2AND_1_13";
			this->p2AND_1_13->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_13->TabIndex = 212;
			this->p2AND_1_13->TabStop = false;
			// 
			// p2AND_1_12
			// 
			this->p2AND_1_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_12.Image")));
			this->p2AND_1_12->Location = System::Drawing::Point(316, 313);
			this->p2AND_1_12->Name = L"p2AND_1_12";
			this->p2AND_1_12->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_12->TabIndex = 211;
			this->p2AND_1_12->TabStop = false;
			// 
			// p2AND_1_15
			// 
			this->p2AND_1_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_15.Image")));
			this->p2AND_1_15->Location = System::Drawing::Point(492, 313);
			this->p2AND_1_15->Name = L"p2AND_1_15";
			this->p2AND_1_15->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_15->TabIndex = 210;
			this->p2AND_1_15->TabStop = false;
			// 
			// p2AND_1_14
			// 
			this->p2AND_1_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_14.Image")));
			this->p2AND_1_14->Location = System::Drawing::Point(433, 313);
			this->p2AND_1_14->Name = L"p2AND_1_14";
			this->p2AND_1_14->Size = System::Drawing::Size(61, 53);
			this->p2AND_1_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_14->TabIndex = 209;
			this->p2AND_1_14->TabStop = false;
			// 
			// p2AND_1_11
			// 
			this->p2AND_1_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2AND_1_11.Image")));
			this->p2AND_1_11->Location = System::Drawing::Point(264, 313);
			this->p2AND_1_11->Name = L"p2AND_1_11";
			this->p2AND_1_11->Size = System::Drawing::Size(52, 53);
			this->p2AND_1_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2AND_1_11->TabIndex = 208;
			this->p2AND_1_11->TabStop = false;
			// 
			// p2OR_0_5
			// 
			this->p2OR_0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_5.Image")));
			this->p2OR_0_5->Location = System::Drawing::Point(379, 101);
			this->p2OR_0_5->Name = L"p2OR_0_5";
			this->p2OR_0_5->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_5->TabIndex = 237;
			this->p2OR_0_5->TabStop = false;
			// 
			// p2OR_0_42
			// 
			this->p2OR_0_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_42.Image")));
			this->p2OR_0_42->Location = System::Drawing::Point(409, 154);
			this->p2OR_0_42->Name = L"p2OR_0_42";
			this->p2OR_0_42->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_42->TabIndex = 236;
			this->p2OR_0_42->TabStop = false;
			// 
			// p2OR_0_41
			// 
			this->p2OR_0_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_41.Image")));
			this->p2OR_0_41->Location = System::Drawing::Point(350, 154);
			this->p2OR_0_41->Name = L"p2OR_0_41";
			this->p2OR_0_41->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_41->TabIndex = 235;
			this->p2OR_0_41->TabStop = false;
			// 
			// p2OR_0_31
			// 
			this->p2OR_0_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_31.Image")));
			this->p2OR_0_31->Location = System::Drawing::Point(318, 207);
			this->p2OR_0_31->Name = L"p2OR_0_31";
			this->p2OR_0_31->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_31->TabIndex = 234;
			this->p2OR_0_31->TabStop = false;
			// 
			// p2OR_0_33
			// 
			this->p2OR_0_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_33.Image")));
			this->p2OR_0_33->Location = System::Drawing::Point(437, 207);
			this->p2OR_0_33->Name = L"p2OR_0_33";
			this->p2OR_0_33->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_33->TabIndex = 233;
			this->p2OR_0_33->TabStop = false;
			// 
			// p2OR_0_32
			// 
			this->p2OR_0_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_32.Image")));
			this->p2OR_0_32->Location = System::Drawing::Point(378, 207);
			this->p2OR_0_32->Name = L"p2OR_0_32";
			this->p2OR_0_32->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_32->TabIndex = 232;
			this->p2OR_0_32->TabStop = false;
			// 
			// p2OR_0_22
			// 
			this->p2OR_0_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_22.Image")));
			this->p2OR_0_22->Location = System::Drawing::Point(347, 260);
			this->p2OR_0_22->Name = L"p2OR_0_22";
			this->p2OR_0_22->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_22->TabIndex = 231;
			this->p2OR_0_22->TabStop = false;
			// 
			// p2OR_0_21
			// 
			this->p2OR_0_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_21.Image")));
			this->p2OR_0_21->Location = System::Drawing::Point(290, 260);
			this->p2OR_0_21->Name = L"p2OR_0_21";
			this->p2OR_0_21->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_21->TabIndex = 230;
			this->p2OR_0_21->TabStop = false;
			// 
			// p2OR_0_24
			// 
			this->p2OR_0_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_24.Image")));
			this->p2OR_0_24->Location = System::Drawing::Point(466, 260);
			this->p2OR_0_24->Name = L"p2OR_0_24";
			this->p2OR_0_24->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_24->TabIndex = 229;
			this->p2OR_0_24->TabStop = false;
			// 
			// p2OR_0_23
			// 
			this->p2OR_0_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_23.Image")));
			this->p2OR_0_23->Location = System::Drawing::Point(407, 260);
			this->p2OR_0_23->Name = L"p2OR_0_23";
			this->p2OR_0_23->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_23->TabIndex = 228;
			this->p2OR_0_23->TabStop = false;
			// 
			// p2OR_0_13
			// 
			this->p2OR_0_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_13.Image")));
			this->p2OR_0_13->Location = System::Drawing::Point(373, 313);
			this->p2OR_0_13->Name = L"p2OR_0_13";
			this->p2OR_0_13->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_13->TabIndex = 227;
			this->p2OR_0_13->TabStop = false;
			// 
			// p2OR_0_12
			// 
			this->p2OR_0_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_12.Image")));
			this->p2OR_0_12->Location = System::Drawing::Point(316, 313);
			this->p2OR_0_12->Name = L"p2OR_0_12";
			this->p2OR_0_12->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_12->TabIndex = 226;
			this->p2OR_0_12->TabStop = false;
			// 
			// p2OR_0_15
			// 
			this->p2OR_0_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_15.Image")));
			this->p2OR_0_15->Location = System::Drawing::Point(492, 313);
			this->p2OR_0_15->Name = L"p2OR_0_15";
			this->p2OR_0_15->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_15->TabIndex = 225;
			this->p2OR_0_15->TabStop = false;
			// 
			// p2OR_0_14
			// 
			this->p2OR_0_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_14.Image")));
			this->p2OR_0_14->Location = System::Drawing::Point(433, 313);
			this->p2OR_0_14->Name = L"p2OR_0_14";
			this->p2OR_0_14->Size = System::Drawing::Size(61, 53);
			this->p2OR_0_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_14->TabIndex = 224;
			this->p2OR_0_14->TabStop = false;
			// 
			// p2OR_0_11
			// 
			this->p2OR_0_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_0_11.Image")));
			this->p2OR_0_11->Location = System::Drawing::Point(264, 313);
			this->p2OR_0_11->Name = L"p2OR_0_11";
			this->p2OR_0_11->Size = System::Drawing::Size(52, 53);
			this->p2OR_0_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_0_11->TabIndex = 223;
			this->p2OR_0_11->TabStop = false;
			// 
			// p2pHere5
			// 
			this->p2pHere5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere5.Image")));
			this->p2pHere5->Location = System::Drawing::Point(377, 101);
			this->p2pHere5->Name = L"p2pHere5";
			this->p2pHere5->Size = System::Drawing::Size(61, 53);
			this->p2pHere5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere5->TabIndex = 252;
			this->p2pHere5->TabStop = false;
			// 
			// p2OR_1_42
			// 
			this->p2OR_1_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_42.Image")));
			this->p2OR_1_42->Location = System::Drawing::Point(407, 154);
			this->p2OR_1_42->Name = L"p2OR_1_42";
			this->p2OR_1_42->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_42->TabIndex = 251;
			this->p2OR_1_42->TabStop = false;
			// 
			// p2OR_1_41
			// 
			this->p2OR_1_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_41.Image")));
			this->p2OR_1_41->Location = System::Drawing::Point(348, 154);
			this->p2OR_1_41->Name = L"p2OR_1_41";
			this->p2OR_1_41->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_41->TabIndex = 250;
			this->p2OR_1_41->TabStop = false;
			// 
			// p2OR_1_31
			// 
			this->p2OR_1_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_31.Image")));
			this->p2OR_1_31->Location = System::Drawing::Point(316, 207);
			this->p2OR_1_31->Name = L"p2OR_1_31";
			this->p2OR_1_31->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_31->TabIndex = 249;
			this->p2OR_1_31->TabStop = false;
			// 
			// p2OR_1_33
			// 
			this->p2OR_1_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_33.Image")));
			this->p2OR_1_33->Location = System::Drawing::Point(435, 207);
			this->p2OR_1_33->Name = L"p2OR_1_33";
			this->p2OR_1_33->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_33->TabIndex = 248;
			this->p2OR_1_33->TabStop = false;
			// 
			// p2OR_1_32
			// 
			this->p2OR_1_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_32.Image")));
			this->p2OR_1_32->Location = System::Drawing::Point(376, 207);
			this->p2OR_1_32->Name = L"p2OR_1_32";
			this->p2OR_1_32->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_32->TabIndex = 247;
			this->p2OR_1_32->TabStop = false;
			// 
			// p2OR_1_22
			// 
			this->p2OR_1_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_22.Image")));
			this->p2OR_1_22->Location = System::Drawing::Point(345, 260);
			this->p2OR_1_22->Name = L"p2OR_1_22";
			this->p2OR_1_22->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_22->TabIndex = 246;
			this->p2OR_1_22->TabStop = false;
			// 
			// p2OR_1_21
			// 
			this->p2OR_1_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_21.Image")));
			this->p2OR_1_21->Location = System::Drawing::Point(288, 260);
			this->p2OR_1_21->Name = L"p2OR_1_21";
			this->p2OR_1_21->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_21->TabIndex = 245;
			this->p2OR_1_21->TabStop = false;
			// 
			// p2OR_1_24
			// 
			this->p2OR_1_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_24.Image")));
			this->p2OR_1_24->Location = System::Drawing::Point(464, 260);
			this->p2OR_1_24->Name = L"p2OR_1_24";
			this->p2OR_1_24->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_24->TabIndex = 244;
			this->p2OR_1_24->TabStop = false;
			// 
			// p2OR_1_23
			// 
			this->p2OR_1_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_23.Image")));
			this->p2OR_1_23->Location = System::Drawing::Point(405, 260);
			this->p2OR_1_23->Name = L"p2OR_1_23";
			this->p2OR_1_23->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_23->TabIndex = 243;
			this->p2OR_1_23->TabStop = false;
			// 
			// p2OR_1_13
			// 
			this->p2OR_1_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_13.Image")));
			this->p2OR_1_13->Location = System::Drawing::Point(371, 313);
			this->p2OR_1_13->Name = L"p2OR_1_13";
			this->p2OR_1_13->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_13->TabIndex = 242;
			this->p2OR_1_13->TabStop = false;
			// 
			// p2OR_1_12
			// 
			this->p2OR_1_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_12.Image")));
			this->p2OR_1_12->Location = System::Drawing::Point(314, 313);
			this->p2OR_1_12->Name = L"p2OR_1_12";
			this->p2OR_1_12->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_12->TabIndex = 241;
			this->p2OR_1_12->TabStop = false;
			// 
			// p2OR_1_15
			// 
			this->p2OR_1_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_15.Image")));
			this->p2OR_1_15->Location = System::Drawing::Point(490, 313);
			this->p2OR_1_15->Name = L"p2OR_1_15";
			this->p2OR_1_15->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_15->TabIndex = 240;
			this->p2OR_1_15->TabStop = false;
			// 
			// p2OR_1_14
			// 
			this->p2OR_1_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_14.Image")));
			this->p2OR_1_14->Location = System::Drawing::Point(431, 313);
			this->p2OR_1_14->Name = L"p2OR_1_14";
			this->p2OR_1_14->Size = System::Drawing::Size(61, 53);
			this->p2OR_1_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_14->TabIndex = 239;
			this->p2OR_1_14->TabStop = false;
			// 
			// p2OR_1_11
			// 
			this->p2OR_1_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2OR_1_11.Image")));
			this->p2OR_1_11->Location = System::Drawing::Point(262, 313);
			this->p2OR_1_11->Name = L"p2OR_1_11";
			this->p2OR_1_11->Size = System::Drawing::Size(52, 53);
			this->p2OR_1_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2OR_1_11->TabIndex = 238;
			this->p2OR_1_11->TabStop = false;
			// 
			// p2XOR_0_5
			// 
			this->p2XOR_0_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_5.Image")));
			this->p2XOR_0_5->Location = System::Drawing::Point(379, 101);
			this->p2XOR_0_5->Name = L"p2XOR_0_5";
			this->p2XOR_0_5->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_5->TabIndex = 267;
			this->p2XOR_0_5->TabStop = false;
			// 
			// p2XOR_0_42
			// 
			this->p2XOR_0_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_42.Image")));
			this->p2XOR_0_42->Location = System::Drawing::Point(409, 154);
			this->p2XOR_0_42->Name = L"p2XOR_0_42";
			this->p2XOR_0_42->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_42->TabIndex = 266;
			this->p2XOR_0_42->TabStop = false;
			// 
			// p2XOR_0_41
			// 
			this->p2XOR_0_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_41.Image")));
			this->p2XOR_0_41->Location = System::Drawing::Point(350, 154);
			this->p2XOR_0_41->Name = L"p2XOR_0_41";
			this->p2XOR_0_41->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_41->TabIndex = 265;
			this->p2XOR_0_41->TabStop = false;
			// 
			// p2XOR_0_31
			// 
			this->p2XOR_0_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_31.Image")));
			this->p2XOR_0_31->Location = System::Drawing::Point(318, 207);
			this->p2XOR_0_31->Name = L"p2XOR_0_31";
			this->p2XOR_0_31->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_31->TabIndex = 264;
			this->p2XOR_0_31->TabStop = false;
			// 
			// p2XOR_0_33
			// 
			this->p2XOR_0_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_33.Image")));
			this->p2XOR_0_33->Location = System::Drawing::Point(437, 207);
			this->p2XOR_0_33->Name = L"p2XOR_0_33";
			this->p2XOR_0_33->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_33->TabIndex = 263;
			this->p2XOR_0_33->TabStop = false;
			// 
			// p2XOR_0_32
			// 
			this->p2XOR_0_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_32.Image")));
			this->p2XOR_0_32->Location = System::Drawing::Point(378, 207);
			this->p2XOR_0_32->Name = L"p2XOR_0_32";
			this->p2XOR_0_32->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_32->TabIndex = 262;
			this->p2XOR_0_32->TabStop = false;
			// 
			// p2XOR_0_22
			// 
			this->p2XOR_0_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_22.Image")));
			this->p2XOR_0_22->Location = System::Drawing::Point(347, 260);
			this->p2XOR_0_22->Name = L"p2XOR_0_22";
			this->p2XOR_0_22->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_22->TabIndex = 261;
			this->p2XOR_0_22->TabStop = false;
			// 
			// p2XOR_0_21
			// 
			this->p2XOR_0_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_21.Image")));
			this->p2XOR_0_21->Location = System::Drawing::Point(290, 260);
			this->p2XOR_0_21->Name = L"p2XOR_0_21";
			this->p2XOR_0_21->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_21->TabIndex = 260;
			this->p2XOR_0_21->TabStop = false;
			// 
			// p2XOR_0_24
			// 
			this->p2XOR_0_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_24.Image")));
			this->p2XOR_0_24->Location = System::Drawing::Point(466, 260);
			this->p2XOR_0_24->Name = L"p2XOR_0_24";
			this->p2XOR_0_24->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_24->TabIndex = 259;
			this->p2XOR_0_24->TabStop = false;
			// 
			// p2XOR_0_23
			// 
			this->p2XOR_0_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_23.Image")));
			this->p2XOR_0_23->Location = System::Drawing::Point(407, 260);
			this->p2XOR_0_23->Name = L"p2XOR_0_23";
			this->p2XOR_0_23->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_23->TabIndex = 258;
			this->p2XOR_0_23->TabStop = false;
			// 
			// p2XOR_0_13
			// 
			this->p2XOR_0_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_13.Image")));
			this->p2XOR_0_13->Location = System::Drawing::Point(373, 313);
			this->p2XOR_0_13->Name = L"p2XOR_0_13";
			this->p2XOR_0_13->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_13->TabIndex = 257;
			this->p2XOR_0_13->TabStop = false;
			// 
			// p2XOR_0_12
			// 
			this->p2XOR_0_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_12.Image")));
			this->p2XOR_0_12->Location = System::Drawing::Point(316, 313);
			this->p2XOR_0_12->Name = L"p2XOR_0_12";
			this->p2XOR_0_12->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_12->TabIndex = 256;
			this->p2XOR_0_12->TabStop = false;
			// 
			// p2XOR_0_15
			// 
			this->p2XOR_0_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_15.Image")));
			this->p2XOR_0_15->Location = System::Drawing::Point(492, 313);
			this->p2XOR_0_15->Name = L"p2XOR_0_15";
			this->p2XOR_0_15->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_15->TabIndex = 255;
			this->p2XOR_0_15->TabStop = false;
			// 
			// p2XOR_0_14
			// 
			this->p2XOR_0_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_14.Image")));
			this->p2XOR_0_14->Location = System::Drawing::Point(433, 313);
			this->p2XOR_0_14->Name = L"p2XOR_0_14";
			this->p2XOR_0_14->Size = System::Drawing::Size(61, 53);
			this->p2XOR_0_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_14->TabIndex = 254;
			this->p2XOR_0_14->TabStop = false;
			// 
			// p2XOR_0_11
			// 
			this->p2XOR_0_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_0_11.Image")));
			this->p2XOR_0_11->Location = System::Drawing::Point(264, 313);
			this->p2XOR_0_11->Name = L"p2XOR_0_11";
			this->p2XOR_0_11->Size = System::Drawing::Size(52, 53);
			this->p2XOR_0_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_0_11->TabIndex = 253;
			this->p2XOR_0_11->TabStop = false;
			// 
			// p2XOR_1_5
			// 
			this->p2XOR_1_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_5.Image")));
			this->p2XOR_1_5->Location = System::Drawing::Point(378, 101);
			this->p2XOR_1_5->Name = L"p2XOR_1_5";
			this->p2XOR_1_5->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_5->TabIndex = 282;
			this->p2XOR_1_5->TabStop = false;
			// 
			// p2XOR_1_42
			// 
			this->p2XOR_1_42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_42.Image")));
			this->p2XOR_1_42->Location = System::Drawing::Point(408, 154);
			this->p2XOR_1_42->Name = L"p2XOR_1_42";
			this->p2XOR_1_42->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_42->TabIndex = 281;
			this->p2XOR_1_42->TabStop = false;
			// 
			// p2XOR_1_41
			// 
			this->p2XOR_1_41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_41.Image")));
			this->p2XOR_1_41->Location = System::Drawing::Point(349, 154);
			this->p2XOR_1_41->Name = L"p2XOR_1_41";
			this->p2XOR_1_41->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_41->TabIndex = 280;
			this->p2XOR_1_41->TabStop = false;
			// 
			// p2XOR_1_31
			// 
			this->p2XOR_1_31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_31.Image")));
			this->p2XOR_1_31->Location = System::Drawing::Point(317, 207);
			this->p2XOR_1_31->Name = L"p2XOR_1_31";
			this->p2XOR_1_31->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_31->TabIndex = 279;
			this->p2XOR_1_31->TabStop = false;
			// 
			// p2XOR_1_33
			// 
			this->p2XOR_1_33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_33.Image")));
			this->p2XOR_1_33->Location = System::Drawing::Point(436, 207);
			this->p2XOR_1_33->Name = L"p2XOR_1_33";
			this->p2XOR_1_33->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_33->TabIndex = 278;
			this->p2XOR_1_33->TabStop = false;
			// 
			// p2XOR_1_32
			// 
			this->p2XOR_1_32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_32.Image")));
			this->p2XOR_1_32->Location = System::Drawing::Point(377, 207);
			this->p2XOR_1_32->Name = L"p2XOR_1_32";
			this->p2XOR_1_32->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_32->TabIndex = 277;
			this->p2XOR_1_32->TabStop = false;
			// 
			// p2XOR_1_22
			// 
			this->p2XOR_1_22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_22.Image")));
			this->p2XOR_1_22->Location = System::Drawing::Point(346, 260);
			this->p2XOR_1_22->Name = L"p2XOR_1_22";
			this->p2XOR_1_22->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_22->TabIndex = 276;
			this->p2XOR_1_22->TabStop = false;
			// 
			// p2XOR_1_21
			// 
			this->p2XOR_1_21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_21.Image")));
			this->p2XOR_1_21->Location = System::Drawing::Point(289, 260);
			this->p2XOR_1_21->Name = L"p2XOR_1_21";
			this->p2XOR_1_21->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_21->TabIndex = 275;
			this->p2XOR_1_21->TabStop = false;
			// 
			// p2XOR_1_24
			// 
			this->p2XOR_1_24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_24.Image")));
			this->p2XOR_1_24->Location = System::Drawing::Point(465, 260);
			this->p2XOR_1_24->Name = L"p2XOR_1_24";
			this->p2XOR_1_24->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_24->TabIndex = 274;
			this->p2XOR_1_24->TabStop = false;
			// 
			// p2XOR_1_23
			// 
			this->p2XOR_1_23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_23.Image")));
			this->p2XOR_1_23->Location = System::Drawing::Point(406, 260);
			this->p2XOR_1_23->Name = L"p2XOR_1_23";
			this->p2XOR_1_23->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_23->TabIndex = 273;
			this->p2XOR_1_23->TabStop = false;
			// 
			// p2XOR_1_13
			// 
			this->p2XOR_1_13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_13.Image")));
			this->p2XOR_1_13->Location = System::Drawing::Point(372, 313);
			this->p2XOR_1_13->Name = L"p2XOR_1_13";
			this->p2XOR_1_13->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_13->TabIndex = 272;
			this->p2XOR_1_13->TabStop = false;
			// 
			// p2XOR_1_12
			// 
			this->p2XOR_1_12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_12.Image")));
			this->p2XOR_1_12->Location = System::Drawing::Point(315, 313);
			this->p2XOR_1_12->Name = L"p2XOR_1_12";
			this->p2XOR_1_12->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_12->TabIndex = 271;
			this->p2XOR_1_12->TabStop = false;
			// 
			// p2XOR_1_15
			// 
			this->p2XOR_1_15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_15.Image")));
			this->p2XOR_1_15->Location = System::Drawing::Point(491, 313);
			this->p2XOR_1_15->Name = L"p2XOR_1_15";
			this->p2XOR_1_15->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_15->TabIndex = 270;
			this->p2XOR_1_15->TabStop = false;
			// 
			// p2XOR_1_14
			// 
			this->p2XOR_1_14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_14.Image")));
			this->p2XOR_1_14->Location = System::Drawing::Point(432, 313);
			this->p2XOR_1_14->Name = L"p2XOR_1_14";
			this->p2XOR_1_14->Size = System::Drawing::Size(61, 53);
			this->p2XOR_1_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_14->TabIndex = 269;
			this->p2XOR_1_14->TabStop = false;
			// 
			// p2XOR_1_11
			// 
			this->p2XOR_1_11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2XOR_1_11.Image")));
			this->p2XOR_1_11->Location = System::Drawing::Point(263, 313);
			this->p2XOR_1_11->Name = L"p2XOR_1_11";
			this->p2XOR_1_11->Size = System::Drawing::Size(52, 53);
			this->p2XOR_1_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2XOR_1_11->TabIndex = 268;
			this->p2XOR_1_11->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(379, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 53);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 297;
			this->pictureBox1->TabStop = false;
			// 
			// p2pHere42
			// 
			this->p2pHere42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere42.Image")));
			this->p2pHere42->Location = System::Drawing::Point(409, 154);
			this->p2pHere42->Name = L"p2pHere42";
			this->p2pHere42->Size = System::Drawing::Size(61, 53);
			this->p2pHere42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere42->TabIndex = 296;
			this->p2pHere42->TabStop = false;
			// 
			// p2pHere41
			// 
			this->p2pHere41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere41.Image")));
			this->p2pHere41->Location = System::Drawing::Point(350, 154);
			this->p2pHere41->Name = L"p2pHere41";
			this->p2pHere41->Size = System::Drawing::Size(61, 53);
			this->p2pHere41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere41->TabIndex = 295;
			this->p2pHere41->TabStop = false;
			// 
			// p2pHere31
			// 
			this->p2pHere31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere31.Image")));
			this->p2pHere31->Location = System::Drawing::Point(318, 207);
			this->p2pHere31->Name = L"p2pHere31";
			this->p2pHere31->Size = System::Drawing::Size(61, 53);
			this->p2pHere31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere31->TabIndex = 294;
			this->p2pHere31->TabStop = false;
			// 
			// p2pHere33
			// 
			this->p2pHere33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere33.Image")));
			this->p2pHere33->Location = System::Drawing::Point(437, 207);
			this->p2pHere33->Name = L"p2pHere33";
			this->p2pHere33->Size = System::Drawing::Size(61, 53);
			this->p2pHere33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere33->TabIndex = 293;
			this->p2pHere33->TabStop = false;
			// 
			// p2pHere32
			// 
			this->p2pHere32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere32.Image")));
			this->p2pHere32->Location = System::Drawing::Point(378, 207);
			this->p2pHere32->Name = L"p2pHere32";
			this->p2pHere32->Size = System::Drawing::Size(61, 53);
			this->p2pHere32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere32->TabIndex = 292;
			this->p2pHere32->TabStop = false;
			// 
			// p2pHere22
			// 
			this->p2pHere22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere22.Image")));
			this->p2pHere22->Location = System::Drawing::Point(347, 260);
			this->p2pHere22->Name = L"p2pHere22";
			this->p2pHere22->Size = System::Drawing::Size(61, 53);
			this->p2pHere22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere22->TabIndex = 291;
			this->p2pHere22->TabStop = false;
			// 
			// p2pHere21
			// 
			this->p2pHere21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere21.Image")));
			this->p2pHere21->Location = System::Drawing::Point(290, 260);
			this->p2pHere21->Name = L"p2pHere21";
			this->p2pHere21->Size = System::Drawing::Size(61, 53);
			this->p2pHere21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere21->TabIndex = 290;
			this->p2pHere21->TabStop = false;
			// 
			// p2pHere24
			// 
			this->p2pHere24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere24.Image")));
			this->p2pHere24->Location = System::Drawing::Point(466, 260);
			this->p2pHere24->Name = L"p2pHere24";
			this->p2pHere24->Size = System::Drawing::Size(61, 53);
			this->p2pHere24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere24->TabIndex = 289;
			this->p2pHere24->TabStop = false;
			// 
			// p2pHere23
			// 
			this->p2pHere23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere23.Image")));
			this->p2pHere23->Location = System::Drawing::Point(407, 260);
			this->p2pHere23->Name = L"p2pHere23";
			this->p2pHere23->Size = System::Drawing::Size(61, 53);
			this->p2pHere23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere23->TabIndex = 288;
			this->p2pHere23->TabStop = false;
			// 
			// p2pHere13
			// 
			this->p2pHere13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere13.Image")));
			this->p2pHere13->Location = System::Drawing::Point(373, 313);
			this->p2pHere13->Name = L"p2pHere13";
			this->p2pHere13->Size = System::Drawing::Size(61, 53);
			this->p2pHere13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere13->TabIndex = 287;
			this->p2pHere13->TabStop = false;
			// 
			// p2pHere12
			// 
			this->p2pHere12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere12.Image")));
			this->p2pHere12->Location = System::Drawing::Point(316, 313);
			this->p2pHere12->Name = L"p2pHere12";
			this->p2pHere12->Size = System::Drawing::Size(61, 53);
			this->p2pHere12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere12->TabIndex = 286;
			this->p2pHere12->TabStop = false;
			// 
			// p2pHere15
			// 
			this->p2pHere15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere15.Image")));
			this->p2pHere15->Location = System::Drawing::Point(492, 313);
			this->p2pHere15->Name = L"p2pHere15";
			this->p2pHere15->Size = System::Drawing::Size(61, 53);
			this->p2pHere15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere15->TabIndex = 285;
			this->p2pHere15->TabStop = false;
			// 
			// p2pHere14
			// 
			this->p2pHere14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere14.Image")));
			this->p2pHere14->Location = System::Drawing::Point(433, 313);
			this->p2pHere14->Name = L"p2pHere14";
			this->p2pHere14->Size = System::Drawing::Size(61, 53);
			this->p2pHere14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere14->TabIndex = 284;
			this->p2pHere14->TabStop = false;
			// 
			// p2pHere11
			// 
			this->p2pHere11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"p2pHere11.Image")));
			this->p2pHere11->Location = System::Drawing::Point(264, 313);
			this->p2pHere11->Name = L"p2pHere11";
			this->p2pHere11->Size = System::Drawing::Size(52, 53);
			this->p2pHere11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->p2pHere11->TabIndex = 283;
			this->p2pHere11->TabStop = false;
			// 
			// PlayerVSPlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(818, 757);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->p2pHere42);
			this->Controls->Add(this->p2pHere41);
			this->Controls->Add(this->p2pHere31);
			this->Controls->Add(this->p2pHere33);
			this->Controls->Add(this->p2pHere32);
			this->Controls->Add(this->p2pHere22);
			this->Controls->Add(this->p2pHere21);
			this->Controls->Add(this->p2pHere24);
			this->Controls->Add(this->p2pHere23);
			this->Controls->Add(this->p2pHere13);
			this->Controls->Add(this->p2pHere12);
			this->Controls->Add(this->p2pHere15);
			this->Controls->Add(this->p2pHere14);
			this->Controls->Add(this->p2pHere11);
			this->Controls->Add(this->p2XOR_1_5);
			this->Controls->Add(this->p2XOR_1_42);
			this->Controls->Add(this->p2XOR_1_41);
			this->Controls->Add(this->p2XOR_1_31);
			this->Controls->Add(this->p2XOR_1_33);
			this->Controls->Add(this->p2XOR_1_32);
			this->Controls->Add(this->p2XOR_1_22);
			this->Controls->Add(this->p2XOR_1_21);
			this->Controls->Add(this->p2XOR_1_24);
			this->Controls->Add(this->p2XOR_1_23);
			this->Controls->Add(this->p2XOR_1_13);
			this->Controls->Add(this->p2XOR_1_12);
			this->Controls->Add(this->p2XOR_1_15);
			this->Controls->Add(this->p2XOR_1_14);
			this->Controls->Add(this->p2XOR_1_11);
			this->Controls->Add(this->p2XOR_0_5);
			this->Controls->Add(this->p2XOR_0_42);
			this->Controls->Add(this->p2XOR_0_41);
			this->Controls->Add(this->p2XOR_0_31);
			this->Controls->Add(this->p2XOR_0_33);
			this->Controls->Add(this->p2XOR_0_32);
			this->Controls->Add(this->p2XOR_0_22);
			this->Controls->Add(this->p2XOR_0_21);
			this->Controls->Add(this->p2XOR_0_24);
			this->Controls->Add(this->p2XOR_0_23);
			this->Controls->Add(this->p2XOR_0_13);
			this->Controls->Add(this->p2XOR_0_12);
			this->Controls->Add(this->p2XOR_0_15);
			this->Controls->Add(this->p2XOR_0_14);
			this->Controls->Add(this->p2XOR_0_11);
			this->Controls->Add(this->p2pHere5);
			this->Controls->Add(this->p2OR_1_42);
			this->Controls->Add(this->p2OR_1_41);
			this->Controls->Add(this->p2OR_1_31);
			this->Controls->Add(this->p2OR_1_33);
			this->Controls->Add(this->p2OR_1_32);
			this->Controls->Add(this->p2OR_1_22);
			this->Controls->Add(this->p2OR_1_21);
			this->Controls->Add(this->p2OR_1_24);
			this->Controls->Add(this->p2OR_1_23);
			this->Controls->Add(this->p2OR_1_13);
			this->Controls->Add(this->p2OR_1_12);
			this->Controls->Add(this->p2OR_1_15);
			this->Controls->Add(this->p2OR_1_14);
			this->Controls->Add(this->p2OR_1_11);
			this->Controls->Add(this->p2OR_0_5);
			this->Controls->Add(this->p2OR_0_42);
			this->Controls->Add(this->p2OR_0_41);
			this->Controls->Add(this->p2OR_0_31);
			this->Controls->Add(this->p2OR_0_33);
			this->Controls->Add(this->p2OR_0_32);
			this->Controls->Add(this->p2OR_0_22);
			this->Controls->Add(this->p2OR_0_21);
			this->Controls->Add(this->p2OR_0_24);
			this->Controls->Add(this->p2OR_0_23);
			this->Controls->Add(this->p2OR_0_13);
			this->Controls->Add(this->p2OR_0_12);
			this->Controls->Add(this->p2OR_0_15);
			this->Controls->Add(this->p2OR_0_14);
			this->Controls->Add(this->p2OR_0_11);
			this->Controls->Add(this->p2AND_1_5);
			this->Controls->Add(this->p2AND_1_42);
			this->Controls->Add(this->p2AND_1_41);
			this->Controls->Add(this->p2AND_1_31);
			this->Controls->Add(this->p2AND_1_33);
			this->Controls->Add(this->p2AND_1_32);
			this->Controls->Add(this->p2AND_1_22);
			this->Controls->Add(this->p2AND_1_21);
			this->Controls->Add(this->p2AND_1_24);
			this->Controls->Add(this->p2AND_1_23);
			this->Controls->Add(this->p2AND_1_13);
			this->Controls->Add(this->p2AND_1_12);
			this->Controls->Add(this->p2AND_1_15);
			this->Controls->Add(this->p2AND_1_14);
			this->Controls->Add(this->p2AND_1_11);
			this->Controls->Add(this->p2AND_0_5);
			this->Controls->Add(this->p2AND_0_42);
			this->Controls->Add(this->p2AND_0_41);
			this->Controls->Add(this->p2AND_0_31);
			this->Controls->Add(this->p2AND_0_33);
			this->Controls->Add(this->p2AND_0_32);
			this->Controls->Add(this->p2AND_0_22);
			this->Controls->Add(this->p2AND_0_21);
			this->Controls->Add(this->p2AND_0_24);
			this->Controls->Add(this->p2AND_0_23);
			this->Controls->Add(this->p2AND_0_13);
			this->Controls->Add(this->p2AND_0_12);
			this->Controls->Add(this->p2AND_0_15);
			this->Controls->Add(this->p2AND_0_14);
			this->Controls->Add(this->p2AND_0_11);
			this->Controls->Add(this->p1pHere5);
			this->Controls->Add(this->p1pHere42);
			this->Controls->Add(this->p1pHere41);
			this->Controls->Add(this->p1pHere31);
			this->Controls->Add(this->p1pHere33);
			this->Controls->Add(this->p1pHere32);
			this->Controls->Add(this->p1pHere22);
			this->Controls->Add(this->p1pHere21);
			this->Controls->Add(this->p1pHere24);
			this->Controls->Add(this->p1pHere23);
			this->Controls->Add(this->p1pHere13);
			this->Controls->Add(this->p1pHere12);
			this->Controls->Add(this->p1pHere15);
			this->Controls->Add(this->p1pHere14);
			this->Controls->Add(this->p1pHere11);
			this->Controls->Add(this->p1XOR_1_5);
			this->Controls->Add(this->p1XOR_1_42);
			this->Controls->Add(this->p1XOR_1_41);
			this->Controls->Add(this->p1XOR_1_31);
			this->Controls->Add(this->p1XOR_1_33);
			this->Controls->Add(this->p1XOR_1_32);
			this->Controls->Add(this->p1XOR_1_22);
			this->Controls->Add(this->p1XOR_1_21);
			this->Controls->Add(this->p1XOR_1_24);
			this->Controls->Add(this->p1XOR_1_23);
			this->Controls->Add(this->p1XOR_1_13);
			this->Controls->Add(this->p1XOR_1_12);
			this->Controls->Add(this->p1XOR_1_15);
			this->Controls->Add(this->p1XOR_1_14);
			this->Controls->Add(this->p1XOR_1_11);
			this->Controls->Add(this->p1XOR_0_5);
			this->Controls->Add(this->p1XOR_0_42);
			this->Controls->Add(this->p1XOR_0_41);
			this->Controls->Add(this->p1XOR_0_31);
			this->Controls->Add(this->p1XOR_0_33);
			this->Controls->Add(this->p1XOR_0_32);
			this->Controls->Add(this->p1XOR_0_22);
			this->Controls->Add(this->p1XOR_0_21);
			this->Controls->Add(this->p1XOR_0_24);
			this->Controls->Add(this->p1XOR_0_23);
			this->Controls->Add(this->p1XOR_0_13);
			this->Controls->Add(this->p1XOR_0_12);
			this->Controls->Add(this->p1XOR_0_15);
			this->Controls->Add(this->p1XOR_0_14);
			this->Controls->Add(this->p1XOR_0_11);
			this->Controls->Add(this->p1OR_1_5);
			this->Controls->Add(this->p1OR_1_42);
			this->Controls->Add(this->p1OR_1_41);
			this->Controls->Add(this->p1OR_1_31);
			this->Controls->Add(this->p1OR_1_33);
			this->Controls->Add(this->p1OR_1_32);
			this->Controls->Add(this->p1OR_1_22);
			this->Controls->Add(this->p1OR_1_21);
			this->Controls->Add(this->p1OR_1_24);
			this->Controls->Add(this->p1OR_1_23);
			this->Controls->Add(this->p1OR_1_13);
			this->Controls->Add(this->p1OR_1_12);
			this->Controls->Add(this->p1OR_1_15);
			this->Controls->Add(this->p1OR_1_14);
			this->Controls->Add(this->p1OR_1_11);
			this->Controls->Add(this->p1OR_0_5);
			this->Controls->Add(this->p1OR_0_42);
			this->Controls->Add(this->p1OR_0_41);
			this->Controls->Add(this->p1OR_0_31);
			this->Controls->Add(this->p1OR_0_33);
			this->Controls->Add(this->p1OR_0_32);
			this->Controls->Add(this->p1OR_0_22);
			this->Controls->Add(this->p1OR_0_21);
			this->Controls->Add(this->p1OR_0_24);
			this->Controls->Add(this->p1OR_0_23);
			this->Controls->Add(this->p1OR_0_13);
			this->Controls->Add(this->p1OR_0_12);
			this->Controls->Add(this->p1OR_0_15);
			this->Controls->Add(this->p1OR_0_14);
			this->Controls->Add(this->p1OR_0_11);
			this->Controls->Add(this->p1AND_1_5);
			this->Controls->Add(this->p1AND_1_42);
			this->Controls->Add(this->p1AND_1_41);
			this->Controls->Add(this->p1AND_1_31);
			this->Controls->Add(this->p1AND_1_33);
			this->Controls->Add(this->p1AND_1_32);
			this->Controls->Add(this->p1AND_1_22);
			this->Controls->Add(this->p1AND_1_21);
			this->Controls->Add(this->p1AND_1_24);
			this->Controls->Add(this->p1AND_1_23);
			this->Controls->Add(this->p1AND_1_13);
			this->Controls->Add(this->p1AND_1_12);
			this->Controls->Add(this->p1AND_1_15);
			this->Controls->Add(this->p1AND_1_14);
			this->Controls->Add(this->p1AND_1_11);
			this->Controls->Add(this->p2CardInHand4);
			this->Controls->Add(this->p2CardInHand3);
			this->Controls->Add(this->p2CardInHand2);
			this->Controls->Add(this->p2CardInHand1);
			this->Controls->Add(this->p1AND_0_5);
			this->Controls->Add(this->p1AND_0_42);
			this->Controls->Add(this->p1AND_0_41);
			this->Controls->Add(this->p1AND_0_31);
			this->Controls->Add(this->p1AND_0_33);
			this->Controls->Add(this->p1AND_0_32);
			this->Controls->Add(this->p1AND_0_22);
			this->Controls->Add(this->p1AND_0_21);
			this->Controls->Add(this->p1AND_0_24);
			this->Controls->Add(this->p1AND_0_23);
			this->Controls->Add(this->startCard6);
			this->Controls->Add(this->startCard5);
			this->Controls->Add(this->p1AND_0_13);
			this->Controls->Add(this->p1AND_0_12);
			this->Controls->Add(this->p1AND_0_15);
			this->Controls->Add(this->p1AND_0_14);
			this->Controls->Add(this->p1AND_0_11);
			this->Controls->Add(this->Player2Button);
			this->Controls->Add(this->Player1Button);
			this->Controls->Add(this->startCard4);
			this->Controls->Add(this->startCard3);
			this->Controls->Add(this->startCard2);
			this->Controls->Add(this->p1CardInHand4);
			this->Controls->Add(this->p1CardInHand3);
			this->Controls->Add(this->p1CardInHand2);
			this->Controls->Add(this->p1CardInHand1);
			this->Controls->Add(this->startCard1);
			this->Controls->Add(this->DeckImage);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->minimizeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PlayerVSPlayer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PlayerVSPlayer";
			this->Load += gcnew System::EventHandler(this, &PlayerVSPlayer::PlayerVSPlayer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1CardInHand1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeckImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startCard5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2CardInHand1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1AND_1_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_0_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1OR_1_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_0_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1XOR_1_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p1pHere11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_0_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2AND_1_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_0_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2OR_1_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_0_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2XOR_1_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->p2pHere11))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->mainForm->Show();
		this->Close();
	}
	private: System::Void minimizeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PlayerVSPlayer::WindowState == FormWindowState::Minimized)
			PlayerVSPlayer::WindowState = FormWindowState::Normal;
		else if (PlayerVSPlayer::WindowState == FormWindowState::Normal)
			PlayerVSPlayer::WindowState = FormWindowState::Minimized;
	}
	private: System::Void DeckImage_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PlayerVSPlayer_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
