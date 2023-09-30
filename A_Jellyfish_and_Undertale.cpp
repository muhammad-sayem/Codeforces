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
    fastIO;             // Code Idea: Soad21 //

    int test;
    cin >> test;

    while(test--){
        ll a, b, n, i;
        cin >> a >> b >> n;
        ll arr[n+5];

        for(i=0; i<n; i++){
            cin >> arr[i];
        }

        ll sum = 0;

        for(i=0; i<n; i++){
            sum += min(a-1, arr[i]);
        }
        cout << sum + b << endl;
    }

    return 0;
}