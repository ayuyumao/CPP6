#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "How you have " << carrots << " carrots.";
    cout << endl;

    return 0;
}