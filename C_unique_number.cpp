#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair<long long,long long>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;         /// code idea from Rifat vai's code ///

    int test;
    cin >> test;

    while(test--){
        int x, i;
        cin >> x;

        if(x>45) {
            cout << -1 << endl;
        }
        else{
            
            string str;
            for(i=9; i>=1; i--){

                if(x-i >= 0){
                    x-=i;
                    str+=i+48;
                }

                if(x == 0){
                    break;
                }
                
            }
            reverse(str.begin(), str.end());
            ///sort(str.begin(), str.end());        /// sort korleo hobe ///
            cout << str << endl;

        }

    }

    return 0;
}


