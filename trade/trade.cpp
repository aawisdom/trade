#include <iostream>
using namespace std;

void main() {

	double current_price, sell_at_price, previous_price, buy_at_price;

	cout << "Checking current price..." << endl; 
	cin >> current_price;// this will come from brokerage API interface
	cout << "current price is: " << current_price <<endl;
	previous_price = current_price;
	cout << "Checking current price..." << endl;
	cin >> current_price;
	if (current_price<previous_price){ cout << "Price dropping..." << endl; }
	if (current_price>previous_price) { cout << "Price climbing..." << endl; }
	if (current_price==previous_price) { cout << "Price staying the same..." << endl; }
	/* program will continue from here. */

	system("pause");

}