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
        int n, i;
        cin >> n;
        int a[n+5];

        if(n == 1) cout << 1 << endl;
        else if(n == 2) cout << 2 << " " << 1 << endl;

        else{
            int mid = (n/2)+1;

            a[1] = 3;
            a[mid] = 1;
            a[n] = 2;

            for(i=2; i<mid; i++){
                a[i] = i+2;
            }

            for(i=mid+1; i<n; i++){
                a[i] = i+1;
            }

            for(i=1; i<=n; i++){
                cout << a[i] << " ";
            }

            cout << endl;
        }
    }

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
//     fastIO;

//     int test;
//     cin >> test;

//     while(test--){
//         int n, i;
//         cin >> n;
//         int a[n+5];

//         if(n == 1) cout << 1 << endl;
//         else if(n == 2) cout << 2 << " " << 1 << endl;

//         else{
//             int mid = (n/2)+1;

//             a[1] = 3;
//             a[n] = 2;

//             for(i=2; i<n; i++){
//                 if(i < mid) a[i] = i+2;
//                 else if(i > mid) a[i] = i+1;
//                 if(i == mid) a[i] = 1;
//             }

//             for(i=1; i<=n; i++){
//                 cout << a[i] << " ";
//             }

//             cout << endl;
//         }
//     }

//     return 0;
// }

