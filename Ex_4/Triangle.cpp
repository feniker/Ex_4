#include "Head.h"
#include <string>
#include <algorithm>

using namespace std;

Triangle::Triangle(std::pair <double, double> p_1, std::pair <double, double>  p_2, std::pair <double, double>  p_3) :
	p1(p_1), p2(p_2), p3(p_3) 
{
	name = "Triangle";
}

double Triangle::square() const
{
	double len1, len2, len3, halfp;
	len1 = sqrt(distSqr(p2, p3));
	len2 = sqrt(distSqr(p1, p3));
	len3 = sqrt(distSqr(p1, p2));
	halfp = (len1 + len2 + len3) / 2;
	return sqrt(halfp * (halfp - len1) * (halfp - len2) * (halfp - len3));
}
string Triangle::getName() const
{
	return name;
}

void Triangle::print() const
{
	cout << getName() << " Points: (" << p1.first << "; " << p1.second << ") (" << p2.first << "; " << p2.second << ") (" <<
		p3.first << "; " << p3.second << ") Square: " << square() << endl;
}