#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
#include <vector>

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