// https://school.programmers.co.kr/learn/courses/30/lessons/120813

function solution(n) {
    const answer = [];

    for(let i = 1; i <= n; i++) {
        if (i % 2)
            answer.push(i);
    }
    return (answer);
}