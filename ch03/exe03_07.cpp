#include <iostream>
using namespace std;

const float GALLON_TO_LITER = 3.875;
const float HKM_TO_MILE = 62.14;

int main()
{
    float fuel_consume_eur,fuel_consume_us;
    cout << "Enter the fuel consume in europe(1/100km): ";
    cin >> fuel_consume_eur;
    fuel_consume_us = HKM_TO_MILE / (fuel_consume_eur / GALLON_TO_LITER);

    cout << "The fuel consume is " << fuel_consume_eur << "L/100km" << endl;
    cout << "The fuel consume is " << fuel_consume_us << " mpg(mile/gallon)." << endl;

    return 0;
}