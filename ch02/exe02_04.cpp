#include <iostream>

int main()
{

    double age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    double month = age * 12;
    std::cout << "Your age in months is "
            << month << std::endl;

    return 0;
}