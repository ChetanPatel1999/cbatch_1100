//file handling
// write in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// create ofstream object
ofstream w1;
//file open using open method
w1.open("xyz.txt");
w1<<"this file open using open fuction";
w1.close();
  
  return 0;
}
