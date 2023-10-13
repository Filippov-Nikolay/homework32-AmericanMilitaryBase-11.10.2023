#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
public:
	Bus(double vehicleT, double vehicleP, int p, int mpl);

	int GetPeopleCount(); // Получить текущее количество пассажиров(водитель в это число не входит);
	int GetMaxPeople(); // Получить количество пассажирских мест;

	void arrive();
	bool leave();
};

