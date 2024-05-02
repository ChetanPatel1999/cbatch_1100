#include<iostream>
using namespace std;
int main()
{
    int a,b,div;
    cout<<"my program is start :"<<endl;
    cout<<"enter two number : ";
    cin>>a>>b;
    try
    {
     if(b==0)
     {
       throw b; 
     }
     div=a/b;
    }
    catch(int e)
    {
       cout<<"zerodivisionerror"<<endl;
       div=a/2;
    }
    cout<<"division ans : "<<div<<endl;
    cout<<"successfully program run"<<endl;
    cout<<"no run time error is occured"<<endl;
    return 0;
}