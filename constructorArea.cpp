//Wap find area of square & cuboid using the classname Area by 
//using the concept of constructor only

#include<iostream>

using namespace std;

class area
{
    public:
    int x,Area,L,B,H;
    area(int x)
    {
        cout<<"area of square: "<<x*x<<endl;
    }
    area(int L,int B,int H)
    {
        cout<<"area of cuboid: "<< L*B *H<<endl;
    }
};

int main()
{
    area obj(5);
    area obj2(3,2,3);
    return 0;
}
