#include<iostream>
using namespace std;
void fun(int x , int y){
    cout << "ye address hai main x ka : " << &x<<endl;
    cout << "ye adress hai y main ka : " << &y<<endl;
}
int main(){
    int x;
    int y;

    cout <<"ye address hai x ka : " << &x << endl;
    cout <<"ye address hai y ka : " << &y<<endl;
    fun(x, y);
}