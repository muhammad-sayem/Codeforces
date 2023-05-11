#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, lastDigit;
    cin >> n;

    if(n >= 0) cout << n << endl;
    else{
        lastDigit = n%10;
        int a = n/10;
        int b = n/100*10 + lastDigit;

        cout << max(a,b) << endl;
    }

    return 0;
}
