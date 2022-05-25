#include <iostream>
#include<string>
using namespace std;
struct student
    {
       int age;
       string name;
       int Height;
       string colour;
    };
int main(){
    student p1;
    p1.name="bkbibhesh";
    p1.age=67;
    p1.colour="black";
    //modify
    p1.colour="red";
    //print the output
    cout<<"Name of Person 1 is== "<<p1.name<<"color is  --:"<<p1.colour<<endl;

    return 0;
    



}