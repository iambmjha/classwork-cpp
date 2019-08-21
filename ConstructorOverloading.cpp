#include<iostream>
using namespace std;

class Add
{
    public:
    int x,y,z;
    Add(int x,int y)
    {
        cout<<"The sum of 2 nos are: "<<x+y<<endl;
    }
    Add(int x,int y,int z)
    {
        cout<<"The sum of 3 nos are: "<<x+y+z<<endl;
    }
};

int main()
{
    Add obj(10,20);
    Add obj2(20,05,05);
    return 0;
}