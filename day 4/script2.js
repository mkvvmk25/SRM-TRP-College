let arr = [45, 2.15, "str", true, null, undefined, NaN, [7, 8, 9]];

// for(let i = 0; i < arr.length; i++)
// {
//     console.log(arr[i]);
// }
// console.log(arr[arr.length - 1]);
// arr.push(10);
// arr.pop();
// arr.pop();
// arr.pop();
// arr.shift();
// arr.shift();
// arr.shift();
// arr.unshift(80);
// console.log(arr);

// oops
// class and objects
// /pillars of OOP
// abstract
// encap
// poly..
// inher

class Human {
  #habbits;
  constructor(fnamev, agev) {
    // definr class atributes
    this.fname = fnamev;
    this.age = agev;
    this.#habbits = [];
  }

  setHabbit(hab) {
    this.#habbits.push(hab);
  }
  getHabbit() {
    return this.#habbits;
  }

  aboutMe() {
    console.log(`hi I am ${this.fname} my age is ${this.age}`);
  }
}

class Student extends Human 
{

  constructor(fname, age, dept, roll) {
    super(fname, age);
    this.department = dept;
    this.rollNo = roll;
  }
}

let raj = new Student("raj", 20, "ECE", 101);
console.log(raj);
