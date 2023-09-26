#include <iostream>
#include <cmath>


int main() {

    int k;
    int q;
    int l;
    int b;
    int n;
    int p;

   std::cout << "" << "" << "" << "" << "";
   std::cin >> k >> q >> l >> b >> n >> p;

   if(k > 1){
        k = -k + 1;
   }else if(k < 1){
        k = 1+(-k);
   }else if(k == 0){
        k = 1;
   }else{
        k = 0;
   }

    if(q > 1){
        q = -q + 1;
   }else if(q < 1){
        q = 1+(-q);
   }else if(q == 0){
        q = 1;
   }else{
        q = 0;
   }
   
     if(l > 2){
        l = -l + 2;
     }else if(l < 2){
        l = 2+(-l);
     }else if(l == 0){
        l = 2;
     }else{
        l = 0;
     }

    if(b > 2){
        b = -b + 2;
     }else if(b < 2){
        b = 2+(-b);
     }else if(b == 0){
        b = 2;
     }else{
        b = 0;
     }

    if(n > 2){
        n = -n + 2;
     }else if(n < 2){
        n = 2+(-n);
     }else if(n == 0){
        n = 2;
     }else{
        n = 0;
     }

    if(p > 8){
        p = -p + 8;
     }else if(p < 8){
        p = 8+(-p);
     }else if(p == 0){
        p = 8;
     }else{
        p = 0;
     }

    std::cout<< k << " " << q << " " << l << " " << b << " " << n << " " << p;
    

    return 0;


}