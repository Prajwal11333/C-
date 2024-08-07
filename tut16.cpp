// stl c++
// array
#include<iostream>
#include<array>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<map>
using namespace std;
// int main(){
//     // int arr[4]={2,3,4,5};
//     array<int,4> a={2,3,4,5};
//     int size=a.size();
//     for(int i=0;i<=size;i++){
//         cout<<a[i]<<" "<<endl;
//     }
//     cout<<"element at 2nd index"<<a.at(2)<<endl;
//     cout<<a.front()<<endl;
//     cout<<a.back()<<endl;
//     // boolean
//     cout<<a.empty()<<endl;
// }

// vector

// int main(){
// vector<int> v;
// vector<int>a(5,1);
// vector<int>last(a);
// cout<<"print last"<<endl;
// for(int i:last){
//     cout<<i<<" ";
// }cout<<endl;
// cout<<"capacity->"<<v.capacity() <<endl;
// v.push_back(1);
// cout<<"capacity->"<<v.capacity() <<endl;
// v.push_back(2);
// cout<<"capacity->"<<v.capacity()<<endl;
// v.push_back(3);
// cout<<"capacity->"<<v.capacity()<<endl;

// cout<<"size->"<<v.size()<<endl;

// cout<<"elements at 2nd index->"<<v.at(2)<<endl;

// cout<<"front->"<<v.front()<<endl;
// cout<<"bacl->"<<v.back()<<endl;

// cout<<"before pop"<<endl;
// for(int i:v){
//     cout<<i<<" "; 
// }cout<<endl;
// v.pop_back();
// cout<<"after pop"<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }
// }


// deque
// #include<deque>
// int main(){
// deque<int>d;
// d.push_front(2);
// d.push_back(1);
// //  cout<<"print index element"<<d.at(1)<<endl;
// // for(int i:d){
// //     cout<<i<<" ";
// // }
// cout<<"front"<<" "<<d.front()<<endl;
// cout<<"back"<<" "<<d.back()  <<endl;
// // d.pop_back();
// // d.pop_front();
// // for(int i:d){
// //     cout<<i<<" ";
// // }

// cout<<"befor erase"<<d.size()<<endl;
// // from where to where delete can be dont
// // deleting first element
// d.erase(d.begin(),d.begin()+1);
// cout<<"after erase"<<d.size()<<endl;
// // printing left element
// for(int i:d){
//     cout<<i<<endl;
// }
// }


// list
// int main(){
//     list<int> l;
//     list<int> n(5,100);
//     cout<<"printing n"<<endl;
//     for(int i:n){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.push_back(1);
//     l.push_front(2);
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<" after erase"<<" ";
//     for(int i:l){
//         cout<<i;
//         }
//  cout<<endl;
//         cout<<"size of list"<<l.size()<<endl;
// }


// stack
// int main(){
//     // stack<int> s;
//     stack<string> s;
//     s.push("shashank");
//     s.push("pruthvi");
//     s.push("pavan");

//     cout<<"top element->"<<s.top()<<endl;
//     s.pop();
//     cout<<"top element->"<<s.top()<<endl;

//     cout<<"size of stack"<<s.size()<<endl;

//     cout<<"empty or not"<<s.empty()<<endl;

// }

// queue
// int main(){
//     queue<string> q;
    
//     q.push("prajwal");
//     q.push("prashanth");
//     q.push("pradeep");

//     cout<<" size before pop"<<q.size()<<endl;
//     cout<<"first element"<<q.front()<<endl;
//     q.pop();
//     cout<<"first element"<<q.front()<<endl;
    
//     cout<<"size after the pop"<<q.size()<<endl;
// }

// priority queue
// int main(){
// // max heap
// priority_queue<int> maxi;

// // min heap
// priority_queue<int,vector<int> ,greater<int> > mini;

// maxi.push(1);
// maxi.push(3);
// maxi.push(2);
// maxi.push(4);
// maxi.push(0);

// cout<<"size->"<<maxi.size()<<endl;
// int n=maxi.size();
// for(int i=0;i<n;i++){
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }

// mini.push(5);
// mini.push(4);
// mini.push(3);
// mini.push(1);

// cout<<"size->"<<mini.size()<<endl;
// int n1=mini.size();
// for(int i=0;i<n;i++){
//     cout<<mini.top()<<" ";
//     mini.pop();
// }
// }

// int main(){
//     set<int> s;

//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(2);
//     s.insert(4);
//     s.insert(3);

//     for(auto i:s){
//         cout<<i<<endl;
//     }cout<<endl;
// // erase or delete
//     set<int>::iterator it =s.begin();
//     it++;
//     s.erase(it);
//     for(auto i:s){
//         cout<<i<<endl;
//     }
// cout<<"5 is present or not"<<s.count(5)<<endl;

// set<int>::iterator itr=s.find(5);
// for(auto it=itr;it!=s.end();it++){
//     cout<<*it<<" ";
// }
// cout<<endl;
// // cout<<"value present at itr"<<itr<<endl
// }

int main(){
    map<int, string> m;

    m[1]="prajwal";
    m[2]="shahsank";
    m[3]="prash";
 m.insert({5,"bheem"});  
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 5->"<<m.count(5)<<endl;

    m.erase(5);
    for(auto i:m){
         cout<<i.first<<" "<<i.second<<endl;
    }
cout<<endl<<endl;
    auto it =m.find(1);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}