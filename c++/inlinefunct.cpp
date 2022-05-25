#include <iostream>
//we romove extra timing from the code it reduces the code excutuin timing
using namespace std;
int sum(int,int);
int main(){
sum(34,55);
return 0;
}
inline int sum(int a,int b){
    cout<<a+b;
}