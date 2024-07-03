#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if((a+b>c)and (b+c>a)and (a+c>b)){
        cout << a << "," << b << "," << c << ","
             << "side fo treaingles";
    }
    else {
        "not a traingles";
    }
}