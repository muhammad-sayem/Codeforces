#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);   
#define      sort(a)         sort(a, a+n);   
#define      Srev(s)         reverse(s.begin(), s.end());      
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;                 /// code idea from Abid_Ul_Islam vai and Masud_Abdullah //

    int test;
    cin >> test;

    while(test--){
        int n, k, i, j;
        cin >> n >> k;

        pii a[n];
        pii b[n];

        for(i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }

        for(i=0; i<n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }

        sort(a);
        sort(b);

        int ans[n+5];

        for(i=0; i<n; i++){
            ans[a[i].second] = b[i].first;
        }

        for(i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }
      
    return 0;
}


