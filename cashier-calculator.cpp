#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	cout << "---------- Pather Express Cashout Super Program ----------\n" << endl;
	string unit_name1;
	int unit_price1;
	int unit_quantity1;

	string unit_name2;
	int unit_price2;
	int unit_quantity2;

	string unit_name3;
	int unit_price3;
	int unit_quantity3;

	int tax_rate;

	cout << "Unit name: " ; cin >> unit_name1;
	cout << "Unit price: "; cin >> unit_price1;
	cout << "Unit quantity: "; cin >> unit_quantity1;

	cout << "$--------------- Cost Summary ---------------$" << endl;
	cout << setw(10) << left << "Item" << setw(10) << left << "Price" << setw(10)
	<< left << "Quantity" << setw(10) << left << "Cost" << endl;
	cout << "------------------------------------------------------------\n" << endl;

	

}
