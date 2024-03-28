
#include<iostream>
using namespace std;
#include <queue>

queue<int>q;

int main(){
    int n;

    cin>>n;

    for (int i=1; i<=n; i++){
        q.push(i);
    }

    while(q.size()!=1){
       

            q.pop();
            q.push(q.front());
            q.pop();
       
    }
 cout << q.front();

}