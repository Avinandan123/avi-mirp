#include<iostream>
 using namespace std;
  
  
   int main() {
   int arr[]={67,32,23,6,56,2134,34,3423,32422,34535,35345,1234};
   int size = sizeof(arr)/4;
   
   for (int i=0; i < size/2; i++){
      if(arr[i] !=arr[size-i-1]) {
          cout <<"Not palindrome\n";
        }
      }
      //for loops ends
      if (ispalindrome) {
           cout << "Pallindrome\n";
       }
       else {
           cout <, "Not Palindrome\n";
        }   
      return 0
   
 }
