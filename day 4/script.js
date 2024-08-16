"use strict";
/* 
syntax
    DT
        Number
            int, float
        string
            "", '', ``
        bool
            true false
        undefined
        null
        NaN
    var
    opr
    keywords
    cond st... 
    loops
    functions
    event handling 
    oops 
*/

// smingle line cmt
/* 
    multi line cms
*/

// how to create JS?
// /* let var const */
// let a;  // local scope
// let d = 45;

// var b; // global scope
// var s = 78;

// const PI = 3.14;

// a = 45;
// b = 10;

// a = 45;
// let d = 10;
// d = 25;

// let a1 = 2.545454;

// console.log(d);
// console.log("25");

// console.log(typeof d);
// console.log(typeof a1);

// let r = "helo"; // string
// let r1 = 'helo'; // string
// let r2 = `helo`; // template string
// (4+5)*6

// let s = r + r1 + (4 + 2)
//  + "world";

// let g = `${r} ${r1 } ${4+2/8} ${"hi"}`;

// console.log(g);

// console.log(typeof r);
// console.log(typeof r1);
// console.log(typeof r2);

// let d = true;
// let d = "4"/6;
// console.log( d);

/* 
    binary
        arthe
            + * / ** % -
        log 
            && || ! 
        bit
            << >> & | ~ ^
        rel
            < > <= >= == != === !==
        assign
            = a+=10 
        incre/dcre 
            ++
                post 
                pre 
            --
                post
                pre
    ternary
        a?b:c

*/
// let d = 2 ** 3;
// console.log(d);

// let a = 10; // 11
// let b = ++a; // 11
// let c = a++; // 11
// let d = --a; // 10
// let f = d--; // 11
// console.log(a+b+c+d+f);

// let d = (1!=1) ? 10:20;

/* 
    if
    if else
    else if 
    nested if 
    switch case 
*/

// if( "10" < 20)
// {
//     console.log("helo");
// }
// else if(1 == 1)
// {
//     console.log("world");
// }
// else if(1 != 1)
// {
//     console.log(12);
// }

// if (1 == 1)
// {
//   if ("10" != 10) {
//     console.log("12");
//   }
//   else if (10 === 10)
//       console.log("10");

//   console.log("world");
// }

// switch (451) {
//   case "key":
//     console.log("helo");
//     console.log("helo1");
//     break;
//   case "10":
//     console.log("helo0");
//     console.log("helo2");
//     break;
//   case 10:
//     console.log("heqwlo0");
//     console.log("helo2");
//     break;
//   case 23:
//     console.log("helo3");
//     console.log("helo4");
//     break;
//   default:
//     console.log("qwerty");
// }

// for
//               8
//               5     7
///     1        2      4
// for (var i = 0; i < 2; i++) {
//   console.log("i" + i); // 3 6
// }
// console.log(i);

// let i = 0;
// do
// {
//   console.log("i" + i);
//   i++;
// } while (i < 2);

// console.log(i);

// functions  3types
// named funs
// anyonomaous funs
// arrow funs

// function abc(a, b, c) {
//   console.log(a + b + c);
// }
// function abcd(a) {
//   return a ** a;
// }

// let abc = function (a, b, c) {
//   console.log(a + b + c);
// };
// let abcd = function (a) {
//   return a ** a;
// };

// let sq = (a, b) => a * b;
// let d = sq(4, 6);
// console.log(d);
