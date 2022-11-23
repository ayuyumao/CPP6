#include <iostream>

int main()
{
    char c1, c2,c3;
    c1 = 'a';
    c2 = 'b';
    c3 = 66;
    int i = c1;
    int t = c2;
    std::cout << c1 << " is " << i << std::endl;
    std::cout << c2 << " is " << t << std::endl;
    std::cout << c3 << std::endl;
    c3 = c3 + 32;
    c1 = c1 - 32;
    std::cout << c3 << std::endl;
    std::cout << c1;

    return 0;
}