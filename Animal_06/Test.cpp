#include <iostream>
using namespace std;
#include "ZooPark.h"

int main() {
	// Two local ZooAnimal objects
	
	ZooAnimal<unsigned short> a1("Zebra", "The_Zebrus", 19, "'Mozambic");
	ZooAnimal<unsigned short> a2;
	ZooAnimal<unsigned short> a3("Bobr", "the_Great", 4, "Poland");
	//a2.SetNosaukums("Kapibara");
	cout << "******Two local ZooAnimal objects:" << endl;
	a1.Print();
	a2.Print();
	a3.Print();

	// Register of Classrooms
	cout << "Default min year for minimum in ZooPark: " << ZooPark<unsigned short>::GetDefaultMinYear() << endl;
	ZooPark<unsigned short> Zo(3);
	cout << "ZooPark for minimum " << Zo.GetMinYear() << " items created" << endl;
	try {
		Zo += a1;
		Zo += a2;

		ZooAnimal<unsigned short>* pa = new ZooAnimal<unsigned short>("Zebra", "The_Zebrus", 35, "'Mozambic");
		Zo += *pa;
		delete pa;

		cout << endl << "Current  of year the Zoopark: " << Zo.GetYear() << endl;
		cout << endl << "******Items of the ZooPark:" << endl;
		Zo.Print();

		++Zo;

		cout << "****** Now Classrooms Register is for " << Zo.GetMinYear() << " items" << endl;
		Zo += *(new ZooAnimal<unsigned short>("Elephant", "The_jambo", 45, "Togo"));
		cout << endl << "******Items of the Classrooms Register:" << endl;
		Zo.Print();

		Zo += *(new ZooAnimal<unsigned short>("Enotiks", "The_enotus", 13, "China"));
		cout << endl << "******Items of the ZooPark:" << endl;
		Zo.Print();

	}
	catch (ZooParkYearException) {
		cout << endl << "====== ERROR: Minimum exceeded! ======" << endl;
	}
	catch (...) {
		cout << endl << "====== ERROR: Unknown exception! ======" << endl;
	}

	cout << "The smallest year has " << Zo.MinYearMethod() << " year" << endl;

	///////////////////////////int

	ZooAnimal<unsigned int> as1("Zebra", "The_Zebrus", 19, "'Mozambic");
	ZooAnimal<unsigned int> as2;
	ZooAnimal<unsigned int> as3("Bobr", "the_Great", 4, "Poland");
	//a2.SetNosaukums("Kapibara");
	cout << "******Two local ZooAnimal objects:" << endl;
	as1.Print();
	as2.Print();
	as3.Print();

	// Register of Classrooms
	cout << "Default min year for minimum in ZooPark: " << ZooPark<unsigned int>::GetDefaultMinYear() << endl;
	ZooPark<unsigned int> Zos(3);
	cout << "ZooPark for minimum " << Zos.GetMinYear() << " items created" << endl;
	try {
		Zos += as1;
		Zos += as2;

		ZooAnimal<unsigned int>* psa = new ZooAnimal<unsigned int>("Zebra", "The_Zebrus", 35, "'Mozambic");
		Zos += *psa;
		delete psa;

		cout << endl << "Current  of year the Zoopark: " << Zos.GetYear() << endl;
		cout << endl << "******Items of the ZooPark:" << endl;
		Zos.Print();

		++Zos;

		cout << "****** Now Classrooms Register is for " << Zos.GetMinYear() << " items" << endl;
		Zos += *(new ZooAnimal<unsigned int>("Elephant", "The_jambo", 45, "Togo"));
		cout << endl << "******Items of the Classrooms Register:" << endl;
		Zos.Print();

		Zos += *(new ZooAnimal<unsigned int>("Enotiks", "The_enotus", 13, "China"));
		cout << endl << "******Items of the ZooPark:" << endl;
		Zos.Print();

	}
	catch (ZooParkYearException) {
		cout << endl << "====== ERROR: Minimum exceeded! ======" << endl;
	}
	catch (...) {
		cout << endl << "====== ERROR: Unknown exception! ======" << endl;
	}

	cout << "The smallest year has " << Zos.MinYearMethod() << " year" << endl;

}