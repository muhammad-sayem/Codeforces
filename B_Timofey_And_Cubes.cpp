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
    fastIO;         // asif_abdullah //

    int n, i, j;
    cin >> n;
    int a[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    i = 1;
    j = n;

    while(i <= n-i+1){
        if(i%2 != 0) swap(a[i], a[j]);
        i++;
        j--;
    }

    for(i=1; i<=n; i++){
        cout << a[i] << " ";
    }

    return 0;
}

// --------------------------------------------------------------------------- //

/*
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
    fastIO;         // asif_abdullah //

    int n, i, j;
    cin >> n;
    int a[n+5];

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    i = 1;
    j = n;

    for(i=1, j=n; i<=n/2; i++, j--){
        if(i%2 != 0) swap(a[i], a[j]);
    }

    for(i=1; i<=n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
*/
