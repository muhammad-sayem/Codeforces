#include<bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main()
{
    int num, a, i;
    cin >> num;

    /// printing the binary value of the integer 'num' ///

    for(i=10; i>=0; i--){
        cout << ((num >> i) & 1);
    }
    cout << endl;

    /// checking the i-th bit set or not ///

    i = 2;      /// koto tomo bit check korbe shei position declare kora hoise ///

    if((num & (1<<i)) != 0) cout << "SET BIT" << endl;
    else cout << "NOT SET BIT" << endl;



    return 0;
}
