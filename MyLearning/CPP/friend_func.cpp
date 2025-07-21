#include<iostream>
using namespace std;
class Myclass
{
	int x;
public:
	Myclass(int i) : x(i) {}
	friend void show(Myclass& m);
};
void show(Myclass& m)
{
	cout << "x = " << m.x << endl;
}