#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(){

    int k;

    cin>>k;

    stack<int> stack_;

    while(k--){

        int n;
        cin>>n;

        if(n!=0){
            stack_.push(n);
        }else{
            if(!stack_.empty()){
                stack_.pop();
            }
        }
    }

    int sum=0;

    while(!stack_.empty()){

        sum += stack_.top();
        stack_.pop();
    }

    cout<< sum <<'\n';

    return 0;
}