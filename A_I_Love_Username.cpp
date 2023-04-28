#include<bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main()
{
    int n, i, j, minn, maxx, cntL, cntS, cntM = 0;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=1; i<n; i++){
        cntL = 0, cntS = 0;
        for(j=0; j<i; j++){
            if(a[i] > a[j]) cntL++;
            else if(a[i] < a[j]) cntS++;
        }

        if(cntL == i || cntS == i) cntM++;
    }

    cout << cntM << endl;

    return 0;
}
