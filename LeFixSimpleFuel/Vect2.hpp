#pragma once
#include <string>

class Vect2
{

public:

	int X;
	int Y;

	Vect2();
	Vect2(int x, int y);
	Vect2(std::string s);
	int LengthSquared();
	int DistanceToSquared(Vect2 position);
	std::string toString();
};