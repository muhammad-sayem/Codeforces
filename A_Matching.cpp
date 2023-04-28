#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    pii       pair <int,int>
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin>> test;

    while(test--){
        string str;
        cin >> str;
        int i, cnt = 0;

        if(str.size() == 1 && str[0] >= '1' && str[0] <= '9') cout << 1 << endl;
        else if(str[0] == '0') cout << 0 << endl;
        else{

            for(i=0; i<str.size(); i++){
                if(str[i] == '?') cnt++;
            }

            if(str[0] != '?') cout << pow(10,cnt) << endl;
            else cout << pow(10, cnt-1)*9 << endl; 
        }
    }

    return 0;
}


/*
#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    pii       pair <int,int>
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             /// youtube ///

    int test;
    cin >> test;

    while(test--){
        string str;
        cin >> str;
        ll res = 1, i;

        if(str[0] == '0') cout << 0 << endl;
        else{
            if(str[0] == '?') res *= 9;
            for(i=1; i<str.size(); i++){
                if(str[i] == '?') res *= 10;
            }

            cout << res << endl;
        }
    }

    return 0;
}
*/

