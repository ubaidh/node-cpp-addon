const {IsPrime} = require('./build/Release/addon'); // native c++
const isPrime = require('./isPrime'); // js

console.time("c++");
console.log(`c++ check 654188429 is prime... ${IsPrime(654188429)}`);
console.timeEnd("c++");
console.log('');
console.time("js");
console.log(`js check 654188429 is prime... ${isPrime(654188429)}`);
console.timeEnd("js");