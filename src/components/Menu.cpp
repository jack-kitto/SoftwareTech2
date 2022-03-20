#include <string>

using namespace std;


string menu(){
    string m;

    m += "\nAssign1 2022 Menu\n";
    m += "-----------------\n";
    m += "E(xit) - Exit\n";
    m += "R(ead) - Read file\n";
    m += "C(heck) - Check file details\n";
    m += "L(ist) - List in short form for checking\n";
    m += "A(udit) - Audit for rubbish entries in previous sales people\n";
    m += "D(uplicates) - Find and list duplicate id numbers\n";
    m += "S(ort) - Sort on account number\n";
    m += "P(ath) - pathfind\n";
    m += "\n";

    return m;
}