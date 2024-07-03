#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"value of x "<<(x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20: 30);
    // cout << "Value of x : " << x;
    return 0;
}