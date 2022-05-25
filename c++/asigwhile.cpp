#include<iostream>
using namespace std;
int main(){

//Write a program in C++ to find the sum of first 10 natural numbers. ( using While Loop )
int num,sum=0;
while (num<=10)
{
    sum=num+sum;
    cout<<"sum of first 10 natural num is :-"<<sum<<endl;
    num+=1;
}

return 0;
}