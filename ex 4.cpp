#include <iostream>
using namespace std;

int main() {
	double rate;
	int hours;
	int days;
	double Wages;

	rate = 10;
	hours = 10;
	days = 5;

	Wages = rate * hours * days;
	cout << "Weekly Wages of an Employee = $"  << Wages << endl;

	return 0;
}