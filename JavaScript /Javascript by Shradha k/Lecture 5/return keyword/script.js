function sum(a, b){
    // local valiable  --> scope mtb kaha tak jinda hai 
    s = a + b;
    console.log(a); //print hua bcz local valiable hai 
    console.log("before return");
    return s;
}
let val = sum(3,4);
console.log(val);