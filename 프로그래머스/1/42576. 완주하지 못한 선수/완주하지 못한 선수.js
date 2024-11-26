function solution(participant, completion) {
    let answer = "";
   let part = new Map();
    for(let p of participant){
        part.set(p, part.get(p)+1||1);
    }
    for(let c of completion){
        if(part.get(c)===1){
            part.delete(c);
        }else {
            part.set(c, part.get(c) - 1);
        }
    }
    for(let [key,value] of part){
        answer = key;
    }
    return answer;
}