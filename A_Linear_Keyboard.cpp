#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    pi        pair<int,int>
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             /// Explained by Masud_Abdullah ///

    int test;
    cin >> test;

    while(test--){
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        int i, j, ans = 0;

        for(i=0; i<s2.size()-1; i++){
            int cnt1 = 0, cnt2 = 0;

            for(j=0; j<s1.size(); j++){
                if(s2[i] == s1[j]){
                    cnt1 = j+1;
                }
            }

            for(j=0; j<s1.size(); j++){
                if(s2[i+1] == s1[j]){
                    cnt2 = j+1;
                }
            }
            ans += abs(cnt1-cnt2);
        }

        cout << ans << endl;
    }

    return 0;
}


