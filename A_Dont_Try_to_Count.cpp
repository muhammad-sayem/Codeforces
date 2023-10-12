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

bool isPalindrome(string s1){
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    if(s1 == s2) return true;
    else return false;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        int n, m, i, cnt = 0;
        cin >> n >> m;
        cin.ignore();

        string s1;
        string s2;

        cin >> s1;
        cin >> s2;

        string str = s1;
        sort(str.begin(), str.end());

        bool flag = false;

        if(s1.find(s2) != -1) cout << 0 << endl;

        else{
            while(s1.size() <= n*m){
                cnt++;
                s1 += s1;
                if(s1.find(s2) != -1) {
                    flag = true;
                    break;
                }
            }
            if(flag) cout << cnt << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}