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
    fastIO;             // From asif_abdullah's  code //

    int test;
    cin >> test;

    while(test--){
        int n, i, one_i, two_i, max_i; 
        cin >> n;
        int a[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
            if(a[i] == 1) one_i = i;
            if(a[i] == 2) two_i = i;
        }

        max_i = max_element(a+1, a+n+1)-a;

        if(two_i<one_i && max_i>one_i) cout << one_i << " " << max_i << endl;
        else if(two_i<one_i && max_i<two_i) cout << max_i << " " << two_i << endl;
        else if(one_i<two_i && max_i<one_i) cout << max_i << " " << one_i << endl;
        else if(one_i<two_i && max_i>two_i) cout << max_i << " " << two_i << endl;
        else cout << one_i << " " << one_i << endl;
        
    }

    return 0;
}