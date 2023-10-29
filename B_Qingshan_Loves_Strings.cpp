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

bool isGood(string str){
    for(int i=0; i<str.size()-1; i++){
        if(str[i] == str[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, m, i;
        cin >> n >> m;

        string s;
        cin >> s;

        string t;
        cin >> t;

        if(isGood(s)) yes;

        else if(!isGood(t)) no;

        else{
            bool f = true;

            for(i=0; i<s.size(); i++){
                if(s[i] == s[i+1]){
                    if(s[i] == t[0] || s[i+1] == t[m-1]){
                        f = false;
                        break;
                    }
                }
            }
            if(f) yes;
            else no;
        }
    }

    return 0;
}