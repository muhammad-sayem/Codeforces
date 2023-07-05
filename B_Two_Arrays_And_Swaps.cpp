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
        ll n, k, i;
        cin >> n >> k;

        ll a[n+5];
        ll b[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            cin >> b[i];
        }

        sort(a, a+n);
        sort(b, b+n, greater<ll>());

        if(b[0] <= a[0]){
            ll sum1 = 0;

            for(i=0; i<n; i++){
                sum1 += a[i];
            }

            cout << sum1 << endl;
        }

        else{
            ll sum2 = 0;
            ll pos = -1;

            for(i=0; i<k; i++){
                if(b[i] >= a[i]){
                    sum2 += b[i];
                }
                else if(b[i] < a[i]){
                    pos = i;
                    break;
                }
            }
            pos = i;

            for(i=pos; i<n; i++){
                sum2 += a[i];
            }

            cout << sum2 << endl;
        }

    }

    return 0;
}

// --------------------------------------------------------------------------- //

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
        ll n, k, i;
        cin >> n >> k;

        ll a[n+5];
        ll b[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            cin >> b[i];
        }

        sort(a, a+n);
        sort(b, b+n, greater<ll>());

        if(k == 0){
            ll sum1 = 0;

            for(i=0; i<n; i++){
                
                sum1 += a[i];
            }

            cout << sum1 << endl;
        }

        else if(b[0] <= a[0]){
            ll sum1 = 0;

            for(i=0; i<n; i++){
                sum1 += a[i];
            }

            cout << sum1 << endl;
        }

        else{
            ll sum2 = 0;
            ll pos = -1;

            for(i=0; i<k; i++){
                if(b[i] >= a[i]){
                    sum2 += b[i];
                }
                else if(b[i] < a[i]){
                    pos = i;
                    break;
                }
            }
            pos = i;

            for(i=pos; i<n; i++){
                sum2 += a[i];
            }

            cout << sum2 << endl;
        }

    }

    return 0;
}

*/