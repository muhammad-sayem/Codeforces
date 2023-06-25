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

    string s1;
    string s2;

    cin >> s1 >> s2;

    int n;
    cin >> n;

    cout << s1 << " " << s2 << endl;

    while(n--){
        string str1;
        string str2;

        cin >> str1 >> str2;

        if(str1 == s1) s1 = str2;
        else if(str1 == s2) s2 = str2;

        cout << s1 << " " << s2 << endl;
    }

    return 0;
}

