#include<iostream>
using namespace std;
class shape
{
    public:
    void area(int r)
    {
        cout<<"Area of circle:  "<<3.14*r*r<<endl;
    }
    void area(int l, int b)
    {
        cout<<"Area of rectangle:  "<<l*b<<endl;
    }
    void area(float p, int b, int h)
    {
        cout<<"Area of triangle:  "<<0.5*b*h<<endl;
    }
};
int main()
{
    shape obj;
    obj.area(20);
    obj.area(0.5,20,10);
    obj.area(10,20);
    return 0;
}