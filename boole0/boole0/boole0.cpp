#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>

void centerstring(std::string s) {
    int l = s.length();
    int pos = (int)((64 - l) / 2);
    for (int i = 0; i < pos; i++)
        std::cout << " ";

    std::cout << s;
}

void centerstringPyramids(std::string s) {
    int l = s.length();
    int pos = (int)((16 - l) / 1.5);
    for (int i = 0; i < pos; i++)
        std::cout << " ";

    std::cout << s << " ";
}

void centerint(int s) {

    int l = std::to_string(s).length();
    int pos = (int)((16 - l) / 1.5);
    for (int i = 0; i < pos; i++)
        std::cout << " ";

    std::cout << s << " ";
}

int pyramidOnePlvsPlPyramid(int number)
{
    switch (number)
    {
        case 1:
        {
            return 4;
            break;
        }
        case 2:
        {
            return 3;
            break;
        }
        case 3:
        {
            return 2;
            break;
        }
        case 4:
        {
            return 1;
            break;
        }
        case 5:
        {
            return 7;
            break;
        }
        case 7:
        {
            return 5;
            break;
        }
        case 8:
        {
            return 9;
            break;
        }
        case 9:
        {
            return 8;
            break;
        }
        default:
        {
            return number;
            break;
        }
    }
}

std::string generateDeck()
{

    std::string deck[6];

    std::string allcards[6] = {
        "1 [AND]",
        "0 [AND]",
        "1 [OR]",
        "0 [OR]",
        "1 [XOR]",
        "0 [XOR]"
    };

    for (int i = 0; i < 6; i++)
    {
        deck[i] = allcards[rand() % 6];
    }

    return *deck;
}

void pyramidOnePlvsPl()
{

    int counter = -1;

    int rows = 4, space, i, j, l = 9;

    int pyramidOne[5] = { 0, 1, 0, 1, 0 };
    int pyramidTwo[5] = { 1, 0, 1, 0, 1 };

    std::string pyramidPlayerOne[10] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };
    std::string pyramidPlayerTwo[10] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };

    int pyramidPlayerOneColor[10] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    int pyramidPlayerTwoColor[10] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

    int x1 = 10;
    std::string card1 = "", typeofcard1 = "";
    std::string deck1[6];

    int x2 = 10;
    std::string card2 = "", typeofcard2 = "";
    std::string deck2[6];

    // {"*", "*", "*", "*", "*", "*", "*", "*", "*", "*"};
    // { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

    while (true)
    {
        counter++;
        system("cls");

        l = 9;

        for (i = 0; i < rows; i++) {
            for (space = 1; space <= rows - i; space++)
                printf("      ");
            for (j = 0; j <= i; j++, l--) {

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pyramidPlayerOneColor[l]);

                if (pyramidPlayerOne[l] == pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 1])
                    centerstringPyramids(pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 1]);
                else
                    centerstringPyramids(pyramidPlayerOne[l]);
                                
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                
            }
            printf("\n");

        }

        for (int i = 0; i < 5; i++)
        {
            centerint(pyramidOne[i]);
        }
        std::cout << std::endl;

        for (int i = 0; i < 5; i++)
            centerint(pyramidTwo[i]);

        std::cout << std::endl;

        l = 0;

        for (i = rows; i >= 1; i--) {
            for (space = 0; space <= rows - i; space++)
                printf("      ");
            for (j = i; j > 0; j--, l++) {

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pyramidPlayerTwoColor[l]);

                if (pyramidPlayerTwo[l] == pyramidPlayerTwo[x2 - 1])
                    centerstringPyramids(pyramidPlayerTwo[x2 - 1]);
                else
                    centerstringPyramids(pyramidPlayerTwo[l]);

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            }
            printf("\n");

        }

        x1 = 0;

        std::cout << "\nCOUNTER: " << counter << std::endl;

        if (counter % 2 == 0) {

            std::cout << "Player 1\n";
            
            std::cout << std::endl;

            srand(time(NULL));

            for (int i = 0; i < 6; i++)
                deck1[i] = generateDeck();

            for (int i = 0; i < 6; i++)
                std::cout << deck1[i] << "\n";

            std::cout << std::endl;

            std::cout << "Enter position: ";
            std::cin >> x1;

            std::cout << "Choose between your cards: ";
            std::cin >> card1;

            pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 1] = card1;

            if (card1 == "XOR")
                pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] = 4;
        }
        else {

            std::cout << "Player 2\n";
            std::cout << "Enter position: ";
            std::cin >> x2;

            std::cout << "Type card: ";
            std::cin >> card2;

            pyramidPlayerTwo[x2 - 1] = card2;

            if (card2 == "XOR")
                pyramidPlayerTwoColor[x2 - 1] = 4;
        }
    }
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

int main() 
{
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
                    case 0: 
                    {
                        pyramidOnePlvsPl();
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