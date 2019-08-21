#include<iostream>

using namespace std;
int main()
{
    int a , i , num = 0;
    
    cout<<"input limit"<<endl;
    cin >> a;

    for(i=0;i<=a;i++)
    num = num + i;

    cout<<"sum of " << a << " natural nos :" << num << endl;
    return 0;
}