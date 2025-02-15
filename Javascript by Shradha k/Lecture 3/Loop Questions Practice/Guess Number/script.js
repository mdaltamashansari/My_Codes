//practice Question 2
let gameNum=25;
let userNum = prompt("Guess the Game Number?");
while (userNum != gameNum) {
    userNum = prompt("you Enter a wrong Number. Guess Again? ");
}
console.log("Congration U Enter A Right Number");