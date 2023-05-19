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
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if((y1 == y2) && (y3 > y1)) cout << 0 << endl;
        else if((y1 == y3) && (y2 > y1)) cout << 0 << endl;
        else if((y2 == y3) && (y1 > y2)) cout << 0 << endl;
        else if(y1 != y2 && y1 != y3 && y2 != y3) cout << 0 << endl;
        else{
            if((y1 == y2) && (y3 < y1)) cout << abs(x1-x2) << endl;
            else if((y1 == y3) && (y2 < y1)) cout << abs(x1-x3) << endl;
            else if((y2 == y3) && (y1 < y2)) cout << abs(x2-x3) << endl;
        }
    }

    return 0;
}

// ------------------------------------------------------------------------- //

/// Code idea from masud_abdullah ///

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
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if((y1 == y2 && y3 > y1) || (y1 == y3 && y2 > y1) || (y2 == y3 && y1 > y3)) {
            cout << 0 << endl;
        }
        
        else{
            if(y1 == y2) cout << abs(x1-x2) << endl;
            else if(y1 == y3) cout << abs(x1-x3) << endl;
            else if(y2 == y3) cout << abs(x2-x3) << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}
*/