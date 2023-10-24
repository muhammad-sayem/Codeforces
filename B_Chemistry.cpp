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
        int n, k, i;
        cin >> n >> k;

        string s;
        cin >> s;

        int fre[26] = {0};

        for(i=0; i<s.size(); i++){
            fre[s[i]-'a']++;
        }

        int cnt = 0;

        for(i=0; i<26; i++){
            if(fre[i]%2 != 0){
                cnt++;
            }
        }

        if(cnt <= k+1) yes;
        else no;
    }

    return 0;
}