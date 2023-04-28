#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, maxx, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    cin >> n;
    long long a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=0; i<n; i++){
        if(a[i] == 1) cnt1++;
        else if(a[i] == 2) cnt2++;
        else if(a[i] == 3) cnt3++;
    }

    maxx = max({cnt1, cnt2, cnt3});

    cout << n-maxx << endl;

    return 0;
}
