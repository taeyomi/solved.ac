function solution(a, b) {
    var answer = '';
    var len = a.length;
    var add= 0;
    
    for (let i=0; i<len; i++){
        add+=a[i]*b[i];
    }
    
    
    return add;
}