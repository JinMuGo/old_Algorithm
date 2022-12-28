// https://school.programmers.co.kr/learn/courses/30/lessons/120812

function solution(array) {
    const map = new Map();
    let max = 0;
    const answer = [];

    array.forEach((val) => {
        if (map.has(val)) map.set(val, map.get(val) + 1);
        else map.set(val, 1);
    });

    map.forEach((val, key) => {
        if (val > max) max = val;
    });

    map.forEach((val, key) => {
        if (max === val) answer.push(key);
    });

    if (answer.length == 1) return (answer[0]);
    else return (-1);
}