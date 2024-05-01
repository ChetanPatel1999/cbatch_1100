//file handling
// write in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// file open using constructor
   string s ="this data enter using varible"; 
   ofstream write("abc.txt"); 
   write<<"hi this frist sentense write in file\n";
   write<<"hi this second sentense write in file\n";
   write<<s;
   // file close using close fuction 
   write.close(); 
  return 0;
}
