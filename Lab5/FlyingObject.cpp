#include "FlyingObject.h"

int FlyingObject::MaxSpeedFlyingObject = 0;
int FlyingObject::Count = 0;

int FlyingObject::GetFlightAltitude()
{
	return speed;
}

int FlyingObject::GetRangeFlight()
{
	return flightAltitude;
}

int FlyingObject::GetPowerEngine()
{
	return powerEngine;
}

string FlyingObject::GetModel()
{
	return model;
}

string FlyingObject::GetTitle()
{
	return title;
}

int FlyingObject::GetCount()
{
	return Count;
}

int FlyingObject::GetMaxSpeedFlyingObject()
{
	return MaxSpeedFlyingObject;
}

int FlyingObject::GetSpeed()
{
	return speed;
}

int FlyingObject::GetNumberCrew()
{
	return numberCrew;
}

void FlyingObject::Engine()
{
	if (ignition == 0)
	{
		ignition = 1;
		cout << "Engine on" << endl;
	}
	else
	{
		ignition = 0;
		cout << "Engine off" << endl;
	}
}

void FlyingObject::Lights()
{
	if (lights == 0)
	{
		lights = 1;
		cout << "Lights on" << endl;
	}
	else
	{
		lights = 0;
		cout << "Lights off" << endl;
	}
}

void FlyingObject::ShowObjectCharacteristics()
{
	cout << "Speed: " << speed << " km/h;" << "\nFlight altitude: " << flightAltitude << " m;" << "\nRange of flight: " << rangeFlight << " km;"
		<< "\nPower of engine: " << powerEngine << " h.p.;" << "\nNumber of crew: " << numberCrew << ";" << "\nModel: " << model << "\nTitle: "
		<< title << ";" << endl;
}

void FlyingObject::Condition()
{
	string lights, engine;
	if (this->lights == 1) lights = "Lights on";
	else lights = "Lights off";
	if (this->ignition == 1) engine = "Engine on";
	else engine = "Engine off";

	cout << engine << " and " << lights << "." << endl;
}

int Aircraft::GetWingspan()
{
	return wingspan;
}

string Aircraft::GetFlaps()
{
	return flaps;
}

void Aircraft::SetFlaps()
{
	cout << "Input condition of flaps." << endl;
	cin >> flaps;
}

int Aircraft::GetNumberEngine()
{
	return numberEngine;
}

void Aircraft::Condition()
{
	FlyingObject::Condition();
	cout << "Flaps is " << flaps << "." << endl;
}

void Aircraft::ShowObjectCharacteristics()
{
	FlyingObject::ShowObjectCharacteristics();
	cout << "Wingspan: " << wingspan << " m;" << "\nNumber of engine: " << numberEngine << ";" << endl;
}

int CivilAircraft::MaxSeats = 0;

int CivilAircraft::GetNumberSeats()
{
	return numberSeats;
}

int CivilAircraft::GetNumberEmergencyExit()
{
	return numberEmergencyExit;
}

int CivilAircraft::GetNumberPilots()
{
	return numberPilots;
}

string CivilAircraft::GetReadyTakeOff()
{
	return readyTakeOff;
}

void CivilAircraft::SetReady()
{
	cout << "Is plane ready to take off?" << endl;
	cin >> readyTakeOff;
}

bool CivilAircraft::GetBuisnessClass()
{
	return buisnessClass;
}

void CivilAircraft::ShowObjectCharacteristics()
{
	string buisnessClass;
	if (this->buisnessClass == 0) buisnessClass = "No";
	else buisnessClass = "Yes";

	Aircraft::ShowObjectCharacteristics();
	cout << "Number of emergency exits: " << numberEmergencyExit << ";" << "\nNumber of seats: " << numberSeats << ";" << "\nNumber of pilots: "
		<< numberPilots << "\nBuisness class: " << buisnessClass << ";" << endl;
}

void CivilAircraft::Condition()
{
	Aircraft::Condition();
	cout << "Plane ready take off: " << readyTakeOff << "." << endl; 
}

int WarAircraft::MaxPower = 0;

int WarAircraft::GetPower()
{
	return power;
}

void WarAircraft::ShowObjectCharacteristics()
{
	Aircraft::ShowObjectCharacteristics();
	cout << "Power: " << power << " power;" << endl;
}

void WarAircraft::Condition()
{
	Aircraft::Condition();
	cout << "Weapons are ready to shoot" << "." << endl;
}


int Hellicopter::GetBladeRotationSpeed()
{
	return bladeRotationSpeed;
}

void Hellicopter::ShowObjectCharacteristics()
{
	FlyingObject::ShowObjectCharacteristics();
	cout << "Blade rotation speed: " << bladeRotationSpeed << " per minute;" << endl;
}

string Hellicopter::GetTailRotor()
{
	return tailRotor;
}

void Hellicopter::SetTailRotor()
{
	cout << "Input tail rotor is on/off: " << endl;
	cin >> tailRotor;
}

void Hellicopter::Condition()
{
	FlyingObject::Condition();
	cout << "Tail rotor is"<< tailRotor << "." << endl;
}


int Rocket::GetHeight()
{
	return height;
}

string Rocket::GetOverload()
{
	return overload;
}

void Rocket::SetOverload()
{
	cout << "Input overload: " << endl;
	cin >> overload;
}

void Rocket::ShowObjectCharacteristics()
{
	FlyingObject::ShowObjectCharacteristics();
	cout << "Height of rocket: " << height << " m;" << endl;
}

void Rocket::Condition()
{
	FlyingObject::Condition();
	cout << "Overload is "<< overload << "." << endl; 
}
