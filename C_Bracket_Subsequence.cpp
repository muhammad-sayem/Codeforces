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

    int n, k, i;
    cin >> n >> k;

    string str;
    cin >> str;

    stack<char> st;

    if(n == k){
        cout << str << endl;
        return 0;
    }

    ll val = 0;

    for(i=0; i<str.size(); i++){
        if(str[i] == '('){
            st.push(str[i]);
        }
        else{
            if(!st.empty()){
                val += 2;
                if(val >= k){
                    cout << st.top() << str[i];
                    st.pop();
                }
                //else break;
            }
        }
    }

    return 0;


// -------------------------------------------------------------------------- //

// Goru Chor (Intra Preli) //
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, b, i, j, minn = 1e9;
    cin >> n >> k >> b;
    int a[100005] = {0};
    
    for(i=1; i<=b; i++){
        int x;
        cin >> x;
        a[x]++;
    }

    for(i=1; i<=n-k+1; i++){
        int cnt = 0;
        for(j=i; j<=i+k-1; j++){
            if(a[j] == 1){
                cnt++;
            }
        }
        minn = min(minn, cnt);
    }

    cout << minn << endl;

    return 0;
}
*/