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
    fastIO;                 // Code idea from: Code_Wode (Youtube Channel) //

    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;
        int a[n+5];
        int freq[105] = {0};

        bool flag = true;

        for(i=0; i<n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }

        for(i=0; i<101; i++){
            if(freq[i+1] > freq[i]){
                flag = false;
                break;
            }
        }

        if(flag) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}
