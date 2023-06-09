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
    fastIO;                 // Credit: Redoan vai's code //              

    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;

        string str;
        cin >> str;

        int a[n+5];
        int b[n+5];

        set<char> l, r;

        for(i=0; i<n; i++){
            l.insert(str[i]);             // 'l' set er moddhe first theke las porjonto unique elements add kora hocche //
            a[i] = l.size();
        }

        for(i=n-1; i>=0; i--){
            r.insert(str[i]);             // 'r' set er moddhe first theke las porjonto unique elements add kora hocche //
            b[i] = r.size();
        }

        int maxx = -1e9;
        int val;

        for(i=0; i<n-1; i++){
            val = a[i] + b[i+1];
            maxx = max(maxx, val);
        }

        cout << maxx << endl;
    }

    return 0;
}