// Binary Search Approach //

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
        int n, i;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        int l = 0;
        int r = INT_MAX;
        bool flag = false;

        while(l<=r){
            int mid = l + (r-l)/2;
            double ans = 1.0;

            for(i=0; i<n; i++){
                ans = ((double)a[i] / mid) * ans;
            }

            if(fabs(ans - 1.0) < 1e-15){
                flag = true;
                break;
            }
            else if(ans > 1.0){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        if(flag) yes;
        else no;
    }

    return 0;
}


// ------------------------------------------------------------------ //

// Prime Factorization Approach //

/*
#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
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
        int n, i, j;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        map<int, int> mp;

        for(i=0; i<n; i++){
            int curr = a[i];

            for(j=2; j*j<=curr; j++){
                while(curr%j == 0){
                    mp[j]++;
                    curr /= j;
                }
            }
            if(curr > 1){
                mp[curr]++;
            }

            // for(auto pair: mp){
            //     cout << pair.first << "^" << pair.second << nl;
            // }
            // cout <<nl;
        }

        bool flag = true;

        for(auto pair: mp){
            if(pair.second%n != 0){
                flag = false;
                break;
            }
        }
        if(flag) yes;
        else no;
    }

    return 0;
}
*/