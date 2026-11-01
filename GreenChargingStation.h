#ifndef GREEN_H
#define GREEN_H
#include <iostream>
#include <list>
#include <string>
#include "CityEntity.h"
#include "Park.h"
#include "BusStop.h"
using namespace std;

class GreenChargingStation :public Park, public BusStop {
public:
	GreenChargingStation(string name, int zone, bool hastrees, bool hasshelter): CityEntity(name, zone), Park(name, zone, hastrees), BusStop(name,zone, hasshelter){}

	string getType() const {
		return "GreenChargingStation";
	}
};
#endif