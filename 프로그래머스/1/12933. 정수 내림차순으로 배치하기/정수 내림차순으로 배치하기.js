function solution(n) {
    
    var answer = n.toString().split('');
    
    answer.sort().reverse();
    
    return parseInt(answer.join(''));
    
}
