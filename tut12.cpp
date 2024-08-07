#include <iostream>
using namespace std;

// int main() {
//     int n;
//     long long n1;
//     char ch;
//     float f1;
//     double d1;

//     // Reading input values
//     cin >> n >> n1 >> ch >> f1 >> d1;

//     // Outputting values
//     cout << n << " " << n1 << " " << ch << endl;

//     // Manually formatting float to 2 decimal places
//     cout.precision(3);       // Set precision to 2 decimal places for float
//     cout << fixed << f1 << " ";

//     // Manually formatting double to 6 decimal places
//     cout.precision(9);       // Set precision to 6 decimal places for double
//     cout << d1 << endl;

//     return 0;
// }

// binary search


// int binarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }

// peak element
// int findPeak(int arr[], int n) {

//     int s =0, e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         //cout<<" s " << s <<" e " << e << endl;
//         if(arr[mid] < arr[mid+1]){
//             s = mid+1; 
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main() { 

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     int evenIndex = binarySearch(even, 6, 6);

//     cout << " Index of 6 is " << evenIndex << endl;

//     int oddIndex = binarySearch(odd, 5, 14);

//     cout << " Index of 14 is " << oddIndex << endl;


//     return 0;
// }


// first and last occ

// int firstocc(int arr[],int n,int key){
// int start=0;
// int end=n-1;
// int ans=-1;
// int mid=(start+end)/2;
// while(start<=end){
//     if(arr[mid]==key){
//          ans=mid;
//         end=mid-1;
//     }
//     if(key>arr[mid]){
//         start=mid+1;
//     }
//     else{
//         end=mid-1;
//     }
//     mid=(start+end)/2;
// }
// return ans;
// }
// int lastocc(int arr[],int n,int key){
// int start=0;
// int end=n-1;
// int ans=-1;
// int mid=(start+end)/2;
// while(start<=end){
//     if(arr[mid]==key){
//          ans=mid;
//         start=mid+1;
//     }
//     if(key>arr[mid]){
//         start=mid+1;
//     }
//     else{
//         end=mid-1;
//     }
//     mid=(start+end)/2;
// }
// return ans;
// }
// int main(){
//     int arr[7]={2,5,5,5,6,6,8};
//    int index= firstocc(arr,7,6);
//    int index1= lastocc(arr,7,6);
// //    total no of ocuurance
// int total=(index1-index)+1;
// cout<<total<<" ";
//    cout<<index<<" ";
//    cout<<index1<<" ";
// }


// getpivot

// int getPivot(int arr[], int n) {

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {

//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main() {
//     int arr[5] = {1, 3, 8, 10, 17};
//     cout << "Pivot is " << getPivot(arr, 5) << endl;
// }

// squareroot of number using binary search
#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}