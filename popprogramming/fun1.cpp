#include<iostream>
using namespace std;
void pattern()
{
  int i,j;
  for(i=1;i<5;i++)
  {
    for(j=1;j<5;j++)
    {
        cout<<"@ ";
    }
    cout<<endl;
  }
}
int main()
{
    pattern();
    return 0;
}