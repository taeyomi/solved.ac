#include <iostream>
#include <string>

int main(){
    
    std::string N;

    std::cout << "";
    std::cin >> N;

    if(N.length()%10==0){
        int A = N.length()/10;
        for(int i =0; i<A; ++i){
            std::cout << N.substr(i*10,10)<<std::endl;
        }

    }else{
       int A = N.length()/10;
     
       for(int i = 0; i<A; ++i){
        std::cout << N.substr(i*10,10) <<std::endl;
       }
       std::cout << N.substr(A * 10) <<std::endl;
    }


    return 0;
}