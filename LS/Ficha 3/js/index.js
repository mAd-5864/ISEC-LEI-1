'use strict';
const panelControl = document.querySelector('#panel-control');
const panelGame = document.querySelector('#game');
const btLevel = document.querySelector('#btLevel');
const btPlay = document.querySelector('#btPlay');

let cardLogos = ["angular" ,"bootstrap" ,"html" ,"javascript" ,"vue" ,"svelte" ,"react" ,"css" ,"backbone" ,"ember"]
let flippedCards =[]; 


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
     /*      for (const card of cards) {
          card.classList.remove("inative"); 
          card.querySelector(".card-front").classList.remove("grayscale")
          card.onclick = "";
     } */
     panelGame.innerHTML=""
}

function startGame() {
     message.classList.add('hide');
     btLevel.disabled = true;
     btPlay.textContent = 'Terminar Jogo';
     const elementos = panelControl.querySelectorAll('.list-item');
     elementos.forEach(elemento => {
          elemento.classList.add('gameStarted')
     });
     
     let nPares = btLevel.value
     for (let i = 0; i < nPares*2; i++) {
          panelGame.innerHTML+=`
          <div class="card" data-logo="">
          <img src="images/ls.png" class="card-back" />
          <img src="" class="card-front" />
          </div>`
     }
     if (btLevel.value==6) {
          panelGame.className="intermedio"
     } else if (btLevel.value==10) {
          panelGame.className="avancado"
     } else {panelGame.className=""}
     let cards= document.querySelectorAll(".card")
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
     hideCards(cards);
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
     flippedCards.push(this);
     //this.removeAttribute("onclick");
     this.onclick = "";
     checkPair();
}
function checkPair() {
     if (flippedCards.length==2) {
          if (flippedCards[0].dataset.logo==flippedCards[1].dataset.logo) {
               for (const card of  flippedCards) {
                    card.classList.add("inative");
                    card.querySelector(".card-front").classList.add("grayscale")
               }
               console.log("Iguais")
               flippedCards=[];
          } else {
               console.log("Diferentes")
               setTimeout(() => {
                    hideCards(flippedCards);
                    flippedCards=[];
               }, 1500); 
          }
     }
}
function showCards() {
     for (const card of cards) {
          card.classList.add("flipped")
     }
}
function hideCards(array) {
     for (const card of array) {
          card.classList.remove("flipped")
          card.onclick = flipCard
     }
}
// ------------------------
// Event Listeners
// ------------------------
btLevel.addEventListener('change', reset);
btPlay.addEventListener('click', () => (btPlay.textContent == 'Terminar Jogo') ? stopGame() : startGame());


reset();