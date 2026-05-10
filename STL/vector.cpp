#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    
    cout<<"size is "<<vec.size()<<endl;
    vec.push_back(47);
    vec.push_back(48);
    for(int i:vec){
        cout<<i<<" "<<endl;
    }
    cout<<"last value is "<<vec.back()<<endl;
    cout<<"size after push back is "<<vec.size()<<endl;
    vec.pop_back();

    for(int i:vec){
        cout<<i<<" "<<endl;
    }
    // cout<<endl;
    cout<<"size after push back is "<<vec.size()<<endl;

    cout<<"First value is "<<vec.front()<<endl;
    cout<<"last value is "<<vec.back()<<endl;

    return 0;    
}