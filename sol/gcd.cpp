#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>> a>> b;
    while (a%b != 0){
        int a2= b;
        int b2= a%b;
        a = a2;
        b = b2;

    }
    cout << b<< endl;
}