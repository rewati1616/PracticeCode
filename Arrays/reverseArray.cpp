#include<iostream>
using namespace std;

int reverseArr(int arr[], int sz){

    int start = 0;
    int end = sz-1;
    
    while(start <end ){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){

    int arr[]={54, 53,87, 23, -32, 90, 78};
    int sz = 7;

    reverseArr(arr, sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}