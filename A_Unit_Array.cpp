#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      ull             unsigned long long
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
        int n, i, j, k, sum = 0, mult = 1, cnt = 0, flag = 0;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        for(i=0; i<n; i++){
            sum += a[i];
            mult *= a[i];
        }

        if(sum >= 0 && mult == 1) cout << 0 << endl;

        else{
            int ind;
            for(i=0; i<n; i++){
                if(a[i] == 1) {
                    ind = i-1;
                    flag = 1;
                }
            }

            if(flag == 1){
                for(i=0; i<=ind; i++){
                    for(k=0; k<=i; k++){
                        a[k] = abs(a[k]);
                    }
            
                    int sum2 = 0, mult2 = 1;
                
                    cnt++;
                    for(j=0; j<n; j++){
                        sum2 += a[j];
                        mult2 *= a[j];
                    }
                    if(sum2 >= 0 && mult2 == 1) break;
                }
                cout << cnt << endl;
            }

            else{
                for(i=0; i<n; i++){
                    for(k=0; k<=i; k++){
                        a[k] = abs(a[k]);
                    }
            
                    int sum2 = 0, mult2 = 1;
                
                    cnt++;
                    for(j=0; j<n; j++){
                        sum2 += a[j];
                        mult2 *= a[j];
                    }
                    if(sum2 >= 0 && mult2 == 1) break;
                }
                cout << cnt << endl;
            }

        }

    }

    return 0;
}

