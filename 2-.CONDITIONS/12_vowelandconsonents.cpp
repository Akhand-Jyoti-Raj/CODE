#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter character : ";
    cin >> c;
    int acii = (int)c;

    if((acii>=97 and acii<=122) || (acii>=65 and acii<=90)){
        if((c== 'a' || c=='e'||c=='i'||c=='o'||c=='u') || (c== 'A' || c=='E'||c=='I'||c=='O'||c=='U')){
            cout << "character is vowel";
        }else
            cout << "consonents";
    }else
        cout << " not a character";
}