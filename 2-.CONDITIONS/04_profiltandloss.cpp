#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout << "enter cp : "<<endl;
    cin >> cp;
    cout << "enter sp : ";
    cin >> sp;

    if(sp>cp){
        cout << sp - cp << " profit";
    }else if(cp>sp){
        cout << sp - cp << " loss";
    }
    else{
        cout << "no profit and no loss";
    }
}