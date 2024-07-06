function solution(s) {
   
    var n = s.split('');
    var answer = [];
    
 
        if(s.length%2==0){
            answer.push(s[s.length/2-1]);
             answer.push(s[s.length/2]);
        }else if(s.length%2!=0){
         answer.push(s[Math.floor(s.length / 2)]);
        }
    
    
    return answer.join('');
}