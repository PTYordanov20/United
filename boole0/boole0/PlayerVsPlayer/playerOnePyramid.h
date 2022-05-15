#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
#include <vector>


// Fix array for player 1
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