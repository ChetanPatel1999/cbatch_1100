//while loop program in cpp
#include<iostream>
using namespace std;
int main()
{
   long long int num;
    cout<<"enter a num :";
    cin>>num;//1234
   long long int c=0,temp=num,rem,sum=0,res,i;
    while(num!=0)
    {
        c++;
        num=num/10;
    }
    num=temp;
     while(num!=0)//1234
     {
       rem=num%10;//6
       res=1;
       for(i=1;i<=c;i++)
       {
        res=res*rem;//216
       }
       sum=sum+res;
       num=num/10;
     }
     if(sum==temp)
     {
        cout<<"armstrong number ";
     }
     else{
        cout<<"not armstrong number";
     }
    return 0;
}