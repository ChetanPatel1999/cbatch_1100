//fuction template
#include<iostream>
using namespace std;

template<class T>
void display(T a)
{
    cout<<"value of a : "<<a<<endl;
}

template<class T1,class T2>
float avrage(T1 a,T2 b)
{
    return (a+b);
}
int main()
{
    
   cout<<"avrage : "<<avrage(12,6)<<endl; 
 /*display(12);
 display("chetan");
 display(12.45);
 display('A');*/
  return 0;
}
