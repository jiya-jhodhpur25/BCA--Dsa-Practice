#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 2, 1, 5, 2};
    int n = 5;
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > max) max = arr[i];
    }
    cout << max;
    return 0;
}
