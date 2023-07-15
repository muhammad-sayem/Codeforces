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

    int test;
    cin >> test;

    while(test--){
        string str;
        cin >> str;
        int i, j;
        bool flag = false;

        if(str.size() == 1) cout << 1 << endl << str << endl;
        
        else{
            for(i=1; i<str.size(); i++){
                if(str[i] != '0'){
                    flag = true;
                    break;
                }
            }

            if(!flag) cout << 1 << endl << str << endl;
           
            else{
                int cnt = 0;

                for(i=0; i<str.size(); i++){
                    if(str[i] != '0') cnt++;
                }

                cout << cnt << endl;

                for(i=0; i<str.size(); i++){
                    if(str[i] != '0'){
                        cout << str[i];

                        for(j=1; j<str.size()-i; j++){
                            cout << '0';
                        }
                        cout << " ";
                    }
                }
                cout << endl;
            }

        }

    }
        
    return 0;
}
