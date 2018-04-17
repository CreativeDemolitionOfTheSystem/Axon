#pragma once

DWORD Initialize() {


	//callcheck();
	DWORD consoleOldProtect;
	VirtualProtect(FreeConsole, 1, PAGE_EXECUTE_READWRITE, &(DWORD)consoleOldProtect);
	*(UINT*)FreeConsole = 0xC2;
	AllocConsole();

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	freopen("CONOUT$", "w", stdout);
	freopen("CONIN$", "r", stdin);

	//auth(); //auth function

	SetConsoleTextAttribute(hConsole, 14);
	//checkHostsFile();


	std::cout << "welcome to rein v3!1111\r\n";
	SetConsoleTextAttribute(hConsole, 15);
	std::cout << "scanning offsets.\r\n";
	Sleep(2000);
	std::cout << "offsets scanned\n";

	SetConsoleTextAttribute(hConsole, 14);


	*(DWORD*)elevateok = 6;
	std::cout << "enter cmd: \r\n";
	SetConsoleTextAttribute(hConsole, 7);

	do {
		try {
			cmds(GetInput());
				std::cout << "enter cmd: \r\n";





		}
		catch (std::exception e) {
			
				std::cout << "enter cmd: \r\n";
		}
		catch (...) {
			
			std::cout << "cmd: ";
		}
	} while (true);


	return 0;



}
