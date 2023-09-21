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
    fastIO;             // code idea: asif_abdullah //

    int test;
    cin >> test;

    while(test--){
        char s[15][15];
        int i, j, k;

        for(i=1; i<=10; i++){
            for(j=1; j<=10; j++){
                cin >> s[i][j];
            }
        }

        int ans = 0;

        for(i=1; i<=10; i++){
            for(j=1; j<=10; j++){

                if(s[i][j] == 'X'){
                    ans += min({i, j, 11-i, 11-j});
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// -------------------------------------------------------------------- //

/*
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
    fastIO;             // code idea: asif_abdullah //

    int test;
    cin >> test;

    while(test--){
        char s[15][15];
        int i, j, k;

        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                cin >> s[i][j];
            }
        }

        int ans = 0;

        for(i=0; i<10; i++){
            for(j=0; j<10; j++){

                if(s[i][j] == 'X'){
                    ans += min({i+1, j+1, 10-i, 10-j});
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
*/