#include "Board.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	connect4::Board form;
	Application::Run(%form);
}