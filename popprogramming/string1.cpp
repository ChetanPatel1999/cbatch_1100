#include<iostream>
using namespace std;
int main()
{
  string s;
  cout<<"enter a string : ";
  //cin>>s;
  getline(cin,s);// its take multiple word from user
  cout<<"name  :"<<s<<endl;
  int i;
  for(i=0;s[i]!='\0';i++)
  {
    cout<<s[i]<<endl;
  }
    return 0;
}