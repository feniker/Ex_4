#pragma once
#include <string>
#include <vector>
#include <iostream>

static double distSqr(std::pair <double, double> p_1, std::pair <double, double> p_2)
{
	return ((p_1.first - p_2.first) * (p_1.first - p_2.first) + (p_1.second - p_2.second) * (p_1.second - p_2.second));
}

class Figure
{
public:
	virtual double square() const = 0;
	virtual void print() const = 0;
	virtual std::string getName() const = 0;
protected:
	std::string name;
};

class Circle : public Figure
{
public:
	Circle(double x_, double y_, double z_, double R_);
	double square() const;
	std::string getName() const;
	void print() const;
private:
	double x, y, z, R;
};

class Quadrangle: public Figure
{
public:
	Quadrangle(std::pair <double, double> p_1, std::pair <double, double>  p_2, std::pair <double, double>  p_3, std::pair <double, double>  p_4);
	double square() const;
	bool convex() const;
	std::string getName() const;
	void print() const;
private:
	std::pair <double, double> p1,p2,p3,p4;
	bool inner(std::pair <double, double> p_1, std::pair <double, double> p_2, std::pair <double, double> p_3, std::pair <double, double> p) const;
	double sinVec(std::pair <double, double> p_1, std::pair <double, double>  p_2) const;
};

class Triangle : public Figure
{
public:
	Triangle(std::pair <double, double> p_1, std::pair <double, double>  p_2, std::pair <double, double>  p_3);
	double square() const;
	std::string getName() const;
	void print() const;
private:
	std::pair <double, double> p1, p2, p3;
};

class Other : public Figure
{
public:
	Other(const std::string& name_);
	Other(const std::string& name_, const double & sqr_);
	std::string getName() const;
	void print() const;
	double square() const;
private:
	double sqr;
};