#include<iostream>
#include<math.h>
using namespace std;
// dec to binary
int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}

// // binary to dec
// int main() {

//     int n;
//     cin >> n;

//     int i = 0, ans = 0 ;

//     while( n != 0) {

//         int digit = n % 10;

//         if( digit == 1) {
//             ans = ans + pow(2, i);
//         }

//         n = n/10;
//         i++;

//     }
//     cout<< ans << endl;
//     return 0;
// }

// // leet code problems
// int main(){
//  int m = n;
//         int mask = 0;
        
//         if(n == 0)
//             return 1;
        
//         while( m!=0) {
//             mask = (mask << 1) | 1;
//             m = m >> 1;
//         }
        
//         int ans = (~n) & mask;
        
//         return ans;
        
//     }
// // reverse integer
// int main(){
//       int ans  = 0;
//         while( x != 0) {
            
//             int digit = x % 10;
            
//             if( (ans > INT_MAX/10) || (ans < INT_MIN/10)) {
//                 return 0;
//             }
            
//             ans = (ans * 10) + digit;
//             x = x / 10;
            
//         }
//         return ans;
//     }
