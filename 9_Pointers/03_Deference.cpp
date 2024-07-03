#include<iostream>
using namespace std;
int main(){
    int x = 122;

    int *p = &x;
    *p = 5;
    cout << x;
}