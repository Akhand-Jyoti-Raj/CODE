#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "enter month 1-12 : ";
    cin >> x;

    // 1 3 5 7 8 10 12 --> 31 days .
    // 4 6 9 11 --> 30 days .
    // 2 --> 28 days .
    switch(x<=7 && x%2!=0){
        case 1 :
            cout << "31 days ";
    }
    switch (x>=7 && x%2==0 ){
        case 1 :
            cout << " 31 days ";
    }
    switch(x==4 || x==6 || x==9 || x==11){
        case 1 :
            cout << "30 days ";
    } 
    switch(x==2){
        case 1 :
            cout << "28 days";
    }
}