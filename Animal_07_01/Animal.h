#include <string>
using namespace std;

class Animal {
protected:
	string Nosaukums;
	string Iesauka;
	short Dzimshanas_gads;

public:
	Animal() : Nosaukums(""), Iesauka(""), Dzimshanas_gads(0) {}
	Animal(string name, string type, short y);
	virtual ~Animal();
	virtual void Print() const;
	string GetNosaukums() const { return Nosaukums; }
	string GetIesauka() const { return Iesauka; }
	short GetDzimshanas_gads() const { return Dzimshanas_gads; }

	void SetNosaukums(string name) { Nosaukums = name; }
	void SetIesauka(string type) { Iesauka = type; }
	void SetDzimshanas_gads(short y) { Dzimshanas_gads = y; }
	void SetAttributes(string name, string type, short y) {
		Nosaukums = name;
		Iesauka = type;
		Dzimshanas_gads = y;

	}
};
