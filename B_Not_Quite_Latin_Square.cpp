#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        int a = 0, b = 0, c = 0, i;

        for(i=0; i<s1.size(); i++){
            if(s1[i] == 'A') a++;
            if(s1[i] == 'B') b++;
            if(s1[i] == 'C') c++;
        }

        for(i=0; i<s2.size(); i++){
            if(s2[i] == 'A') a++;
            if(s2[i] == 'B') b++;
            if(s2[i] == 'C') c++;
        }

        for(i=0; i<s3.size(); i++){
            if(s3[i] == 'A') a++;
            if(s3[i] == 'B') b++;
            if(s3[i] == 'C') c++;
        }

        if(a<3) cout << 'A' << nl;
        else if(b<3) cout << 'B' << nl;
        else cout << 'C' << nl;
    }

    return 0;
}