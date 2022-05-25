//Write a program in C++ to find the sum of first 10 natural numbers.
#include<iostream>
using namespace std;
int main(){
    int sum=0,natnum;
    for (natnum=0;natnum<=10;natnum++){
        sum=sum+natnum;
        cout << sum<<endl;
    }
    return 0;
}