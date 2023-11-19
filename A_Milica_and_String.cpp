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
        int n, k, i, b = 0;
        cin >> n >> k;
        
        string s;
        cin >> s;

        for(i=0; i<n; i++){
            if(s[i] == 'B') b++;
        }

        if(b == k) cout << 0 << endl;

        else{
            if(b > k){
                int track = 0, pos;
                for(i=0; i<n; i++){
                    if(s[i] == 'B'){
                        track++;
                        if((b-track) == k){
                            pos = i+1;
                            break;
                        }
                    }
                }
                cout << 1 << nl;
                cout << pos << " " << 'A' << endl;
            }

            else{
                int track = 0, pos;
                for(i=0; i<n; i++){
                    if(s[i] == 'A'){
                        track++;
                        if((b+track) == k){
                            pos = i+1;
                            break;
                        }
                    }
                }
                cout << 1 << nl;
                cout << pos << " " << 'B' << endl;
            }
        }
    }

    return 0;
}