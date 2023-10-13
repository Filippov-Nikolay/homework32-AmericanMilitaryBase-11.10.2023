#include <iostream>
#include "Base.h"

using namespace std;

int Base::peopleOnBase = 0;
int Base::vehiclesOnBase = 0;
double Base::petrolOnBase = 0;
double Base::goodsOnBase = 0;

Base::Base() {
    peopleOnBase = 0;
    vehiclesOnBase = 0;
    petrolOnBase = 0;
    goodsOnBase = 0;
}

void Base::Print() const {
    cout << "Кол-во людей на территории: " << peopleOnBase << endl;
    cout << "Кол-во транспотрых средст на территории: " << vehiclesOnBase << endl;
    cout << "Кол-во бензина на местной заправке в литрах: " << petrolOnBase << endl;
    cout << "Кол-во груза в тоннах: " << goodsOnBase;
}

void Base::AddVehicle(Vehicle* v) {
    vehicle = v;
}

Base::Base(int plb, int von, double ptb, double gob) {
    peopleOnBase = plb;
    vehiclesOnBase = von;
    petrolOnBase = ptb;
    goodsOnBase = gob;
}


int Base::GetPeopleOnBase() const { return peopleOnBase; }
int Base::GetVehiclesOnBase() const { return vehiclesOnBase; }
double Base::GetPetrolOnBase() const { return petrolOnBase; }
double Base::GetGoodsOnBase() const { return goodsOnBase; }


void Base::SetPeopleOnBase(int p) {
    peopleOnBase = p;
}

void Base::SetVehiclesOnBase(int v) {
    vehiclesOnBase = v;
}

void Base::SetPetrolOnBase(double p) {
    petrolOnBase = p;
}

void Base::SetGoodsOnBase(double g) {
    goodsOnBase = g;
}
