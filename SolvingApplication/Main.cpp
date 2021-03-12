#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

/// <summary>
/// Main function - Program execution starts and ends here.
/// </summary>
void Main(array<String^>^ args) {
	//
	// Application Starter Code
	//
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	SolvingApplication::MainForm form;
	Application::Run(% form);
}