// https://school.programmers.co.kr/learn/courses/30/lessons/120808

function getGCD(num1, num2) {
    for(let min = Math.min(num1, num2); min >= 2; min--)
    {
        const Tnum1 = num1 / min;
        const Tnum2 = num2 / min;
        if (Number.isInteger(Tnum1) && Number.isInteger(Tnum2))
            return (min);
    }
    return (0);
}

function solution(denum1, num1, denum2, num2) {
    const maxNum = denum1 * num2 + denum2 * num1;
    const maxDeNum = num1 * num2;

    const gcd = getGCD(maxNum, maxDeNum);
    console.log(gcd)
    if (gcd)
        return ([maxNum / gcd, maxDeNum / gcd]);
    else
        return ([maxNum, maxDeNum])
}