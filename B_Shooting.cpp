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

    int n, i;
    cin >> n;
    int a[n+5];
    pair<int, int> p[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];

        p[i].first = a[i];
        p[i].second = i; 
    }

    sort(p+1, p+n+1);
    reverse(p+1, p+n+1);

    // for(i=1; i<=n; i++){
    //     cout << p[i].first << " " << p[i].second << endl;
    // }

    ll sum = 1;

    for(i=2; i<=n; i++){
        sum += (p[i].first)*(i-1)+1;
    }
    cout << sum << endl;

    for(i=1; i<=n; i++){
        cout << p[i].second << " ";
    }

    return 0;
}