#include<bits/stdc++.h>
#define      endl            '\n'
#define      ll              long long
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      sz(s)           s.size()
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int T;
    cin >> T;

    while(T--){
        string str; cin >> str;

        int arr[11];
        int i;

        for(i=1; i<=9; i++) arr[i] = i;
        arr[0] = 10;

        ll ans = 0;

        for(i=1; i<str.size(); i++){
            int v1 = str[i-1]-48; int v2 = str[i]-48;

            if(v1 != 0 && v2 != 0) ans += abs(arr[v1]-arr[v2]);
            else {
                if(v1 == 0){ans += abs(arr[0]-arr[v2]);
                }
                else if(v2 == 0) {
                    ans += abs(arr[v1]-arr[0]);
                }
            }
        }

        if(str[0] != '0'){
            ans += str[0]-48-1;
        }
        else {
            ans = ans+9;
        }
        cout << ans + 4 << endl;
    }

    return 0;
}