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

int call(int n){
    return (n*(n-1))/2;
}

int main()
{
    fastIO;             // Explained by masud_abdullah //

    int n, i, j, cnt, ans = 0;
    cin >> n;

    char ch[n+5][n+5];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> ch[i][j];
        }
    }

    for(i=0; i<n; i++){
        cnt = 0;
        for(j=0; j<n; j++){
            if(ch[i][j] == 'C') cnt++;
        }

        ans += call(cnt);
    }

    for(i=0; i<n; i++){
        cnt = 0;
        for(j=0; j<n; j++){
            if(ch[j][i] == 'C') cnt++;
        }

        ans += call(cnt);
    }

    cout << ans << endl;

    return 0;
}