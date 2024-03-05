
#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n,k;
    vector<int> numbers;

    cin>>n>>k;
    
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        numbers.push_back(num);
    }
std::sort(numbers.begin(), numbers.end());
  
     cout<<numbers.at(k-1);




    return 0;
}
