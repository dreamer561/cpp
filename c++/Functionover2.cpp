#include <iostream>
using namespace std;
void add(int , int);
void add(int ,int,int);
int main()
{
    add(2,3);
    add(4,5,6);
    return 0;
}
void add(int a,int b){
    cout<<" sum  :-"<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<" sum  :-"<<a+b+c<<endl;
}