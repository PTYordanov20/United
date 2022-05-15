#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
#include <vector>

void title() {
    std::cout << "\t _____  _____          _   _                __  \n";
    std::cout << "\t|_   _||_   _|        (_) / |_             |  ] \n";
    std::cout << "\t  | |    | | _ .--.   __ `| |-'.---.   .--.| |  \n";
    std::cout << "\t  | '    ' |[ `.-. | [  | | | / /__\\\\/ /'`\\' |  \n";
    std::cout << "\t   \\ \\__/ /  | | | |  | | | |,| \\__.,| \\__/  |  \n";
    std::cout << "\t    `.__.'  [___||__][___]\\__/ '.__.' '.__.;__] \n";
    std::cout << "\t                                                \n";
}

void menu()
{

    int pointer = 0;
    std::string Menu[3] = {
      "Player vs Computer (without NOT cards)",
      "Player vs Player (without NOT cards)",
      "How to play"
    };
    std::string MainMenuText[3] = {
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
            for (int i = 0; i < 3; i++) {
                if (i == pointer) {
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
                        pointer = 2;
                    }
                    Sleep(200);
                    break;
                }
                else if (GetAsyncKeyState(VK_DOWN) != 0) {
                    pointer += 1;
                    if (pointer == 3) {
                        pointer = 0;
                    }
                    Sleep(200);
                    break;
                }
                else if (GetAsyncKeyState(VK_RETURN) != 0) {
                    switch (pointer) {
                    case 0:
                    {

                        break;
                    }

                    case 1:
                    {
                        playerVSplayer();
                        break;
                    }
                    case 2:
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        std::cout << "\n\n\n How to play:\n";
                        std::cout << " The cards AND, OR, and XOR are represented by spefic colors\n";
                        std::cout << " \tAND - green color\n";
                        std::cout << " \tOR - yellow color\n";
                        std::cout << " \tXOR - red color\n\n";
                        std::cout << " The placeholders for the first pyramid is structed like this:\n";
                        std::cout << "\t\t       15\n";
                        std::cout << "\t\t    13    14\n";
                        std::cout << "\t\t   10   11   12\n";
                        std::cout << "\t\t  6   7    8    9\n";
                        std::cout << "\t\t1   2    3    4   5\n\n";
                        std::cout << " The placeholders for the second pyramid is structed like this:\n\n";
                        std::cout << "\t\t1   2    3    4   5\n";
                        std::cout << "\t\t  6   7    8    9\n";
                        std::cout << "\t\t   10   11   12\n";
                        std::cout << "\t\t     13   14\n";
                        std::cout << "\t\t        15\n";
                        while (!GetAsyncKeyState(VK_BACK))
                        {

                        }
                        if (GetAsyncKeyState(VK_BACK))
                        {
                            pointer = 0;
                            goto switch_menu;
                        }
                        break;
                    }

                    }
                }
            }
            break;
        }
    }
    Sleep(100); //Wait
}