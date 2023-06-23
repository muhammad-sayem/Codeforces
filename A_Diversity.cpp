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

    string str;
    cin >> str;
    int k, i;
    cin >> k;

    int size1 = str.size();

    if(k > size1){
        cout << "impossible" << endl;
        return 0;
    }

    set<char> s;

    for(i=0; i<size1; i++){
        s.insert(str[i]);
    }

    int size2 = s.size();

    if(k <= size2) cout << 0 << endl;
    else cout << k-size2 << endl;

    return 0;
}
