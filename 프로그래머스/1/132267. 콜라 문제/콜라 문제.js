function solution(a, b, n) {
    let num = 0;
     while(n>=a){
         const exchange = Math.floor(n/a)*b;
         num+=exchange;
         n = exchange + (n%a);
     }
    return num;
}