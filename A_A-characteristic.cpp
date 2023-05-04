#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    pii       pair <int,int>
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int sumReturn(int n){
    return n*(n-1)/2;       /// n er maan joto tar theke ek kom er ek theke n porjonto value er jogfol ///
}

int main()
{
    fastIO;                    /// Abid vai ///

    int test;
    cin >> test;

    while(test--){
        int n, k, a, b, i, flag = 0;
        cin >> n >> k;

        for(i=0; i<=n; i++){
            if(sumReturn(i) + sumReturn(n-i) == k){
                flag = 1;
                a = i;
                b = n-i;
            }
        }

        if(flag) {
            cout << yes << endl;
            
            for(i=0; i<a; i++){
                cout << 1 << ' ';
            }

            for(i=0; i<b; i++){
                cout << -1 << ' ';
            }

            cout << endl;
        }

        else cout << no << endl;

    }

    return 0;
}

