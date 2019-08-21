#include<iostream>
using namespace std;
inline void circle(int r)
{
    cout<<"Area of circle: "<<3.14*r*r<<endl;
}
inline void triangle(int b, int h)
{
    cout<<"Area of triangle: "<<0.5*b*h<<endl;
}
int main()
{
    circle(5);
    triangle(10,20);
    return 0;
}