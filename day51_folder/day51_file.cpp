#include<iostream>
using namespace std;
int main() {

int N;
cout<<"Enter the number:"<<endl;
cin >> N;
for (int i=1 ;i<=N ;i++) {
    for(int a=3 ; a<=(2*N-3*i+4) ; a--) {
       cout<<"%&";
       }
       for(int a=i ; a+=3 ; a--) {
       cout<<"@";
       }
       for (int a=1 ; a=(N-i+2) ; a++) {
       cout<< "*#";
       }
       cout<< endl;
       }
       return 0;
 }
