import "./styles.css";
import _ from "lodash";
document.getElementById("app").innerHTML = `
<h1>Hello JavaScript!</h1>
`;

const btn = document.getElementById("btn");

const pressedP = document.getElementById("pressed");

const triggeredP = document.getElementById("triggered");
let presseCount = 0;
let triggeredCount = 0;

btn.addEventListener("click", () => {
  pressedP.innerHTML = ++presseCount;
  console.log(presseCount);
  debounceCount();
});

function debouncePolly(cb, d) {
  let timer;

  return function (...args) {
    if (timer) clearTimeout(timer);
    timer = setTimeout(() => {
      cb(...args);
    }, d);
  };
}

const debounceCount = debouncePolly(
  () => {
    triggeredP.innerHTML = ++triggeredCount;
  },
  [800],
  []
);
