#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,number;
    int max=-10000,smax=-10001,s2max=-10002;
    cout << "Enter numbers of input"<<endl;
    cin >> n;
    for(int i=0; i<n; i++) {
       cout << " Enter next number"<<endl;
       cin >> number;
       if (number> s2max && number>smax && number <=max) {
           smax= number;
           s2max=smax;
           max=max;
        }
        else if ( number>max) {
            smax =max;
            s2max=smax;
            max=number;
        }
    }
    cout <<"Max is: " << max <<" second max is:"<<smax<<"second max 2:"<<s2max<<endl;
}
