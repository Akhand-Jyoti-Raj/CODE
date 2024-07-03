#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
        if(n==1)
            cout << "is neither prime or composite";
        else if (flag=true)
            cout << n << " is prime";
        else
            cout << n << " is composite";
    }
}