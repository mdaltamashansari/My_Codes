let score = prompt("Enter your Score(0-100) = ");
let grade;
if(score>80) {
    grade = "A";
}
else if(score>70){
    grade = "B";
}
else if(score>60){
    grade = "C";
}
else if(score>50){
    grade = "D";
}
else {
    grade = "Fail";
}
console.log("According to Your score your Grade is = ",grade);