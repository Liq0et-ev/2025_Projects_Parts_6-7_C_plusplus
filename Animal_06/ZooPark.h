#pragma once
#include "ZooAnimal.h"

class ZooParkYearException {};

template <class T>
class ZooPark {
private:
    ZooAnimal<T>** Animals = NULL; 
    static const short DEFAULT_MIN_YEAR = 5;
    short MinYear;
    short Year;
public:
    ZooPark() : MinYear(DEFAULT_MIN_YEAR), Year(0) {
        Animals = new ZooAnimal<T> * [MinYear];
    }
    ZooPark(unsigned min_year) : MinYear(min_year), Year(0) {
        Animals = new ZooAnimal<T> * [MinYear];
    }
    ~ZooPark();
    static short GetDefaultMinYear() { return DEFAULT_MIN_YEAR; }
    int GetMinYear() const { return MinYear; }
    int GetYear() const { return Year; }
    void Add(ZooAnimal<T>& a);
    void Print() const;
    short MinYearMethod();
    void operator+=(ZooAnimal<T>& a);
    ZooPark& operator++();
};
template <class T>
ZooPark<T>::~ZooPark() {
	for (int i = 0; i < Year; ++i) delete Animals[i];
	delete[] Animals;
	cout << endl << "ZooPark and all " << Year << " items are destroyed!" << endl;
}
template <class T>
void ZooPark<T>::operator+=(ZooAnimal<T>& a) {
	if (Year == MinYear) throw ZooParkYearException();

	Animals[Year++] = new ZooAnimal<T>(a);
}
template <class T>
void ZooPark<T>::Print() const {
	for (int i = 0; i < Year; ++i) {
		cout << i + 1 << ". ";
		Animals[i]->Print();
		cout << endl;
	}
}
template <class T>
short ZooPark<T>::MinYearMethod() {
	if (Year == 0) {
		cout << "the list is empty";
		return -1;
	}

	short min_year = Animals[0]->GetDzimshanas_gads();
	for (int i = 1; i < Year; ++i) {
		short t = Animals[i]->GetDzimshanas_gads();

		if (t == 0) continue;
		if (min_year == -1 || t < min_year) {
			min_year = t;
		}
	}
	if (min_year == -1) {
		cout << "There is no valid year" << endl;
		return -1;
	}
	return min_year;
}
template <class T>
ZooPark<T>& ZooPark<T>::operator++() {
	++MinYear;
	ZooAnimal<T>** newAnimals = new ZooAnimal<T>* [MinYear];
	for (int i = 0; i < Year; i++) newAnimals[i] = Animals[i];
	delete[] Animals;
	Animals = newAnimals;
	return *this;
}