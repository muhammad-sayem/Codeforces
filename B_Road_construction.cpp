// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             cout << "YES" << endl
// #define      no              cout << "NO" << endl
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
//     fastIO;

//     int n, m, i;
//     cin >> n >> m;

//     if(m == 0){
//         cout << n-1 << endl;
//         for(i=2; i<=n; i++){
//             cout << 1 << " " << i << endl;
//         }
//     }

//     else{
//         vector<int> v;
//         cout << n-1 << endl;

//         while(m--){
//             int a, b;
//             cin >> a >> b;

//             v.pb(a);
//             v.pb(b);
//         }

//         sort(v.begin(), v.end());

//         int val = -1;

//         for(i=1; i<v.size(); i++){
//             if(v[i] - v[i-1] > 1){
//                 val = v[i] - 1;
//                 break;
//             }
//         }

//         if(val == -1){
//             if(v[0] != 1){
//                 for(i=2; i<=n; i++){
//                     cout << 1 << " " << i << endl;
//                 }
//             }
            
//             else{
//                 for(i=1; i<n; i++){
//                     cout << i << " " << n << endl;
//                 }
//             }
//         }

//         else{
//             for(i=1; i<=n; i++){
//                 if(i != val) cout << val << " " << i << endl;
//             }
//         }
//     }

//     return 0;
// }

// -------------------------------------------------------------- //

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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
    fastIO;                 // Rahat_Khan_Pathan vai's logic //

    int n, m, i;
    cin >> n >> m;
    int a[n+5] = {0};

    while(m--){
        int u, v;
        cin >> u >> v;

        a[u] = 1;
        a[v] = 1;
    }

    int val;

    for(i=1; i<=n; i++){
        if(a[i] == 1){
            val = i;
            break;
        }
    }

    cout << n-1 << endl;

    for(i=1; i<=n; i++){
        if(i != val){
            cout << i << " " << val << endl;
        }
    }

    return 0;
}
