#include<iostream>
using namespace std;

inline void add(int a, int b)
{
    cout<<"The sum is:  "<<a+b<<endl;
}
inline void subtract(int x, int y)
{
    cout<<"The subtract value is:  "<<x-y<<endl;
}
inline void multiply(int p, int q)
{
    cout<<"Multiplication is:  "<<p*q<<endl;
}
inline void division(int f, int h)
{
    cout<<"Division value is:  "<<f/h<<endl;
}
int main()
{
    add(20,10);
    subtract(20,10);
    multiply(20,10);
    division(20,10);
    return 0;
}