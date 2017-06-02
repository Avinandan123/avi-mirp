#include<iostream>

using namespace std;
int main()
{
    int N;
    cout<<"Enter the number:"<<endl;
    cin>>N;
    for ( int i=1 ; i<=N; i++) {
        for (int a=1 ; a<=i; a++) {
            cout << "*";
        }
        cout<< " "<< endl;
    }
    return 0;
}
