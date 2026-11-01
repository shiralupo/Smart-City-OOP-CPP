#ifndef CITYENTITY_H
#define CITYENTITY_H
#include <iostream>
#include <list>
#include <string>
using namespace std;

class CityEntity {
protected:
	int zone;
	string name;

public:
	CityEntity(string name1 ,int zone1): name(name1) ,zone(zone1){}

	virtual ~CityEntity() {};

	virtual string getType() const = 0;

	int getZone() {
		return zone;
	}

	string getName() {
		return name;
	}
};


#endif