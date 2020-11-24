import { update as opdateSnake, draw as drawSnake, SNAKE_SPEED } from './game.js' 

let lastRenderTime = 0
const SNAKE_SPEED = 1


function main(currentTime) {
    window.requestAnimationFrame(main)
    const secondsSincelastRender = (currentTime-lastRenderTime)/1000
    if (secondsSincelastRenderm< 1 /SNAKE_SPEED) return


    console.log(currentTime)
    lastRenderTime =currentTime

    update()
    draw()
}
window.requestAnimationFrame(main)

function update() {
   updateSnake()
}
function draw() {
drawSnake()
}