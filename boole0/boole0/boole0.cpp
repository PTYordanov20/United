#include <iostream>
#include <windows.h>

void centerstring(std::string s) {
    int l = s.length();
    int pos = (int)((64 - l) / 2);
    for (int i = 0; i < pos; i++)
        std::cout << " ";

    std::cout << s;
}

void title() {
    std::cout << "\t _____  _____          _   _                __  \n";
    std::cout << "\t|_   _||_   _|        (_) / |_             |  ] \n";
    std::cout << "\t  | |    | | _ .--.   __ `| |-'.---.   .--.| |  \n";
    std::cout << "\t  | '    ' |[ `.-. | [  | | | / /__\\\\/ /'`\\' |  \n";
    std::cout << "\t   \\ \\__/ /  | | | |  | | | |,| \\__.,| \\__/  |  \n";
    std::cout << "\t    `.__.'  [___||__][___]\\__/ '.__.' '.__.;__] \n";
    std::cout << "\t                                                \n";
}

void menu() {
    std::string Menu[5] = {
      "Player vs Computer (without NOT cards)",
      "Player vs Player (without NOT cards)",
      "Player vs Computer",
      "Player vs Player"
    };
    int pointer = 0;
    std::string MainMenuText[4] = {
      "Press Enter to select",
      "Press Backspace to go back",
      "Move through the menu with the arrow keys"
    };

    while (true) {
    switch_menu:
        while (true) {
            system("cls");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //Changes text color;
            title();
            for (int i = 0; i < 3; i++) {

                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
                    centerstring(MainMenuText[i]);
                    std::cout << std::endl;

            }
            std::cout << std::endl;
            for (int i = 0; i < 4; i++) {
                if (i == pointer) {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //Changes color of active options string element
                    centerstring(Menu[i]);
                    std::cout << std::endl;
                }
                else {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                    centerstring(Menu[i]);
                    std::cout << std::endl;
                }
            }

            while (true) {
                if (GetAsyncKeyState(VK_UP) != 0) {
                    pointer -= 1;
                    if (pointer == -1) {
                        pointer = 3;
                    }
                    Sleep(200);
                    break;
                }
                else if (GetAsyncKeyState(VK_DOWN) != 0) {
                    pointer += 1;
                    if (pointer == 4) {
                        pointer = 0;
                    }
                    Sleep(200);
                    break;
                }
                else if (GetAsyncKeyState(VK_RETURN) != 0) {
                    switch (pointer) {
                    case 0: {
                        break;
                    }
                          Sleep(1000);
                          break;

                    case 1: {
                        break;
                    }
                    case 2: {
                        break;
                    }
                    case 3: {
                        break;
                    }
                          break;
                    }
                }
            }
            break;
        }
    }
    Sleep(100); //Wait
}

int main() {
    menu();
}