#include<iostream>
using namespace std;
int main()
{
 // string s[]={"indore","ujjain","dewase","mahu"};
   string s[5];
   int i;
   cout<<"enter city name : \n";
   for(i=0;i<5;i++)
   {
    cin>>s[i];
   }
   cout<<"city name are : \n";
   for(i=0;i<5;i++)
   {
    cout<<s[i]<<endl;
   }
    return 0;
}