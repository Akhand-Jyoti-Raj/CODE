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

    switch(op){
        case '+':
            cout << x1 + x2;
            break;
    }
    switch(op){
        case '-':
            cout << x1 - x2;
            break;
    }
    switch(op){
        case '*':
            cout << x1 * x2;
            break;
    }
    switch(op){
        case '/':
            cout << x1 / x2;
            break;
    }
}