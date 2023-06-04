#include<bits/stdc++.h>
using namespace std;
int main()
{
    int binary, rem, decimal = 0, weight = 1;

    cout << "Enter the binary number: ";
    cin >> binary;

    while(binary!=0){
        rem = binary % 10;
        decimal = decimal + rem*weight;
        binary = binary/10;
        weight = weight*2;
    }

    cout << "The decimal value of the number is: " << decimal << endl;

    return 0;
}
