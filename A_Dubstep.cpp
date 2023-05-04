#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i;

    for(i=0; i<str.size(); i++){
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            if(i != 0)
                cout << " ";
            i+=2;
            continue;
        }
        else cout << str[i];
    }

    cout << endl;

    return 0;
}


/// RWUBWUBWUBL ///
/// R L ///
