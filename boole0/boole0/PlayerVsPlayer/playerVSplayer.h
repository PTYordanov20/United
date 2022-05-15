#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
#include <vector>

std::vector<std::string> allcards = {
    "1 [AND]",
    "0 [AND]",
    "1 [OR]",
    "0 [OR]",
    "1 [XOR]",
    "0 [XOR]"
};

int counter = -1;

int rows = 5, space, i, j, l = 14;

int pyramidOne[6] = { -1, -1, -1, -1, -1, -1 };
int pyramidTwo[6] = { -1, -1, -1, -1, -1, -1 };

std::string pyramidPlayerOne[15] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };
std::string pyramidPlayerOneFullName[15] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };
std::string pyramidPlayerTwo[15] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };
std::string pyramidPlayerTwoFullName[15] = { "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*" };

int pyramidPlayerOneColor[15] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };
int pyramidPlayerTwoColor[15] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

int x1 = 0, pos1 = 0;
char drawCard1;

int x2 = 0, pos2 = 0;
char drawCard2;

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
        return 5;
        break;
    }
    case 2:
    {
        return 4;
        break;
    }
    case 4:
    {
        return 2;
        break;
    }
    case 5:
    {
        return 1;
        break;
    }
    case 6:
    {
        return 9;
        break;
    }
    case 7:
    {
        return 8;
        break;
    }
    case 8:
    {
        return 7;
        break;
    }
    case 9:
    {
        return 6;
        break;
    }
    case 12:
    {
        return 10;
        break;
    }
    case 10:
    {
        return 12;
        break;
    }
    case 14:
    {
        return 13;
        break;
    }
    case 13:
    {
        return 14;
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

std::vector<std::string> createHand(std::vector<std::string>& deck)
{
    std::vector<std::string> hand;

    for (int i = 0; i < 4; i++)
    {
        hand.push_back(deck.back());
        deck.pop_back();
    }

    return hand;
}

int generatePyramidOneStart()
{
    int ranNum = rand() % 2;

    for (int i = 0; i < 6; i++)
        return ranNum;
}

void shuffleDeck(std::vector<std::string>& deck)
{

    int ranShuffles = rand() % 6 + 1;

    for (int i = 0; i < ranShuffles; i++)
    {
        int ranNum = rand() % deck.size() + 1;

        for (int j = 0; j < ranNum; j++)
            std::swap(deck[j], deck[rand() % deck.size()]);
    }
}

void updateHand(std::vector<std::string>& hand, std::vector<std::string>& deck, int pos)
{
    hand.erase(hand.begin() + (pos - 1));
    deck.erase(deck.begin());
}

void drawCard(std::vector<std::string>& hand, std::vector<std::string>& deck, int pos)
{
    hand.insert(hand.begin(), deck.front());
    deck.erase(deck.begin());
}

char pyramidOnePlaceCards()
{
    switch (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 1][0])
    {
    case '1':
    {
        if (x1 >= 1 && x1 <= 5)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidOne[x1 - 1] == 1 && pyramidOne[x1] == 1) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidOne[x1 - 1] == 0 && pyramidOne[x1] == 0) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidOne[x1 - 1] == 0 && pyramidOne[x1] == 0) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidOne[x1 - 1] == 0 && pyramidOne[x1] == 0) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidOne[x1 - 1] == 1 && pyramidOne[x1] == 0) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidOne[x1 - 1] == 0 && pyramidOne[x1] == 1) return 'W';
        }
        else if (x1 >= 6 && x1 <= 9)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '*') return 'W';
        }
        else if (x1 >= 10 && x1 <= 12)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '*') return 'W';
        }
        else if (x1 == 13 || x1 == 14)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '*') return 'W';
        }
        else if (x1 == 15)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '*') return 'W';
        }
        break;
    }
    case '0':
    {
        if (x1 >= 1 && 5 >= x1)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidOne[x1 - 1] == 1 && pyramidOne[x1] == 0) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidOne[x1 - 1] == 0 && pyramidOne[x1] == 1) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidOne[x1 - 1] == 1 && pyramidOne[x1] == 0) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidOne[x1 - 1] == 0 && pyramidOne[x1] == 1) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidOne[x1 - 1] == 1 && pyramidOne[x1] == 1) return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidOne[x1 - 1] == 1 && pyramidOne[x1] == 1) return 'W';
        }
        else if (x1 >= 6 && x1 <= 9)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 6][0] == '*') return 'W';
        }
        else if (x1 >= 10 && x1 <= 12)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 5][0] == '*') return 'W';
        }
        else if (x1 == 13 || x1 == 14)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 4][0] == '*') return 'W';
        }
        else if (x1 == 15)
        {
            if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 4 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '0') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '0' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 14 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1') return 'W';
            else if (pyramidPlayerOneColor[pyramidOnePlvsPlPyramid(x1) - 1] == 10 && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '1' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '1') return 'W';
            else if (pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 2][0] == '*' && pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 3][0] == '*') return 'W';
        }


        break;
    }
    default:
        return 'Z';
        break;
    }
}

