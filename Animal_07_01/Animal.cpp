#include <iostream>
using namespace std;
#include "Animal.h"

Animal::Animal(string name, string type, short y) {
    Nosaukums = name;
    Iesauka = type;
    Dzimshanas_gads = y;
}

Animal::~Animal() {
    cout << "The main object has been destroyed!" << endl;
}

void Animal::Print() const {
    cout << "Nosaukums: " << Nosaukums << endl
        << "Iesauka: " << Iesauka << endl
        << "Dzimshanas_gads: " << Dzimshanas_gads << endl;
}