function solution(n) {
    var answer = 0;
    answer = Math.sqrt(n);
    if(Number.isInteger(answer)==true){
        return Math.pow(answer+1,2);
    }else{
        return -1;
    }
    return answer;
}