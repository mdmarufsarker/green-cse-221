// The rate at which a super computer body cools is proportional to the difference between the temperatureof the body and that of the surrounding air. If a body in the air at 25°C will cool from 100°C to 75°C in one minute, find its temperature at the end of three minutes.

console.log(`Let temperature of the body be T(t) and temperature of the surrounding air be T(0).\n`)
console.log(`dt/dt = k(T - 25)\n`)

let t0 = 100, tl = 25, t1 = t0 - tl, t3 = 3;

console.log(`Given that,\n\t Initial temperature is ${t0}\n`);
console.log(`Temperature after 1 minute = ${t1}\n`);
console.log(`Temperature difference = ${tl}\n`);

let k = Math.log((t1 - tl) / t1)
let t = tl + t1 * Math.exp(k * t3);

console.log(`Proportional constant k = ${k.toFixed(3)}\n`);
console.log(`Temperature after 3 minutes = ${t.toFixed(3)}\n`);