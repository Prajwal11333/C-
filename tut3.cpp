#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int space=n-1;
    while(space){
        cout<<" ";
        space--;
    }
    int j=1;
    while(j<=n){
     cout<<j;
     j++;
    }
    i++;
    int start=i-1;
    while(start){
        cout<<start;
        start--;
    }
}