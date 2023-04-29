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

    string str;
    cin >> str;
    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        if(s[0] == str[0] && s[1] == str[1]) {
            cnt1 = 1;
            cnt2 = 1;
        }

        else{
            if(s[0] == str[1]) cnt1++;
            if(s[1] == str[0]) cnt2++;
        }

    }

    if(cnt1 >= 1 && cnt2 >= 1) cout << yes << endl;
    else cout << no << endl;

    return 0;
}

