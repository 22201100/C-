#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number";
    cin>>num;

    if(num>100)
    {
        cout<<"invalid number";
    }
    else if(num>90)
    {
        cout<<"Golden";
    }
    else if(num>80)
    {
        cout<<"A+";
    }
    else if(num>70)
    {
        cout<<"A";
    }
    else if(num>60)
    {
        cout<<"A-";
    }
    else if(num>50)
    {
        cout<<"B+";
    }
    else if(num>40)
    {
        cout<<"C+";
    }
    else
    {
        cout<<"Fail";
    }

}
