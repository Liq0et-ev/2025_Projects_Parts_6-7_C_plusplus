#include "Animal.h"

class ZooAnimal :public Animal {
private: string Sektor;
public:
	ZooAnimal() :Animal(), Sektor() {}
	ZooAnimal(string name, string type, short y, string sek) : Animal(name, type, y) {
		Sektor = sek;
	}
	virtual ~ZooAnimal();
	void SetSektor(string sek) { Sektor = sek; }
	string GetSektor() const { return Sektor; }
	void SetAttributes(string name, string type, short y, string sek) {
		Animal::SetAttributes(name, type, y);
		Sektor = sek;
	}
	virtual void Print() const;
};