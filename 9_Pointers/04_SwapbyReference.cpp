#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main(){
    int x = 4;
    int y = 3;
    swap(&x, &y);
    cout << x << " " << y;
}