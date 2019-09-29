#include "Head.h"
#define PI asin(0.5)*6
#include <cmath>

using namespace std;

Circle::Circle(double x_, double y_, double z_, double R_) : x(x_), y(y_), z(z_), R(R_)
{
	name = "Circle";
}
double Circle::square() const
{
	return PI*R*R;
}

string Circle::getName() const
{
	return name;
}

void Circle::print() const
{
	cout << getName() << " Center: " << x << " " << y << " " << z << "; Radius: " << R << "; Square: " << square() << endl;
}