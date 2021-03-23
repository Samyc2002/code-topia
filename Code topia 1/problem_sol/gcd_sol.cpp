#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>> m >> n;
    while (m%n != 0){
        int m2= n;
        int n2= m%n;
        m = m2;
        n = n2;

    }
    cout << n<< endl;
    return 0;
}