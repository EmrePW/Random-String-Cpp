#include "Write.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Write::Write(){
    cout << "Initialized..." << endl;
    length = 20;
}

std::string Write::GenerateString() {
    char *str1 = new char[length];
    for (int i = 0; i < length; i++){
        int char1 = rand()%94+33;
        str1[i] = char(char1);
    }
    return str1;
}

void Write::setLength(int x) {
    length = x;
}

Write::~Write() {
    cout << "Destructed..." << endl;
}