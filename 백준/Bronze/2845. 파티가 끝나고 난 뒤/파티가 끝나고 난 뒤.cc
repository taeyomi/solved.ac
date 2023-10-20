#include <iostream>
#include <string>

int main(){
    
    int A,B;
    int c1,c2,c3,c4,c5;

    std::cout << "" << "";
    std::cin >> A >> B;

    std::cout << "" << "" << "" << "" << "";
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;

    int N = (A*B);
std::cout << c1 - N << ' ' << c2 - N << ' ' << c3 - N << ' ' << c4 - N << ' ' << c5 - N;


    return 0;
}