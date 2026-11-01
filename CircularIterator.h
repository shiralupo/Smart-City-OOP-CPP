#ifndef CIRCULARITERATOR_H
#define CIRCULARITERATOR_H
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

class CircularIterator {
public:
	list<CityEntity*> ::iterator start;
	list<CityEntity*> ::iterator end;
	list<CityEntity*> ::iterator current;

	CircularIterator(list<CityEntity*>& entities){
		start = entities.begin();
		end = entities.end();
		current = entities.begin();
	}

	CityEntity* operator*() {
		return *current;
	}

	CircularIterator operator++(int) {
		CircularIterator temp = *this;
		++current;
		if (current == end)
			current = start;
		return temp;
	}

	CircularIterator& operator--() {
		if (current == start)
			current = end;
		current--;
		return *this;
	}

	bool operator==(const CircularIterator& other) const {
		if (other.current == current) return true;
		else return false;
	}

	bool operator!=(const CircularIterator & other) const {
		if (other.current != current) return true;
		else return false;
	}
};

#endif