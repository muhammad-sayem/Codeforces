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
        int x, y, n, i, sum = 0, cnt = 0;
        cin >> x >> y >> n;
        int a[1005] = {0};
        vector<int> v;

        ll diff = y-x;

        i = 1;
        while(sum <= diff){
            sum += i;
            a[i]++;
            i++;
        }

        int val = sum-diff;
        a[val] = 0;

        for(i=0; i<1005; i++){
            if(a[i] == 1) cnt++;
        }

        if(n > (cnt+1)) cout << -1 << endl;
        
        else{
            int add = 0;
            v.pb(y);
            int curr = y;
            for(i=1; i<n-1; i++){
                v.pb(curr-i);
                curr = curr-i;
                add += i;
            }
            v.pb(x);

            reverse(v.begin(), v.end());

            for(int val: v){
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
