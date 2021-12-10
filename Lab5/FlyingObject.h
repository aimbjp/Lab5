#pragma once
#include <iostream>
using namespace std;

class FlyingObject
{
	static int Count, MaxSpeedFlyingObject;
protected:
	int speed, flightAltitude, rangeFlight, powerEngine, numberCrew;
	string model, title;
	bool ignition = 0, lights = 0;
public:
	int GetSpeed(), GetFlightAltitude(),GetRangeFlight(), GetPowerEngine(), GetCount(), GetMaxSpeedFlyingObject(), GetNumberCrew();

	string GetModel(), GetTitle();

	void Engine();

	void Lights();

	virtual void ShowObjectCharacteristics(), Condition();

	FlyingObject(int speed = -1, int flightAltitude = -1, int rangeFlight = -1, int powerEngine = -1, int numberCrew = -1, string model = "NoName",
		string title = "NoName") {}
};

class Aircraft : public FlyingObject
{

protected:
	int wingspan, numberEngine;
	string flaps = "off";
public:
	Aircraft(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model, int wingspan, int numberEngine,
		string title) : FlyingObject(speed, flightAltitude, rangeFlight, powerEngine, numberCrew, model, title) {}

	int GetWingspan(), GetNumberEngine();
	string GetFlaps();
	void SetFlaps();

	void ShowObjectCharacteristics() override, Condition() override;

};

class CivilAircraft : public Aircraft
{
	static int MaxSeats;
protected:
	int numberSeats,numberEmergencyExit, numberPilots;
	bool buisnessClass;
	string readyTakeOff = "no";
public:
	CivilAircraft(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model, string title, int wingspan,
		int numberEngine, int numberEmergencyExit, int numberSeats, int numberPilots, bool buisnessClass) : Aircraft(speed, flightAltitude,
			rangeFlight, powerEngine, numberCrew, model, wingspan, numberEngine, title) {}

	int GetNumberSeats(), GetNumberEmergencyExit(), GetNumberPilots();
	bool GetBuisnessClass();

	string GetReadyTakeOff();
	
	void SetReady();

	void ShowObjectCharacteristics() override, Condition() override;

};

class WarAircraft : public Aircraft
{
	static int MaxPower;
protected:
	int power;
public:
	WarAircraft(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model, string title, int wingspan,
		int numberEngine, int power) : Aircraft(speed, flightAltitude,
			rangeFlight, powerEngine, numberCrew, model, wingspan, numberEngine, title){}

	int GetPower();

	void ShowObjectCharacteristics() override, Condition() override;

};

class Hellicopter : public FlyingObject
{
protected:
	int bladeRotationSpeed;
	string tailRotor = "off";
public:
	Hellicopter(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model,
		string title, int bladeRotationSpeed): FlyingObject(speed, flightAltitude, rangeFlight, powerEngine, numberCrew, model, title) {}

	int GetBladeRotationSpeed();
	string GetTailRotor();


	void ShowObjectCharacteristics() override, Condition() override, SetTailRotor();

};

class Rocket : public FlyingObject
{
protected:
	int height;
	string overload = "0";
public:
	Rocket(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model,
		string title, int height) : FlyingObject(speed, flightAltitude, rangeFlight, powerEngine, numberCrew, model, title) {}

	int GetHeight();
	string GetOverload();
	void SetOverload();

	void ShowObjectCharacteristics() override, Condition() override;

};
