#include<iostream>
using namespace std;

int findLargest(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {10, 50, 20, 40, 25};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Largest Element: "<<findLargest(arr, n)<<endl;

    return 0;
}