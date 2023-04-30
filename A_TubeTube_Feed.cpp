#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int q;
    cin >> q;

    while(q--){
        int n, t, i, maxB = INT_MIN, res = -1;
        cin >> n >> t;
        int a[n+5];
        int b[n+5];

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        for(i=1; i<=n; i++){
            cin >> b[i];
        }

        for(i=1; i<=n; i++){
            if(a[i]+i-1 <= t && b[i] > maxB){
                maxB = b[i];
                res = i;
            }
        }

        cout << res << endl;
    }

    return 0;
}




/*
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;            // asif_abdullah //

    int test;
    cin >> test;

    while (test--)
    {
        int q, t;
        cin >> q >> t;

        pii a[q + 1];

        for (int i = 0; i < q; i++)
        {
            cin >> a[i].first;
        }

        for (int i = 0; i < q; i++)
        {
            cin >> a[i].second;
        }

        int f = 0;

        ll mx = -1, mx_i = -1;
        for (int i = 0; i < q; i++)
        {
            if (a[i].first + i <= t && a[i].second > mx)
            {
                mx = a[i].second;
                mx_i = i + 1;
            }
        }

        cout << mx_i << endl;
    }

    return 0;
}
*/
