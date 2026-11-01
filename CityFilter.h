#ifndef CITYFILTER_H
#define CITYFILTER_H
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


template<class T, class Predicate>
list<T*> filter(const list<T*>& lst, Predicate predicate) {
	list<T*> temp;
	for (auto item : lst) {
		if (predicate(item) == true) {
			temp.push_back(item);
		}
	}
	return temp;
}


class IsBusStop {
public:
	bool operator()(CityEntity* c) {
		BusStop* b = dynamic_cast<BusStop*>(c);
		if (b != nullptr) return true;
		else return false;
	}
};

class IsInZone {
public:
	int zone;

	IsInZone(int zone):zone(zone){}

	bool operator()(CityEntity* c) {
		if (c->getZone() == zone) return true;
		else return false;
	}
};

class IsParkingWithTrees {
public:

	bool operator()(CityEntity* c) {
		Park* p = dynamic_cast<Park*>(c);
		if (p != nullptr && p->hasTrees == true) return true;
		else return false;
	}
};
#endif