#include<iostream>
using namespace std;

class coordinate
{
    public:

        int firstnumber, secondnumber, thirdnumber;

        void setvalue(int x, int y, int z){
            firstnumber = x;
            secondnumber = y;
            thirdnumber = z;
        }

        void show(){
            cout << "x = " << firstnumber << endl << "y = " << secondnumber << endl  << "z = " << thirdnumber << endl << endl;
        }
};

int main()
{
    coordinate obj, obj1;
    obj.setvalue(7, 80, 90);
    obj1 = obj;
    obj.show();
    obj1.show();

    return 0;
}
