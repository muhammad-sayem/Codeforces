#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        string str;
        cin >> str;
        int i, flag = 0;

        for(i=0; i<str.size(); i++){
            if(str[i] != 'Y' && str[i] != 'e' && str[i] != 's'){
                flag = 1;
                break;
            }
        }

        if(flag == 1) cout << no << endl;

        else{
            for(i=0; i<str.size()-1; i++){
                if(str[i] == 'Y' && str[i+1] != 'e'){
                    flag = 2;
                    break;
                }
                else if(str[i] == 'e' && str[i+1] != 's'){
                    flag = 2;
                    break;
                }
                else if(str[i] == 's' && str[i+1] != 'Y'){
                    flag = 2;
                    break;
                }
            }

            if(flag == 0) cout << yes << endl;
            else cout << no << endl;
        }
    }

    return 0;
}