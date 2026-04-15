#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 7, 9};
    int n = 5;
    bool isSorted = true;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted) cout << "Yes";
    else cout << "No";

    return 0;
}
