#include<iostream>
using namespace std;
class Dee
{
public:
	Dee() {
		cout << "Dee's constructor called" << endl;
	}
	~Dee() {
		cout << "Dee's destructor called" << endl;
	}
};
int main()
{
	Dee d1; // Object d1 of class Dee is created
	{
		Dee d2; // Object d2 of class Dee is created
	} // Object d2 goes out of scope and its destructor is called
	cout << "Exiting main function" << endl;
	return 0; // Object d1 goes out of scope and its destructor is called
}