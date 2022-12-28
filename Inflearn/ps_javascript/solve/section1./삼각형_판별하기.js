import { createInterface } from 'readline';

(() => {
    const rl = createInterface({
      input: process.stdin,
      output: process.stdout
    });
    rl.on('line', function(line) {
      const args = line.split(' ').map(v => +v);
      console.log(solution(...args));
      rl.close();
    }).on("close", function() {
      process.exit();
    });
})()

function solution(a, b, c)
{
    const max = Math.max(a, b, c);
    const total = a + b + c;
    const rest = total - max;

    if (max > rest)
        return ("NO");
    else
        return ("YES");
}
