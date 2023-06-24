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
    fastIO;             // Code idea: SolverToBe //

    ll n, k, i, l, r, minn = 1e18, index;
    cin >> n >> k;
    ll a[n+5];
    ll pre[n+5];

    a[0] = 0;
    pre[0] = 0;

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    for(i=1; i<=n; i++){
        pre[i] = a[i]+pre[i-1];
    }


    for(i=k; i<=n; i++){
        if(pre[i]-pre[i-k] < minn){
            minn = pre[i] - pre[i-k];
            index = i;
        }
    }

    cout << index-k+1 << endl;

    return 0;
}

// --------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             "YES"
// #define      no              "NO"
// #define      ll              long long
// #define      pb              push_back
// #define      pii             pair <int,int>
// #define      pll             pair <long long,long long>
// #define      rev(a)          reverse(a, a+n);
// #define      Srev(s)         reverse(s.begin(), s.end());
// #define      sz(s)           s.size()
// #define      gcd(a,b)        __gcd(a,b)
// #define      lcm(a,b)        (a*b)/gcd(a,b)
// #define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     fastIO;             // Code idea: SolverToBe //

//     ll n, k, i, l, r, minn = 1e18, index;
//     cin >> n >> k;
//     ll a[n+5];

//     a[0] = 0;

//     for(i=1; i<=n; i++){
//         cin >> a[i];
//     }

//     for(i=1; i<=n; i++){
//         a[i] = a[i] + a[i-1];
//     }


//     for(i=k; i<=n; i++){
//         if(a[i]-a[i-k] < minn){
//             minn = a[i] - a[i-k];
//             index = i;
//         }
//     }

//     cout << index-k+1 << endl;

//     return 0;
// }

