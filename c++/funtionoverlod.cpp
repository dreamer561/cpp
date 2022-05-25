#include<iostream>
using namespace std;
void sum(int,int);
void sum(float,float);
int main(){
    //int sum;
sum(453,554);
sum(45.4f,54.4f);
return 0;
}
void sum(int a,int b){
    cout<<a+b;
}
void sum(float a,float b){
    cout<<a+b;
}