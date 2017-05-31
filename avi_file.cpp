#include<iostream>

using namespace std;

int main() {
  
      int x,y,z,a , max = -10000;
      cout << "Enter four numbers:";
      cin  >> x >> y >> z >> a;  //Take input from user
      
      if (x>max)
         max=x;
      if (y>max)
         max=y;
      if (z>max)
         max=z;
      if (a>max)
          max=a;
      cout << "max value  :" <<  max << endl;
      return 0;
}
 

