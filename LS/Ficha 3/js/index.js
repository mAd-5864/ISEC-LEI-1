'use strict';
const panelControl = document.querySelector('#panel-control');
const panelGame = document.querySelector('#game');
const btLevel = document.querySelector('#btLevel');
const btPlay = document.querySelector('#btPlay');
const nPares = 3
let cards= document.querySelectorAll(".card")

let cardLogos = ["angular" ,"bootstrap" ,"html" ,"javascript" ,"vue" ,"svelte" ,"react" ,"css" ,"backbone" ,"ember"]


// ------------------------
// Funções Genéricas
// ------------------------
function reset() {

     message.classList.remove('hide');
     if (btLevel.value === '0')
          btPlay.disabled = true
     else {
          btPlay.disabled = false;
          panelGame.style.display = 'grid';
     }
     const elementos = panelControl.querySelectorAll('.list-item');
     elementos.forEach(elemento => {
          elemento.classList.remove('gameStarted');
     });
}

function startGame() {
     message.classList.add('hide');
     btLevel.disabled = true;
     btPlay.textContent = 'Terminar Jogo';
     const elementos = panelControl.querySelectorAll('.list-item');
     elementos.forEach(elemento => {
          elemento.classList.add('gameStarted')
     });
     shuffleArray(cardLogos);
     let gameCards = cardLogos.slice(0,nPares);
     gameCards = gameCards.concat(gameCards);
     shuffleArray(gameCards);
     console.table(gameCards)
     
     for (let i = 0; i < cards.length; i++) {
          cards[i].onclick = flipCard;
          cards[i].dataset.logo = gameCards[i];
          cards[i].querySelector(".card-front").src=`images/${gameCards[i]}.png`    
     }
     //showCards();
}
function stopGame() {
     btPlay.textContent = 'Iniciar Jogo'
     btLevel.disabled = false;
     reset();
     hideCards();
}
// Algoritmo Fisher-Yates - Algoritmo que baralha um array.
function shuffleArray(array) {
     for (let i = array.length - 1; i > 0; i--) {
          const j = Math.floor(Math.random() * (i + 1));
          const temp = array[i];
          array[i] = array[j];
          array[j] = temp;
     }
     console.log("Array Shuffled")
}
function flipCard() {
     this.classList.add("flipped");
}
function showCards() {
     for (const card of cards) {
          card.classList.add("flipped")
     }
}
function hideCards() {
     for (const card of cards) {
          card.classList.remove("flipped")
     }
}
// ------------------------
// Event Listeners
// ------------------------
btLevel.addEventListener('change', reset);
btPlay.addEventListener('click', () => (btPlay.textContent == 'Terminar Jogo') ? stopGame() : startGame());


reset();