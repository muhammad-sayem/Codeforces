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

    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;

        bool up = true;
        bool down = true;
        bool right = true;
        bool left = true;

        while(n--){
            int x, y;
            cin >> x >> y;

            if(x>0) right = false;
            if(x<0) left = false;
            if(y<0) down = false;
            if(y>0) up = false;
        }

        if(!right && !left && !up && !down) no;
        else yes;
    }

    return 0;
}