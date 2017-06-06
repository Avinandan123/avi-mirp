void drawCircles(float R,int N) {
    for(int i=0; i< N ; ++i)
      for(int j=0 ; j<N ; ++j)
ellipse(mouseX,mouseY,2+R,2*R);
}