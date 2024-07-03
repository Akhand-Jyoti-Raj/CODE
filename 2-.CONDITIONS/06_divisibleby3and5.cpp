#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number " << endl;
    cin >> n;

    if(n%3==0 and n%5==0){
        cout << "divisible by 3 and 5 ";

    }else{
        cout << "not divisible by 3 and 5";
    }
}