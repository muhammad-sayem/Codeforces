#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pii             pair <int,int>
#define      pb              push_back
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
        int i, ele = 1, f_ele = 1;

        sort(str.begin(), str.end());

        for(i=0; i<str.size()-1; i++){
            if(str[i] != str[i+1]) ele++;
        }

        if(ele == 1) cout << -1 << endl;
        else if(ele == 3 || ele == 4) cout << 4 << endl;
        else{
            for(i=1; i<str.size(); i++){
                if(str[i] == str[0]) f_ele++;
            }

            if(f_ele == 1 || f_ele == 3) cout << 6 << endl;
            else cout << 4 << endl;
        }

    }


    return 0;
}




/*
#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pi         pair<int,int>
#define   rv(v)      v.begin(),v.end()
#define   sz(v)      v.size()
#define   mm(a,x)    memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;                /// masud_abdullah ///
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        string s;
        cin>>s;
        sort(s.begin(),s.end());

        for(int i=0;i<sz(s)-1;i++)
        {
            if(s[i]==s[i+1])cnt++;
        }

         if(s[0]==s[1] && s[2]==s[3] && s[2]!=s[1])cnt=0;

        if(cnt==0)cout<<4<<nl;
        else if(cnt==1)cout<<4<<nl;
        else if(cnt==2)cout<<6<<nl;
        else cout<<-1<<nl;
    }
    return 0;
}
*/

