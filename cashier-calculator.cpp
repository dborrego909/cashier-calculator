// cashier-calculator.cpp
// Daniel Borrego
// 06.11.24
// Course: COMPSCI-1-35513
// Description: This program is a simple POS for 3 items that shows the summary
//      of sale, subtotal, grand total
// Usage: This program will ask for the user for input, items, price, quantity
//      and show total


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
    float tax_rate;

	cout << "Unit name: " ; cin >> unit_name1;
	cout << "Unit price: "; cin >> unit_price1;
	cout << "Unit quantity: "; cin >> unit_quantity1;
	cout << "\n";
	int total_cost1 = unit_quantity1 * unit_price1;


	cout << "Unit name: " ; cin >> unit_name2;
	cout << "Unit price: "; cin >> unit_price2;
	cout << "Unit quantity: "; cin >> unit_quantity2;
	cout << "\n";
	int total_cost2 = unit_quantity2 * unit_price2;

	cout << "Unit name: " ; cin >> unit_name3;
	cout << "Unit price: "; cin >> unit_price3;
	cout << "Unit quantity: "; cin >> unit_quantity3;
	cout << "\n";
	int total_cost3 = unit_quantity3 * unit_price3;

    cout << "What is the local tax rate?: "; cin >> tax_rate;

    tax_rate = tax_rate / 100; 
    int subtotal = total_cost1 + total_cost2 + total_cost3;
    
	cout << "$--------------- Cost Summary ---------------$" << endl;
	cout << setw(15) << left << "Item" << setw(15) << left << "Price" << setw(15)
	<< left << "Quantity" << setw(15) << left << "Cost" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << setw(15) << left << unit_name1 << setw(15) << left << "$" + to_string(unit_price1) 
		<< setw(15) << left << unit_quantity1 << setw(15) << left << "$" + to_string(total_cost1)<< endl;
	
	cout << setw(15) << left << unit_name2 << setw(15) << left << "$" + to_string(unit_price2) 
		<< setw(15) << left << unit_quantity2 << setw(15) << left << "$" + to_string(total_cost2)<< endl;
	
	cout << setw(15) << left << unit_name3 << setw(15) << left << "$" + to_string(unit_price3) 
		<< setw(15) << left << unit_quantity3 << setw(15) << left << "$" + to_string(total_cost3)<< endl;
	
    double grand_total = subtotal * tax_rate;
    grand_total += subtotal;

	cout << "$--------------- Subtotal  --------------$\n" << endl;
    cout << "$" << subtotal << "\n" <<  endl; 
	cout << "$--------------- Grand Total  --------------$\n" << endl;
    cout << "$" << grand_total << "\n" << endl;


	cout << "------------------------------------------------------------" << endl;

    double amount_tendered;
    cout << "Total is " << grand_total << ". How much do you have?" << endl;
    cin >> amount_tendered;
    

    // init variables hundred, twenty, ten, five, one, quarter, dime, nickel, penny,

	cout << "$--------------- Change  --------------$\n" << endl;
    cout << "$" << amount_tendered - grand_total << endl;

}
