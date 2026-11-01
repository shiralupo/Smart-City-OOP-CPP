#ifndef CITYMANAGER_H
#define CITYMANAGER_H
#include <iostream>
#include <list>
#include <string>
#include "CityEntity.h"
#include "Park.h"
#include "SportFacility.h"
#include "BusStop.h"
#include "GreenChargingStation.h"
#include "CityManager.h"
#include "CityFilter.h"
#include "CircularIterator.h"
#include "CityZone.h"

using namespace std;

class CityManager {
public:
	list<CityEntity*> lst;

	void addEntity(CityEntity* x) {
		lst.push_back(x);
	}

	void countEntities(int& parks,int& stops,int& sports,int& greenCharging) {
		parks = 0;
		stops = 0;
		sports = 0;
		greenCharging = 0;

		for (auto item : lst) {
			if (item->getType() == "Park")
				parks++;
			if (item->getType() == "BusStop")
				stops++;
			if (item->getType() == "SportFacility")
				sports++;
			if (item->getType() == "GreenChargingStation")
				greenCharging++;
		}
	}

	CityEntity* findEntityByName(string name) {
		for (auto item : lst) {
			if (item->getName() == name)
				return item;
		}
		return nullptr;
	}
};

#endif