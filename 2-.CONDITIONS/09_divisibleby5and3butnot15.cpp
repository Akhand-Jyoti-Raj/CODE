#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;

    if(n%3==0 or n%5==0){
        if (n % 15 != 0)
        {
            cout << "number is divisible by 3 and 5 but not diisible by 15";
        }else
            cout << "not matching ";
    }else{
        cout << "not matching";
    }
}