#include<iostream>
#include<math.h>
using namespace std;
int main(){

 int year;
 cout<<"Enter any year:";
 cin>>year;

 cout<<"\n";

 if( year%4==0 && year%100!=0)
{
  cout<<"leap year"<<"\n";
}

else if( year%400==0)
{
  cout<<"This year is leap year"<<"\n";
}
 else
{
  cout<<"This year is not leap year"<<"\n";
}

return 0;
}
