/**
 * Arrays ⚡⚡ --> Non-Primitive Data Type
 */

let s1 = "Altamash";
let s2 = "Aftab";
let s3 = "Ali";
let s4 = "Adnan";

let studentsName = ["abu", "Umar", "Bina", "Ahmad", "usman", "Piyush", "Amit", "Kirti", "Sadaf", "Chinmoy"];

let arrLength = studentsName.length;

for (let i=0; i<arrLength; i++){
    console.log(studentsName[i]) // studentsName[10]
}

/** for let of */

// for (let name of studentsName){
//     console.log(name);
// }

/** for let in */

// for (let index in studentsName){
//     console.log(studentsName[index])
// }