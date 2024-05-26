#include "M_main.h"
#include "Candidate_list.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Candidate_list data_list;

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project::M_main form;
	Application::Run(% form);
}