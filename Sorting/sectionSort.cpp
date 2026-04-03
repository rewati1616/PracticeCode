#include<iostream>
using namespace std;
void sectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallestIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[smallestIdx]>arr[j]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {4, 5, 1, 2, 3};
    int n = 5;

    sectionSort(arr, n);
    printArr(arr, n);

    return 0;
}