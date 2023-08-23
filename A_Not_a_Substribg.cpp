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
    fastIO;                 //  Credit: Polash Vai's Code //

    int test;
    cin >> test;
    cin.ignore();

    while(test--){
        string str;
        cin >> str;

        int i;

        if(str == "()") cout << no << endl;
        
        else{
            cout << yes << endl;

            string s1 = "";
            string s2 = "";

            int flag = 0;

            for(i=0; i<str.size(); i++){
                s1 += "(";
            }
            for(i=0; i<str.size(); i++){
                s1 += ")";
            }
            for(i=0; i<str.size(); i++){
                s2 += "()";
            }

            for(i=0; i<str.size()-1; i++){
                if(str[i] == str[i+1]){
                    flag = 1;
                    break;
                }
            }

            if(flag) cout << s2 << endl;
            else cout << s1 << endl;
        }
    }

    return 0;
}

// ------------------------------------------------------------------------- //

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
    fastIO;                 //  Credit: Polash Vai's Code //

    int test;
    cin >> test;
    cin.ignore();

    while(test--){
        string str;
        cin >> str;

        int i;

        if(str == "()") cout << no << endl;
        
        else{
            cout << yes << endl;

            string s1;
            string s2;

            int flag = 0;

            for(i=0; i<str.size(); i++){
                s1.pb('(');
            }
            for(i=0; i<str.size(); i++){
                s1.pb(')');
            }
            for(i=0; i<str.size(); i++){
                s2.pb('(');
                s2.pb(')');
            }

            for(i=0; i<str.size()-1; i++){
                if(str[i] == str[i+1]){
                    flag = 1;
                    break;
                }
            }

            if(flag) cout << s2 << endl;
            else cout << s1 << endl;
        }
    }

    return 0;
}
*/

