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
        string s1, s2, s3, s4, s5, s6, s7, s8;
        cin >> s1 >> s2  >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
        int flagA = 0, flagB = 0;

        if(s1[0] == 'B' && s2[0] == 'B' && s3[0] == 'B' && s4[0] == 'B' && s5[0] == 'B' && s6[0] == 'B' && s7[0] == 'B' && s8[0] == 'B') flagA++;
        else if(s1[1] == 'B' && s2[1] == 'B' && s3[1] == 'B' && s4[1] == 'B' && s5[1] == 'B' && s6[1] == 'B' && s7[1] == 'B' && s8[1] == 'B') flagA++;
        else if(s1[2] == 'B' && s2[2] == 'B' && s3[2] == 'B' && s4[2] == 'B' && s5[2] == 'B' && s6[2] == 'B' && s7[2] == 'B' && s8[2] == 'B') flagA++;
        else if(s1[3] == 'B' && s2[3] == 'B' && s3[3] == 'B' && s4[3] == 'B' && s5[3] == 'B' && s6[3] == 'B' && s7[3] == 'B' && s8[3] == 'B') flagA++;
        else if(s1[4] == 'B' && s2[4] == 'B' && s3[4] == 'B' && s4[4] == 'B' && s5[4] == 'B' && s6[4] == 'B' && s7[4] == 'B' && s8[4] == 'B') flagA++;
        else if(s1[5] == 'B' && s2[5] == 'B' && s3[5] == 'B' && s4[5] == 'B' && s5[5] == 'B' && s6[5] == 'B' && s7[5] == 'B' && s8[5] == 'B') flagA++;
        else if(s1[6] == 'B' && s2[6] == 'B' && s3[6] == 'B' && s4[6] == 'B' && s5[6] == 'B' && s6[6] == 'B' && s7[6] == 'B' && s8[6] == 'B') flagA++;
        else if(s1[7] == 'B' && s2[7] == 'B' && s3[7] == 'B' && s4[7] == 'B' && s5[7] == 'B' && s6[7] == 'B' && s7[7] == 'B' && s8[7] == 'B') flagA++;
        else if(s1[8] == 'B' && s2[8] == 'B' && s3[8] == 'B' && s4[8] == 'B' && s5[8] == 'B' && s6[8] == 'B' && s7[8] == 'B' && s8[8] == 'B') flagA++;


        if(s1[0] == 'R' && s1[1] == 'R' && s1[2] == 'R' && s1[3] == 'R' && s1[4] == 'R' && s1[5] == 'R' && s1[6] == 'R' && s1[7] == 'R') flagB++;
        else if(s2[0] == 'R' && s2[1] == 'R' && s2[2] == 'R' && s2[3] == 'R' && s2[4] == 'R' && s2[5] == 'R' && s2[6] == 'R' && s2[7] == 'R') flagB++;
        else if(s3[0] == 'R' && s3[1] == 'R' && s3[2] == 'R' && s3[3] == 'R' && s3[4] == 'R' && s3[5] == 'R' && s3[6] == 'R' && s3[7] == 'R') flagB++;
        else if(s4[0] == 'R' && s4[1] == 'R' && s4[2] == 'R' && s4[3] == 'R' && s4[4] == 'R' && s4[5] == 'R' && s4[6] == 'R' && s4[7] == 'R') flagB++;
        else if(s5[0] == 'R' && s5[1] == 'R' && s5[2] == 'R' && s5[3] == 'R' && s5[4] == 'R' && s5[5] == 'R' && s5[6] == 'R' && s5[7] == 'R') flagB++;
        else if(s6[0] == 'R' && s6[1] == 'R' && s6[2] == 'R' && s6[3] == 'R' && s6[4] == 'R' && s6[5] == 'R' && s6[6] == 'R' && s6[7] == 'R') flagB++;
        else if(s7[0] == 'R' && s7[1] == 'R' && s7[2] == 'R' && s7[3] == 'R' && s7[4] == 'R' && s7[5] == 'R' && s7[6] == 'R' && s7[7] == 'R') flagB++;
        else if(s8[0] == 'R' && s8[1] == 'R' && s8[2] == 'R' && s8[3] == 'R' && s8[4] == 'R' && s8[5] == 'R' && s8[6] == 'R' && s8[7] == 'R') flagB++;

        if(flagA > 0) cout << "B" << endl;
        else if(flagB > 0) cout << "R" << endl;

    }

    return 0;
}