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
    fastIO;                 // credit: Masud_Abdullah //
    
    int test;
    cin >> test;

    while(test--){
        int n, a, q, i;
        cin >> n >> a >> q;
        string str;
        cin >> str;

        int pCnt = 0;           // positive('+') count //

        for(i=0; i<str.size(); i++){
            if(str[i] == '+') pCnt++;
        }

        int ans = a;
        bool flag = false;

        for(i=0; i<str.size(); i++){
            if(str[i] == '+') ans++;
            else ans--;

            if(ans == n){
                flag = true;
            }
        }

        if(n==a || flag) cout << yes << endl;
        else if(a+pCnt >= n) cout << "MAYBE" << endl;
        else cout << no << endl; 
    }

    return 0;
}
