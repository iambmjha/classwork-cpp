//error

#include<iostream>
using namespace std;
class A
{
    public: int n;
    {
        A()
        n = 10;
    }
    public: void operator++();
    void print();
};
void  A :: operator++()
{
    n = n + 3;
}
void A :: print()
{
    cout<<"The Value is: "<<n;
}
int main()
{
    A obj;
    ++obj;
    obj.print();
    return 0;
}