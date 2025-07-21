#include<iostream>
#include<utility>
using namespace std;
int main() {
	std::pair<int, std::string> p1(1, "Hello");
	std::pair<int, std::string> p2(2, "World");
	// Accessing elements of the pair
	cout << "First element of p1: " << p1.first << endl;
	cout << "Second element of p1: " << p1.second << endl;
	// Comparing pairs
	cout << p1.first << " " << p1.second << endl;
	cout << p2.first << " " << p2.second << endl;
	int arr[] = { 1, 2, 3, 4, 5 };
	cout << "Array elements: " <<2[arr];
	int temp_const = 50;

	auto x = static_cast<const int&>(temp_const);
	cout << "\nValue of x: " << x << endl;
	x = 150;
	cout << "\nValue of x: " << x << endl;


	return 0;
}