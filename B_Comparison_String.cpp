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
    fastIO;             // code idea from Iftekhar vai //

    int test;
    cin >> test;

    while(test--){
        int n, i; 
        cin >> n;
        cin.ignore();
        string str;
        cin >> str;

        int ans = 1, cnt = 1;

        for(i=0; i<n-1; i++){
            if(str[i] == str[i+1]) {
                cnt++;
            }
            else {
                cnt = 1;
            }
            ans = max(ans, cnt);
        }

        cout << ans + 1 << endl;
    }
            
    return 0;
}

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
    fastIO;             // code idea from Iftekhar vai //

    int test;
    cin >> test;

    while(test--){
        int n, i; 
        cin >> n;
        cin.ignore();
        string str;
        cin >> str;

        int ans = 1, cnt = 1;

        for(i=1; i<n; i++){
            if(str[i-1] == str[i]) {
                cnt++;
            }
            else {
                cnt = 1;
            }
            ans = max(ans, cnt);
        }

        cout << ans + 1 << endl;
    }
            
    return 0;
}




*/


