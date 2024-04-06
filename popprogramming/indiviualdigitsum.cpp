//wap to print sum of indiviual digit of three digit number.
#include<iostream>
//1243
using namespace std;
int main()
{
 int num,r,s,t,sum;
 std::cout<<"enter a number :";
 std::cin>>num;//567
 std::cout<<"value of num :"<<num<<std::endl;
 r= num/100;
 s=(num%100)/10;
 t=num%10;
 sum=r+s+t;
 std::cout<<"sum of indiviual digit :"<<sum<<std::endl;
   return 0; 
}