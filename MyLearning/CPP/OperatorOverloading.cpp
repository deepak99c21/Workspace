#include<iostream>
using namespace std;
class MarkClass
{
public:
	int Internal_Mark, External_Mark;

	MarkClass(int i, int j) :Internal_Mark(i), External_Mark(j) {}
	MarkClass() : Internal_Mark(0), External_Mark(0) {}
	MarkClass operator +(const MarkClass& m)
	{
		MarkClass temp;
		temp.Internal_Mark = Internal_Mark + m.Internal_Mark;
		temp.External_Mark = External_Mark + m.External_Mark;
		return temp;
	}
	MarkClass operator +=(int temp)
	{
		this->Internal_Mark = this->Internal_Mark + temp;
		this->External_Mark = this->External_Mark + temp;

		return *this ;
	}
	MarkClass operator -(const MarkClass& m);
	void display()
	{
		cout << "Internal Mark: " << Internal_Mark << ", External Mark: " << External_Mark << endl;
	}
};
MarkClass MarkClass::operator -(const MarkClass& m)
{
	MarkClass temp;
	temp.Internal_Mark = Internal_Mark - m.Internal_Mark;
	temp.External_Mark = External_Mark - m.External_Mark;
	return temp;
}
int main()
{
	MarkClass m1(10, 20), m2(5, 15);
	MarkClass m3 = m1 + m2; // Using overloaded + operator
	m3.display(); // Display the result of addition
	MarkClass m4 = m1 - m2; // Using overloaded - operator
	m4.display(); // Display the result of subtraction	

}

