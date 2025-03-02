/**
 * Average-Age of Family members
 */

const familyMembers = [
  {
    name: "Altamash",
    age: 56,
  },
  {
    name: "asif",
    age: 52,
  },
  {
    name: "imran",
    age: 30,
  },
  {
    name: "kaif",
    age: 27,
  },
  {
    name: "cat",
    age: 50,
  },
];

const totalAge = familyMembers.reduce((acc, cur) => acc + cur.age, 0);
const averageAge = totalAge / familyMembers.length;
console.log(averageAge);
