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

    int test;cin >> test;

    while(test--){
        int n, i; cin >> n;
        string str; cin >> str;

        stack<char> st1;
        stack<char> st2;

        for(i=0; i<n; i++){
            if(str[i] == '(') {
                st1.push(str[i]);
            }

            else if(str[i] == ')'){
                if(st1.empty()){
                    st2.push(str[i]);
                }
                else if(st1.top() == '('){
                    st1.pop();
                }
            }
        }

        cout << st1.size() << endl;     // cout << st2.size() << endl; also valid //

    }

    return 0;
}

// --------------------------------------------------------------------------- //

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
    fastIO;                     // Rahat_Khan_Pathan vai's logic //

    int test; cin >> test;

    while(test--){
        int n; cin >> n;
        string str; cin >> str;

        int i, cnt = 0, res = 0;

        for(i=0; i<n; i++){
            if(str[i] == '('){
                cnt++;
            } 
            else if(str[i] == ')'){
                if(cnt > 0){
                    cnt--;
                }
                else{
                    res++;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}
*/
