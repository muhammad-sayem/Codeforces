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

long long sv[10000010];

void sieve(){
    long long i, j;
    memset(sv,0,sizeof(sv));
 
    for(i=2; i<10000010; i++){
        if(sv[i] == 0){
            for(j=i+i; j<10000010; j+=i){
            sv[j] = 1;
            }
        }
    }
}

int main()
{   
    fastIO;   

    int test;
    cin >> test;
    cin.ignore();

    sieve();

    while(test--){
        string str;
        cin >> str;
        ll i;

        ll val = str[0]-48;

        for(i=1; i<str.size(); i++){
            ll val2 = str[i]-48;
            ll ans = (val*10)+val2;
            
            if(sv[ans] == 0){
                cout << ans << endl;
                break;
            }
        }
    }            

    return 0;
}

// ---------------------------------------------------------------------- //

/*
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
        ll i, c1 = 0, c3 = 0;

        for(i=0; i<str.size(); i++){
            if(str[i] == '1'){
                c1++;
                break;
            }
            if(str[i] == '3'){
                c3++;
                break;
            }
        }

        if(c1 > c3) cout << "13" << endl;
        else cout << "31" << endl;
    }            

    return 0;
}
*/
