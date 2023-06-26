#include<iostream>
using namespace std;
int main(){

char ch;

cout<<"Enter any character : ";
cin>>ch;

switch(ch){

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':

cout<<"Your character is a vowel"<<"\n";
break;

case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    cout<<"Your character is a vowel"<<"\n";
    break;\

default:
    cout<<"Your character is a consonant"<<"\n";
}

return 0;
}

