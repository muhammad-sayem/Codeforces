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

    string s;
    cin >> s;

    vector<string> v;

    for(i=0; i<s.size()-1; i++){
        string str;
        str += s[i];
        str += s[i+1];

        v.pb(str);

        str.clear();
    }

    map<string, int> mp;

    for(auto word: v){
        mp[word]++;
    }

    int maxx = -1;
    string ans;

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second > maxx){
            maxx = it->second;
            ans = it->first;
        }
    }

    cout << ans << endl;

    return 0;
}

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

    int n, i, j;
    cin >> n;

    string str;
    cin >> str;

    if(n == 2) {
        cout << str << endl;
        return 0;
    }

    vector<string> v;

    for(i=0; i<n-1; i++){
        string s;

        s.pb(str[i]);
        s.pb(str[i+1]);

        v.pb(s);
        
        s.clear();
    }

    // sort(v.begin(), v.end());

    int maxx = -1, cnt;
    string store;

    for(i=0; i<v.size()-1; i++){
        cnt = 1;

        for(j=i+1; j<v.size(); j++){
            if(v[i] == v[j]){
                cnt++;
            }
        }
        
        if(cnt>=maxx){
            maxx = max(cnt, maxx);
            store = v[i];
        }
        
    }

    cout << store << endl;

    return 0;
}
*/