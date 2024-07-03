#include<iostream>
using namespace std;
int main(){
    char x = 'a';
    char* p  = &x;
    cout << &x << endl
         << p;
}