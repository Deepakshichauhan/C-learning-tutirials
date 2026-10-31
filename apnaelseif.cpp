#include<iostream>
using namespace std;

int main(){
// learning else if statement ok
// find if a character is lowercase or uppercase
char ch;
cin>>ch;
// if (ch=='A'|| ch=='B'|| ch=='C'||ch=='D'|| ch=='E' || ch=='F'|| ch=='G' || ch=='H' || ch=='I' || ch=='J' || ch=='K' || ch=='L' || ch=='M' || ch=='N' || ch=='O'|| ch=='P'||ch=='Q'|| ch=='R'|| ch=='S'||ch=='T'|| ch=='U' || ch=='V'|| ch=='W' || ch=='X' || ch=='Y' || ch=='Z' ){
//     cout<<"upperscript";
// }else{
//     cout<<"lowerscript";
// }
// second method####################
// if(ch>='A' && ch<='Z'){
//     cout<<"it is capital letter";
// }else{
// cout<<"it is small letter";
// } we can make that condition for lowercase to ok as we know
// third method by implicit type conversion
if(ch>=65 && ch<=90){
    cout<<"it is a capital letter";
} else{
    cout<<"it is a small letter";
}










}