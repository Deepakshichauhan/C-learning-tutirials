#include<iostream>
#include<cmath>
using namespace std;


// int names(){
//     cout<<"deepu"<<endl;
//     return 1;
// }
// int main(){
    // int values=names();
    // cout<<endl<<values;
    // we can also do that
    // cout<<names();
//  now understanding the concept of the parameters
// int sum(int a,int b){
    
//     int s=a+b;
//     return s;
// }
// int main(){
// cout<<sum(10,10);
// return 0;    
// }
// function for the minimum of the two numbers ########################
// int min(int a,int b){
// if(a<b){
//     return a;
// }else{
//     return b;
// }
// }
// int main(){
// cout<<min(5,1);
// }

// function for the maximum of the two numbers ##############
// int max(int num1,int num2){
// if (num1>num2){
//     return num1;
// }else{
//     return num2;
// }
// }
// int main(){
//     cout<<max(40,45);
// }
// function for the sum of the n numbers
// int sumofnumbers(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     cout<<sumofnumbers(10);
// }
// this is showing that if we call any function than it will execute all the code in it if it have cin than it take values and have cout it cout that value and also retun that value what is the return type of it ok
//  int num(){
//     int a,b=5;
//     cin>>a;
//     return b;
//  }
// int main(){
//     cout<<num();
// }
// ###############
// int sumofnumbers(){
//     int sum=0,n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     cout<<sumofnumbers();
// }
// ######################## xfgxhcjgfkvuk
//  int a=0,b=1,sum;
//  int n;
//  cin>>n;
//  for(int i=1;i<n;i++){
// sum=a+b;

// a=b;
// b=sum;
//  }
//  if(n==0){
//     cout<<"the "<<n<<" term is "<<0;
//  }else{
// cout<<"the "<<n<<" term is "<<b;
//  }
//function for the sum of the digits #######
// int sumofdigit(int num){
// int sum=0,digit;
// while(num>0){
// digit=num%10;
// sum+=digit;
// num=num/10;
// }
// return sum;
// }
// int main(){
// int number;
// cin>>number;
// cout<<sumofdigit(number);
// return 0;
// }
// function for the combination formula#################
// int factorialofnumber(int num){
// int factorial=1;
// for(int i=num;i>=1;i--){
// factorial*=i;
// }return factorial;
// }
// int main(){
// int n,r;
// cin>>n>>r;
// cout<<"The combination formula for given n and r is "<<(factorialofnumber(n)/(factorialofnumber(r)*factorialofnumber(n-r)));
// return 0;
// }
// or we can call two different functions simultaneously
// double factorialofnumber(int num){
// double factorial=1;
// for(int i=num;i>=1;i--){
//     factorial*=i;
// }
// return factorial;
// }
// double combinationformula(int n,int r){
// double ncr=(factorialofnumber(n)/(factorialofnumber(r)*factorialofnumber(n-r)));
// return ncr;
// }
// int main(){
// int n,r;
// cin>>n>>r;
// cout<<combinationformula(n,r);
// }
// homework of the functions questions ok
// prime number is a function
// bool checkprime(int num){
// if(num<=1){
//     return false;
// }for(int i=2;i<=sqrt(num);i++){
//     if(num%i==0){
//         return false;
//     }
// }
// return true;
// }
// int main(){
//     int num;
//     cin>>num;
//     if(checkprime(num)){
//         cout<<"the provided number is a prime number";
//     }else{
//         cout<<"the provided number is not a prime number";
//     }
// }
// print all the prime numbers ###################
// 2 to n tak sare prime number ko mujhe print karna h ok to do loop chelenge ok one is for num++ and seconf is for checking the number whether is a prime or not ok and we take the return type of the function as the void because i dont want to return any value because it will give a lot of value ok 
// void printingprimenumbers(int num){
//     for(int i=2;i<=num;i++){
//         bool isprime=true;
//     for(int j=2;j<=sqrt(i);j++){
//         if(i%j==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<i<<" ";
//     }
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     printingprimenumbers(num);
//     return 0;
// }
// for the fibonacci series
int fibonacciseries(int n){
int sum,previous1=1,previous2=0;
if(n==0){
    return 0;
}
for(int i=1;i<n;i++){
    sum=previous1+previous2;
    previous2=previous1;
    previous1=sum;
}
return previous1;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacciseries(n);
    return 0;
}









