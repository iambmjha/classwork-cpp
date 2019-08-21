//ERROR

#include<iostream>
using namespace std;

class Base
{
    public: void show()
    {
        cout<<"Base Class";
    }
};
class Derived: public Base
{
    public: void show()
    {
        cout<<"Derived class";
    }
};
int main()
{
    Base *obj;
    Derived ob;
    obj = &ob;
    obj.show();
    return 0;
}