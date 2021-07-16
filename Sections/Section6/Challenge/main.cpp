
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\nEstimate for carpet cleaning service" << endl;
    double small_room {0};
    double large_room {0};
    const double price_small_room {25};
    const double  price_large_room {35};
    const double tax_price {0.06};
    cout << "Number of small rooms: ";
    cin >> small_room;
    cout << "Number of large rooms: ";
    cin >> large_room;
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    double sum = (price_small_room*small_room) + (price_large_room*large_room);
    cout << "Cost: " << sum << endl;
    cout << "Tax: " << tax_price*sum << endl;
    cout << "=====================" << endl;
    cout << "Total estimate: $" << sum + tax_price*sum << endl;
    cout << "This estimate is valid for 30 days";
 
    cout << endl;
    return 0;
}

