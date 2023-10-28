#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
        ll n, i;
        cin >> n;
        ll a[n+5];
        set<ll> s;
        ll fre[100000] = {0};

        for(i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
            fre[a[i]]++;
        }

        ll maxx = *max_element(a, a+n);

        if(s.size() > 2) no;

        else if(s.size() == 1) yes;
        
        else{

            ll val1, val2;

            if(s.size() == 2){

                for(i=0; i<=maxx; i++){
                    if(fre[i] > 0){
                        val1 = i;
                        break;
                    }
                }

                for(i=0; i<=maxx; i++){
                    if(fre[i] > 0 && i != val1){
                        val2 = i;
                        break;
                    }
                }

                if(abs(fre[val1] - fre[val2]) <= 1) yes;
                else no;
            }
            else no;
        }
    }


    return 0;
}