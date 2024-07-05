function solution(arr) {
    var answer = [];
    
    var t = Math.min(...arr);
    answer = arr.filter(item => item!= t);
    return answer.length>1 ? answer : [-1];
}