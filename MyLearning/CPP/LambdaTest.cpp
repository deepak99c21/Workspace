#include<iostream>
using namespace std;


int main()
{
	int x = 10; int y = 10;
	auto l = [x, &y] {
		//x++;
		y++;
		cout << "x: " << x << ", y: " << y << endl;
		};
	l();
	x = 100;
	y = 100;
	l();
	cout << "x: " << x << ", y: " << y << endl;
	return 0;

}