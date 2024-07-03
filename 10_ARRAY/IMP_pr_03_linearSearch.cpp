#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1;i++){
        cin >> arr[i];
    }
    int x;
    cout << "enter to search number : ";
    cin >> x;
    bool flag = false;
    for (int i = 0; i <= n - 1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true)
        cout << "Present";
    else
        cout << "404 not found";
}