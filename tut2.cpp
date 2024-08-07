#include<iostream>
using namespace std;
// pattern 1(square)
// int main() {
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n) {

//         int j =1;
//         while(j<=n) {
//             cout<<"*";
//             // cout<<n-j+1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }

// pattern problem row number
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//           cout<<i;
//           j++;
//         }cout<<endl;
//         i++;
//     }
// }

// pattern problem column number
//  int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//           cout<<j;
//           j++;
//         }cout<<endl;
//         i++;
//     }
// }

// to reverse the pattern 
// int main() {
//     int n;
//     cin>>n;

//     int i = 1;

//     while(i<=n) {

//         int j =1;
//         while(j<=n) {
//             cout<<n-j+1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }

//print number serial  pattern
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     int count=1;
//     while(i<=n) {

//         int j =1;
//         while(j<=n) {
//             cout<<count<<" ";
//             j = j + 1;
//         count++;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }

// * pattern 
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             // count numbers 
//             // cout<<count<<""; 
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// problem
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//     int value=i;
//         int j=1;
//         while(j<=i){
//             // cout<<count<<""; 
//             cout<<value;
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//     int value=i;
//         int j=1;
//         while(j<=i){
//             // cout<<count<<""; 
//             cout<<i-j+1;
//             // value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch='A'+i-1;
// char ch='A'=j+1;
//             // cout<<count<<""; 
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

//  int main(){
//      int n;
//      cin>>n;
//      int i=1;
//      while(i<=n){
//          int j=1;
//          char value='A';
//         while(j<=i){ 
//             cout<<value; 
//             j++;
//             value++;
//        }
//      cout<<endl;
//       i++;
//     }
//  }


// int main() {

//     int n;
//     cin>>n;

//     int row = 1;

//     while(row <= n) {

//         int col = 1;

//         while(col <= row) {
//             char ch = ('A' + row + col - 2);
//             cout<<ch;
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;

//     }
//     return 0;
// }

// int main() {

//     int n;
//     cin>>n;

//     int row = 1;

//     while(row <= n) {

//         int col = 1;
//         char start = 'A' + n - row;
//         while(col <= row) {
            // my idea   cout<<n-i+j-1+'A';
//             cout<< start;
//             start = start + 1;
//             col = col + 1;
//         }
//         cout<< endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main() {

//     int n;
//     cin>>n;

//     int row = 1;

//     while(row <= n) {

//         //space print karlo
//         int space = n - row;
//         while(space) {
//             cout<<" ";
//             space = space - 1;
//         }

//         //stars print karlo
//         int col = 1;
//         while( col <= row ) {
//             cout<<"*";
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=n;
//     while(i>=1){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//          i--;
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         int space = i - 1;
//         while (space) {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while (j <= n - i + 1) {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//     }
//     return 0;
// }