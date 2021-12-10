#pragma once


class FlyingObject
{
	static int Count;
public:

	FlyingObject()
	{
	};
	~FlyingObject();
};

class Aircraft : public FlyingObject
{

};

class CivilAircraft : public Aircraft
{

};

class WarAircraft : public Aircraft
{

};

class Hellicopter : public FlyingObject
{

};

class Rocket : public FlyingObject
{

};
