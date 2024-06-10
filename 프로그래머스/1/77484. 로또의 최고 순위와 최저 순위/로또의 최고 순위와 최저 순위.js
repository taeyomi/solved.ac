function solution(lottos, win_nums) {
    let num = 0;
    let zeroCount = 0;

    // lottos에서 0의 개수를 세고 win_nums와 매칭되는 숫자의 개수를 세기
    for (let i = 0; i < lottos.length; i++) {
        if (lottos[i] === 0) {
            zeroCount++;
        } else if (win_nums.includes(lottos[i])) {
            num++;
        }
    }

    // 순위를 계산하는 함수
    function getRank(count) {
        switch (count) {
            case 6: return 1;
            case 5: return 2;
            case 4: return 3;
            case 3: return 4;
            case 2: return 5;
            default: return 6;
        }
    }

    // 최고 순위와 최저 순위 계산
    const maxRank = getRank(num + zeroCount);
    const minRank = getRank(num);

    return [maxRank, minRank];
}
