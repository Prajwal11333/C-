#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
      int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
      if(min!=i){
        swap(arr[i],arr[min]);
      }
}
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={8,1,3,2,0};
    sort(arr,5);
    printarray(arr,5);
}