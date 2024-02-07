#include<iostream>
using namespace std;
int prime(int n,int i,int flag=0)
{
if(n==0 || n==1)
{
    flag=1;
}
for(i=2; i<=n/2; i++)
{
    if(n%i==0)
    {
        flag=1;
        break;
    }
}
if(flag==0)
{
    cout<<n<<" "<<"is a prime number:"<<"\n";
}
else{
    cout<<n<<" "<<"is not prime";
}

}

int main()
{
int n,i,flag=0;
cout<<"Enter any integer number:";
cin>>n;

prime(n,i,flag);
return 0;
}
