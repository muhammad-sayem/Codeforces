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
//     fastIO;                 // code idea: Masud_Abdullah //

//     int test;
//     cin >> test;

//     while(test--){
//         int n, i;
//         cin >> n;

//         pll a[n+5];

//         for(i=0; i<n; i++){
//             cin >> a[i].first;
//             cin >> a[i].second;
//         }

//         sort(a, a+n);
//         reverse(a, a+n);

//         // for(i=0; i<n; i++){
//         //     cout << a[i].first << " " << a[i].second << endl;
//         // }

//         ll val = a[0].first, cnt = 0, sum = 0;

//         for(i=0; i<n; i++){
//             if(val != a[i].first){
//                 cnt = 1;
//                 val = a[i].first;
//                 sum += a[i].second;
//             }

//             else if(val == a[i].first){
//                 if(cnt != val){
//                     sum += a[i].second;
//                     cnt++;
//                 }
//             }
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }


// -------------------------------------------------------------------------- //

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

bool cmp(pll a, pll b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}


int main()
{
    fastIO;                 // code idea: asif_abdullah //

    int test;
    cin >> test;
 
    while (test--)
    {
        int n;
        cin >> n;
        pii a[n+1];
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
 
        sort(a,a+n,cmp);
    
        ll sum = a[0].second;
        int cnt=2;
        for (int i = 1; i < n; i++)
        {
            if(a[i].first!=a[i-1].first) cnt=1;
 
            if(cnt<=a[i].first)
            {
                sum += a[i].second;
                cnt++;
            }
        }
 
        cout << sum << endl;
         
    }
     
    return 0;
}