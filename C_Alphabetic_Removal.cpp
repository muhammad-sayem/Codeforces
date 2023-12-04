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

    int n, k, i;
    cin >> n >> k;
    int num = k;

    string s;
    cin >> s;

    int fre[26] = {0};

    for(i=0; i<n; i++){
        fre[s[i]-'a']++;
    }

    for(i=0; i<26; i++){
        if(num == 0) break;

        if(num >= fre[i]){
            num = num - fre[i];
            fre[i] = 0;  
        }
        else{
            fre[i] -= num;
            num = 0;
        }
    }

    string str;

    for(i=n-1; i>=0; i--){
        if(fre[s[i]-'a'] != 0){
            str.pb(s[i]);
            fre[s[i]-'a']--;
        }
    }
    
    reverse(str.begin(), str.end());
    cout << str << nl;

    return 0;
}