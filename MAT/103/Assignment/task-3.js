// Under certain conditions, cane sugar is converted into dextrose at a rate, which is proportional to the amount unconverted at any time. If out of 75 grams of sugar at t = 0, 8 grams are converted during the first 3 minutes, find the amount converted in 1.5 hours.

console.log(`Let M be the amount of cane sugar initially\n`);
console.log(`m be the amount of case sugar converted into dextrose\n`);
console.log(`dm/dt = k(M - m)\n`);

let m = 0, m0 = 75, m3 = 8, t0 = 0, t3 = 3, t90 = 90;

console.log(`Given that, \n\t Initial amount of cane sugar is ${m0} grams\n`);
console.log(`Mass after 3 minutes = ${t3}\n`);

let k = - (Math.log((m0 - m3) / m0) / t3)
let M = m0 - (m0 * (Math.exp(-t90 * k)))

console.log(`Proportional constant k = ${k.toFixed(3)}\n`);
console.log(`Temperature after 3 minutes = ${M.toFixed(3)}\n`);