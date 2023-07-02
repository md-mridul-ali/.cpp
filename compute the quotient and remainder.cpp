#include<iostream>
using namespace std;
int main()
{
int dividend, divisor, quotient,remainder;
cout<<"Input the dividend : ";
cin>>dividend;

cout<<"Input the divisor : ";
cin>>divisor;
cout<<"\n";

quotient=dividend / divisor;
remainder=dividend % divisor;

cout<<"The quotient of the division is : "<<quotient<<"\n";
cout<<"The remainder of the division is : "<<remainder<<"\n";

return 0;
}
