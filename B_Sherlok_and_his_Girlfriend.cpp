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

long long a[10000010];

int main()
{
    fastIO;

    ll n;
    cin >> n;

    long long i, j;
    memset(a,0,sizeof(a));
 
    for(i=2; i<10000010; i++){
        if(a[i] == 0){
            for(j=i+i; j<10000010; j+=i){
                a[j] = 1;
            }
        }
    }

    if(n==1) {
        cout << 1 << endl << 1 << endl;
        return 0;
    }
    if(n==2){
        cout << 1 << endl << 1 << " " << 1 << endl;
        return 0;
    }

    cout << 2 << endl;

    for(i=1; i<=n; i++){
        if(a[i+1] == 0) cout << 1 << " ";
        else if(a[i+1] == 1) cout << 2 << " ";
    }
    
    return 0;
}
