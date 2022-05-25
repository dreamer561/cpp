//Write a program to compare if the two strings entered by user are equal or not ( length ).
#include<iostream>
#include<string>
using namespace std;

int main(){
string name1,name2;
cout<<"enter first name To compare ";
cin>>name1;

cout<<"enter Second name To compare ";
cin>>name2;

cout<<name1<<endl;
cout<<name2<<endl;

if (name1.length() == name2.length())
{
    cout<<"equal";
}
else
{
    cout<<"not equal";
}

return 0;
}