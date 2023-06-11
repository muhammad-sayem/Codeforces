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
        int n, i, j, cnt = 0;
        cin >> n;
        int a[n+5];

        vector<int> even;
        vector<int> odd;

        for(i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2 == 0) even.pb(a[i]);
            else odd.pb(a[i]);
        }

        even.insert(even.begin()+even.size(), odd.begin(), odd.end());

        for(i=0; i<even.size()-1; i++){
            for(j=i+1; j<even.size(); j++){
                if( gcd(even[i], 2*even[j]) > 1 ) cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
