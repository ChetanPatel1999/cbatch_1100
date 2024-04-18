#include<iostream>
using namespace std;
void add(int a=1,int b=10,int c=5)// b is default argument
{
    cout<<"sum  = "<<(a+b+c)<<endl;
}
void calculattotalbill(int item,float price=100)
{
   cout<<"total bill = "<<(item*price)<<endl;
}
int main()
{
    add(12,12,12);
    calculattotalbill(12,60.78);
   return 0; 
}