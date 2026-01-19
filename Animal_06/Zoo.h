#pragma once
#include "ZooAnimal.h"

class ZooYearException {};

class Zoo {
private:
	ZooAnimal** ZooPark = NULL;
	static const unsigned DEFAULT_MIN_YEAR = 5;
	short MinYear;
	short Year;
public:
	Zoo() : MinYear(DEFAULT_MIN_YEAR), Year(0) {
		ZooPark = new ZooAnimal * [MinYear];
	}
	Zoo(short min_year) : MinYear(min_year), Year(0) {
		ZooPark = new ZooAnimal * [MinYear];
	}
	~Zoo();
	static unsigned GetDefaultMinYear() { return DEFAULT_MIN_YEAR; }
	int GetMinYear() const { return MinYear; }
	int GetYear() const { return Year; }
	void Add(ZooAnimal& a);
	void Print() const;
	unsigned GetMinYear();
};