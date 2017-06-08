void setup() {
size(displayWidth, displayHeight);
resetGame();
textFont(createFont("Arial Bold", 50));
}
void draw() {
 drawGameScreen ();
}
void drawGameScreen() {
background(bgColor);
detectKeys();

updateBallVelocity();
updateBallPosition();
updatePaddleVelocity();

updatePaddlePosition();
resolveCollisions();
drawBall();
drawPaddles();
}
void drawBall() {
fill(ballColor);
ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
}
void drawPaddles() {
  fill(paddleColor);
  rectMode(CENTER);
  rect(displayWidth,rightPaddle,paddleWidth,paddleLength);
  rectMode(CENTER);
  rect(0,leftPaddle,paddleWidth,paddleLength);
}
void resetGame(){
// Reset Ball and Paddle Positions
ballX=displayHeight/2;
ballY=displayWidth/2;
ballVx=4;
ballVy=2;
}
void displayScores() {
// Display Left and Right player Scores
}