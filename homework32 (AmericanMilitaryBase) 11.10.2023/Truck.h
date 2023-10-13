#pragma once
#include "Vehicle.h"
class Truck : public Vehicle {
public:
	Truck(double vehicleT, double vehicleP, double l, double ml);

	double GetCurrentLoad() const; // Получить текущую загруженность машины(масса груза в тоннах);
	double GetMaxLoad() const; // узнать максимальную вместительность(грузоподъемность) машины;

	void arrive();
	bool leave();
};

