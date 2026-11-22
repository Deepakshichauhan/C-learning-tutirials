#include<iostream>
using namespace std;

int main(){
// learning else if statement ok
// find if a character is lowercase or uppercase###########
// char ch;
// cin>>ch;
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
// third method by implicit type conversion##########
// if(ch>=65 && ch<=90){
//     cout<<"it is a capital letter";
// } else{
//     cout<<"it is a small letter";
// }
// Loop statements#####################
//largest of three numbers
// int a,b,c;
// cout<<"the value of a is ";
// cin>>a;
// cout<<"the value of b is ";
// cin>>b;
// cout<<"the value of c is ";
// cin>>c;
// if(a>b){
//     if(a>c){
//       cout<<"a is the largest";
//     }else{
//         cout<<"c is the largest";
//     }
// }else if (b>c){
//     cout<<"b is the largest";
// }
// else{
//     cout<<"c is the largest";
// }
// switch case 
// int age;
// cin>>age;
// switch(age)
// {default:
//     cout<<"the age is not mached";
//     break;
// case 2:
//     cout<<"the age is 2 ";
//     break;
// case 45:
//     cout<<"the age is 45 ";
//     break;
// case 18:
//     cout<<"the age is 18 ";
//     break;
// }
// CLASS QUESTIONS PRACTICE
// char alp;
// cout<<"enter your aplhabet \n";
// cin>>alp;
// if(alp=='a'|| alp=='e'|| alp=='i'|| alp=='o'|| alp=='u'|| alp=='A'|| alp=='O'|| alp=='U'|| alp=='E'||alp=='I'){
//     cout<<"the enter alphabet is an vowel";
// }else{
//     cout<<"the entered alphabet is an consonant";
// }
// char alp;
// cout<<"enter you aplhabet \n";
// cin>>alp;
// switch(alp){
// case 'a':
// cout<<"the entered alphabet is vowel";
// break;
// case 'e':
// cout<<"the entered alphabet is vowel";
// break;
// case 'i':
// cout<<"the entered alphabet is vowel";
// break;
// case 'o':
// cout<<"the entered alphabet is vowel";
// break;
// case 'u':
// cout<<"the entered alphabet is vowel";
// break;
// default:
// cout<<"the entered alphabet is the consonant";
// break;
// }
// greatest of the three numbers
// int a,b,c;
// cin>>a>>b>>c;
// if(a>b){
// if(a>c){
//     cout<<a<<" a is the largest";
// }else{
//     cout<<c<<"c is the biggest";
// }
// }else{
//     if(b>c){
//         cout<<b<<" b is the greatest";
//     }else{
//         cout<<c<<" c is the greatest";
//     }
// }
// marriage
// int male,female;
// cout<<"enter the age of the male \n";
// cin>>male;
// cout<<"enter the age if the female \n";
// cin>>female;
// if(male>=21 && female>=18){
//     cout<<"they are eligible to marriage";
// }else{
//     cout<<"they are not eligible for the marriage";
// }
// or
// if(male>=21){
//     if(female>=18){
//         cout<<"eligible foe marriage";
//     }else{
//         cout<<"not eligible for the marriage";
//     }
// }else{
//     cout<<"not elibible for the marriage";
// }
// int services,rating;
// float salary,bonus=0;
// cout<<"enter your salary \n";
// cin>>salary;
// cout<<"enter your services \n";
// cin>>services;
// cout<<"enter you rating \n";
// cin>>rating;
// if(services>=5){
// if(rating>=4){
//     cout<<"salary before bonus "<<salary<<endl;
//     bonus=salary*(20.0/100);
// salary+=bonus;
// cout<<"the bonus is "<<bonus<<endl;
// cout<<"the salary after is "<<salary;
// }else if(rating<4){
//     cout<<"the salary before bonus "<<salary<<endl;
//     bonus=salary*(10.0/100);
//     salary+=bonus;
//     cout<<"the bonus is "<<bonus<<endl;
//     cout<<"the salary after bonus is "<<salary;
// }
// }else if(services<5){
// if(rating<5){
// cout<<"salary before bonus "<<salary<<endl;
// bonus=salary*(5.0/100);
// salary+=bonus;
// cout<<"the bonus is "<<bonus<<endl;
// cout<<"the salary after bonus is "<<salary;
// }else{
//     cout<<"no bonus "<<bonus<<endl;
//     cout<<"the salary is "<<salary;
// }
// }
// char user;
// cout<<"enter the user \n";
// cin>>user;
// float amount,discount=0;
// cout<<"enter the purchase amount \n";
// cin>>amount;
// if(user=='M'){
// if(amount>=1000){
//     discount=amount*(20.0/100);
//     amount-=discount;
//     cout<<"the discount is "<<discount<<endl;
//     cout<<"the amount is after discount "<<amount;
// }else{
//     discount=amount*(10.0/100);
//     amount-=discount;
//     cout<<"the discount is "<<discount<<endl;
//     cout<<"the amount is after discount "<<amount;
// }
// }else if(user=='G'){
// if(amount>=1000){
// discount=amount*(5.0/100);
//     amount-=discount;
//     cout<<"the discount is "<<discount<<endl;
//     cout<<"the amount is after discount "<<amount;

// }else{
// cout<<"no discount "<<discount<<endl;
// cout<<"the amount is "<<amount;
// }
// }
// SWITCH CASE simple calculator
// float num1,num2;
// cout<<"enter your first number \n";
// cin>>num1;
// cout<<"enter your second number \n";
// cin>>num2;
// char action;
// cout<<"enter the operator here \n";
// cin>>action;
// switch(action){
// case '+':
// cout<<"the addition of the two number is ";
// cout<<num1+num2;
// break;
// case '-':
// cout<<"the minus of the two numbers is ";
// cout<<num1-num2;
// break;
// case '*':
// cout<<"the multiplication of the two numbers is  ";
// cout<<num1*num2;
// break;
// case '/':
// cout<<"the division of the two numbers is  ";
// cout<<num1/num2;
// break;
// case '%':
// cout<<"the modulus of the two numbers is  ";
// cout<<(int)num1%(int)num2;
// break;
// default:
// cout<<"please enter data correctly";
// break;
// }
// int num;
// cin>>num;
// if(num>0){
//     cout<<"the number is positive "<<num;
// }else if(num==0){
//     cout<<"the number is zero"<<num;
// }else{
//     cout<<"the number is negative "<<num;
// }
// int a,b,c,sum;
// cin>>a>>b>>c;
// sum=(b*b)-(4*a*c);
// if(sum>0){
//     cout<<"the roots of the quatratic equqtion is real and distinct ";
// }else if(sum==0){
//     cout<<"the roots of the quadratice equation is zero";
// }else{
//     cout<<"the roots of the quadratice equation is imaginary";
// }
// char value;
// cin>>value;
// if(value>=65 && value<=90){
//     cout<<"the value is the upper case";
// }else if(value>=97 && value<=122){
//     cout<<"the value is the lower case";
// }else if(value>=48 && value<=57){
//     cout<<"the value is the numeral";
// }else{
//     cout<<"the value is the special symbol";
// }
// int number;
// cin>>number;
// switch(number){
//     case 1:
//     cout<<"monday";
//     break;
// case 2:
// cout<<"tuesday";
// break;
// default:
// cout<<"result is not matched";
// break;
// }
// int per;
// cout<<"enter the percentage of the student \n";
// cin>>per;
// if(per>=90){
//     cout<<"A1";
// }else if(per>=80){
//     cout<<"A2";
// }else if(per>=70){
//     cout<<"B1";
// }else if(per>=60){
//     cout<<"B2";
// }else if (per>=50){
//     cout<<"C";
// }else if(per>=40){
//     cout<<"D";
// }else if(per>=30){
//     cout<<"E";
// }else if(per<30){
//     cout<<"F";
// }
float unit,rental,ebill,punit,gst;
cin>>unit;
if(unit<=100){
punit=3.10;
rental=120;
unit*=punit;
ebill=unit+rental;
gst=ebill*(18.0/100);
ebill+=gst;
cout<<"the bill is "<<ebill;
}else if(unit<=200){
punit=4.10;
rental=160;
unit*=punit;
ebill=unit+rental;
gst=ebill*(18.0/100);
ebill+=gst;
cout<<"the bill is "<<ebill;
}else if(unit<=300){
punit=5.20;
rental=210;
unit*=punit;
ebill=unit+rental;
gst=ebill*(18.0/100);
ebill+=gst;
cout<<"the bill is "<<ebill;
}else if(unit<=400){
punit=6.15;
rental=260;
unit*=punit;
ebill=unit+rental;
gst=ebill*(18.0/100);
ebill+=gst;
cout<<"the bill is "<<ebill;
}else if(unit>400){
punit=8.25;
rental=310;
unit*=punit;
ebill=unit+rental;
gst=ebill*(18.0/100);
ebill+=gst;
cout<<"the bill is "<<ebill;
}




















return 0;
}





