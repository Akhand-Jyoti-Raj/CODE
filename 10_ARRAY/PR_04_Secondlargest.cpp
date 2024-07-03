#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1;i++){
        cin >> arr[i];
    }
    // find max;
    int max = INT_MIN;
    for (int i = 0; i <= n - 1;i++){
        if(max<arr[i])
            max = arr[i];
    }
    // find second max;
    int smax = INT_MIN;
    for (int i = 0; i <= n - 1;i++){
        if(arr[i]!=max && smax<arr[i])
            smax = arr[i];
    }
    cout << max << endl;
    cout << smax;
}