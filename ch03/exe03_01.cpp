#include <iostream>

int main(void)
{
    using namespace std;

    const int FOOT_TO_INCH = 12;
    int height;

    cout << "Enter your height in inchs_";
    cin >> height;
    cout << endl << "Your Height convert to " << height / FOOT_TO_INCH;
    cout << " FOOT AND " << height % FOOT_TO_INCH << " inch height" << endl;

    return 0;
}