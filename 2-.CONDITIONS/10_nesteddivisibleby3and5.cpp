#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;
    if(n%3==0){
        if(n%5==0){
            cout << "divisible by 3 and 5";
        }else
            cout << "not matching conditions";
    }else cout << "not divisible 3 and 5";
}