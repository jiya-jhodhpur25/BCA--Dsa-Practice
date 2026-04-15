#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 2, 1, 5, 2};
    int n = 5;
    int largest = -1, second_largest = -1;

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i]!= largest){
            second_largest = arr[i];
        }
    }
    cout << second_largest;
    return 0;
}
