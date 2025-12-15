let fooditems = ["potato","lichi","dates","apple"];
// fooditems.push("chips","mango","paneer"); //push item last mein items add kar deta hai


//dono orignal array ki andar change karta hai
console.log(fooditems);
let deleteditem = fooditems.pop(); //last item deleted kar ki usko return kar deta hai
console.log(fooditems); 
console.log("Deleted items",deleteditem); 
