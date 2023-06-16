#include<iostream>
using namespace std;
int main()
{

int a,b,c;  //Declaring three variables 'a','b','c'

cout<<"Enter the value of a: ";   //From user input for 'a' variable
cin>>a;    //When user give a value for 'a' variable than value will assign in 'a' variable

cout<<"Enter the value of b: ";   //From user input for 'b' variable
cin>>b;    //When user give a value for 'b' variable than value will assign in 'b' variable


cout<<"Enter the value of c: ";   //From user input for 'c' variable
cin>>c;   //When user give a value for 'c' variable than value will assign in 'c' variable


if( b>a)   //If value of 'b' variable is greater than 'a' variable so maximum number will be value of 'b' variale
{
    cout<<"Maximum number is:"<<b<<"\n";
}

else if( a>c) //If value of 'a' variable is greater than 'c' variable so maximum number will be value of 'a' variale
{
    cout<<"Maximum number is:"<<a<<"\n";
}

else
{
    cout<<"Maximum number is:"<<c<<"\n";   //If the above both condition is false after that maximum number will be value of 'c' variable
}

return 0;
}
