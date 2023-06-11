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
    cin.ignore();
    
    while(test--){
        string str;
        cin >> str;
        int i, ab = 0, ba = 0;

        for(i=0; i<str.size()-1; i++){
            if(str[i] == 'a' && str[i+1] == 'b') ab++;
            if(str[i] == 'b' && str[i+1] == 'a') ba++;
        }

        if(ab == ba) cout << str << endl;

        else{
            if(str[i] == 'a') str[i] = 'b';
            else if(str[i] == 'b') str[i] = 'a';
    
            cout << str << endl;
        }
    }

    return 0;
}


// ---------------------------------------------------------------------- //

// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             "YES"
// #define      no              "NO"
// #define      ll              long long
// #define      pb              push_back
// #define      pii             pair <int,int>
// #define      pll             pair <long long,long long>
// #define      rev(a)          reverse(a, a+n);
// #define      Srev(s)         reverse(s.begin(), s.end());
// #define      sz(s)           s.size()
// #define      gcd(a,b)        __gcd(a,b)
// #define      lcm(a,b)        (a*b)/gcd(a,b)
// #define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     fastIO;             // tasirmoon (Tasir Vai) //

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
 
//         ll n = sz(s);
 
//         if (s[0] != s[n - 1]){
//             s[0]=s[n-1];
//         }
//         cout << s << endl;
//     }

//     return 0;
// }


// -------------------------------------------------------------------------- //

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
    cin.ignore();
    
    while(test--){
        string str;
        cin >> str;
        int i, ab = 0, ba = 0;

        for(i=0; i<str.size()-1; i++){
            if(str[i] == 'a' && str[i+1] == 'b') ab++;
            if(str[i] == 'b' && str[i+1] == 'a') ba++;
        }
        
        if(ab == ba) cout << str << endl;

        else{

            if(ab > ba){
                for(i=str.size()-1; i>=1; i--){
                    if(str[i] == 'b') {
                        str[i] = 'a';
                        break;
                    }
                }
            }

            else{
                for(i=str.size()-1; i>=1; i++){
                    if(str[i] == 'a'){
                        str[i] = 'b';
                        break;
                    }
                }
            }

            cout << str << endl;
        }
    }

    return 0;
}

*/
