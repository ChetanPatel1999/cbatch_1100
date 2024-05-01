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
  //read>>s;//read only one word
  getline(read,s);// raed whole sentance
  cout<<s<<"\n";
  getline(read,s);// raed whole sentance
  cout<<s;
  read.close();
  return 0;
}