#include<iostream>
using namespace std;
class maxmin
{
    public:
    void check(float a, float b)
    {
        if(a>b)
        {
            cout<<a<<" is greater";
        }
        else
        {
            cout<<b<<" is greter";
        }
    }
    void check(int a, int b, int c)
    {
        if(a>b && a>c)
        {
            cout<<a<<" is greter"<<endl;
        }
        else if(b>c)
        {
            cout<<b<<" is greater"<<endl;
        }
        else
        {
            cout<<c<<" is greater"<<endl;
        }
    }
};

int main()
{
    maxmin obj;
    obj.check(12,19,13);
    obj.check(19.3,19.32);
    return 0;
}