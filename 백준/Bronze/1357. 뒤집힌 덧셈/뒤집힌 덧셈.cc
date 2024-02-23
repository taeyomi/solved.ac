#include <iostream>
#include<vector>
using namespace std;
#include <string>
#include <algorithm>

int main() {
    string result;
    string X,Y;
    int x,y;
    int sum;
    std::cin>>X>>Y;
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());

    x = stoi(X);
    y = stoi(Y);

    sum = x + y;
    result = to_string(sum);

    reverse(result.begin(), result.end());
    cout<<stoi(result)<<endl;
    return 0;

}