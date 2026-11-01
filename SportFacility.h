#ifndef SPORT_H
#define SPORT_H
#include <iostream>
#include <list>
#include <string>
#include "CityEntity.h"
using namespace std;

class SportFacility : public CityEntity {
public:
	int capacity;

	SportFacility(string name, int zone, int capacity): CityEntity(name,zone), capacity(capacity){}

	string getType() const {
		return "SportFacility";
	}
};

#endif