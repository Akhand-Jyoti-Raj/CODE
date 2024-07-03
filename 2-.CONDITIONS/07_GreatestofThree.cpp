#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "enter the number a " << endl;
    cin >> a;
     cout << "enter the number b " << endl;
    cin >> b;
     cout << "enter the number c " << endl;
    cin >> c;

    if(a>b and a>c){
        cout <<a<< "A is greater";
    }else if(b>a and b>c){
        cout <<b<< "B is greater";
    }else
        cout <<c<< "C is greater";
}