#include<iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 4;

    int *p = &x;
    int *p1 = &y;
    cout << *p+*p1;
}