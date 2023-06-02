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
        string s1, s2, s3, s4, s5, s6, s7, s8;
        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
        int flag = 0;

        if(s1 == "RRRRRRRR") flag = 1;
        else if(s2 == "RRRRRRRR") flag = 1;
        else if(s3 == "RRRRRRRR") flag = 1;
        else if(s4 == "RRRRRRRR") flag = 1;
        else if(s5 == "RRRRRRRR") flag = 1;
        else if(s6 == "RRRRRRRR") flag = 1;
        else if(s7 == "RRRRRRRR") flag = 1;
        else if(s8 == "RRRRRRRR") flag = 1;

        if(flag == 1) cout << 'R' << endl;
        else cout << 'B' << endl;
    }

    return 0;
}

// -------------------------------------------------------------------------------------------------------- //

/*
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
    fastIO;         /// some new idea fro masud_abdullah ///

    int test;
    cin >> test;
    while(test--){
        string s1, s2, s3, s4, s5, s6, s7, s8;
        cin >> s1 >> s2  >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
        int flag = 0;

        if(s1[0] == 'R' && s1[1] == 'R' && s1[2] == 'R' && s1[3] == 'R' && s1[4] == 'R' && s1[5] == 'R' && s1[6] == 'R' && s1[7] == 'R') flag++;
        else if(s2[0] == 'R' && s2[1] == 'R' && s2[2] == 'R' && s2[3] == 'R' && s2[4] == 'R' && s2[5] == 'R' && s2[6] == 'R' && s2[7] == 'R') flag++;
        else if(s3[0] == 'R' && s3[1] == 'R' && s3[2] == 'R' && s3[3] == 'R' && s3[4] == 'R' && s3[5] == 'R' && s3[6] == 'R' && s3[7] == 'R') flag++;
        else if(s4[0] == 'R' && s4[1] == 'R' && s4[2] == 'R' && s4[3] == 'R' && s4[4] == 'R' && s4[5] == 'R' && s4[6] == 'R' && s4[7] == 'R') flag++;
        else if(s5[0] == 'R' && s5[1] == 'R' && s5[2] == 'R' && s5[3] == 'R' && s5[4] == 'R' && s5[5] == 'R' && s5[6] == 'R' && s5[7] == 'R') flag++;
        else if(s6[0] == 'R' && s6[1] == 'R' && s6[2] == 'R' && s6[3] == 'R' && s6[4] == 'R' && s6[5] == 'R' && s6[6] == 'R' && s6[7] == 'R') flag++;
        else if(s7[0] == 'R' && s7[1] == 'R' && s7[2] == 'R' && s7[3] == 'R' && s7[4] == 'R' && s7[5] == 'R' && s7[6] == 'R' && s7[7] == 'R') flag++;
        else if(s8[0] == 'R' && s8[1] == 'R' && s8[2] == 'R' && s8[3] == 'R' && s8[4] == 'R' && s8[5] == 'R' && s8[6] == 'R' && s8[7] == 'R') flag++;

        if(flag == 1) cout << "R" << endl;
        else cout << "B" << endl;

    }

    return 0;
}
*/

// ------------------------------------------------------------------------------------------------------------ //

/*

#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()      //taken help from Coding Community | Newton School && asif_abdullah's code ///
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        char s[10][10];

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> s[i][j];
            }
        }

        int cnt_r;

        for (int i = 1; i <= 8; i++)
        {
            cnt_r=0;
            for (int j = 1; j <= 8; j++)
            {
                if(s[i][j]=='R') cnt_r++;       
            }

            if(cnt_r==8) break;
        }

        if(cnt_r==8) cout << "R\n";
        else cout << "B\n";
        
    }

    return 0;
}

*/