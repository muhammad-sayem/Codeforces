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
    
    int n, i;
    cin >> n;
    cin.ignore();

    vector<pair<int, string>> v;

    while(n--){
        string s;
        cin >> s;
        v.pb({s.size(), s});
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // cout << endl;

    // for(i=0; i<v.size(); i++){
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    
    bool flag = true;

    for(i=0; i<v.size()-1; i++){
        int val = v[i].second.find(v[i+1].second);
        if(val == -1){
            flag = false;
            break;
        }
    }

    if(flag){
        yes;
        reverse(v.begin(), v.end());
        for(i=0; i<v.size(); i++){
            cout << v[i].second << endl;
        }
    }

    else{
        no;
    }


    return 0;
}