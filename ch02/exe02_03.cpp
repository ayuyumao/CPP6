#include <iostream>

void blind(void);
void see(void);

int main(void)
{
    using namespace std;
    blind();
    blind();
    see();
    see();
    return 0;
}

void blind(void)
{
    std::cout << "There blind mice" << std::endl;
}

void see(void)
{
    std::cout << "See how they run" << std::endl;
}