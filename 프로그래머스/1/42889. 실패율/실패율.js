function solution(N, stages) {
  let answer = [];
  let user = stages.length;

  for(let i = 1; i < N + 1; i++) {
      let failUser = stages.filter(stage => stage === i).length;
    answer.push([i, failUser / user]);
    // 실패한 사람은 제외
    user -= failUser;
  }

  answer = answer.sort((a, b) => b[1] - a[1]);
  return answer.map(element => element[0])
}