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
    fastIO; 

    int test;
    cin >> test;

    while(test--){
        int n, i, flag = 0;
        cin >> n;

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a);

        for(i=0; i<n-1; i++){
            if(a[i] == a[i+1]){
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << n << endl;
        else{
            n -= 2;
            
        }






    }

            
    return 0;
}


