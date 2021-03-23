#include <iostream>
using namespace std;
int main()
{
    int i,pn_1 = 2,pn_2 = 1,pn;
    cin >> i;
    if(i==1){
        cout << '1' << endl;
    }
    else if (i==2)
    {
        cout << '2' << endl;
    }
    else
    {
        int n = 0;
        while(n<i-2)
        {
            pn = pn_2 + pn_1;
            pn_2 = pn_1;
            pn_1 = pn;
            n++;
        }
        cout << pn << endl;
    }
}
 