//hw5-12.cpp - displays the total owed
//Created/revised by <Hannah Rhode> on <02/17/2025>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double price_1 = 0.0;
	double price_2 = 0.0;

	//enter input items
	cout << "Enter price of the first item: ";
	cin >> price_1;
	cout << "Enter price of the second item: ";
	cin >> price_2;

	//calculate total owed
	double minPrice = min(price_1, price_2);
	double discount = minPrice / 2.0;
	double totalCost = price_1 + price_2 - discount;

	//display total owed
	cout << "Total cost: $" << totalCost << endl;
	
	return 0;
}	//end of main function