//program to print prime and non prime numbers
#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,i;
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    cout<<"prime numbers"<<endl;
    for(n=n1;n<=n2;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                break;
            }
            
        }
        if(i==n)
        {
          cout<<n<<endl;
        }
    } 
    cout<<" non prime numbers"<<endl;
    for(n=n1;n<=n2;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
               cout<<n<<endl;
               break;
            }
            
        }
    } 

    return 0;
}