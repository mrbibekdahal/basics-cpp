#include <iostream>
using namespace std;

int main() {

	const  int squareMeter = 5;
	double height;
	double width;
	double totalCost;

	cout<<"Enter the height: "; cin >> height;
	cout << "Enter the width: "; cin >> width;

	totalCost = height * width * squareMeter;

	cout << "The total cost of wall painting is: $" << totalCost << endl << endl;

	return 0;
}