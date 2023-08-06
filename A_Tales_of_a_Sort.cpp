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
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        bool flag = false;

        for(i=0; i<n-1; i++){
            if(a[i] > a[i+1]){
                flag = true;
                break;
            }
        }

        if(!flag) cout << 0 << endl;

        else{

            ll maxx = *max_element(a, a+n);

            if(a[n-1] != maxx){
                cout << maxx << endl;
            }

            else{
                ll x;
                for(i=n-1; i>=0; i--){
                    if(a[i] < a[i-1]){
                        x = i-1;
                        break;
                    }
                }

                ll mx = a[0];

                for(i=0; i<=x; i++){
                    if(a[i] >= mx){
                        mx = a[i];
                    }
                }
                cout << mx << endl;
            }
        }
    }

    return 0;
}

// -------------------------------------------------------------------------- //

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
    FIO;                // asif_abdullah //
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int f=0;

        int mx = INT_MIN;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])        {
                mx = max(a[i], mx);
                f=1;
            }
        }

        if(f==0) cout << 0 << endl;
        else cout << mx << endl;
    }

    return 0;
}
*/