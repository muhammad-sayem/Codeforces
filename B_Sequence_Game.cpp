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
    fastIO;             // Credit: jahid_hridoy vai's code //

    int test;
    cin >> test;

    while(test--){
        int n, i, pos;
        cin >> n;
        int a[n];
        vector<int> v;

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        v.pb(a[0]);

        for(i=1; i<n; i++){
            if(a[i] >= a[i-1]){
                v.pb(a[i]);
            }
            else{
                v.pb(a[i]);
                v.pb(a[i]);
            }
        }

        cout << v.size() << endl;

        for(int val: v){
            cout << val << " ";
        }
        cout << endl;   
    }           

    return 0;
}