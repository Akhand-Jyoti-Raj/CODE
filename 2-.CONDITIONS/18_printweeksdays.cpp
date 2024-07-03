#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "enter 1-7 number";
    cin >> x;

    switch(x){
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "wednesday";
            break;
        case 4:
            cout << "thuresday";
            break;
        case 5:
            cout << "friday";
            break;
        case 6:
            cout << "satuarday";
            break;
        case 7:
            cout << "sunday";
            break;
        default :
            cout << "invlid";
    }
}