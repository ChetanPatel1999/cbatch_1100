//with return type but no argument
#include<iostream>
using namespace std;
string fun()
{
  string s;
  cout<<"enter a name : ";
  cin>>s;
  return s;
}
int stlen(string s)//"chetan"
{
  int i,len=0;
  for(i=0;s[i]!='\0';i++)
  {
    len++;
  }  
  return len;
}
int main()
{
 string s1=fun();
 cout<<"name = "<<s1<<endl;
 int res=stlen(s1);
 cout<<"lenth of string = "<<res<<endl;
   return 0;
}