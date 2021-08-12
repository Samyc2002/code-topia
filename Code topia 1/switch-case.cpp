#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "ENTER DAY NUMBER (1 IS SUNDAY): ";
    cin >> i;
    switch (i)
    {
    case 1: cout << "SUNDAY";
        break;
    case 2: cout << "MONDAY";
        break;
    case 3: cout << "TUESDAY";
        break;
    case 4: cout << "WEDNESDAY";
        break;
    case 5: cout << "THURSDAY";
        break;
    case 6: cout << "FRIDAY";
        break;
    case 7: cout << "SATURDAY";
        break;
    default: cout << "ENTER A NUMBER BETWEEN 1-7";
        break;
    }
    return 0;
}