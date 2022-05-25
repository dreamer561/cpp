#include <iostream>
using namespace std;
int main(){
//Write a C++ program to find the sum of all the elements in Array
int sum=1;
int array[5]={0};
for (int i=0;i<5;i++){
    // cout<<"enter the 5 elements of array := "<<i<<endl;
    cin >> array[i];
}
//addition
for(int i=0;i<5;i++)
{
  sum+=array[i];
  cout<<sum;
}
 



    return 0;
}