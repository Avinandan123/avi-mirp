
#define Yp A0
#define Yn A2
#define Xp A1
#define Xn A3
//Define your screen resolution as per your Touch screen (Max: 1024)
#define Xresolution 740 //128
#define Yresolution 645 //64

void setup()
{
   Serial.begin(9600);
}

void loop()
{
  int X,Y; //Touch Coordinates are stored in X,Y variable
   pinMode(Yp,INPUT);
   digitalWrite(Yp,HIGH);
   pinMode(Yn,INPUT);  
   digitalWrite(Yn,LOW);
   pinMode(Xp,OUTPUT);
   digitalWrite(Xp,HIGH);
   pinMode(Xn,OUTPUT);
   digitalWrite(Xn,LOW);
   X = (analogRead(Yp))/(740/Xresolution); //Reads X axis touch position
    
   pinMode(Xp,INPUT);
   digitalWrite(Xp,HIGH);
   pinMode(Xn,INPUT);
   digitalWrite(Xn,LOW);
   pinMode(Yp,OUTPUT);
   digitalWrite(Yp,HIGH);
   pinMode(Yn,OUTPUT);
   digitalWrite(Yn,LOW);
   Y = (analogRead(Xp))/(645/Yresolution); //Reads Y axis touch position
  
  //Display X and Y on Serial Monitor
   Serial.print("X = ");  
   Serial.print(X);
   Serial.print(" Y = ");
   Serial.println(Y);
   delay(100);
}
