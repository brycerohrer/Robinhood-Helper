#include <iostream>
using namespace std;


int main () {

cout << "Robinhood Application" << endl;

double bought_price = .36897;
double share_amount = 159.00;
double after_price;

double profit;
double after_share;

cout << "Coin Price before : ";
// cin >> bought_price;
cout << "Share Amount: ";
// cin >> share_amount;
double before_total = share_amount * bought_price;
cout << "Total Amount Bought: " << share_amount << " at " << bought_price << " per coin. " << "This means you spent $" << before_total << endl;


cout << "---------------------------------------------" << endl;
cout << "Coin price after: ";
cin >> after_price;
double after_total = after_price * after_share;
double after_shares_calc = 60.59 * after_price;
cout << "Total Amount Bought: " << after_shares_calc << " at " << after_price << " per coin. " << "This means you spent $" << after_total << endl; 
cout << "You have gained " << after_share - share_amount << " shares. " << "You have gained $" << abs(before_total - after_total) << endl;
}