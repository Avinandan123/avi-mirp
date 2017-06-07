void setup() {
size(displayWidth, displayHeight);
resetGame();
textFont(createFont("Arial Bold", 50));
}
void draw() {
drawGameScreen();
}
void drawGameScreen() {
// Draw background
// Update Ball Velocity and Resolve Collisions
// Update Ball and Paddle Positions
// Draw Ball and Paddles
// Display Scores
}
void drawBall() {
 ballRadius =10;
 ballColor =255;
}
void drawPaddles() {
  paddleLength=2;
  paddleWidth=3;
  paddleColor=(0);
 
}
void resetGame(){
// Reset Ball and Paddle Positions
// Reset Ball Velocity
}
void displayScores() {
// Display Left and Right player Scores
}