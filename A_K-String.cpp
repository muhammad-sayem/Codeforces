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

    int k, i, j;
    cin >> k;

    string str;
    cin >> str;

    int size = str.size();

    if(k == 1) {
        cout << str << endl;
        return 0;
    }

    if(k > size) {
        cout << -1 << endl;
        return 0;
    }
    
    int a[26] = {0};

    for(i=0; i<size; i++){
        int val = str[i]-97;
        a[val]++;
    }

    bool flag = true;

    for(i=0; i<26; i++){
        if(a[i] != 0){
            if(a[i]%k != 0){
                flag = false;
                break;
            }
        }
    }

    if(!flag) cout << -1 << endl;

    
    else{
        string str;

        for(i=0; i<26; i++){
            int v = a[i]/k;
            while(v--){
                str += i+'a';
            }
        }

        while(k--){
            cout << str;
        }
    }

    return 0;
}
