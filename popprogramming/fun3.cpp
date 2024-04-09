#include<iostream>
using namespace std;
// no return type and with argument
void facto(int num)
{
   int fact=1,i;
   for(i=1;i<=num;i++)
   {
    fact=fact*i;
   }
   cout<<"factorial = "<<fact<<endl;
}
int main()
{
  facto(4);
    return 0;
}