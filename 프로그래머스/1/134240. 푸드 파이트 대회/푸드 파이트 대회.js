function solution(food) {
    var answer = [];
    
   for(let i = 1; i < food.length; i++) {
    const num = Math.floor(food[i] / 2);
    for (let j = 0; j < num; j++) {
        answer.push(i);     
    }      
}    
     answer.push(0);
    
    for(let i = food.length - 1; i > 0; i--) {
    const num = Math.floor(food[i] / 2);
    for (let j = 0; j < num; j++) {
        answer.push(i);
    }
}
    

    return answer.join('');
}