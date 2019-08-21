#include<iostream>
using namespace std;
class A
{
    private: int l;
    public: A()
    {
        l = 0;
    }
    friend int print_length(A);
};
int print_length(A obj)
{
    obj.l = obj.l + 10;
    return obj.l;
}
int main()
{
    A obj;
    cout<<"The length is "<<print_length(obj)<<endl;
    return 0;
}