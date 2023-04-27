#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             /// Abid vai ///

    int test;
    cin >> test;

    while(test--){
        int n, s, i;
        cin >> n >> s;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];            /// 3 4 1 (sample input) ///
        }

        int cnt[10001] = {0};
        int maxx = 0;       /// shorboccho element ///

        for(i=0; i<n; i++){
            maxx = max(maxx, a[i]);
            cnt[a[i]] = 1;
        }

        for(i=1; i<=maxx; i++){
            if(cnt[i] == 0){
                s -= i;
            }
        }

        while(s>0){
            maxx++;
            s -= maxx;
        }

        if(s == 0) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}


