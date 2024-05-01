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
 while(read.eof()==0)
 {
   getline(read,s);
   cout<<s<<"\n";
 }
 
  read.close();
  return 0;
}