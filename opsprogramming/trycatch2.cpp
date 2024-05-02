#include<iostream>
using namespace std;
int main()
{
   int a=-4;
   try
   {
     if(a<0)
     {
        throw 12;
     }
     cout<<"value of a : "<<a<<endl;
   }
   catch(int e)
   {
    cout<<"you suppy negative value :"<<e<<endl;
   }
   catch(char c)
   {
    cout<<"char catch block is exicute"<<endl;
   }
   catch(double d)
   {
    cout<<"double catch block is exicute"<<endl;
   }
   catch(...)// if matchin data type
   {
      cout<<"anonymus error is occured"<<endl;
   }
   cout<<"after catch block"<<endl;

   
    return 0;
}