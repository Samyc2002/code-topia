#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "ENTER A NUMBER: " << endl;
    cin >> i;
    if (i%2==0) {
        cout << "EVEN";
    }
    else cout << "ODD";
    return 0;
}