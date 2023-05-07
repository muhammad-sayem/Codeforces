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
    fastIO;                 // Explained by AlgoBot youtube channel ///

    int test;
    cin >> test;

    while(test--){
        int n, k, i, cnt = 1;
        cin >> n >> k;

        string str[n+5];

        for(i=0; i<n; i++){
            cin >> str[i];
        }

        string s = str[0];
        
        for(i=1; i<n; i++){
            if(str[i] == str[0]) cnt++;
        }

        cout << cnt << endl;

    }                 

    

    return 0;
}