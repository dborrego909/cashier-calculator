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

	int total_cost1 = unit_quantity1 * unit_price1;

	cout << "$--------------- Cost Summary ---------------$" << endl;
	cout << setw(15) << left << "Item" << setw(15) << left << "Price" << setw(15)
	<< left << "Quantity" << setw(15) << left << "Cost" << endl;
	cout << "------------------------------------------------------------\n" << endl;
	cout << setw(15) << left << unit_name1 << setw(15) << left << "$" << unit_price1
		<< setw(15) << left << unit_quantity1 << setw(15) << left << "$" << total_cost1 << endl;
	

}
