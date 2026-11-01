#ifndef BUS_H
#define BUS_H
#include <iostream>
#include <list>
#include <string>
#include "CityEntity.h"
using namespace std;

class BusStop : virtual public CityEntity {
public:
	bool hasShelter;

	BusStop(string name, int zone, bool hasShelter): CityEntity(name, zone), hasShelter(hasShelter){}

	string getType() const {
		return "BusStop";
	}
};

#endif