#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;                 /// Idea from Rifat vai's code ///

    int test;
    cin >> test;

    while(test--){
        int n, i, sq, flag = 0;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            sq = sqrt(a[i]);
            if(sq*sq != a[i]){
                flag = 1;
                break;
            }
        }

        if(flag == 1) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
typedef        long long int   ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define     pb              push_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     ss              ' '
#define     pii             pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-7;

int main()
{
    ios::sync_with_stdio(0);            /// Rifat vai ///
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll f=0;
        while(n--)
        {
            ll a;
            cin>>a;
            ll sq=sqrt(a);
            if(sq*sq!=a) f=1;

        }
        if(f) cout<<"YES"<<nn;
        else cout<<"NO"<<nn;
    }
}
*/

