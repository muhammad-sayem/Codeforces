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
        ll a[3], i, sum = 0;

        for(i=0; i<3; i++){
            cin >> a[i];
        }

        sort(a, a+3, greater<int>());

        if(a[0] == a[1] && a[0] == a[2] && a[1] == a[2]) cout << 0 << endl;
        
        else if(a[0] == a[1]){
            if(a[1] - a[2] <= 2) cout << 0 << endl;
            else{
                a[0] -= 1;
                a[1] -= 1;
                a[2] += 1;
                sum = ( (a[0]-a[1]) + (a[0] - a[2]) + (a[1] - a[2]));
                cout << sum << endl;
            }
        }

        else if(a[1] == a[2]){
            if(a[0] - a[1] <= 2) cout << 0 << endl;
            else{
                a[0] -= 1;
                a[1] += 1;
                a[2] += 1;
                sum = ( (a[0]-a[1]) + (a[0] - a[2]) + (a[1] - a[2]));
                cout << sum << endl;
            }
        }
        
        else{
            if((a[0]-a[1] <= 2) || a[1] - a[2] <= 2){
                a[0] -= 1;
                a[1] -= 1;
                a[2] += 1;

                sum = ( (a[0]-a[1]) + (a[0] - a[2]) + (a[1] - a[2]));
            }

            else{
                a[0] -= 1;
                a[1] += 1;
                a[2] += 1;
                sum = ( (a[0]-a[1]) + (a[0] - a[2]) + (a[1] - a[2]));
            }

            cout << sum << endl;
            
        }

    }

    return 0;
}
*/

// ---------------------------------------------------------------------- // 

/*
#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;


int main()
{
   ll t,a,b,c;
   cin>>t;
   while(t--)
   {
       cin>>a>>b>>c;
       ll s=abs(a-b) + abs(a-c) + abs(c-b);
       if(s>4) cout<<s-4<<nn;
       else cout<<0<<nn;
   }

    return 0;
}
*/
