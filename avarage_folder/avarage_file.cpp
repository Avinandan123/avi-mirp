#include<iostream>
using namespace std;
int main() {
int A,n,number,sum=0;
cout << "Enter the times of number:"<<endl;
cin>>n;
for(int i=0;i<n;i++)
 {
cout << "Enter the next number:"<<i<<endl;
cin>>number;
sum+=number;
}
A=sum/n;
cout<< "The avarage is:"<<A<<endl;
return 0;
}
