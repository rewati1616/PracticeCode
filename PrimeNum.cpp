#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i=2; i*i<n; i++){
        if(n % i == 0){
            return "Not Prime";
        }
    }
    return "Prime";
}

int main(){

    int  n = 38;

    cout<<isPrime(n)<<endl;
    
}