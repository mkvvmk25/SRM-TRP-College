let up = document.querySelector(".up");
let down = document.querySelector(".down");
let h1num = document.querySelector(".number");

console.log(h1num.textContent);

let num = 0;

down.addEventListener(
    "click", 
    function () 
    {
        num--;
        h1num.textContent = num; 
    }
);
up.addEventListener(
    "click", 
    function () 
    {
        num++;
        h1num.textContent = num; 
    }
);

// console.log(up);
// console.log(down);
// console.log(h1num);
