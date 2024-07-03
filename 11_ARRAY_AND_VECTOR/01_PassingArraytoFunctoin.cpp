#include<iostream>
using namespace std;
void display(int a[]){
    for (int i = 0; i <= 2;i++){
        cout << a[i]<< " ";
    }
}
int main(){
    int arr[3] = {1, 3, 4};
    display(arr);
}