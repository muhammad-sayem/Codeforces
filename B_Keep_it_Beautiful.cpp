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
    fastIO;                 // Logic and code Idea from AlgoBot //

    int test;
    cin >> test;

    while(test--){
        int n, i;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        vector<int> v; 
        string str;
        bool broken = false;

        for(i=0; i<n; i++){

            if(v.empty()){
                str.pb('1');
                v.pb(a[i]);
            }

            else{

                if(!broken){            // (!broken) maane holo ekhono sorted ase, vange nai //
                    if(a[i] >= v.back()){
                        str.pb('1');
                        v.pb(a[i]);
                    }
                    else{
                        if(a[i] > v[0]){
                            str.pb('0');
                        }
                        else if(a[i] < v[0]){
                            broken = true;
                            str.pb('1');
                            v.pb(a[i]);
                        }
                    }
                }

                else if(broken){
                    if(a[i] < v.back()){
                        str.pb('0');
                    }
                    else{
                        if(a[i] > v[0]){
                            str.pb('0');
                        }
                        else{
                            str.pb('1');
                            v.pb(a[i]);
                        }
                    }
                }

            }
        }
        cout << str << endl;
        
    }

    return 0;
}
