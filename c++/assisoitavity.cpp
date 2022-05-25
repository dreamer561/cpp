//when operator have same precedence , then the associtavity will determine the order  of execution 
// example
#include <iostream>
using namespace std;
int main()
{
    int var1=12,var2=13,var3=23;
    float total=var3/var2*var1;
    cout<<total;
}