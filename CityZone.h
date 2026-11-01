#ifndef CITY_H
#define CITY_H
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

class CityZone{
public:

    list<CityEntity*> entities;
    list<CityZone*> sub;
    string Zname;

    CityZone(const std::string& name) {
        Zname = name;
    }
    void addSubzone(CityZone* zone) {
        sub.push_back(zone);
    }
    void addEntity(CityEntity* entity) {
        entities.push_back(entity);
    }
    int countAllEntities() const {
        int total = entities.size();

        for (auto item : sub) {
            total += item->countAllEntities();
        }
        return total;
    }
    CityEntity* findEntityByName(const std::string& name) const {
        for (auto item : entities) {
            if (item->getName() == name)
                return item;
        }
        for (auto item : sub) {
            if (CityEntity* c = (item->findEntityByName(name)))
                return c;
        }
        return nullptr;
    }
};

#endif 