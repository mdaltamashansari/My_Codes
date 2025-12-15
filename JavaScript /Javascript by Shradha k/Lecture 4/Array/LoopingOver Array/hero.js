let heros = ["AbuBakr","Umar","usman","Ali"];
// console.log(heros[0]);
// console.log(heros[1]);  //ye standard tariqa nhi hai
// console.log(heros[2]);

// loop ka asal kaam iratable (iratable-->string,object,array)

// using for loop
// for(let i=0; i < heros.length;i++){
//   console.log(heros[i]);    //standard tarika hai ye
// }  

for (let el of heros){
    console.log(el);
}