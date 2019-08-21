#include<iostream>
using namespace std;
class A
{
    public: int x;
    A(int i)
    {
        x = i;
    }
    int operator+ (A a)
    {
        int y;
        y = x + a.x;
        cout<<"The sum is: "<<y;
        return 0;
    }
};

int main()
{
    A a1(5);
    A a2(6);
    a1+a2;
}