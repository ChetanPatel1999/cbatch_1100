#include<iostream>
using namespace std;
int main()
{
   int a=-4;
   try
   {
     if(a<0)
     {
        throw a;
     }
     cout<<"value of a : "<<a<<endl;
   }
   catch(int e)
   {
    cout<<"you suppy negative value :"<<e<<endl;
   }
   cout<<"after catch block"<<endl;

   
    return 0;
}