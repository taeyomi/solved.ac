function solution(n) {
    var answer = 0;
    let sum =0;
    for(let i=1; i<=n/2; i++){
        sum+=i*2;
    }
    return sum;
}