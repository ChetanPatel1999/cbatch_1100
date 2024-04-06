//wap to check given number is positive or negative or zero.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number :";
    cin>>num;
    if(num>0)
    {
        cout<<"num is positive";
    }
    else if (num<0)
    {
        cout<<"num is negative";
    }
    else{
        cout<<"num is zero";
    }
    return 0;
}