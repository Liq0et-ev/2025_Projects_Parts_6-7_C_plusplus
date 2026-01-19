#pragma once
#include "ZooAnimal.h"
#include <list>
#include <algorithm>
using namespace std;

class ZooParkYearException {};

class ZooPark {
private:
    list<ZooAnimal> ZooParklist;
public:
    ZooPark();
    ~ZooPark();
    ZooPark& operator+=(const ZooAnimal& ZooParklist);

    short GetDzimshanas_gads() const {
    }

    void Print()const;
    short GetMinYear() const;

};
