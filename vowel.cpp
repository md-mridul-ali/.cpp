#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"Enter any letter : ";
cin>>ch;

if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    cout<<"Your letter is a Vowel"<<"\n";
}
else if( ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
    cout<<"Your letter is a Vowel"<<"\n";
}
else{
    cout<<"Your letter is a Consonant"<<"\n";
}
return 0;
}
