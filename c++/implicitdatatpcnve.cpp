#include<iostream>
using namespace std;
int main(){
int var1;

float var2 =10.2;
var1=var2;
cout<<"The value is: "<<var1;
cout<<"The value is: "<<var2<<endl;

//explicit type conversion
int var3;
float var4=10.4;
var3=static_cast<int>(var4);
cout<<"THe value is: --"<<var3;
cout<<"THe value is: --"<<var4;
    return 0;
}