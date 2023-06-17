#include<iostream>
using namespace std;

int main(){

int a;   //Declaring a variable which known as 'a' variable

cout<<"Enter any integer number:";  //From user input
cin>>a;  //Input will assign in 'a' variable

if(a%2==0)
{
  //If 'a' modulus '2' is equal to zero than 'a' is an even number
  cout<< a <<" "<<"is even number"<<endl;
}

else
{
   //If the above condition is false than 'a' is an odd number
   cout<< a <<" "<<"is odd number"<<endl;
}

return 0;
}
