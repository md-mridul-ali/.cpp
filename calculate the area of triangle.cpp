#include<iostream>
using namespace std;

 int main(){

 float base,hight,area;   //Declaring three variable one is 'base' second one is 'hight' and third one is 'area' those data types are float

 cout<<"Enter the value of base : ";   //Getting input base value from the user
 cin>>base;   //Base value will assign in 'base' variable

 cout<<"Enter the value of hight : ";   //Getting input hight from the user
 cin>>hight;//Hight  will assign in 'hight' variable

 area=0.5*base*hight;   //Calculate the area and value will assign in 'area' variable

  cout<<"Area of triangle="<<area<<"\n";   //Print the value of area

 return 0;
 }