char pyramidTwoPlaceCards()
{
    switch (pyramidPlayerTwo[x2 - 1][0])
    {
    case '1':
    {
        if (x2 >= 1 && x2 <= 5)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidTwo[x2 - 1] == 1 && pyramidTwo[x2] == 1) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidTwo[x2 - 1] == 0 && pyramidTwo[x2] == 0) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidTwo[x2 - 1] == 0 && pyramidTwo[x2] == 0) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidTwo[x2 - 1] == 0 && pyramidTwo[x2] == 0) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidTwo[x2 - 1] == 1 && pyramidTwo[x2] == 0) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidTwo[x2 - 1] == 0 && pyramidTwo[x2] == 1) return 'W';
        }
        else if (x2 >= 6 && x2 <= 9)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 5][0] == '1' && pyramidPlayerTwo[x2 - 6][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 5][0] == '0' && pyramidPlayerTwo[x2 - 6][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 5][0] == '0' && pyramidPlayerTwo[x2 - 6][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 5][0] == '0' && pyramidPlayerTwo[x2 - 6][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 5][0] == '1' && pyramidPlayerTwo[x2 - 6][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 5][0] == '0' && pyramidPlayerTwo[x2 - 6][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 5][0] == '*' && pyramidPlayerTwo[x2 - 6][0] == '*') return 'W';
        }
        else if (x2 >= 10 && x2 <= 12)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 4][0] == '1' && pyramidPlayerTwo[x2 - 5][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 4][0] == '0' && pyramidPlayerTwo[x2 - 5][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 4][0] == '0' && pyramidPlayerTwo[x2 - 5][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 4][0] == '0' && pyramidPlayerTwo[x2 - 5][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 4][0] == '1' && pyramidPlayerTwo[x2 - 5][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 4][0] == '0' && pyramidPlayerTwo[x2 - 5][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 4][0] == '*' && pyramidPlayerTwo[x2 - 5][0] == '*') return 'W';
        }
        else if (x2 == 13 || x2 == 14)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 3][0] == '1' && pyramidPlayerTwo[x2 - 4][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 3][0] == '0' && pyramidPlayerTwo[x2 - 4][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 3][0] == '0' && pyramidPlayerTwo[x2 - 4][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 3][0] == '0' && pyramidPlayerTwo[x2 - 4][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 3][0] == '1' && pyramidPlayerTwo[x2 - 4][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 3][0] == '0' && pyramidPlayerTwo[x2 - 4][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 3][0] == '*' && pyramidPlayerTwo[x2 - 4][0] == '*') return 'W';
        }
        else if (x2 == 15)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 2][0] == '1' && pyramidPlayerTwo[x2 - 3][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 2][0] == '0' && pyramidPlayerTwo[x2 - 3][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 2][0] == '0' && pyramidPlayerTwo[x2 - 3][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 2][0] == '0' && pyramidPlayerTwo[x2 - 3][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 2][0] == '1' && pyramidPlayerTwo[x2 - 3][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 2][0] == '0' && pyramidPlayerTwo[x2 - 3][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 2][0] == '*' && pyramidPlayerTwo[x2 - 3][0] == '*') return 'W';
        }
        break;
    }
    case '0':
    {
        if (x2 >= 1 && 5 >= x2)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidTwo[x2 - 1] == 1 && pyramidTwo[x2] == 0) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidTwo[x2 - 1] == 0 && pyramidTwo[x2] == 1) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidTwo[x2 - 1] == 1 && pyramidTwo[x2] == 0) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidTwo[x2 - 1] == 0 && pyramidTwo[x2] == 1) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidTwo[x2 - 1] == 1 && pyramidTwo[x2] == 1) return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidTwo[x2 - 1] == 1 && pyramidTwo[x2] == 1) return 'W';
        }
        else if (x2 >= 6 && x2 <= 9)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 5][0] == '1' && pyramidPlayerTwo[x2 - 6][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 5][0] == '0' && pyramidPlayerTwo[x2 - 6][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 5][0] == '1' && pyramidPlayerTwo[x2 - 6][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 5][0] == '0' && pyramidPlayerTwo[x2 - 6][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 5][0] == '1' && pyramidPlayerTwo[x2 - 6][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 5][0] == '1' && pyramidPlayerTwo[x2 - 6][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 5][0] == '*' && pyramidPlayerTwo[x2 - 6][0] == '*') return 'W';
        }
        else if (x2 >= 10 && x2 <= 12)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 4][0] == '1' && pyramidPlayerTwo[x2 - 5][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 4][0] == '0' && pyramidPlayerTwo[x2 - 5][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 4][0] == '1' && pyramidPlayerTwo[x2 - 5][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 4][0] == '0' && pyramidPlayerTwo[x2 - 5][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 4][0] == '1' && pyramidPlayerTwo[x2 - 5][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 4][0] == '1' && pyramidPlayerTwo[x2 - 5][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 4][0] == '*' && pyramidPlayerTwo[x2 - 5][0] == '*') return 'W';
        }
        else if (x2 == 13 || x2 == 14)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 3][0] == '1' && pyramidPlayerTwo[x2 - 4][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 3][0] == '0' && pyramidPlayerTwo[x2 - 4][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 3][0] == '1' && pyramidPlayerTwo[x2 - 4][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 3][0] == '0' && pyramidPlayerTwo[x2 - 4][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 3][0] == '1' && pyramidPlayerTwo[x2 - 4][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 3][0] == '1' && pyramidPlayerTwo[x2 - 4][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 3][0] == '*' && pyramidPlayerTwo[x2 - 4][0] == '*') return 'W';
        }
        else if (x2 == 15)
        {
            if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 2][0] == '1' && pyramidPlayerTwo[x2 - 3][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 4 && pyramidPlayerTwo[x2 - 2][0] == '0' && pyramidPlayerTwo[x2 - 3][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 2][0] == '1' && pyramidPlayerTwo[x2 - 3][0] == '0') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 2][0] == '0' && pyramidPlayerTwo[x2 - 3][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 14 && pyramidPlayerTwo[x2 - 2][0] == '1' && pyramidPlayerTwo[x2 - 3][0] == '1') return 'W';
            else if (pyramidPlayerTwoColor[x2 - 1] == 10 && pyramidPlayerTwo[x2 - 2][0] == '1' && pyramidPlayerTwo[x2 - 3][0] == '1') return 'W';
            else if (pyramidPlayerTwo[x2 - 2][0] == '*' && pyramidPlayerTwo[x2 - 3][0] == '*') return 'W';
        }


        break;
    }
    default:
        return 'Z';
        break;
    }
}

