#include <iostream>

double celsius(double n);

int main(void)
{
    using namespace std;
    float c_code,f_degree;
    cout << "Please enter a Celsius value: ";
    cin >> c_code;
    f_degree = celsius(c_code);
    cout << c_code << " degrees Celsius is ";
    cout << f_degree << " degrees Fahrenheit." << endl;
    return 0;
}

double celsius(double n)
{
    return n * 1.8 + 32;
}