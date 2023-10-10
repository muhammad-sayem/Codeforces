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
    fastIO;             // Logic & Code Idea: Abid vai //

    int n, i;
    cin >> n;
    int a[n+5];

    multiset<int> ms;

    for(i=0; i<n; i++){
        cin >> a[i];
        ms.insert(a[i]);
    }

    int x, y;

    x = *ms.rbegin();

    for(i=1; i<=sqrt(x); i++){
        if(x%i == 0){
            ms.erase(ms.find(i));
            if(i != x/i){
                ms.erase(ms.find(x/i));
            }
        }
    }

    y = *ms.rbegin();

    cout << x << " " << y << endl;

    // for(int val: ms){
    //     cout << val << " ";
    // }

    return 0;
}