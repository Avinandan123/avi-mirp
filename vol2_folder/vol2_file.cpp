#include<iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter the number:"<<endl;
    cin >> N;
    for ( int i=0 ;i<=N ;i++) {
        for (int a=1 ; a<=(N-i+1) ;a++) {
            cout<<"*";
            }
            for(int a=i ;a>=1;a--) {
            cout<<"1";
            }
            cout<<endl;
            }
            return 0;
    }
