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
    fastIO;             // Credit: mdtuhinhasnat vai //

    int test;
    cin >> test;

    while(test--){
        int n, m, i, j, cnt = 0;
        cin >> n >> m;
        cin.ignore();

        string str[n];

        for(i=0; i<n; i++){
            cin >> str[i];
        }

        string target = "vika";
        int k = 0;

        for(i=0; i<m; i++){
            if(k == 4) break;

            for(j=0; j<n; j++){
                if(str[j][i] == target[k]){
                    k++;
                    break;
                }
            }
        }

        if(k == 4) cout << yes << endl;
        else cout << no << endl;

    }

    return 0;
}