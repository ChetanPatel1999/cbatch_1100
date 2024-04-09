//wap to print sum of squares of all prime number present in array.
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter arry size :";
    cin>>n;
    int arr[n];
    cout<<"enter array element : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"array element are : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int num,f,sum=0;
    for(i=0;i<n;i++)
    {
        num=arr[i];
        f=0;
        if(num==1 || num==0)
        {
            f=1;
        }
        else{
            for(j=2;j<num;j++)
            {
                if(num%j==0)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            sum=sum+(num*num);
        }
    }
    cout<<"sum = "<<sum;
    return 0;
}