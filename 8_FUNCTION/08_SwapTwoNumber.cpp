#include<iostream>
using namespace std;
int main(){
    int x = 0;
    int y = 6;
    int z = x;

    x = y;
    y = z;

    cout << x << " " << y;
}