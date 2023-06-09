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
        int h, m;
        cin >> h >> m;

        int totalTime = 24*60;
        int timeGone = (h*60)+m;

        int ans = totalTime - timeGone;

        cout << ans << endl;
    }

    return 0;
}

// --------------------------------------------------------------------- //

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        int h, m, hours = 0, mins = 0;
        cin >> h >> m;

        if(h != 0 && m == 0){
            cout << (24-h)*60 << endl;

        }
        else if(h==0 && m !=0){
            cout << (23*60)+(60-m) << endl;
        }
        else{
            if(h < 23) {
                hours = (23-h)*60;
                mins = 60-m;
                cout << hours + mins << endl;
            }

            else if(h == 23){
                cout << 60-m << endl;
            }

        }

    }
    return 0;
}



