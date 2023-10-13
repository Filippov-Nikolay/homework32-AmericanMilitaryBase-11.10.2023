#pragma once
#include "Vehicle.h"

class Base {
	Vehicle* vehicle;
public:
	static int peopleOnBase; // Кол-во людей на территории
	static int vehiclesOnBase; // Кол-во транспотрых средст на территории
	static double petrolOnBase; // Кол-во бензина на местной заправке в литрах
	static double goodsOnBase; // Кол-во груза в тоннах

	Base();
	Base(int plb, int von, double ptb, double gob);

	void Print() const;
	void AddVehicle(Vehicle*);

	int GetPeopleOnBase() const;
	int GetVehiclesOnBase() const;
	double GetPetrolOnBase() const;
	double GetGoodsOnBase() const;


	void SetPeopleOnBase(int);
	void SetVehiclesOnBase(int);
	void SetPetrolOnBase(double);
	void SetGoodsOnBase(double);
};