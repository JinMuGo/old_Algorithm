// 마라톤에 참여한 선수들의 이름이 담긴 배열 participant
// 완주한 선수들의 이름이 담긴 배열 completion
function solution(participant, completion) {
    let max = Number.MIN_SAFE_INTEGER;
    const hash = new Map();
    let answer = "";

    if (participant.length == 0)
        return "";

    participant.forEach((val, idx) => {
        if (hash.has(val))
            hash.set(val, hash.get(val) + 1);
        else
            hash.set(val, 1);
    })

    hash.forEach((val, key) => {
        if (answer)
            return ;
        if (!completion.includes(key))
            answer = key;
    })
    if (!answer)
    {
        hash.forEach((key, val) => {
            if (max < key)
            {
                answer = val;
                max = key;
            }
        })
    }
    return (answer);
}

// solution(["leo", "kiki", "eden"], ["eden", "kiki"]);
console.log(solution(["marina", "josipa", "nikola", "vinko", "filipa"], ["josipa", "filipa", "marina", "nikola"]))
// solution(["mislav", "stanko", "mislav", "ana"], ["stanko", "ana", "mislav"]);