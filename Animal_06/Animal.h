#include <string>
using namespace std;

template <class T>
class Animal {
protected:
	string Nosaukums;
	string Iesauka;
	T Dzimshanas_gads;

public:
	Animal() : Nosaukums(""), Iesauka(""), Dzimshanas_gads(0) {}
	Animal(string name, string type, T y);
	virtual ~Animal();
	virtual void Print() const;
	string GetNosaukums() const { return Nosaukums; }
	string GetIesauka() const { return Iesauka; }
	T GetDzimshanas_gads() const { return Dzimshanas_gads; }

	void SetNosaukums(T name) { Nosaukums = name; }
	void SetIesauka(string type) { Iesauka = type; }
	void SetDzimshanas_gads(short y) { Dzimshanas_gads = y; }
	void SetAttributes(string name, string type, T y) {
		Nosaukums = name;
		Iesauka = type;
		Dzimshanas_gads = y;

	}
};
template <class T>
Animal<T>::Animal(string name, string type, T y) {
	Nosaukums = name;
	Iesauka = type;
	Dzimshanas_gads = y;
}
template <class T>
Animal<T>::~Animal() {
	cout << "The main object has been destroyed!" << endl;
}
template <class T>
void Animal<T>::Print() const {
	cout << "Nosaukums: " << Nosaukums << endl
		<< "Iesauka: " << Iesauka << endl
		<< "Dzimshanas_gads: " << Dzimshanas_gads << endl;
}