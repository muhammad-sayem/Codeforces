#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i;
    cin >> test;

    for(i=1; i<=test; i++){
        cout << endl;
        int n, j, sum = 0;
        cin >> n;
        int a[n];

        for(j=0; j<n; j++){
            cin >> a[j];
        }

        for(j=0; j<n; j++){
            sum += a[j];
        }

        cout << "Case " << i << ": " << sum << endl;

    }

    return 0;
}
