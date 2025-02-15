let marks =[85,97,44,37,78,60];
let sum=0;
for(let val of marks){
    sum += val;
}
let avg=sum/marks.length;
console.log(`avg marks of a class = ${avg}`);