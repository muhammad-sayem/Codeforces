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

    int n, i, j, k;
    cin >> n;

    string s;
    cin >> s;

    string t;
    cin >> t;

    string temp1 = s;
    string temp2 = t;

    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());

    vector<int> ans;

    if(temp1 != temp2) cout << -1 << nl; 
    else{
        int cnt = 0, val;

        for(i=0; i<n; i++){
            if(s[i] != t[i]){

                for(j=i; j<n; j++){
                    if(s[j] == t[i]){
                        val = j;
                        break;
                    }
                }
                for(k=val; k>=i+1; k--){
                    swap(s[k], s[k-1]);
                    ans.pb(k);
                }
            }
        }

        cout << ans.size() << nl;
        for(auto val: ans){
            cout << val << " ";
        }
        cout << nl;
    }

    return 0;
}