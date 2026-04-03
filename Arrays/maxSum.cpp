#include<iostream>
using namespace std;

int n = 7;
int arr[7] = {1,2,3,4,5,6,7};

int main(){
    for(int st=0; st=n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
            currSum = currSum+ arr[end];
            cout<<max(currSum,arr[end]);
        }
    }
}