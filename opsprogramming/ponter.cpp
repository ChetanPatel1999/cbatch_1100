//pointer store address of another variable.
#include<iostream>
using namespace std;
int main()
{
 int *ptr;
 int a=12;
 ptr=&a;
 cout<<"value of a :"<<a<<endl;
 cout<<"adress of a :"<<(&a)<<endl;
 cout<<"adress of a :"<<(ptr)<<endl;
 cout<<"value of a by pointer: :"<<(*ptr)<<endl;
    return 0;
}