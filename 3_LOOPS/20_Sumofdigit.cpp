#include<iostream>
using namespace std;
int main(){
    int n = 555;

    int count = 0;
    int l = 0;
    while(n>0){
        l = n % 10;
        count = count + l;
        n /= 10;

    }
    cout << count;
}