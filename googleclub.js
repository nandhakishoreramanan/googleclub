function glitch(el) {
  const original = el.textContent;
  el.textContent = original
    .split("")
    .map(ch => (Math.random() > 0.8 ? String.fromCharCode(33+Math.random()*94) : ch))
    .join("");
  setTimeout(() => { el.textContent = original; }, 150);
}
setInterval(() => glitch(document.getElementById("log")), 1000);

function typeWriter(el, text, speed = 100) {
  let i = 0;
  function typing() {
    if (i < text.length) {
      el.textContent += text.charAt(i);
      i++;
      setTimeout(typing, speed);
    }
  }
  el.textContent = "";
  typing();
}
typeWriter(document.getElementById("log"), "Login", 1200);