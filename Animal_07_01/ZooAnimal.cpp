#include <iostream>
using namespace std;
#include "ZooAnimal.h"

ZooAnimal::~ZooAnimal() {
	cout << endl << "ZooAnimal object destroyed!";
}

void ZooAnimal::Print() const {

	Animal::Print();
	cout << "Sektor: " << Sektor << endl << endl;
}
