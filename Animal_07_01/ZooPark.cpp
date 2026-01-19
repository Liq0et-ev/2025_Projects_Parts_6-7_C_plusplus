#include <iostream>
using namespace std;
#include "ZooPark.h"
#include <algorithm>
ZooPark::ZooPark() = default;

ZooPark::~ZooPark() {
	ZooParklist.clear();
}
ZooPark& ZooPark::operator+=(const ZooAnimal& ZooParklist) {
	this->ZooParklist.push_back(ZooParklist);
	return *this;
}


void ZooPark::Print() const {
	for (auto animal = ZooParklist.cbegin(); animal != ZooParklist.cend(); animal++) {
		this->Print();

	}
}


short ZooPark::GetMinYear() const {
	if (ZooParklist.empty()) {
		cout << "the listn is empty";
		return -1;
	}

	auto minAnimal = min_element(
		ZooParklist.cbegin(), ZooParklist.cend(),
		[](const ZooAnimal& a, const ZooAnimal& b) {
			return a.GetDzimshanas_gads() < b.GetDzimshanas_gads();
		}
	);

	return minAnimal->GetDzimshanas_gads();
}