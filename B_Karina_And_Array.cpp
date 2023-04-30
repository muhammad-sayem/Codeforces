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

    int test;
    cin >> test;

    while(test--){
        ll n, i, neg = 0, max1, max2, min1, min2, val1, val2, res;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
            if(a[i] < 0) neg++;
        }

        sort(a, a+n);

        if(n == 2) cout << a[0]*a[1] << endl;

        else if(neg == 0 || neg == 1){
            cout << a[n-1]*a[n-2] << endl;
        }

        else{
            max1 = a[n-1];
            max2 = a[n-2];

            min1 = a[0];
            min2 = a[1];

            val1 = max1 * max2;
            val2 = min1 * min2;

            res = max(val1, val2);

            cout << res << endl;

        }
    }

    return 0;
}





/*
#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pi         pair<int,int>
#define   rv(v)      v.begin(),v.end()
#define   sz(v)      v.size()
#define   mm(a,x)    memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;                /// Masud_Abdullah ///
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        ll x=a[0]*a[1];
        ll y=a[n-1]*a[n-2];

        cout<<max(x,y)<<nl;
    }
    return 0;
}
*/
