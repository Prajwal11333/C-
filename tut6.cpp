#include<iostream>
using namespace std;
// for loop
// int main() {

//     for(int i=0; i<5; i++) {

//         cout<< " HI " << endl;
//         cout<< " Hey " << endl;
//         continue;

//         cout<< "Reply toh karde " <<endl;

//     }
//     return 0;
// }

// fibannoci series
// int main() {

//     int n = 10;

//     int a = 0;
//     int b = 1;
//     cout<<a <<" " <<b<<" ";
//     for(int i = 1; i<=n; i++ ) {
        
//         int nextNumber = a+b;
//         cout<<nextNumber<<" ";

//         a = b;
//         b = nextNumber;
//     }
//     return 0;
// }

// leetcode problem1
// int main(){
//     int n;
//     cin>>n;
//        int prod = 1;
//         int sum = 0;
        
//         while(n!=0) {
            
//             int digit = n%10;
//             prod = prod * digit;
//             sum = sum + digit;
            
//             n = n/10;
//         }
        
//         int answer = prod - sum;
//         return answer;
//     }

// leeetcode problem number of 1bits
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         else{
//            n= n>>1;
//         }
//     }
//         cout<<count<<endl;
// }

int main() {
    int n;
    cin >> n;
    
    int count = 0;
    while (n != 0) {
        int a=n%10;
        if (a && 1) {
            count++; // Increment count if the least significant bit is 1
        }
        n = n/10; // Right shift `n` by 1 bit
    }
    
    cout << count << endl; // Print the total count of set bits
    
    return 0;
}