#include<iostream>
using namespace std;
class swap2;
class swap1
{
    int a;
    public:
    swap1()
    {
        a = 10;
    }
friend void swap (swap1 , swap2);
};
class swap2
{
    int b;
    public:
    swap2()
    {
        b = 20;
    }
friend void swap (swap1 , swap2);
};
void swap(swap1 obj1 , swap2 obj2)
{
    obj1.a = obj1.a + obj2.b;
    obj2.b = obj1.a - obj2.b;
    obj1.a = obj1.a - obj2.b;
    cout<<"The swapped nos are:  "<<obj1.a<<"\t"<<obj2.b<<endl;
}
int main()
{
    swap1 obj1;
    swap2 obj2;
    swap(obj1,obj2);
    return 0;
}