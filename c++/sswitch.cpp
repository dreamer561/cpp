#include<iostream>
using namespace std;
int main(){
    int day=0;
    cout<<"Enter no between 1 to 7 =:";
    cin>>day;
    switch (day){
case 1:
    cout<<"sunday";break;
case 2:
    cout<<"monday";break;
case 3:
    cout<<"tuesday";break;
case 5:
    cout<<"thursday";break;
case 4:
    cout<<"wednesday";break;
case 6:
    cout<<"friday";break;
case 7:
     cout<<"saturday";
     //default in switch if not found the desire value entered by user
default:cout<<"invalid input";

    }
    return 0;
}