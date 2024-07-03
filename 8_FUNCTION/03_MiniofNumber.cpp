#include<iostream>
using namespace std;

int mini(int x,int y){
    int a;
    if(x<y)
        a = x;
    else
        a = y;
}
int main(){
    int a = 4;
    int b = 2;
    cout << mini(a, b);
}
