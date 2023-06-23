#include<iostream>
#include<math.h>
using namespace std;
int main(){
int mass;   //Declaring 'mass' variable whose data type is integer
float hight,bmi;   //Declaring two variable one is 'hight' and another is 'bmi' both data types are float

cout<<"Enter your weight in kg : ";   //Getting input weight from the user
cin>>mass;   //weight will assign in 'mass' variable


cout<<"Enter your hight in meter : ";  //Getting input hight from the user
cin>>hight;  //Hight will assign in 'hight' variable

bmi= mass/pow(hight,2);  //Calculate BMI and assign in 'bmi' variable
cout<<"Your BMI is : "<<bmi<<"\n";   //Print the value of bmi

return 0;
}
