function solution(start_num, end_num) {
    var answer = [];
    
    for(let i=0; i<=end_num-start_num; i++){
            answer.push(start_num+i)
    }
    
    return answer;
}