function solution(x) {
    var arr = String(x).split('');
    var sum = 0;
    
    for(let i=0; i<arr.length; i++){
        sum += Number(arr[i]) // 1+8
    }
    
    return (x%sum==0)? true:false;
    
    
}