#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;

    // 1 3 6 12 24 .....
    // int a=1;
    // for (int i = 1; i <= n;i++){
    //     cout << a <<" ";
    //     a = a * 2;
    // }

    // 2 6 18 54 ....
    int a=2;
    for (int i = 1; i <= n;i++){
        cout << a <<" ";
        a = a * 3;
    }
}