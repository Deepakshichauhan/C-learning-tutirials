#include<iostream>
using namespace std;

int main(){
    // ###########################palindrome questions
// int num,d1,d2,d3,d4;
// enter a four digit number
// cin>>num;
// d1=(num/1000)%10;
// d2=(num/100)%10;
// d3=(num/10)%10;
// d4=num%10;
// cout<<((d1==d4 && d2==d3 && d1!=0)?"this four digit number  is  palindrome":"this four digit number is not palindrome");
//####################even odd and zero and positive and negative also
int num;
cin>>num;
cout<<((num==0)?"num is zero":((num%2==0)?((num>0)?"num is even positive number":"num is even negative number"):((num>0)?"num is odd positive number":"num is odd negative number")));









}