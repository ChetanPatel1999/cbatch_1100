//file handling
// read from file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string s;
  ifstream read;
  read.open("abc.txt");
  read>>s;// single word read from file
  cout<<s<<" ";
  read>>s;
  cout<<s;
  read.close();
  return 0;
}