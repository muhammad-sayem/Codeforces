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
    fastIO;                 // Logic From: Peter Griffin Codes (Youtube Channel)

    int test;
    cin >> test;

    while(test--){
        int n, i, j;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }
        
        if(n ==  1) cout << 0 << endl;

        else{
            vector<int> v;

            i = 0;
            j = n-1;

            while(i<j){
                v.pb(abs(a[i]-a[j]));
                i++;
                j--;
            }

            int gc = 0;

            for(i=1; i<v.size(); i++){
                gc = gcd(v[i], gc);
            }

            cout << gc << endl;
        }

    }

    return 0;
}


// ----------------------------------------------------------------------------- //

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
//     fastIO;                 // Logic From: Peter Griffin Codes (Youtube Channel) and jahid_hridoy vai's logic //

//     int test;
//     cin >> test;

//     while(test--){
//         int n, i, j;
//         cin >> n;
//         int a[n+5];

//         for(i=0; i<n; i++){
//             cin >> a[i];
//         }
        
//         if(n ==  1) cout << 0 << endl;

//         else{
//             i = 0;
//             j = n-1;
//             int gc = 0;

//             while(i<j){
//                 gc = gcd(gc, abs(a[i]-a[j]));
//                 i++;
//                 j--;
//             }
//             cout << gc << endl;
//         }

//     }

//     return 0;
// }

// -------------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     cout << __gcd(a,b) << endl;

//     return 0;
// }
