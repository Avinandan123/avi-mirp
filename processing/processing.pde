int displayWidth=400;
int displayHeight=800;

int ellipseColor=0;
float R=10;
int numCircles=4;

void setup() {
   size(displayWidth,displayHeight);
}
void draw() {
  bakground(0)
   
   if(mousePressed) 
     drawTarget(mouseX,mouseY,numCircles);
     delay(200);
   
}

void drawTarget(int x,int y)
  //Write your code here}
  {fill(0)
  ellipse(mouseX,mouseY,2*R,2*R)
  }