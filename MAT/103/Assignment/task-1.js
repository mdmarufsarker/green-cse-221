// The population of a city increases at a rate proportional to the present number. It has an initial population of 50000 that increases by 15% in 10 years. What will be the population in 30 years?

console.log(`Rate of growth is directly proportional to the present population number P(t) at time t,\n`)
console.log(`dp/dt = kp\n`)

let p0 = 50000, t, t10 = 10, t30 = 30;

console.log(`Given that,\n\t Initial population is ${p0}\n`)

let p10 = p0 + (p0 * 15 / 100);

console.log(`Population after 10 years = ${p10}\n`)

let k = -(Math.log(p0 / p10) / t10);
let p30 = p0 * Math.exp(k * t30);

console.log(`Population constant k = ${k.toFixed(3)}\n`)
console.log(`Population after 30 years = ${p30.toFixed(3)}\n`)