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
    return (Math.min(a, b, c));
}
