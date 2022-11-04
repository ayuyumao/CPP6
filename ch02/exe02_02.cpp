#include <iostream>

int main(void)
{
    using namespace std;

    int distance;

    cout << "Please enter a distance: " << endl;
    cin >> distance;
    distance = distance * 220;
    cout << distance;

    return 0;
}