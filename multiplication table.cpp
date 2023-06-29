#include<iostream>
using namespace std;
int main(){

int i,num,x;

cout<<"Enter any integer number : ";
cin>>num;
cout<<"\n";
cout<<"Multiplication table : "<<"\n";

for( i=1; i<=10; i++)
{
    x=num*i;
    cout<<num<<" * "<<i<<" = "<<x<<endl;
}

return 0;
}
