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
        string s1;
        string s2;

        cin >> s1;
        cin >> s2;

        int i;

        bool flag = false;

        for(i=0; i<s1.size(); i++){
            if((s1[i] == '0' && s2[i] == '0') && (s1[i+1] == '1' && s2[i+1] == '1')){
                flag = true;
                break;
            }
        }

        flag ? cout << yes << endl : cout << no << endl;
    }

    return 0;
}
