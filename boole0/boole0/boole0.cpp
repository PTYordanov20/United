#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
#include <vector>

enum class Card
{
    AND_1,
    AND_0,
    OR_1,
    OR_0,
    XOR_1,
    XOR_0,
    EMPTY
};

std::vector<std::string> allcards = {
    "1 [AND]",
    "0 [AND]",
    "1 [OR]",
    "0 [OR]",
    "1 [XOR]",
    "0 [XOR]"
};

int counter = -1;

int rows = 4, space, i, j, l = 9;

int pyramidOne[5] = { 0, 1, 0, 1, 0 };
int pyramidTwo[5] = { 1, 0, 1, 0, 1 };

std::string pyramidPlayerOne[10] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };
std::string pyramidPlayerTwo[10] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };

int pyramidPlayerOneColor[10] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };
int pyramidPlayerTwoColor[10] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

int x1 = 10, pos1 = 0, card1 = 0;
std::string typeofcard1 = "";
std::string hand[6];

int x2 = 10, pos2 = 0;
std::string card2 = "", typeofcard2 = "";
std::string deck2[6];

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

std::vector<std::string> createDeck()
{
    std::vector<std::string> deck;

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 8; j++)
            deck.push_back(allcards[i]);

    return deck;
}

std::vector<std::string> createHand(std::vector<std::string> &deck)
{
    std::vector<std::string> hand;

    for (int i = 0; i < 6; i++)
    {
        hand.push_back(deck.back());
        deck.pop_back();
    }

    return hand;
}

void shuffleDeck(std::vector<std::string>& deck)
{
    srand(time(NULL));
    int ranShuffles = rand() % 6;

    for (int i = 0; i < ranShuffles; i++)
    {
        int ranNum = rand() % deck.size();

        for (int j = 0; j < ranNum; j++)
            std::swap(deck[j], deck[rand() % deck.size()]);

        ranNum = rand() % deck.size();

        for (int j = ranNum; j >= 0; j--)
            std::swap(deck[j], deck[rand() % deck.size()]);
    }
}

void updateHand(std::vector<std::string>& hand, std::vector<std::string>& deck, int pos)
{
    hand.insert(hand.begin(), deck.front());
    deck.erase(deck.begin());
    hand.erase(hand.begin() + pos);
}

Card getCard(int index)
{
    for (int i = 0; i < 6; i++)
        if (pyramidPlayerOne[index] == allcards[i])
            return static_cast<Card>(i);

    return Card::EMPTY;
}

void pyramidOnePlvsPl()
{
    srand(time(NULL));

    auto deck = createDeck();
    shuffleDeck(deck);
    auto hand1 = createHand(deck);


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

        for (int i = 0; i < hand1.size(); i++)
            std::cout << hand1[i] << "\n";

        std::cout << std::endl;

        std::cout << static_cast<int>(getCard(pos1)) << std::endl;

        srand(time(NULL));

        if (counter % 2 == 0) {

            std::cout << "Player 1\n";
            
            std::cout << std::endl;

            std::cout << "Which card of your hand to place: ";
            std::cin >> pos1;

            std::cout << "Enter position: ";
            std::cin >> x1;

            //std::cout << "card1: ";
            //std::cin >> card1;

            pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 1] = hand1[pos1 - 1];

            std::cout << static_cast<int>(getCard(x1 - 1));

            //int num;
            //std::cin >> num;

            switch (static_cast<int>(getCard(x1 - 1)))
            {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] = 4;
                    break;
                case 5:
                    pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] = 4;
                    break;
            }

            updateHand(hand1, deck, pos1);
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