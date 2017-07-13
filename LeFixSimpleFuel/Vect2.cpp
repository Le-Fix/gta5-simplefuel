#include "Vect2.hpp"

Vect2::Vect2()
{
}

Vect2::Vect2(int x, int y)
{
	X = x;
	Y = y;
}

Vect2::Vect2(std::string s)
{
	size_t pos = s.find_first_of('|', 0);
	std::string xs = s.substr(1, pos - 1);
	std::string ys = s.substr(pos + 1, s.length() - pos - 2);

	X = std::stoi(xs);
	Y = std::stoi(ys);
}

int Vect2::LengthSquared()
{
	return (X * X) + (Y * Y);
}

int Vect2::DistanceToSquared(Vect2 position)
{
	Vect2 c = Vect2(X - position.X, Y - position.Y);
	return c.LengthSquared();
}

std::string Vect2::toString()
{
	return "(" + std::to_string(X) + "|" + std::to_string(Y) + ")";
}