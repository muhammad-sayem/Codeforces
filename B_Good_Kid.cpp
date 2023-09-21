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
    fastIO;             // Code Idea: Masud_Abdullah //

    int test;
    cin >> test;

    while(test--){
        ll n, i;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        a[0]++;

        ll mult = 1;

        for(i=0; i<n; i++){
            mult *= a[i];
        }

        cout << mult << endl;
    }

    return 0;
}

// ------------------------------------------------------------------- //

/*
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
        ll n, i, j;
        cin >> n;
        ll a[n+5];
        set<ll> s;

        for(i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        if(s.size() == 1){
            ll mult = 1;
            for(i=1; i<n; i++){
                mult *= a[0];
            }
            mult *= a[0]+1;
            cout << mult << endl;
        }

        else if(s.size() == 2){
            ll mult = 1;
            sort(a, a+n, greater<int>());
            ll minn = *min_element(a, a+n);
            ll pos;

            for(i=0; i<n; i++){
                if(a[i] != minn) {
                    mult *= a[i];
                }
                else {
                    pos = i;
                    break;
                }
            }

            mult *= a[pos]+1;

            for(i=pos+1; i<n; i++){
                mult *= a[i];
            }
            cout << mult << endl;
        }

        else{
            ll mult = 1;
            sort(a, a+n);

            for(i=1; i<n; i++){
                mult *= a[i];
            }
            mult *= a[0]+1;
            cout << mult << endl;
        }
    }

    return 0;
}
*/