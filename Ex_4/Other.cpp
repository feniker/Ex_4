#include "Head.h"

using namespace std;

Other::Other(const string& name_): Figure()
{
	name = name_;
	sqr = 0;
}
Other::Other(const string& name_, const double& sqr_) : Figure()
{
	name = name_;
	sqr = sqr_;
}
string Other::getName() const
{
	return name;
}
void Other::print() const
{
	cout << name << " Square:" << square() << endl;
}

double Other::square() const
{
	return sqr;
}