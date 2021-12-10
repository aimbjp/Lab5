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
	int GetSpeed(), GetFlightAltitude(), GetRangeFlight(), GetPowerEngine(), GetNumberCrew();

	static int GetCount(), GetMaxSpeedFlyingObject();

	string GetModel(), GetTitle();

	void Engine();

	void Lights();

	virtual void ShowObjectCharacteristics(), Condition();

	FlyingObject(int speed = -1, int flightAltitude = -1, int rangeFlight = -1, int powerEngine = -1, int numberCrew = -1, string model = "NoName",
		string title = "NoName")
	{
		this->speed = speed;
		this->flightAltitude = flightAltitude;
		this->rangeFlight = rangeFlight;
		this->powerEngine = powerEngine;
		this->numberCrew = numberCrew;
		this->model = model;
		this->title = title;
		Count++;
		if (speed > MaxSpeedFlyingObject) MaxSpeedFlyingObject = speed;
	}

	
	virtual ~FlyingObject() {};
};

class Aircraft : public FlyingObject
{

protected:
	int wingspan, numberEngine;
	string flaps = "off";
public:
	Aircraft(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model, int wingspan, int numberEngine,
		string title) : FlyingObject(speed, flightAltitude, rangeFlight, powerEngine, numberCrew, model, title)
	{
		this->wingspan = wingspan;
		this->numberEngine = numberEngine;
	}

	int GetWingspan(), GetNumberEngine();
	string GetFlaps();
	void SetFlaps();

	void ShowObjectCharacteristics() override, Condition() override;

};

class CivilAircraft : public Aircraft
{
	static int MaxSeats;
protected:
	int numberSeats, numberEmergencyExit, numberPilots;
	bool buisnessClass;
	string readyTakeOff = "no";
public:
	CivilAircraft(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model, string title, int wingspan,
		int numberEngine, int numberEmergencyExit, int numberSeats, int numberPilots, bool buisnessClass) : Aircraft(speed, flightAltitude,
			rangeFlight, powerEngine, numberCrew, model, wingspan, numberEngine, title)
	{
		this->numberSeats = numberSeats;
		this->numberEmergencyExit = numberEmergencyExit;
		this->numberPilots = numberPilots;
		this->buisnessClass = buisnessClass;
		if (numberSeats > MaxSeats) MaxSeats = numberSeats;
	}

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
			rangeFlight, powerEngine, numberCrew, model, wingspan, numberEngine, title)
	{
		this->power = power;
		if (power > MaxPower) MaxPower = power;
	}

	int GetPower();

	void ShowObjectCharacteristics() override, Condition() override;

};

class Hellicopter : public FlyingObject
{
protected:
	int bladeRotationSpeed = 0;
	string tailRotor = "off";
public:
	Hellicopter(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model,
		string title, int bladeRotationSpeed) : FlyingObject(speed, flightAltitude, rangeFlight, powerEngine, numberCrew, model, title)
	{
		this->bladeRotationSpeed = bladeRotationSpeed;
	};

	int GetBladeRotationSpeed();
	string GetTailRotor();


	void ShowObjectCharacteristics() override, Condition() override, SetTailRotor();

};

class Rocket : public FlyingObject
{
protected:
	int height = 0;
	string overload = "0";
public:
	Rocket(int speed, int flightAltitude, int rangeFlight, int powerEngine, int numberCrew, string model,
		string title, int height) : FlyingObject(speed, flightAltitude, rangeFlight, powerEngine, numberCrew, model, title)
	{
		this->height = height;
	}

	int GetHeight();
	string GetOverload();
	void SetOverload();

	void ShowObjectCharacteristics() override, Condition() override;

};
