#include <iostream>
#include "FlyingObject.h"
using namespace std;
const int LENGHT = 10;

int main()
{
	int countCivilAircraft = 0, countWarAircraft = 0, countHellicopter = 0, countRocket = 0, maxSpeedWarAicraft = 0;
	FlyingObject* arr[LENGHT]{};

	arr[0] = new CivilAircraft(921, 11200, 600, 50000, 24, "Moon-48", "Light", 41, 5, 2, 200, 3, true);
	arr[1] = new CivilAircraft(1000, 6000, 10000, 200000, 15, "Umbrella-26", "Raincoat11", 50, 8, 6, 300, 2, false);
	arr[2] = new CivilAircraft(900000005, 12000, 40000, 1000, 27, "Galaxy-8", "Mare", 100, 3, 0, 1000, 1, true);
	arr[3] = new WarAircraft(3000, 13000, 1400, 125000, 2, "Last-1", "Ivan Burdenko", 16, 1, 10000);
	arr[4] = new WarAircraft(3400, 10000, 1700, 160000, 2, "Last-2", "Adolf Gitler", 20, 1, 19000);
	arr[5] = new WarAircraft(2600, 11000, 3000, 100000, 2, "Last-3", "Jhon Lenon", 35, 1, 5600);
	arr[6] = new WarAircraft(1700, 12300, 800, 75000, 2, "Last-4", "Gevin Burdenko", 12, 1, 3400);
	arr[7] = new Hellicopter(240, 3000, 500, 40000, 4, "A-Share-380", "Reddison Blue", 1800);
	arr[8] = new Hellicopter(420, 6000, 300, 80000, 2, "QA-Tests-203", "Xd-Designe", 5000);
	arr[9] = new Rocket(29000, 60000, 30000, 190000000, 4, "NaSaLi-3", "VikenLed", 100);

	for (int i = 0; i < LENGHT; i++)
	{
		if (typeid(*arr[i]) == typeid(CivilAircraft)) countCivilAircraft++;
		if (typeid(*arr[i]) == typeid(WarAircraft)) countWarAircraft++;
		if (typeid(*arr[i]) == typeid(Hellicopter)) countHellicopter++;
		if (typeid(*arr[i]) == typeid(Rocket)) countRocket++;
	}

	cout << "Count of each type: " << "\n\tCivil: " << countCivilAircraft << ";" << "\n\tWar: " << countWarAircraft << ";"
		<< "\n\tHellicopter: " << countHellicopter << ";" << "\n\tRocket: " << countRocket << ";" << endl<< endl;
	
	for (int i = 0; i < LENGHT; i++)
	{
		cout << endl;
		arr[i]->ShowObjectCharacteristics();
		cout << endl;
	}

	for (int i = 0; i < LENGHT; i++)
	{
		if (typeid(*arr[i]) == typeid(WarAircraft) && arr[i]->GetSpeed() > maxSpeedWarAicraft)
		{
			maxSpeedWarAicraft = arr[i]->GetSpeed();
		}
	}
	
	cout << endl<<endl<< "Maximum of speed War Aircrafts: " << maxSpeedWarAicraft << " km/h;" << endl;
	
	for (int i = 0; i < LENGHT; i++)
		delete[] arr[i];
}

