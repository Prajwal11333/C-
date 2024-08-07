// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     int i = 1;
//     while (i <= n) {
//         // Print leading spaces
//         int space = n - i;
//         while (space > 0) {
//             cout << " ";
//             --space;
//         }

//         // Print ascending numbers
//         int j = 1;
//         while (j <= i) {
//             cout << j;
//             ++j;
//         }

//         // Print descending numbers
//         int k = i - 1;
//         while (k > 0) {
//             cout << k;
//             --k;
//         }

//         // Move to the next line
//         cout << endl;
//         ++i;
//     }

//     return 0;
// }

// DABBANG PATTERN
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int star=2*i-2;
        while(star){
            cout<<"*";
            star--;
        }
        int text=n-i+1;
        while(text){
            cout<<text;
            text--;
        }  
         cout<<endl; 
         i++;
    }
    
}

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n) {
//         // Print numbers in ascending order
//         int j = 1;
//         while (j <= n - i + 1) {
//             cout << j;
//             ++j;
//         }

//         // Print stars
//         int star = 2 * i - 2;
//         while (star > 0) {
//             cout << "*";
//             --star;
//         }

//         // Print numbers in descending order
//         int text = n - i + 1;
//         while (text > 0) {
//             cout << text;
//             --text;
//         }

//         // Move to the next line
//         cout << endl;
//         ++i;
//     }

//     return 0;
// }