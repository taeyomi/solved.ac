function solution(phone_book) {
   let phoneSet = new Set(phone_book);
    
    for(let num of phone_book){
        let start = "";
        
        for(let i=0; i<num.length-1; i++){
            
            start+=num[i];
            
            if(phoneSet.has(start)){
                        return false;
            
            }
        }
    }
    return true;
}