void drawPyramid()
{
    srand(time(NULL));
    l = 14;

    for (i = 0; i < rows; i++) {

        for (space = 1; space <= rows - i; space++)
            std::cout << ("      ");
        for (j = 0; j <= i; j++, l--) {

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pyramidPlayerOneColor[l]);

            if (pyramidPlayerOneFullName[l] == pyramidPlayerOneFullName[pyramidOnePlvsPlPyramid(x1) - 1])
                centerstringPyramids(pyramidPlayerOne[pyramidOnePlvsPlPyramid(x1) - 1]);
            else
                centerstringPyramids(pyramidPlayerOne[l]);

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

        }
        std::cout << "\n";

    }

    for (int i = 0; i < 6; i++)
        centerint(pyramidOne[i]);

    std::cout << std::endl;

    for (int i = 0; i < 6; i++)
        centerint(pyramidTwo[i]);

    std::cout << std::endl;

    l = 0;

    for (i = rows; i >= 0; i--)
    {
        for (space = 0; space <= rows - i; space++)
            std::cout << "      ";
        for (j = i; j > 0; j--, l++) {

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pyramidPlayerTwoColor[l]);

            if (pyramidPlayerTwoFullName[l] == pyramidPlayerTwoFullName[x2 - 1])
                centerstringPyramids(pyramidPlayerTwo[x2 - 1]);
            else
                centerstringPyramids(pyramidPlayerTwo[l]);

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        }
        std::cout << "\n";

    }
}

