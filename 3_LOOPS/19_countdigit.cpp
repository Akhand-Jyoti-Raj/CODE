#include<iostream>
using namespace std;
int main(){
   int  n = 0;

   int count = 0;
   int a = n;

   while(n>0){
       n /= 10;
       count++;
   }
   if(a==0)
       cout << "1";
  else cout << count;
}