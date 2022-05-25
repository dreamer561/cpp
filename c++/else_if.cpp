 //more conditions in code
 #include<iostream>
 using namespace std;
 int main(){
     int marks;
     cout<<"Enter your marks here";
     cin>>marks;

     if (marks>=60 && marks<=100){
         cout<<"You are Pass";
     }
     else if(marks>=0 && marks < 60){
         cout<<"You are fail";
     }
     else {
         cout<<"invalid input";
     }
     return 0;




 }