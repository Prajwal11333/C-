// homework problems
#include<iostream>
#include<math.h>
using namespace std;
// void ap(int n){
//     int ap1=(3*n+7);
//     cout<<ap1;
// }
// int main(){
//     int n;
//     cin>>n;
//     ap(n);
//     }

// number of bits
// void numbits(int n){
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int digit=n & 1;

//         ans=(digit*pow(10,i))+ans;

//         n=n>>1;

//         i++;
//     }
//     cout<<ans;
    
// }
// int main(){
//     int n;
//     cin>>n;
//   numbits(n);
// }

void fibonnaci(int n){
int a=0;
cout<<a;
int b=1;
cout<<b;
for(int i=0;i<=n;i++){
    int nextnumber=a+b;
    cout<<nextnumber;

a=b;
b=nextnumber;
}
}
int main(){
    int n;
    cin>>n;
    fibonnaci(n);
}











































































































































































































































































































































