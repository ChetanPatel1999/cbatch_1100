#include<iostream>
using namespace std;
int facto(int num)
{
   int fact=1,i;
   for(i=1;i<=num;i++)
   {
    fact=fact*i;
   }
   return fact;
}
int main()
{
  int n;
  n=4;
  int res=facto(n);
  cout<<"factorial = "<<res<<endl;
    return 0;
}