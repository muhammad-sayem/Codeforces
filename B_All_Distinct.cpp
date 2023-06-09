#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);   
#define      sort(a)         sort(a, a+n);   
#define      Srev(s)         reverse(s.begin(), s.end());      
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;                  // GUSSURI (Iftekhar vai) //
 
    int test;
    cin >> test;

    while(test--){
        int n, i, flag = 0;
        cin >> n;

        set<int> s;

        for(i=0; i<n; i++){
            int num;
            cin >> num;

            s.insert(num);
        }

        int ans = n-s.size();

        if(ans%2 == 0) cout << s.size() << endl;
        else cout << s.size()-1 << endl;
    }

    return 0;
}