void playerVSplayer()
{
playAgain:
    srand(time(NULL));

    auto deck = createDeck();
    shuffleDeck(deck);
    auto hand1 = createHand(deck);
    auto hand2 = createHand(deck);


    for (int i = 0; i < 6; i++)
        pyramidOne[i] = generatePyramidOneStart();

    for (int i = 0; i < 6; i++)
    {
        if (pyramidOne[i] == 0)
            pyramidTwo[i] = 1;
        else if (pyramidOne[i] == 1)
            pyramidTwo[i] = 0;
    }

    while (true)
    {
        counter++;
    drawnCard:
        system("cls");

        drawPyramid();

        x1 = 0;
        x2 = 0;

        if (counter % 2 == 0) {

        }
        else {

        wrong_move_2:

            std::cout << "Player 2\n";

            std::cout << std::endl;

            std::cout << "Your hand:";

            std::cout << std::endl;

            for (int i = 0; i < hand2.size(); i++)
                std::cout << i + 1 << ". " << hand2[i] << "\n";

            std::cout << std::endl;

            drawCard2 = ' ';

            std::cout << "Do you want to draw a card from the deck [Y/N]: ";
            std::cin >> drawCard2;

            if (drawCard2 == 'Y')
            {
                drawCard(hand2, deck, rand() % hand2.size() + 1);

                goto drawnCard;
            }
            else if (drawCard2 == 'N')
                goto noDrawnCard2;

        noDrawnCard2:

            std::cout << "Which card of your hand to place: ";
            std::cin >> pos2;

            std::cout << "Enter position: ";
            std::cin >> x2;

            pyramidPlayerTwo[x2 - 1] = hand2[pos2 - 1][0];
            pyramidPlayerTwoFullName[x2 - 1] = hand2[pos2 - 1];

            if (hand2[pos2 - 1].find("[XOR]") != std::string::npos)
                pyramidPlayerTwoColor[x2 - 1] = 4;
            else if (hand2[pos2 - 1].find("[OR]") != std::string::npos)
                pyramidPlayerTwoColor[x2 - 1] = 14;
            else if (hand2[pos2 - 1].find("[AND]") != std::string::npos)
                pyramidPlayerTwoColor[x2 - 1] = 10;

            if (pyramidTwoPlaceCards() == 'W')
            {
                pyramidPlayerTwoColor[x2 - 1] = 7;
                pyramidPlayerTwo[x2 - 1] = "*";
                pyramidPlayerTwo[x2 - 1] = "*";
                system("cls");
                drawPyramid();
                goto wrong_move_2;
            }
            else if (pyramidTwoPlaceCards() == 'Z')
                continue;

            if (hand2.size() <= 1)
            {
                drawCard(hand2, deck, pos2);
                updateHand(hand2, deck, pos2);
            }
            else
                updateHand(hand2, deck, pos2);

            int wincounter = 0;
            for (int i = 0; i < 15; i++)
            {
                if (pyramidPlayerTwo[i] != "*")
                    wincounter++;
            }

            if (wincounter == 15)
            {
                system("cls");

                for (int i = 0; i < 6; i++)
                {
                    pyramidOne[i] = -1;
                    pyramidTwo[i] = -1;
                }

                for (int i = 0; i < 15; i++)
                {
                    pyramidPlayerOne[i] = "*";
                    pyramidPlayerOneFullName[i] = "*";
                    pyramidPlayerTwo[i] = "*";
                    pyramidPlayerTwoFullName[i] = "*";
                }
                for (int i = 0; i < 15; i++)
                {
                    pyramidPlayerOne[i] = "*";
                    pyramidPlayerOneFullName[i] = "*";
                    pyramidPlayerTwo[i] = "*";
                    pyramidPlayerTwoFullName[i] = "*";
                    pyramidPlayerOneColor[i] = 7;
                    pyramidPlayerTwoColor[i] = 7;
                }

                x2 = 0, pos2 = 0, counter - 1;

                std::cout << "Player 2 won\n";

                char playAgain;

                std::cout << "Do you want to play again [Y/N]: ";
                std::cin >> playAgain;

                if (playAgain == 'Y')
                {
                    goto playAgain;
                }
                else
                    exit(1);
            }
        }
    }
}