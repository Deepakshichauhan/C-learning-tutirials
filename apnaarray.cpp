#include<iostream>
#include<climits>
using namespace std;

int main(){
// ################Learning arrays#####################
// int marks[5]={23,45,56,78,90};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// cout<<marks[4]<<endl;
// or
// marks[2]=100;
// cout<<marks[2];
// cout<<marks[-1];
// cout<<marks[1000];here we use the index out of the rannge of the array so it give the garbage value here
// int marks[5];
// int size=5;
// for(int i=0;i<size;i++){
// cin>>marks[i];
// }
// for(int j=0;j<size;j++){
// cout<<marks[j]<<endl;
// }
// ######################### starting today array
//  finding the smallest value in the array 
// int size;
// cout<<"enter the size of the array \n";
// cin>>size;
// int smallest= INT_MAX;
// int nums[size];

// for(int i=0;i<size;i++){
//     cout<<"the index "<<i<<" value is ";
//     cin>>nums[i];
// }for(int i=0;i<size;i++){
// if(nums[i]<smallest){
//     smallest=nums[i];
// }
// }for(int i=0;i<size;i++){
//     if(smallest==nums[i]){
//         cout<<"the index of the smallest value is "<<i;
//     }
// }
// cout<<"the smallest vaue is "<<smallest;
// for the largest
// int size;
// cin>>size;
// int largest=INT_MIN;
// int nums[size];
// for(int i=0;i<size;i++){
// cin>>nums[i];
// }for(int i=0;i<size;i++){
//     if(nums[i]>largest){
//         largest=nums[i];
//     }
// }
// cout<<"the largest number is "<<largest;

// int nums[]={23,54,41,54,23};
// int size=sizeof(nums)/sizeof(int);
// cout<<"the size of the array is "<<size<<endl;
// int smallest=INT_MAX;
// for(int i=0;i<size;i++){
// smallest=min(nums[i],smallest);
// }
// cout<<smallest;
// ####### pass by reference
// void changearr(int nums[],int size){
// for(int i=0;i<size;i++){
//     nums[i]*=2;
// }
// }
// int main(){
// int size;
// cout<<"enter the size of the array ";
// cin>>size;
// int arr[size];
// for(int i=0;i<size;i++){
//     cin>>arr[i];
// }
// changearr(arr,size);
// for(int i=0;i<size;i++){
// cout<<"the value of the index "<<i<<" is ";
// cout<<arr[i];
// cout<<endl;
// }
// return 0;
// linear search algorithm
// int linearsearch(int arr[],int size,int target){
// for(int i=0;i<size;i++){
// if(arr[i]==target){
//     return i;
// }else{
//     return -1;
// }
// }
// }
// int main(){
// int size;
// cout<<"enter the size of the array \n";
// cin>>size;
// int arr[size];
// int target;
// cout<<"enter the value for you are looking \n";
// cin>>target;
// for(int i=0;i<size;i++){
// cout<<"the value of the index "<<i<<" is ";
// cin>>arr[i];
// }
// cout<<linearsearch(arr,size,target);
// }
//  two pointers approach we are using here
// int size;
// cout<<"enter the size of the array \n";
// cin>>size;
// int arr[size];
// for(int i=0;i<size;i++){
//     cout<<"the value of the index "<<i<<" is ";
//     cin>>arr[i];
// }
// int snum=0,lnum=(size-1);
// while(snum<lnum){
// swap(arr[snum],arr[lnum]);
// snum++,lnum--;
// }
// for(int i=0;i<size;i++){
// cout<<"the value of the index "<<i<<" is ";
// cout<<arr[i];
// cout<<endl;
// }
// return 0;

















}

