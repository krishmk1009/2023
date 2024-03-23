import "./styles.css";
import _ from "lodash";

document.getElementById("app").innerHTML = `
<h1>Hello JavaScript!</h1>
`;

const btn = document.getElementById("btn");
const pressedP = document.getElementById("pressed");
const triggeredP = document.getElementById("triggered");
let pressCount = 0;
let triggeredCount = 0;

const Mythrottle = (cb, d) => {
  let last = 0;

  return (...args) => {
    let now = new Date().getTime();

    if (now - last < d) return;
    last = now;
    return cb(...args);
  };
};
const throttleFn = Mythrottle(() => {
  triggeredP.innerHTML = ++triggeredCount;
}, 800);

btn.addEventListener("click", () => {
  pressedP.innerHTML = ++pressCount;
  console.log(pressCount);
  throttleFn();
});
