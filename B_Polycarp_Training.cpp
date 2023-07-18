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

    int n, i, cnt = 0;
    cin >> n;
    int a[n+5];


    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    sort(a+1, a+n+1);
    
    ll track = 1;

    for(i=1; i<=n; i++){
        if(a[i] >= track){
            cnt++;
            track++;
        }
    }

    cout << cnt << endl;

    return 0;
}


// ----------------------------------------------------------------------- //

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

    int n, i, cnt = 0;
    cin >> n;
    int a[n+5];
    multiset<int> s;

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    sort(a+1, a+n+1);
    
    ll track = 1;

    for(i=1; i<=n; i++){
        if(a[i] >= track){
            s.insert(a[i]);
            track++;
        }
    }

    cout << s.size() << endl;

    return 0;
}


*/
