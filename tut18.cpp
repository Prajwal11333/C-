#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
// void reversearr(int arr[],int n,int m){
//     // m position question
//     // int start=m+1;
//     int start=0;
//     int end =n-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         {
//             start++;
//             end--;
//         }

//     }
// }
// void printarray(int arr[],int n){
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int m;
// int arr[5]={1,2,3,4,5};
// reversearr(arr,5,2);
// printarray(arr,5);
// }

// vector form
// vector<int>reverse(vector<int> v){
//     int s=0;
//     int e=v.size()-1;
//     while(s<e){
//         swap(v[s],v[e]); 
//             s++;
//             e--;
        
//         return v;
//     }
// }
// void print(vector<int> v){
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
// vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);

// vector<int> ans=reverse(v);
// cout<<"printing the revrse array"<<endl;
// print(ans);

// }


// merge sorted is_array
// void mergesort(int arr1[],int n,int arr2[],int m,int arr3[]){
//     int i=0;
//     int k=0;
//     int j=0;
//     while(i<n && j<n){
//        if(arr1[i]<arr2[j]){
//         arr3[k++]=arr1[i++];
//        }
//        else{
//         arr3[k++]=arr2[j++];
//        }
//     }
//     // if elements left means
//     while(i<n){
//         arr3[k++]=arr1[i++];
//     }
//     while(j<n){
//         arr3[k++]=arr2[j++];
//     }
// }
// void printarray(int arr[],int n){
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr1[4]={1,2,3,4};
//     int arr2[2]={5,6};
//     int arr3[10]={0};
//     mergesort(arr1,4,arr2,2,arr3);
//     printarray(arr3,8);
// }


// move Zeros 
// void movezeros(int arr[],int n){
//      int i=0;
//     for(int j=0;j<n;j++)
//         if(arr[j]!=0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n;
//    int arr[5]={0,1,0,3,2};
//    movezeros(arr,n);
//    print(arr,n);
//     }

// #include <iostream>
// #include <algorithm> // For std::swap

// using namespace std;

void movezeros(int arr[], int n) {
    int i = 0; // This is the index where the next non-zero element should be moved.
    for (int j = 0; j < n; ++j) { // Loop through the array.
        if (arr[j] != 0) { // If the current element is not zero.
            swap(arr[i], arr[j]); // Swap the current element with the element at index i.
            ++i; // Move the index i to the next position.
        }
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl; // Add a newline at the end for better readability.
}

int main() {
    const int n = 5; // Define the size of the array.
    int arr[n] = {0, 1, 0, 3, 2}; // Initialize the array with the given values.
    movezeros(arr, n); // Call the function to move zeros.
    print(arr, n); // Print the modified array.
    return 0;
}

