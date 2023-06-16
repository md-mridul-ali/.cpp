//programming topic:Factorial

#include<iostream>
using namespace std;
int main(){

int i,n;   //Declaring two integer 1st one is 'i' and second on is 'n'
int fact=1;   //Declaration and initialization 'fact' variable

cout<<"Enter any number: ";   //From user input
cin>>n;   //When user given a input which is assign in 'n' variable

for( i=1; i<=n; i++)   //Value of 'i' will start 1 and 'i' will continue equal less than 'n' than 'i' will increment one after another
{
    fact=fact*i;   //'fact' variable multiply with 'i' variable until 'i' equal less than 'n'
}

cout<< n <<" Number of factorial is: "<<fact<<endl;   //Printing the value of 'fact' variable

return 0;
}
