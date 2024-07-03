#include<iostream>
using namespace std;
int main(){

    int x1;
    char op;
    int x2;

    cout << "Enter number 1st : ";
    cin >> x1;
    cout << "Enter +,-,*,/";
    cin >> op;
    cout << "Enter number 2nd : ";
    cin >> x2;

    if(op=='+'){
        cout << x1 + x2;
    }else if(op=='-'){
        cout << x1 - x2;
    }else if(op=='*'){
        cout << x1 * x2;
    }else {
            cout << x1 / x2;
    }
}