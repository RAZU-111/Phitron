#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(40);
    pq.push(20);
    pq.push(30);
    pq.push(10);
    while(pq.size() !=0){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}