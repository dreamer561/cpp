#include<iostream>
#include<string>
using namespace std;
int main(){
    string name="bibhesh";
    //cout<<name.length();
    cout<<name.size();
    //string input as user
    string name1;
    cout << "type your name : ";
    cin>>name1;
    getline(cin,name1);
    //cout << name1;

    return 0;
}