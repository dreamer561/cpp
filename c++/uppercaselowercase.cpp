#include<iostream>
using namespace std;
int main(){
    char input;
    cout<<"Enter Character to check uppercase or Lowercase";
    cin >> input;
    if(input <='a' && input>='z'){
        cout<<"lowercase";
    }
    else
    (input <='A' && input>='Z')
    {
        cout<<"Uppercase";
    }
return 0;
}