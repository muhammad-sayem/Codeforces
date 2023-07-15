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


bool answer(int n, int m){

    if(n == m) {
        return true;
    }

    if(n<m || n%3 != 0) {
        return false;
    }

    bool left = answer((n/3), m);
    bool right = answer((n/3)*2, m);

    if(left == true || right == true) {
        return true;
    }
    else return false;

}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        int n, m;
        cin >> n >> m;

        bool flag = answer(n, m);

        if(flag) cout << yes << endl;
        else cout << no << endl;
        
    }

    return 0;
}
