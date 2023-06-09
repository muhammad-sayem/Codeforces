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
        char ch[10][10];
        int i, j, xPos, yPos;

        for(i=1; i<=8; i++){
            for(j=1; j<=8; j++){
                cin >> ch[i][j];
            }
        }
        

        for(i=1; i<=8; i++){
            for(j=1; j<=8; j++){
                if( (ch[i][j] == '#') && (ch[i-1][j+1] == '#') && (ch[i-1][j-1] == '#') && (ch[i+1][j-1] == '#') && (ch[i+1][j+1] == '#') ){
                    xPos = i;
                    yPos = j;
                }
            }
        }

        cout << xPos << " " << yPos << endl;

    }


    return 0;
}