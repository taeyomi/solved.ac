function solution(clothes) {
    let cloSet = new Map();
    var answer = 1;
    for(let[name,type] of clothes){
        if(cloSet.has(type)){
            cloSet.set(type, cloSet.get(type)+1);
        }else{
            cloSet.set(type,1);
        }
    }
    for(let i of cloSet.values()){
        answer *= (i+1);
    }
    
    answer -= 1;
    return answer;
    
   
}