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

    ll n, i, sum = 0;
    cin >> n;

    ll a[n+5];
    ll b[n+5];

    for(i=0; i<n; i++){
        cin >> a[i];
        cin >> b[i];
    }

    ll minn = b[0];

    sum = a[0]*b[0];

    for(i=1; i<n; i++){
        if(minn <= b[i]){
            sum += minn*a[i];
        }
        else if(minn > b[i]){
            minn = b[i];
            sum += minn*a[i];
        }
    }

    cout << sum << endl;

    return 0;
}

// ------------------------------------------------------------------------ //

/*

#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;                        // Masud_Abdullah //
        ll n,mn=200;
        cin>>n;
        pair<ll,ll>a[n];

        //a.first = total needed meat(kg), a.second = price of per kg

        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        
        ll sum=0;

        for(int i=0;i<n;i++)
        {
            mn=min(mn,a[i].second);
            sum+=(a[i].first*mn);
        }
        cout<<sum<<nl;

    return 0;
}

*/
