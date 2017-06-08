void updateBallVelocity() {
  // Detect Ball collisions with walls or paddles
  // If collide with paddle, or top/bottom wall, then bounce off
  // If collides with left wall, right player gains one point
  // If collides with right wall, left player gains one point
}

void updateBallPosition() {
  ballX += ballVx;
  ballY += ballVy;  
}



void updatePaddleVelocity(){
}


void resolveCollisions() {

if (ballX > displayHeight-ballRadius){
ballX = displayHeight-ballRadius;
ballVx *= -1;
}

if (ballX <ballRadius){
ballX =ballRadius;
ballVx *= -1;
}

if (ballY > displayHeight-ballRadius){
ballY = displayHeight-ballRadius;
ballVy *= -1;
}

if (ballY <ballRadius){
ballY = ballRadius;
ballVy *= -1;
}
// Resolve Collisions with all other walls.
}
void updatePaddlePosition() {
  leftPaddle+=leftPADDLE_VELOCITY;
  rightPaddle+=rightPADDLE_VELOCITY;
  println(leftPaddle);
  if(leftPaddle>displayHeight)
    leftPaddle=displayHeight;
    
    if(leftPaddle<paddleLength/2)
      leftPaddle=paddleLength/2;
       leftPaddle+=leftPADDLE_VELOCITY;
       
  if(rightPaddle>displayHeight)
    rightPaddle=displayHeight;
    
    if(rightPaddle<paddleLength/2)
      rightPaddle=paddleLength/2;
}
void updatePaddleCollison(){
  if(ballX < paddleWidth + ballRadius)
      ballX=paddleWidth + ballRadius ;
    
      if(ballY < leftPaddle + paddleLength/2)
      ballY = leftPaddle + paddleLength/2 ;
      

      ballY = leftPaddle - paddleLength/2 ;
}