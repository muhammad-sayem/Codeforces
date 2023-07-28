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

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        int n, k, i;
        cin >> n >> k;
        int a[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
            a[i] = a[i]%k;
        }

        vector<int> ans;
        vector<pair<int, int>> v;

        for(i=1; i<=n; i++){
            if(a[i] == 0){
                ans.pb(i);
            }
            else{
                v.pb({a[i], i});
            }
        }

        sort(v.begin(), v.end(), cmp);

        for(i=0; i<v.size(); i++){
            ans.pb(v[i].second);
        }

        for(i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
