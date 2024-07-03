#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;

    int k = 4;
    for (int i = 1; i <= n;i++){
        
        cout << k << endl;
        k = k + 3;
    }
}