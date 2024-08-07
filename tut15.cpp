#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>= 0&& arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={8,4,2,3,7};
    insertionsort(arr,5);
    printarray(arr,5);
}