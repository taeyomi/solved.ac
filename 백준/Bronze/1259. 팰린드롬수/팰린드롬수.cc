#include <iostream>
#include<vector>
using namespace std;
#include <string>
#include <algorithm>

int main() {
    
    string n;
   while(n!="0"){
        cin>>n;
        string k = n;

        reverse(n.begin(), n.end());
        if(n=="0"){
            break;
        }
        else if(n == k){
            cout << "yes\n";

        }else{
            cout <<"no\n";
        }

   }

    return 0;

}