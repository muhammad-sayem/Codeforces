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

    int test;
    cin >> test;

    while(test--){
        char a[4][4];
        char res = 'P';
        int i, j, cross = 0, nt = 0, plus = 0;

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                cin >> a[i][j];
            }
        }

        // ------ //

        if(a[0][0] ==  a[0][1]  && a[0][1] == a[0][2] && a[0][0] != '.'){
            res = a[0][0];
        }

        else if(a[1][0] ==  a[1][1]  && a[1][1] == a[1][2] && a[1][0] != '.'){
            res = a[1][0];
        }

        else if(a[2][0] ==  a[2][1]  && a[2][0] == a[2][2] && a[2][0] != '.'){
            res = a[2][0];
        }

        // ------ //
        
        else if(a[0][0] ==  a[1][0]  && a[0][0] == a[2][0] && a[0][0] != '.'){
            res = a[0][0];
        }
        
        else if(a[0][1] ==  a[1][1]  && a[1][1] == a[2][1] && a[0][1] != '.'){
            res = a[0][1];
        }
        
        else if(a[0][2] ==  a[1][2]  && a[1][2] == a[2][2] && a[0][2] != '.'){
            res = a[0][2];
        }
        
        // ------ //

        else if(a[0][0] ==  a[1][1]  && a[1][1] == a[2][2] && a[0][0] != '.'){
            res = a[0][0];
        }
        
        else if(a[0][2] ==  a[1][1]  && a[1][1] == a[2][0] && a[0][2] != '.'){
            res = a[0][2];
        }

        if(res == 'P') cout << "DRAW" << endl;
        else cout << res << endl;
        
    }

    return 0;
}
