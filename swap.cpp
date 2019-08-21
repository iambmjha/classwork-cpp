#include <iostream>
using namespace std;
class Swap
{
    public: int x,y;
    void nswap ( int a, int b)
    {
        x = b;
        y = a;       
    }
    void display()
    {
        cout<<"the swapped nos are: " << x << endl  << y << endl;
    }
};

int main()
{
    Swap obj; 
    obj.nswap(10,30);
    obj.display();
    return 0;
}