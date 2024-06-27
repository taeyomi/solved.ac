function solution(num_list) {
    var answer = 0;
    let even = [];
    let odd = [];
    
    for(let i =0; i<num_list.length; i++){
        if(num_list[i]%2==0){
            even.push(num_list[i]);
        }else{
            odd.push(num_list[i]);
        }
    }
    let even1 = even.join('');
    let odd1 = odd.join('');
    
    answer = parseInt(even1)+parseInt(odd1);
    
    return answer;
}