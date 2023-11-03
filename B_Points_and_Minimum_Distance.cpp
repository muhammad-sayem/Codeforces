#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
        int n, i, j;
        cin >> n;
        int num = n*2;
        int a[num+5];

        vector<pair<int, int>> v;

        for(i=0; i<num; i++){
            cin >> a[i];
        }
        sort(a, a+num);

        // for(i=0; i<num; i++){
        //     cout << a[i] << " ";
        // }

        for(i=0, j=num-1; i<(num/2); i++, j--){
            v.pb({a[i], a[j]});
        }

        // for(auto pair: v){
        //     cout << pair.first << " " << pair.second << endl;
        // }

        ll sum = 0;

        for(i=0; i<v.size()-1; i++){
            int val1 = abs(v[i].first - v[i+1].first);
            int val2 = abs(v[i].second - v[i+1].second);

            int res = val1 + val2;
            sum += res;
        }

        cout << sum << endl;

        for(auto pair: v){
            cout << pair.first << " " << pair.second << endl;
        }
    }

    return 0;
}