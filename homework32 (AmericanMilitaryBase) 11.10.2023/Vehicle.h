#pragma once

// ���������
class Vehicle {
protected:
	double maxTankVolume; // ���� ����� ��������� � �.
	double petrolAmount; // ������� ���-�� ������� � ����

	// Bus
	int people; // ���. ���-�� �����
	int maxPeople; // ����. ���-�� �����

	// Truck
	double load; // ���. ���-�� �����
	double maxLoad; // ����. ���-�� �����

public:
	Vehicle(double t, double p);
	double getTankVolume(); // ������ ����� ��������� � ������
	double getPetrolAmount(); // ������ ������� ���-�� ������� � ����
	virtual void arrive() = 0; // �������� �� ����
	virtual bool leave() = 0; // ������ ������ ��� � �������� ����
};

