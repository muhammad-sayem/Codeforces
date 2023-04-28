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
        int n, i, temp;
        cin >> n;
        string s1;
        cin >> s1;
        string s2;

        s2 = s1;          /// Copying s1 to s2 ///

        sort(s2.begin(), s2.end());       /// sorting s2 ///

        cout << s2[0];        /// printing s2 because s2[0] has the smallest character ///
        
        for(i=0; i<s1.size(); i++){       /// finding the index of the smallest character in s1 and holding it's index ///
            if(s1[i] == s2[0]){
                temp = i;
            }
        }

        for(i=0; i<s1.size(); i++){       /// printing s1 after s2[0] (ignoring smallest character) ///
            if(i != temp){
                cout << s1[i];
            }
        }

        cout << endl;
    }

    return 0;
}

