#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "enter 1-12 number";
    cin >> x;

    switch(x){
        case 1:
            cout << "january 31 days";
            break;
        case 2:
            cout << "Febuary 28 days";
            break;
        case 3:
            cout << "March 31 days";
            break;
        case 4:
            cout << "April 30 days";
            break;
        case 5:
            cout << "May 31 days";
            break;
        case 6:
            cout << "June 30 days";
            break;
        case 7:
            cout << "July 31 days";
            break;
        case 8:
            cout << "Agust 31 days";
            break;
        case 9:
            cout << "september 30 days";
            break;
        case 10:
            cout << "Ocutuber 31 days";
            break;
        case 11:
            cout << "novenber 30 days";break;
        case 12:
            cout<< "December 31 days";
            break;
        default :
            cout << "invalid number";
            break;
    }
}