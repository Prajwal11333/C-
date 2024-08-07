// #include<iostream>
// using namespace std;
// // bubble sort
// void bubblesort(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     } 
// int main(){
//     int arr[5]={9,5,2,1,3};
//     bubblesort(arr,5);
//     printarray(arr,5);
// }

#include<iostream>
#include<type_traits>
using namespace std;
int peakfind(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}
// void printarray(int arr[],int n){
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr[i]<<" ";
    }
    cout<<peakfind(arr,n)<<" ";
    // printarray(arr,n);
}
