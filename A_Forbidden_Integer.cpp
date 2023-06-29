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
    fastIO;             // Partial help taken from turmax's code //

    int test;
    cin >> test;

    while(test--){
        ll n, k, x, i;
        cin >> n >> k >> x;
        

        if(x != 1){  
            cout << yes << endl << n << endl;
            for(i=1; i<=n; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
        
        else{
            if(k >= 2 && n%2 == 0){
                cout << yes << endl << n/2 << endl;
                for(i=1; i<=n/2; i++){
                    cout << 2 << " ";
                }
                cout << endl;
            }

            else if(k>=3){
                cout << yes << endl << n/2 << endl;
                cout << 3 << " ";
                for(i=1; i<n/2; i++){
                    cout << 2 << " ";
                }
                cout << endl;
            }

            else{
                cout << no << endl;
            }
            
        }
    }

    return 0;
}