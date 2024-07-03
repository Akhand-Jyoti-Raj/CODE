#include<iostream>
using namespace std;
int main(){
    int n = 5;

    int lastdigit = 0;
    int factorial = 1;
    for (int i = 1; i <= n;i++){
        factorial *= i;
    }
        cout << factorial;
}