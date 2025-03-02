/**
 * Create an array of names of senoir employees
 */

const employees = [
  {
    name: "Altamash",
    numOfYears: 5,
  },
  {
    name: "Imran",
    numOfYears: 3,
  },
  {
    name: "Aftab",
    numOfYears: 1,
  },
  {
    name: "kaif",
    numOfYears: 1,
  },
  {
    name: "unknown",
    numOfYears: 5,
  },
];

const result = employees
  .filter((employee) => employee.numOfYears > 3)
  .map((employee) => employee.name);
console.log(result);
