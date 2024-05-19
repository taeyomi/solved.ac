function solution(array) {
    var answer = [];
    max = Math.max.apply(null, array)
    answer.push(max)
    answer.push(array.indexOf(max))
    return answer;
}