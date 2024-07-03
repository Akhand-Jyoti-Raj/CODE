#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;
    int arr[n];
    //INPUT
    for (int i = 0; i <= n - 1;i++){
        cin >> arr[i];
    }
    // OUTPUT
    int sum = 0;
    for (int i = 0; i <= n - 1;i++){
        sum = sum + arr[i];
    }
    cout << sum;
}