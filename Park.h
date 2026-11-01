#ifndef PARK_H
#define PARK_H
#include <iostream>
#include <list>
#include <string>
#include "CityEntity.h"
using namespace std;

class Park : virtual public CityEntity {
public:
	bool hasTrees;

	Park(string name, int zone, bool hastrees) : CityEntity(name, zone), hasTrees(hastrees){}

	string getType() const {
		return "Park";
	}
};


#endif