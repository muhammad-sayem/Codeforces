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
        ll n, i;
        cin >> n;

        if(n%2 != 0) cout << 1 << endl;
        else{
            vector<ll> v;
            for(i=1; i<=1000; i++){
                if(n%i == 0){
                    v.pb(i);
                }
            }

            sort(v.begin(), v.end());

            ll maxx = -1;
            ll cnt = 1;

            for(i=0; i<v.size()-1; i++){
                if(v[i] == v[i+1]-1){
                    cnt++;
                    maxx = max(cnt, maxx);
                }
                else{
                    cnt = 0;
                }
            }

            cout << maxx << endl;
        }
    }    

    return 0;
}

// -------------------------------------------------------------------------- //

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define Print(_Q) for(int i=0;i<_Q.size();i++){if(i+1==_Q.size())cout<<_Q[i]<<"\n";else cout<<_Q[i]<<" ";}
#define Sort(_Q) sort(_Q.begin(),_Q.end())
#define INF  9223372036854775806
#define MINF -9223372036854775806
#define sz(x) (ll)x.size()
#define gcd __gcd
#define yes "YES"
#define no  "NO"
#define pb  push_back
#define in  " "
#define mone "-1"
#define zero "0"
#define one "1"
#define nl "\n"
pair<ll,ll>CORDINATE[8]= {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
const ll mod=1e9+7;
const double pi=2*acos(0.0);
ll lcm(ll a,ll b)
{
    return (a/(__gcd(a, b)))*b;
}
const ll mxn=2e5+10;
vector<ll>g1[mxn+10],g2[mxn+10];

int main()
{
    fast
    ll t;
    cin>>t;                 // legend shehenulislam vai //
    while(t--)
    {
        ll n;
        cin>>n;
        ll i=1;
        ll ans=0;
        while(n%i==0)
        {
            ans++;
            i++;
        }
        cout<<ans<<nl;
    }
    return 0;
}

*/

 // ----------------------------------------------------------------------- //

/*
#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    FIO;                        // asif_abdullah //
    int t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;
        int cnt=0;
        for (int i = 1; i <=100; i++){
            if(n%i==0) cnt++;
            else{
                cout <<cnt << endl;
                break;
            }
        }
    }
     
    return 0;
}

 */


