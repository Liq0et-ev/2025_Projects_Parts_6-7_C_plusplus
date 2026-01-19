#include <iostream>
using namespace std;
#include "Zoo.h"

Zoo::~Zoo() {
	for (int i = 0; i < Year; ++i) delete ZooPark[i];
	delete[] ZooPark;
	cout << endl << "Zoo and all " << Year<< " items are destroyed!" << endl;
}

void Zoo::Add(ZooAnimal& a) {
	if (Year== MinYear) throw ZooYearException();

	ZooPark[Year++] = new ZooAnimal(a);
}

void Zoo::Print() const {
	for (int i = 0; i < Year; ++i) {
		cout << i + 1 << ". ";
		ZooPark[i]->Print();
		cout << endl;
	}
}

short Zoo::MinYear() {
	short min_year = ZooPark[0]->GetYear();
	for (int i = 1; i < Year; ++i) {
		short s = ZooPark[i]->GetYear();
		if (s > min_year) min_year = s;
	}
	return min_year;
}