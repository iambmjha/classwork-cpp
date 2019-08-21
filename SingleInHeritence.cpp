#include<iostream>

using namespace std;

class Account
{
    public:
    float salary = 1000;
};
class emp: public Account
{
    public: float bonus = 500;
};

int main()
{
    emp obj;
    cout<<"salary is: "<<obj.salary<<endl;
    cout<<"bonus is: "<<obj.bonus<<endl;
    return 0;
}