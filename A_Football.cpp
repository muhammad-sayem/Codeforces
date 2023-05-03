#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair<long long,long long>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int n, i;
    cin >> n;
    string str[200];
    int cnt1 = 1, cnt2 = 0;

    for(i=0; i<n; i++){
        cin >> str[i];
    }

    string str2 = str[0];
    string str3;

    for(i=1; i<n; i++){
        if(str[i] == str2) cnt1++;
        else {
            str3 = str[i];
            cnt2++;
        }
    }

    if(cnt1 > cnt2) cout << str2 << endl;
    else cout << str3 << endl;
    
    return 0;
}