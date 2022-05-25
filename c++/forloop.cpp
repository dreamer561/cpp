#include <iostream>
using namespace std;
int main(){
    int i,j;
for(i=5;i>0;i--){
    cout<<i<<endl;
}
//not creating body of for loop
for(j=0;j<5;j++);
cout << j;

return 0;
}