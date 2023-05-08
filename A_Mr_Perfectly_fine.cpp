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
    fastIO;                 /// Code idea by asif_abdullah ///

    int test;
    cin >> test;

    while(test--){
        int n, cnt1 = 0, cnt2 = 0, cnt3 = 0;
        cin >> n;
        int m, zeroOne = 1e9, oneZero = 1e9, oneOne = 1e9;
        string str;

        while(n--){
            cin >> m >> str;

            if(str == "01"){
                cnt1 = 1;
                zeroOne = min(zeroOne, m);
            }
            else if(str == "10"){
                cnt2 = 1;
                oneZero = min(oneZero, m);
            }
            else if(str == "11"){
                cnt3 = 2;
                oneOne = min(oneOne, m);
            }
        }

        if(cnt1 == 1 && cnt2 == 1) cnt3 = 2;

        if(cnt3 < 2){
            cout << -1 << endl;
        }

        else{
            if(oneOne < oneZero + zeroOne) cout << oneOne << endl;
            else cout << oneZero + zeroOne << endl;
        }

    }

    return 0;
}


