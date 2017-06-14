float previousError= 0.0, currentError;
float angleError =0.0;

void solution (){
  currentError=desiredX-ballX;
  float Kp=0.0002,Kd=0.005;
  float val=Kp*currentError;
  float speed=currentError-previousError;
  val +=Kd*speed;
  gotoAngle(val);
  previousError=currentError;
}