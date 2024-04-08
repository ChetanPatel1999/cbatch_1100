// forloop in cpp
// 0 1 1 2 3 5 8 13......
#include<iostream>
using namespace std;
int main()
{
 int num;
 cout<<"enter how many element you want to print :";
 cin>>num;
 int a=0,b=1,i,c;
 cout<<a<<" "<<b<<" ";
 for(i=3;i<=num;i++)
 {
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
 }
    return 0;
}
