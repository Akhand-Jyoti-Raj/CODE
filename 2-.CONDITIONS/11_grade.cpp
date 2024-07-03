#include<iostream>
using namespace std;
int main(){
    int m;
    cout << "enter the marks : ";
    cin >> m;

    if(m>=91 and m<=100){
        cout << "excellent";
    }else if(m<=90 and m>=81){
        cout << "verry good";
    }else if(m<=80 and m>=71){
        cout << "good";
    }else if(m<=70 and m>=61){
        cout << "can do better";
    }else if(m<=60 and m>=51){
        cout << "Average";
    }else if(m<=50 and m>=41){
        cout << "below average";
    }else{
        cout << "fail";
    }
}