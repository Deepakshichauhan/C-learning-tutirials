#include<iostream>
using namespace std;

int main(){
    // loops
//Question -1
// while loops
//int i =1;
// while(i<=5){
//     cout<<i<<endl;
//     i++; //or we can use i+=1,i=i+1,++i
// }
// dont use it it would print i for the infinite time ok
// while(i<=5){
//     cout<<i<<endl;
// }
//  int a;
//  cin>>a;
//  while(a<=1){
//      cout<<"done"<<endl;
//      ++a;
//  }
// cout<<"nothing happens ok learn";
// question print number 1 to n 
// int no=1;
// int n;
// cin>>n;
//  while(no<=n){
//     cout<<no<<endl;
//     no++;
//  }
//again 
// print numbers 1 to n ok 
// int i=1,n;
// cin>>n;
// while(i<=n){
//     cout<<i<<endl;
//     i++;
// }
// for(int i=0;i<=4;i++){
//     cout<<"deepu"<<endl;
// }
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     cout<<i<<" ";
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i=i+2){
//     cout<<i<<" ";
// }
// sum of numbers from 1 to n means n numbers given by user from 1
//  int sum=0,n;
//  cin>>n;
//  for(int i=1;i<=n;i++){
//     sum+=i;
//  }
// cout<<"this the sum of 1 to "<<n<<" numbers "<<sum;
// or we can also do it
// int sum=0,n;
// cin>>n;
// for(int i=0;i<=(n-1);i++){
//     sum+=(i+1);
// }
// cout<<"the sum of the numbers is "<<sum;
// exicuting it by while loop
// int i=1,sum=0,n;
// cin>>n;
// while(i<=n){
//     sum+=i;
//     i++;
// }
//so here i write break statement with cndition so it terminate before giving the sum of all the numbers
// cout<<"the sum of the numbers is"<<sum;
// int n,sum=0;
// cin>>n;
// for(int i=1;i<=n;i++){
//     sum+=i;
//     if(i==5){
//         break;
//     }
// }
// cout<<"the sum of the numbers is "<<sum;
// sum of the odd numbers
int n,sum=0;
cin>>n;
for(int i=0;i<=(n-1)||i==n;i=i+2){
    sum+=i;
}
cout<<sum;








}