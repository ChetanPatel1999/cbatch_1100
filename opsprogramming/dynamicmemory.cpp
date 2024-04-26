//pointer store address of another variable.
#include<iostream>
using namespace std;
int main()
{
 /*float *ptr;
 ptr=new float(56.89);// its allocate dynamically memory
 //ptr=new float;
 //*ptr=12.78;
 cout<<"value of ptr :"<<(*ptr)<<endl*/

  int *ptr;
  ptr=new int[5];//20 byte
  int i;
  cout<<"enter array elemet : ";
  for(i=0;i<5;i++)
  {
    cin>>ptr[i];
  }
  cout<<"display array elemet : \n";
   for(i=0;i<5;i++)
  {
    cout<<ptr[i]<<endl;
  }

    return 0;
}