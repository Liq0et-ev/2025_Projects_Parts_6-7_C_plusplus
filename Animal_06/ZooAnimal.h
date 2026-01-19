#include "Animal.h"

template <class T>
class ZooAnimal :public Animal<T> {
private: string Sektor;
public:
	ZooAnimal() :Animal <T>(), Sektor() {}
	ZooAnimal(string name, string type, T y, string sek) : Animal <T>(name, type, y) {
		Sektor = sek;
	}
	virtual ~ZooAnimal();
	void SetSektor(string sek) { Sektor = sek; }
	string GetSektor() const { return Sektor; }
	void SetAttributes(string name, string type, T y, string sek) {
		Animal <T>::SetAttributes(name, type, y);
		Sektor = sek;
	}
	virtual void Print() const;
};
template <class T>
ZooAnimal<T>::~ZooAnimal() {
	cout << endl << "ZooAnimal object destroyed!";
}
template <class T>
void ZooAnimal<T>::Print() const {

	Animal<T>::Print();
	cout << "Sektor: " << Sektor << endl << endl;
}