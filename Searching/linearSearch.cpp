#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout<<"index is "<<i<<endl;
            return i ;
        }
    }
    return -1;
}

int main(){

    int arr[] = {84, 67, -54, 0, 23, -2, 4};
    int size = 7;
    int target = 4;

    cout<<linearSearch(arr, size, target)<<endl;
}