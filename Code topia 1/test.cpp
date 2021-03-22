#include <iostream>

using namespace std;

int main() {
    // int var = 7;
    // if(var==5) {
    //     cout << 1;
    // }
    // else {
    //     cout << 0;
    // }
    // int i = -1;
    // while(i>=0) {
    //     cout << i << endl;
    //     i--;
    // }
    // do{
    //     cout << i << endl;
    //     i--;
    // }while(i>=0);
    // for (int i=0; i<3; i++) {
    //     cout << i << endl;
    // }
    // int n, s=0;
    // for (int i=0; i<3; i++) {
    //     cout << "ENTER  VALUE" << endl;
    //     cin >> n;
    //     s+=n;  // s = s+n
    //     cout << s;
    // }

    int i;
    cin >> i;
    // if (i<9) {
    //     if (i<5) {
    //         if (i<1) {
    //             cout << "i is 0 or less";
    //         }
    //         else {
    //             cout << "i is less than 5 and greater than or equal to 1";
    //         }
    //     }
    //     else {
    //         cout << "i is greater than or equal to 5 and less than 9";
    //     }
    // }
    // else {
    //     cout << "i is greater than or equal to 9";
    // }
    switch(i) {
        case 1: cout << "i is 1";
                break;
        case 2: cout << "i is 2";
                break;
        case 3: cout << "i is 3";
                break;
        default: cout << "i has to be 1-3";
    }
    cout << endl << "Yay! We came out";
    return 0;
}