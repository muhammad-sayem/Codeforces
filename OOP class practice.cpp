#include<bits/stdc++.h>
using namespace std;

class employee
{
    private:
        char name;
        int id;
        double spend;

    public:
        void setInput(char ch, int a, double s){
            name = ch;
            id = a;
            spend = s;
        }

        void getInput(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter spending: ";
            cin >> spend;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Spending: " << spend << endl;
        }

};

int main()
{
    employee e1, e2;

    e1.setInput('S', 187, 3000.50);
    e2.getInput();
    e1.display();
    e2.display();

    return 0;
}
