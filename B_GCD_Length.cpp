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
    fastIO;             // Code Idea from Abid_Ul_Islam vai //
    
    int test;
    cin >> test;

    while(test--){
        ll a, b, c, i, temp = 1;
        cin >> a >> b >> c;

        c = temp*pow(10,c-1);
        a = temp*pow(10,a-1);
        b = temp*pow(10,b-1);

        if(a%b == 0) a+=c;
        else if(b%a == 0) b+=c;

        cout << a << " " << b << endl;

    }

    return 0;
}
