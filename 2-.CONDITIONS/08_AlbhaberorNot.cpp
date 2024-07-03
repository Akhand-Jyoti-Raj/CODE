#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter character : ";
    cin >> c;
    int acii = (int)c;

    if(acii>=97 and acii<=122){
        cout << "Small characeter";

    }else if(acii>=65 and acii<=90){
        cout << "big character";
    }else
        cout << " not a character";
}