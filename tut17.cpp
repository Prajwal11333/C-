#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(6);
// binary search
cout<<"finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;

cout<<"upper bound"<<upper_bound(v.begin(),v.end() ,6)-v.begin()<<endl;
cout<<"lower bound"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;

int a=5;
int b=6;

cout<<"max"<<max(a,b);

cout<<"min-"<<min(a,b)<<endl;

swap(a,b);
cout<<"a->"<<a<<endl;

string abcd="abcd";
reverse(abcd.begin(),abcd.end());
cout<<"string-"<<abcd<<endl;
 
 rotate(v.begin(),v.begin()+1,v.end());
 cout<<"after roatate"<<endl;
 for(int i:v){
    cout<<i<<" ";
 }
 sort(v.begin(),v.end());
 cout<<"after sort"<<endl;
 for(int i:v){
    cout<<i<<" ";
 }
}