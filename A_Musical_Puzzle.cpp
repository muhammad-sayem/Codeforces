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
    fastIO;                     /// code idea from ABID_UL_ISLAM vai ///

    int test;
    cin >> test;

    while(test--){
        int n, i, j;
        cin >> n;
        string str;
        cin >> str;

        vector<string>v;

        for(i=0; i<n-1; i++){
            string temp;

            temp.pb(str[i]);
            temp.pb(str[i+1]);

            int sz = (int)v.size();

            int flag = 0;

            for(j=0; j<sz; j++){
                if(v[j] == temp){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) v.pb(temp);
        }
        cout << v.size() << endl;
    }


    return 0;
}


