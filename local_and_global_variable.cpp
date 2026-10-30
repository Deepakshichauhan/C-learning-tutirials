#include <iostream>
using namespace std;
// the variable outside is called function is called global variable (we can use it inside or outside of the function but the main think is that it is made outside of the function )and the function inside the function is called a local variable and the precedance of the local variable is more in the case when there is same name of the local and the global variable 
// int a=47;
// int main(){

// cout<<a;
// return 0;}
// int glo=6;
// void sum(){
// int a;
// cout<<glo;
// }
// int main(){
// int glo=9;
// glo=78;
// int a=14;
// float pi=3.14;
// sum();
// cout<<glo;
// bool ch = false; 
// cout<<ch;


  
int main(){ 
int num1,num2,num3,sum;
// wach nearly this is very important program that here we can clearly say that in c++ program execution start from main function thats why it execute from starting and it firstly give cout and then ask for the value ok so it is very important program 
cout<<"The value of the number one is =\n ";
cin>>num1;
cout<<"The value of the number second is =\n";
cin>>num2;
cout<<"The value of the number third is =\n";
cin>>num3;
sum = num1+num2+num3;
cout<<sum;
return 0;
// we can use the scape sequence anwhere where we want ok
}