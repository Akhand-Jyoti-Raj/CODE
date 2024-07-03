#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(n>99 and n<=999){
        cout << "three digit number";
    }else {
        cout << "not three digit number";
    }
}