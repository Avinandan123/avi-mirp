int white=255,black=0;

void drawTarget(float x, float y,int N){
   for(int i=N;i>0;i--) {
     if(i%2 ==0)
       fill(white);
      else
       fill(