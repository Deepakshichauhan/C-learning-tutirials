#include <iostream>
using namespace std;
 
int main(){
// ###############learning nested loop#####################
// for(int i=0;i<=4;i++){
//      for(int j=0;j<=4;j++){
//       cout<<"* ";
// }
// cout<<endl;
// }   
// or
// for(int i=0;i<=4;i++){
//     cout<<"* * * * *"<<endl;
// }
// for printing n rows of m stars
// int n,m;
// cin>>n>>m;
//  for(int i=1;i<=n;i++){
//     for(int j= 1;j<=m;j++){
// cout<<"* ";
//     }
// cout<<endl;
//  }
// sum of all number from 1 to n which are divisible by 3
// int n,sum;
// sum=0;
// cin>>n;
// for(int i=1;i<=n;i++){
// if(i%3==0){
// sum+=i;
// }
// }
// cout<<"the sum of all the numbers which are divisible by 3 from 1 to "<<n<<" is "<<sum; 
// print factorial of a number n
// int n,factorial=1;
// cin>>n;
// for(int i=n;i>=1;i--){
// factorial*=i;
// }
// cout<<"The value of the "<<n<<"! is "<<factorial;
//square pattern question 1################
// for(int i=0;i<=3;i++){
// for(int j=0;j<=3;j++){
// cout<<(j+1)<<" ";
// }
// cout<<endl;
// }
//  or for n inputs
// int n;
// cin>>n;
// for(int i=0;i<=(n-1);i++){
//     for(int j=0;j<=(n-1);j++){
//         cout<<(j+1)<<" ";
//     }
//     cout<<endl;
// }
// square pattern of printing stars
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// or for abcd
// char n ;//m should be an integer and n should be an character
// int m;
// cin>>n>>m;
// for(int i=0;i<m;i++){
//     for(char j='A';j<=n;j++){
//         cout<<j<<" ";
//     }
// cout<<endl;
// }
//  int n;
//  cin>>n;
//  for(int i=0;i<n;i++){
//  char ch='A';
 
//  for(int j=0;j<n;j++){
//     cout<<ch<<" ";
//     ch=ch+1;
//  }   
//  cout<<endl;
//  }
//   ########################
// int n,num=1;
// cin>>n; 
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<num<<" ";
//         num+=1;
//     }
//     cout<<endl;
// }
// cout<<"the value of the num at the last is "<<num;
// in the form of character then we can do it like that
// int n;
// cin>>n;
// char ch='A';
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<ch<<" ";
// ch++;
// }cout<<endl;
// }
// cout<<"the character after final loop is "<<ch;
// ############ triangle problems ############
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(i>=j){
// cout<<"* ";
// }
// }cout<<endl;
// }
//  int n,number=0;
//  cin>>n;
// for(int i=0;i<n;i++){
//  number++;
//  for(int j=0;j<n;j++){
//     if(i>=j){
//         cout<<number<<" ";
//     }
//  }
// cout<<endl;
// }
// ################by mam logic
//  int n,number=0;
//  cin>>n;
// for(int i=0;i<n;i++){
//  number++;
//  for(int j=0;j<=(i);j++){

//         cout<<number<<" ";
//     }
// cout<<endl;
//  }
// ##########################################do again
//  int n,number;
//  cin>>n;
//  for(int i=0;i<n;i++){
//     number=1;
//     for(int j=0;i>=j;j++){
//      cout<<number<<" ";
//      number++;
//     }
//     cout<<endl;
//  }
// int n;
// cin>>n;
// for(int i=0;i<=(n-1);i++){
//     for(int j=0;j<(i+1);j++){
//         cout<<(j+1)<<" ";
//     }
//     cout<<endl;
// }
// ######################################do again
// int n,number; 
// cin>>n;
// for(int i=0;i<n;i++){
//     number=i+1;
//     for(int j=0;j<=i;j++){
//         cout<<number;
//         number--;
//     }
//     cout<<endl;
// }
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=(i+1);j>0;j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// int n,number=1;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//     cout<<number<<" ";
//     number++;
//     }
//     cout<<endl;
// }
//  int n;
//  cin>>n;
//  for(int i=0;i<n;i++){
//     for(int j=i+1;j>0;j--){
//      cout<<j<<" ";
//     }
//     cout<<endl;
//  }
// int n;
// cin>>n;
// char ch,test;
// cin>>ch;
// for(int i=0;i<n;i++){
//    for(int j=(i+1);j>0;j--){
//       test=(ch+(j-1));
//       cout<<test<<" "; 
//    }
//    cout<<endl;
// }
// output is like-if n=4 and ch='A'
// A
// B A
// C B A
// D C B A
//  ##################day 3
// int m,num=0;
// cin>>m;
// for(int i=0;i<m;i++){
//    num++;
// for(int j=0;j<m;j++){
//    if(i>j){
//       cout<<" "<<" ";
//    }else{
//       cout<<num<<" ";
//    }
// }
// cout<<endl;
// }
// or we can
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//    for(int j=0;j<i;j++){
//       cout<<" "<<" ";
//    }for(int j=0;j<(n-i);j++){
//      cout<<(i+1)<<" ";
//    }
//   cout<<endl; 
// }
// for abcd##################################
// int n;
// cin>>n;
// char ch,alphabet='A';
// for(int i=0;i<n;i++){
//   ch= (alphabet+i);
//    for(int j=0;j<i;j++){
//       cout<<" "<<" ";
//    }for(int j=0;j<(n-i);j++){
//       cout<<ch<<" ";
//    }
   
//    cout<<endl;
// }
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//    for(int j=0;j<(n-i-1);j++){
//       cout<<" "<<" ";
//    }
//    int num1;
//    num1=1;
//    for(int j=0;j<(i+1);j++){
//       cout<<num1<<" ";
//       num1++;
//    }
//    cout<<endl;
//    }
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//    for(int j=0;j<(n-i-1);j++){
//       cout<<" "<<" ";
//    }
//    int num1;
//    num1=1;
//    for(int j=0;j<(i+1);j++){
//       cout<<num1<<" ";
//       num1++;
//    }
//    int num2=i;
//    for(int j=0;j<i;j++){
//       cout<<num2<<" ";
//       num2--;
//    }
//    cout<<endl;  
//    }
// or
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//    for(int j=0;j<(n-i-1);j++){
//       cout<<" "<<" ";
//    }for(int j=1;j<=(i+1);j++){
//       cout<<j<<" ";
//    }for(int j=i;j>=1;j--){
//       cout<<j<<" ";
//    }
//    cout<<endl;
// }
// int n;
// cin>>n;
// char ch;
// for(int i=0;i<n;i++){
//    for(int j=0;j<(n-i-1);j++){
//       cout<<" "<<" ";
//    }for(int j=0;j<(i+1);j++){
//       ch=('A'+j);
//       cout<<ch<<" ";
//    }for(int j=(i-1);j>=0;j--){
//       ch=('A'+j);
//       cout<<ch<<" ";
//    }
//    cout<<endl;
// }
// for printing hollow diamond pattern#################################
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<((n-i)-1);j++){
//         cout<<" ";
//     }
//     cout<<"*";
//     if(i!=0){
//     for(int j=0;j<(2*i-1);j++){
//         cout<<" ";
//     }
//     cout<<"*";
//    }
//     cout<<endl;
// }
// for(int i=0;i<(n-1);i++){
//     for(int j=0;j<(i+1);j++){
//         cout<<" ";
//     }cout<<"*";
//     if(i!=(n-2)){
//         for(int j=0;j<(2*(n-i)-5);j++){
//             cout<<" ";
//         }cout<<"*";
//     }
//     cout<<endl;
// }
// buterfly pattern########################################
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<(i+1);j++){
//         cout<<"*";
//     }if(i!=(n-1)){
//         for(int j=0;j<2*(n-1-i);j++){
//             cout<<" ";
//         }
//     }for(int j=0;j<(i+1);j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<(n-i);j++){
//         cout<<"*";
//     }if(i!=0){
//         for(int j=0;j<2*i;j++){
//             cout<<" ";
//         }
//     }for(int j=0;j<(n-i);j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }








































































}




































