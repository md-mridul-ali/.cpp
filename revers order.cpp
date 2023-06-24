#include<iostream>
using namespace std;
int main(){

int num,right_digit,sum=0;

cout<<"Enter the number : ";
cin>>num;

while( num!=0){

    right_digit=num%10;
    cout<<right_digit;
    num=num/10;

sum=sum+right_digit;

}
cout<<endl;
cout<<"sum="<<sum<<endl;

return 0;
}
