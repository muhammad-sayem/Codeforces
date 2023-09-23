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
    fastIO;             // Code Idea: Polash_Islam vai //

    int test;
    cin >> test;

    while(test--){
        ll n, i, j;
        cin >> n;

        bool flag = false;

        ll temp;
        ll val1;
        ll val2;
        ll val3;

        for(i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                temp = n/i;

                for(j=i+1; j<sqrt(temp); j++){
                    if(temp%j == 0){
                        val1 = i;
                        val2 = j;
                        val3 = temp/j;
                        flag = true;
                        break;
                    }
                }
            }
        }

        if(flag){
            cout << yes << endl;
            cout << val1 << " " << val2 << " " << val3 << endl;
        } 
        else cout << no << endl;
    }

    return 0;
}
