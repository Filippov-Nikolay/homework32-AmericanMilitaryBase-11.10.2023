#pragma once

// Транспорт
class Vehicle {
protected:
	double maxTankVolume; // Макс объём бензобака в л.
	double petrolAmount; // Текущее кол-во топлива в баке

	// Bus
	int people; // Тек. кол-во людей
	int maxPeople; // Макс. кол-во людей

	// Truck
	double load; // Тек. кол-во груза
	double maxLoad; // Макс. кол-во груза

public:
	Vehicle(double t, double p);
	double getTankVolume(); // Узнать объем бензобака в литрах
	double getPetrolAmount(); // Узнать текущее кол-во топлива в баке
	virtual void arrive() = 0; // Приехать на базу
	virtual bool leave() = 0; // Залить полный бак и покинуть базу
};

