#include <iostream>
using namespace std;
#include "ZooPark.h"

int main() {
	// Two local ZooAnimal objects
	ZooAnimal a1("Zebra", "The_Zebrus", 19, "'Mozambic");
	ZooAnimal a2;
	ZooAnimal a3("Bobr", "the_Great", 4, "Poland");
	a2.SetNosaukums("Kapibara");
	cout << "******Two local ZooAnimal objects:" << endl;
	a1.Print();
	a2.Print();
	a3.Print();

	// Register of Classrooms

	ZooPark Zo(3);
	cout << "ZooPark for minimum " << Zo.GetMinYear() << " items created" << endl;
	try {
		Zo += a1;
		Zo += a2;

		ZooAnimal* pa = new ZooAnimal("Zebra", "The_Zebrus", 35, "'Mozambic");
		Zo += *pa;
		delete pa;


		cout << "****** Now Classrooms Register is for " << Zo.GetMinYear() << " items" << endl;
		Zo += *(new ZooAnimal("Elephant", "The_jambo", 45, "Togo"));
		cout << endl << "******Items of the Classrooms Register:" << endl;
		Zo.Print();

		Zo += *(new ZooAnimal("Enotiks", "The_enotus", 13, "China"));
		cout << endl << "******Items of the ZooPark:" << endl;
		Zo.Print();

	}
	catch (ZooParkYearException) {
		cout << endl << "====== ERROR: Minimum exceeded! ======" << endl;
	}
	catch (...) {
		cout << endl << "====== ERROR: Unknown exception! ======" << endl;
	}

	cout << "The smallest year has " << Zo.GetMinYear() << " year" << endl;
}