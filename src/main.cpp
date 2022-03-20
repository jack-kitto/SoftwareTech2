#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

#include "headers/Components.hpp"
// #include "headers/Sale.hpp"
#include "./components/Menu.cpp"
#include "./components/ExitScreen.cpp"
// #include "./components/Audit.cpp"
// #include "./components/CheckFileDetails.cpp"
// #include "./components/List.cpp"
#include "./components/ReadFile.cpp"
// #include "./components/Sale.cpp"
#include "./components/Separate.cpp"


int main(){
    start();
    return 0;
}

void start(){
    int action = 9;
    int run = 1;

    while(run){
        render(menu());
        handleInput(&run);
        // clear();
    }
    cout << "\nBye.\n";
}

void handleInput(int* run){
    cout << "\nEnter your selection: ";
    char input;
    cin >> input;
    switch (input)
    {
    case 'E':
        *run = 0;
        render(ExitScreen());
        break;
    case 'R':
        ReadFile();
        break;
    case 'C':
        break;
    case 'L':
        break;
    case 'A':
        break;
    case 'D':
        break;
    case 'S':
        break;
    case 'P':
        break;
    }
}

void render(string element){
        // clear();
        cout << "############################################################################################";
        // string m = menu();
        // cout << m;
        cout << element;
        cout << "############################################################################################";
}

void clear(){
    for(int i = 0; i <= 100; i++){
        cout << "\n";
    }
}


