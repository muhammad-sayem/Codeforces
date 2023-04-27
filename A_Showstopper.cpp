#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;         /// tutorial + abid vai + asif er code //

    int test;
    cin >> test;

    while(test--){
        int n, i, flag = 0;
        cin >> n;
        int a[n+5];
        int b[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        for(i=1; i<=n; i++){
            cin >> b[i];
        }

        for(i=1; i<=n; i++){
            if(a[i] > a[n]) swap(a[i], b[i]);
            if(b[i] > b[n]) swap(a[i], b[i]);
        }

        for(i=1; i<=n; i++){
            if(a[i] > a[n] || b[i] > b[n]){
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}


