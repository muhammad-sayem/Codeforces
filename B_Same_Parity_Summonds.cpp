#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, k, i;
        cin >> n >> k;
        ll val3 = 0;
        ll val2 = 0;

        if(n<k) cout << no << endl;


        else if(n == k){
            cout << yes << endl;
            for(i=1; i<=n; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }

        else if(k == 1){
            cout << yes << endl;
            cout << n << endl;
        }
        
        else if(n%2 != 0 && k%2 == 0) cout << no << endl;

        else if(n%2 != 0 && k%2 != 0){
            
            cout << yes << endl;
            for(i=1; i<k; i++){
                cout << 1 << " ";
                val3++;
            }
            cout << n-val3 << endl;
        }

        else if(n%2 == 0 && k%2 == 0){
            cout << yes << endl;
            for(i=1; i<k; i++){
                cout << 1 << " ";
                val2++;
            }
            cout << n-val2 << endl;
        }

        else if(n%2 == 0 && k%2 != 0){
            if(k<=(n/2)){
                cout << yes << endl;
                for(i=1; i<k; i++){
                    cout << 2 << " ";
                }
                ll val2 = (k-1)*2;
                cout << n-val2 << endl;
            }
            else cout << no << endl;
        }
    }
        
    return 0;
}
