#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    
    while(test--){
        int a, b, c;
        cin >> a >> b >> c;

        if(a == b){
            if(c%2 == 0) cout << "Second" << endl;
            else cout << "First" << endl;
        }
        
        else{
            if(a > b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }
    
    return 0;
}


// -------------------------------------------------------------------- //

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    
    while(test--){
        int a, b, c;
        cin >> a >> b >> c;

        if(a == b){
            if(c%2 == 0) cout << "Second" << endl;
            else if(c%2 != 0) cout << "First" << endl;
        }
        else{
            if(c%2 == 0){
                if(a > b) cout << "First" << endl;
                else cout << "Second" << endl;
            }
            else{
                if(a > b) cout << "First" << endl;
                else cout << "Second" << endl;
             }
        }
    }
    
    return 0;
}
*/