#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair<long long,long long>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


void solution(){
    int x;
        cin >> x;
        int a[4], i, cnt = 0;

        for(i=1; i<=3; i++){
            cin >> a[i];
        }

        if(a[x] != 0) {
            cnt++;
            if(a[a[x]] != 0) cnt++;
        }

        if(cnt == 2) cout << yes << endl;
        else cout << no << endl;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        solution();
    }

    return 0;
}