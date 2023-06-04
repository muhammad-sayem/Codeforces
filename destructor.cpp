#include<bits/stdc++.h>
using namespace std;

class test
{
    public:
        test(int x, int y){
            int mult = x*y;

            cout << "Multiplication = " << mult << endl;
        }

        void display(){
            cout << "This is display function" << endl;
        }

        ~test(){
            cout << "This is Destructor" << endl;
        }

};

int main()
{
    test obj(10, 20);
    obj.display();

    return 0;
}
