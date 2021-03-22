#include <iostream>

using namespace std;

int main() {
    int i, a, b;
    cout << "ENTER TWO NUMBERS";
    cin >> a >> b;
    i = a+b;        // for i=4
    if (i<9) {          // 4<9 
        if (i<5) {             //4<5
            if (i<1) {          //4>1
                cout << "i is 0 or less";
            }
            else {
                cout << "i is less than 5 and greater than or equal to 1";
            }
        }
        else {
            cout << "i is greater than or equal to 5 and less than 9";
        }
    }
    else if (i<11)
    {
        cout << "i is less than 11";
    }
    else {
        cout << "i is greater than or equal to 9";
    }
    cout << "Thanks for attending";
    return 0;
}