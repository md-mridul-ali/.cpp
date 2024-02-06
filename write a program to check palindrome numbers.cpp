#include<iostream>
using namespace std;
int palindrome(int num,int temp,int r,int sum=0)
{
temp=num;
while(temp!=0)
      {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
      }
      if(num==sum)
          {
              cout<<num<<" is palindrome number"<<"\n";
          }
          else{
            cout<<num<<" is not palindrome";
          }

}

int main()
{
int num,temp,r,sum=0;
cout<<"Enter any integer number:";
cin>>num;

 palindrome(num,temp,r,sum);

return 0;
}
