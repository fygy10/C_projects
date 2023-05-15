#include <iostream>

using namespace std;

int main() {

    const double usd_euro(1.19);        // uds to euro converter at current exchange rate

    cout << "\nWelcome to the Euro to Dollars Currency Converter" << endl;
    cout << "\nPlease enter your total amount of Euros that you would like to convert to USD: " << endl;

    double euros{0.00};
    double dollars{0.00};

    cin >> euros;

    dollars = euros * usd_euro;

    cout << "\nThat is equivalent to: " << dollars << " dollars." << endl;

    cout << "\nThere is a flat fee for conversion which is $1, which bring the total too: " << --dollars << endl;     //added $1 increment 

    cout << endl; 

    const int dollar_value = 100 / usd_euro;
    const int quarter_value = 25 / usd_euro;
    const int dime_value = 10 / usd_euro;
    const int nickel_value = 5 / usd_euro;

    int cents {};

    cout << "How many cents (in Euros) do you have: " << endl << endl;
    cin >> cents;

    int balance{}, dollar{}, quarter{}, dime{}, nickel{}, penny{};

    dollar = cents / dollar_value;           //using compound operator
    balance = cents % dollar_value;

    quarter = cents / quarter_value;
    balance %= quarter_value;

    dime = cents / dime_value;
    balance %= dime_value;

    nickel = cents / nickel_value;
    balance %= nickel_value;

    penny = balance;

    cout << "\nHere are some options for converting your change: " << endl << endl;
    cout << "Dollars: " << dollar << endl;
    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dime << endl;
    cout << "Nickel: " << nickel << endl;
    cout << "Pennies: " << penny << endl;

    cout << endl;

    return 0;
}