#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Write.h"
#include <fstream>
#include <vector>

using namespace std;

int main() {
    srand(time(0));
    Write Obj;
    string str;
    ofstream file;
    vector<string> vec1;

    file.open("C:/Users/Pc/Desktop/CPP/please2/OUTPUT.txt");
    if(file.fail()) {
        cout << "Failed to open.";
        exit(1);
    }
    int length1; cout << "Enter length : "; cin >> length1;
    int length2; cout << "Enter the amount of string you want : "; cin >> length2;
    Obj.setLength(length1);
    for(int i = 0 ; i < length2 ; i++){
        vec1.push_back(Obj.GenerateString());
    }
    for(int i = 0; i < vec1.size(); i++){
        file << vec1[i] << endl;
    }


    return 0;
}
