#include<iostream>
using namespace std;

int main(){

int a,b;      //Declaring two integer variable which is known as  'a and b' variable
cout<<"Enter two integer value:";   //from user input
cin>>a;      //input will assign in variable (a & b)
cin>>b;

cout<<"Value of a="<<a<<"\n";
cout<<"Value of b="<<b<<"\n";

int sum =0;    //'sum' variable declaration and initialization
sum=a+b;      // summation 'a and b' variable after that assign in 'sum' variable

int sub=0;      //'sub' variable declaration and initialization
sub=a-b;        // subtraction  'a and b' variable after that assign in 'sub' variable

cout <<"Summation of a+b=" << sum <<"\n";        // Print the value of 'sum' variable
cout <<"subtraction of a-b=" << sub <<"\n";      // Print the value of 'sub' variable


return 0;

}
