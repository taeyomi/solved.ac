function solution(progresses, speeds) {
    let days = [];
    let answer = [];
    let current = 0;
    
    progresses.forEach((key,index)=> days.push(Math.ceil((100-key)/speeds[index])))
    
    current = days[0];
    answer.push(1);
    
    for(let i = 1; i<days.length; i++){
        if(current<days[i]){
            answer.push(1);
            current = days[i];
        }else{
            answer[answer.length-1]++;
        }
    }
    return answer;
}