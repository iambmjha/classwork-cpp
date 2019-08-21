#include<iostream>

using namespace std;

class A
{
    public: int a;
    void num(int a)
    {
        cout<<"The new value is: "<<a;
    }
};

int main()
{
    A obj;
    obj.num(10);
    return 0;
}