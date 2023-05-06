#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin>> test;

    while(test--){
        string s1 = "codeforces";
        string s2;
        cin >> s2;
        int i, cnt = 0;

        for(i=0; i<s2.size(); i++){
            if(s2[i] != s1[i]) cnt++;
        }

        cout << cnt << endl;

    }

    return 0;
}