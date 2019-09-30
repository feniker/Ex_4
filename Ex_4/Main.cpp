#include "Head.h"

using namespace std;

int main()
{
	vector <Figure*> vec;
	int q = 0;
	Circle cir(0, 0, 0, 1);
	Triangle tri({ 0,0 }, { 1,0 }, { 0,1 });
	Quadrangle qua({ 3,0 }, { 0,3 }, { 0,0 }, { 3,3 });
	Other oth("THOR", 2);
	vec = { &cir,
	&tri,
	&qua,
	&oth};
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i]->print();
	}
	return 0;
}