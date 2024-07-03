#include<iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int x;
    cin >> x;
    for (int i = 1; i <= x;i++){
        cout << factorial(i) << endl;
    }
}