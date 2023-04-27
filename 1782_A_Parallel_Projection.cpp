#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             /// AlgoBot youtube channel ///

    int test;
    cin >> test;

    while(test--){
        int w, d, h;
        cin >> w >> d >> h;

        int a, b, f, g;
        cin >> a >> b >> f >> g;

        int ans = h;

        ans += min( {g+b+abs(a-f), d-g+d-b+abs(a-f), w-f+w-a+abs(g-b), f+a+abs(g-b)} );

        cout << ans << endl;

    }

    return 0;
}


