#include"Cube.h";

#pragma once

namespace SolvingApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Main window for the application.
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
            Cube^ rubiksCube = gcnew Cube();
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
	
	protected:
    private: System::Windows::Forms::Label^ headerLabel;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Label^ scanFacesLabel;
    private: System::Windows::Forms::Button^ redScanButton;
    private: System::Windows::Forms::Button^ orangeScanButton;
    private: System::Windows::Forms::Button^ yellowScanButton;
    private: System::Windows::Forms::Button^ whiteScanButton;
    private: System::Windows::Forms::Button^ blueScanButton;
    private: System::Windows::Forms::Button^ greenScanButton;
    private: System::Windows::Forms::Button^ solveCubeButton;
    private: System::Windows::Forms::Button^ solveOnRobotButton;
    private: System::Windows::Forms::Label^ solutionLabel;
    private: System::Windows::Forms::TextBox^ solutionTextbox;
    private: System::Windows::Forms::Button^ saveSolutionButton;
    private: System::Windows::Forms::Button^ reverseSolutionButton;
    private: System::Windows::Forms::Button^ randomizeCubeButton;
    private: System::Windows::Forms::Button^ closeButton;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
            this->headerLabel = (gcnew System::Windows::Forms::Label());
            this->exitButton = (gcnew System::Windows::Forms::Button());
            this->scanFacesLabel = (gcnew System::Windows::Forms::Label());
            this->redScanButton = (gcnew System::Windows::Forms::Button());
            this->orangeScanButton = (gcnew System::Windows::Forms::Button());
            this->yellowScanButton = (gcnew System::Windows::Forms::Button());
            this->whiteScanButton = (gcnew System::Windows::Forms::Button());
            this->blueScanButton = (gcnew System::Windows::Forms::Button());
            this->greenScanButton = (gcnew System::Windows::Forms::Button());
            this->solveCubeButton = (gcnew System::Windows::Forms::Button());
            this->solveOnRobotButton = (gcnew System::Windows::Forms::Button());
            this->solutionLabel = (gcnew System::Windows::Forms::Label());
            this->solutionTextbox = (gcnew System::Windows::Forms::TextBox());
            this->saveSolutionButton = (gcnew System::Windows::Forms::Button());
            this->reverseSolutionButton = (gcnew System::Windows::Forms::Button());
            this->randomizeCubeButton = (gcnew System::Windows::Forms::Button());
            this->closeButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // headerLabel
            // 
            this->headerLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->headerLabel->AutoSize = true;
            this->headerLabel->BackColor = System::Drawing::Color::Transparent;
            this->headerLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->headerLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(20)));
            this->headerLabel->Location = System::Drawing::Point(320, 5);
            this->headerLabel->Name = L"headerLabel";
            this->headerLabel->Size = System::Drawing::Size(556, 81);
            this->headerLabel->TabIndex = 0;
            this->headerLabel->Text = L"Rubik\'s Cube Solver";
            // 
            // exitButton
            // 
            this->exitButton->BackColor = System::Drawing::Color::Transparent;
            this->exitButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->exitButton->FlatAppearance->BorderSize = 0;
            this->exitButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->exitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->exitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->exitButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->exitButton->Location = System::Drawing::Point(1027, 571);
            this->exitButton->Margin = System::Windows::Forms::Padding(0);
            this->exitButton->Name = L"exitButton";
            this->exitButton->Size = System::Drawing::Size(63, 37);
            this->exitButton->TabIndex = 12;
            this->exitButton->Text = L"Exit";
            this->exitButton->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->exitButton->UseVisualStyleBackColor = false;
            this->exitButton->Click += gcnew System::EventHandler(this, &MainForm::exitButton_Click);
            // 
            // scanFacesLabel
            // 
            this->scanFacesLabel->AutoSize = true;
            this->scanFacesLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->scanFacesLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)));
            this->scanFacesLabel->Location = System::Drawing::Point(12, 114);
            this->scanFacesLabel->Name = L"scanFacesLabel";
            this->scanFacesLabel->Size = System::Drawing::Size(180, 46);
            this->scanFacesLabel->TabIndex = 0;
            this->scanFacesLabel->Text = L"Scan Faces";
            // 
            // redScanButton
            // 
            this->redScanButton->BackColor = System::Drawing::Color::Transparent;
            this->redScanButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->redScanButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->redScanButton->FlatAppearance->BorderSize = 0;
            this->redScanButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->redScanButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->redScanButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->redScanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->redScanButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)));
            this->redScanButton->Location = System::Drawing::Point(9, 163);
            this->redScanButton->Margin = System::Windows::Forms::Padding(0);
            this->redScanButton->Name = L"redScanButton";
            this->redScanButton->Size = System::Drawing::Size(128, 39);
            this->redScanButton->TabIndex = 1;
            this->redScanButton->Text = L"Red";
            this->redScanButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->redScanButton->UseVisualStyleBackColor = false;
            // 
            // orangeScanButton
            // 
            this->orangeScanButton->BackColor = System::Drawing::Color::Transparent;
            this->orangeScanButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->orangeScanButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
            this->orangeScanButton->FlatAppearance->BorderSize = 0;
            this->orangeScanButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->orangeScanButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->orangeScanButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->orangeScanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->orangeScanButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)));
            this->orangeScanButton->Location = System::Drawing::Point(9, 353);
            this->orangeScanButton->Margin = System::Windows::Forms::Padding(0);
            this->orangeScanButton->Name = L"orangeScanButton";
            this->orangeScanButton->Size = System::Drawing::Size(128, 43);
            this->orangeScanButton->TabIndex = 6;
            this->orangeScanButton->Text = L"Orange";
            this->orangeScanButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->orangeScanButton->UseVisualStyleBackColor = false;
            // 
            // yellowScanButton
            // 
            this->yellowScanButton->BackColor = System::Drawing::Color::Transparent;
            this->yellowScanButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->yellowScanButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
            this->yellowScanButton->FlatAppearance->BorderSize = 0;
            this->yellowScanButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->yellowScanButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->yellowScanButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->yellowScanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->yellowScanButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)));
            this->yellowScanButton->Location = System::Drawing::Point(9, 315);
            this->yellowScanButton->Margin = System::Windows::Forms::Padding(0);
            this->yellowScanButton->Name = L"yellowScanButton";
            this->yellowScanButton->Size = System::Drawing::Size(128, 38);
            this->yellowScanButton->TabIndex = 5;
            this->yellowScanButton->Text = L"Yellow";
            this->yellowScanButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->yellowScanButton->UseVisualStyleBackColor = false;
            // 
            // whiteScanButton
            // 
            this->whiteScanButton->BackColor = System::Drawing::Color::Transparent;
            this->whiteScanButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->whiteScanButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
            this->whiteScanButton->FlatAppearance->BorderSize = 0;
            this->whiteScanButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->whiteScanButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->whiteScanButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->whiteScanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->whiteScanButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)));
            this->whiteScanButton->Location = System::Drawing::Point(9, 277);
            this->whiteScanButton->Margin = System::Windows::Forms::Padding(0);
            this->whiteScanButton->Name = L"whiteScanButton";
            this->whiteScanButton->Size = System::Drawing::Size(128, 38);
            this->whiteScanButton->TabIndex = 4;
            this->whiteScanButton->Text = L"White";
            this->whiteScanButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->whiteScanButton->UseVisualStyleBackColor = false;
            // 
            // blueScanButton
            // 
            this->blueScanButton->BackColor = System::Drawing::Color::Transparent;
            this->blueScanButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->blueScanButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
            this->blueScanButton->FlatAppearance->BorderSize = 0;
            this->blueScanButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->blueScanButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->blueScanButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->blueScanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->blueScanButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)));
            this->blueScanButton->Location = System::Drawing::Point(9, 240);
            this->blueScanButton->Margin = System::Windows::Forms::Padding(0);
            this->blueScanButton->Name = L"blueScanButton";
            this->blueScanButton->Size = System::Drawing::Size(128, 37);
            this->blueScanButton->TabIndex = 3;
            this->blueScanButton->Text = L"Blue";
            this->blueScanButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->blueScanButton->UseVisualStyleBackColor = false;
            // 
            // greenScanButton
            // 
            this->greenScanButton->BackColor = System::Drawing::Color::Transparent;
            this->greenScanButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->greenScanButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
            this->greenScanButton->FlatAppearance->BorderSize = 0;
            this->greenScanButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->greenScanButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->greenScanButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->greenScanButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->greenScanButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)));
            this->greenScanButton->Location = System::Drawing::Point(9, 202);
            this->greenScanButton->Margin = System::Windows::Forms::Padding(0);
            this->greenScanButton->Name = L"greenScanButton";
            this->greenScanButton->Size = System::Drawing::Size(128, 38);
            this->greenScanButton->TabIndex = 2;
            this->greenScanButton->Text = L"Green";
            this->greenScanButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->greenScanButton->UseVisualStyleBackColor = false;
            // 
            // solveCubeButton
            // 
            this->solveCubeButton->BackColor = System::Drawing::Color::Transparent;
            this->solveCubeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->solveCubeButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->solveCubeButton->FlatAppearance->BorderSize = 0;
            this->solveCubeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->solveCubeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->solveCubeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->solveCubeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->solveCubeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->solveCubeButton->Location = System::Drawing::Point(890, 205);
            this->solveCubeButton->Margin = System::Windows::Forms::Padding(0);
            this->solveCubeButton->Name = L"solveCubeButton";
            this->solveCubeButton->Size = System::Drawing::Size(187, 39);
            this->solveCubeButton->TabIndex = 7;
            this->solveCubeButton->Text = L"Solve Cube";
            this->solveCubeButton->TextAlign = System::Drawing::ContentAlignment::TopRight;
            this->solveCubeButton->UseVisualStyleBackColor = false;
            // 
            // solveOnRobotButton
            // 
            this->solveOnRobotButton->BackColor = System::Drawing::Color::Transparent;
            this->solveOnRobotButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->solveOnRobotButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->solveOnRobotButton->FlatAppearance->BorderSize = 0;
            this->solveOnRobotButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->solveOnRobotButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->solveOnRobotButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->solveOnRobotButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->solveOnRobotButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->solveOnRobotButton->Location = System::Drawing::Point(890, 244);
            this->solveOnRobotButton->Margin = System::Windows::Forms::Padding(0);
            this->solveOnRobotButton->Name = L"solveOnRobotButton";
            this->solveOnRobotButton->Size = System::Drawing::Size(187, 39);
            this->solveOnRobotButton->TabIndex = 8;
            this->solveOnRobotButton->Text = L"Solve on robot";
            this->solveOnRobotButton->TextAlign = System::Drawing::ContentAlignment::TopRight;
            this->solveOnRobotButton->UseVisualStyleBackColor = false;
            // 
            // solutionLabel
            // 
            this->solutionLabel->AutoSize = true;
            this->solutionLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->solutionLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->solutionLabel->Location = System::Drawing::Point(962, 159);
            this->solutionLabel->Margin = System::Windows::Forms::Padding(0);
            this->solutionLabel->Name = L"solutionLabel";
            this->solutionLabel->Size = System::Drawing::Size(144, 46);
            this->solutionLabel->TabIndex = 0;
            this->solutionLabel->Text = L"Solution";
            this->solutionLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
            // 
            // solutionTextbox
            // 
            this->solutionTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->solutionTextbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->solutionTextbox->Location = System::Drawing::Point(9, 445);
            this->solutionTextbox->Multiline = true;
            this->solutionTextbox->Name = L"solutionTextbox";
            this->solutionTextbox->ReadOnly = true;
            this->solutionTextbox->Size = System::Drawing::Size(546, 151);
            this->solutionTextbox->TabIndex = 0;
            this->solutionTextbox->Text = L"Solution will be printed here!!!";
            // 
            // saveSolutionButton
            // 
            this->saveSolutionButton->BackColor = System::Drawing::Color::Transparent;
            this->saveSolutionButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->saveSolutionButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->saveSolutionButton->FlatAppearance->BorderSize = 0;
            this->saveSolutionButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->saveSolutionButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->saveSolutionButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->saveSolutionButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->saveSolutionButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->saveSolutionButton->Location = System::Drawing::Point(889, 283);
            this->saveSolutionButton->Margin = System::Windows::Forms::Padding(0);
            this->saveSolutionButton->Name = L"saveSolutionButton";
            this->saveSolutionButton->Size = System::Drawing::Size(187, 39);
            this->saveSolutionButton->TabIndex = 9;
            this->saveSolutionButton->Text = L"Save Solution";
            this->saveSolutionButton->TextAlign = System::Drawing::ContentAlignment::TopRight;
            this->saveSolutionButton->UseVisualStyleBackColor = false;
            // 
            // reverseSolutionButton
            // 
            this->reverseSolutionButton->BackColor = System::Drawing::Color::Transparent;
            this->reverseSolutionButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->reverseSolutionButton->FlatAppearance->BorderSize = 0;
            this->reverseSolutionButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->reverseSolutionButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->reverseSolutionButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->reverseSolutionButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->reverseSolutionButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)),
                static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->reverseSolutionButton->Location = System::Drawing::Point(918, 382);
            this->reverseSolutionButton->Margin = System::Windows::Forms::Padding(0);
            this->reverseSolutionButton->Name = L"reverseSolutionButton";
            this->reverseSolutionButton->Size = System::Drawing::Size(208, 42);
            this->reverseSolutionButton->TabIndex = 10;
            this->reverseSolutionButton->Text = L"Reverse Solution";
            this->reverseSolutionButton->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->reverseSolutionButton->UseVisualStyleBackColor = false;
            // 
            // randomizeCubeButton
            // 
            this->randomizeCubeButton->BackColor = System::Drawing::Color::Transparent;
            this->randomizeCubeButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->randomizeCubeButton->FlatAppearance->BorderSize = 0;
            this->randomizeCubeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->randomizeCubeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->randomizeCubeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->randomizeCubeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->randomizeCubeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)),
                static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->randomizeCubeButton->Location = System::Drawing::Point(914, 424);
            this->randomizeCubeButton->Margin = System::Windows::Forms::Padding(0);
            this->randomizeCubeButton->Name = L"randomizeCubeButton";
            this->randomizeCubeButton->Size = System::Drawing::Size(211, 42);
            this->randomizeCubeButton->TabIndex = 11;
            this->randomizeCubeButton->Text = L"Randomize Cube";
            this->randomizeCubeButton->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->randomizeCubeButton->UseVisualStyleBackColor = false;
            // 
            // closeButton
            // 
            this->closeButton->BackColor = System::Drawing::Color::Transparent;
            this->closeButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->closeButton->FlatAppearance->BorderSize = 0;
            this->closeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->closeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->closeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->closeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->closeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->closeButton->Location = System::Drawing::Point(1054, -7);
            this->closeButton->Margin = System::Windows::Forms::Padding(0);
            this->closeButton->Name = L"closeButton";
            this->closeButton->Size = System::Drawing::Size(30, 37);
            this->closeButton->TabIndex = 0;
            this->closeButton->Text = L"X";
            this->closeButton->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->closeButton->UseVisualStyleBackColor = false;
            this->closeButton->Click += gcnew System::EventHandler(this, &MainForm::closeButton_Click);
            // 
            // MainForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->ClientSize = System::Drawing::Size(1080, 608);
            this->Controls->Add(this->closeButton);
            this->Controls->Add(this->randomizeCubeButton);
            this->Controls->Add(this->reverseSolutionButton);
            this->Controls->Add(this->saveSolutionButton);
            this->Controls->Add(this->solutionTextbox);
            this->Controls->Add(this->solutionLabel);
            this->Controls->Add(this->solveOnRobotButton);
            this->Controls->Add(this->solveCubeButton);
            this->Controls->Add(this->greenScanButton);
            this->Controls->Add(this->blueScanButton);
            this->Controls->Add(this->whiteScanButton);
            this->Controls->Add(this->yellowScanButton);
            this->Controls->Add(this->orangeScanButton);
            this->Controls->Add(this->redScanButton);
            this->Controls->Add(this->scanFacesLabel);
            this->Controls->Add(this->exitButton);
            this->Controls->Add(this->headerLabel);
            this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"MainForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Rubik\'s Cube Solver";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	    private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		    Application::Exit();
	    }
        private: System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
            Application::Exit();
        }
    };
}
