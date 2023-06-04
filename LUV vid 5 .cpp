#include<bits/stdc++.h>
#define  endl  '\n'
using namespace std;

void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout << ((num>>i) & 1);
    }
    cout << endl;
}

int main()
{
    /// Checking even odd by bits ///

    /*
    for(int i=1; i<8; i++){
        printBinary(i);
        if(i&1 != 0) cout << "ODD" << endl;
        else cout << "EVEN" << endl;
    }
    */

    /// Divided by 2 and multiply by 2 using bit manipulation ///

    /*
    int n = 5;

    cout << (n<<1) << endl;     /// Left shift (multiplies n by 2)
    cout << (n>>1) << endl;     /// Right shift (divides n by 2)
    */

    /// Uppercase and lowercase conversion using bit manipulation ///

    // printing binaries of characters //
    /*
    for(char c = 'A'; c <= 'E'; c++){
        cout << c << endl;
        printBinary(int(c));
    }

    cout << endl << endl;

    for(char c = 'a'; c <= 'e'; c++){
        cout << c << endl;
        printBinary(int(c));
    }
    */

    /*
    char capital1 = 'A';
    char small1 = capital1 | ' ';

    cout << small1 << endl;

    char small2 = 'b';
    char capital2 = (small2 & '_');

    cout << capital2 << endl;

    */


    /// checking a number that power of 2 or not ///

    int n = 15;

    if(n&(n-1)) cout << "NOT POWER OF 2" << endl;
    else cout << "POWER OF 2" << endl;

    return 0;
}
