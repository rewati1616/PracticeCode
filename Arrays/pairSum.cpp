#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(int target, vector<int>nums){
    vector<int> answer;
    int n = nums.size();
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(nums[i]+nums[j]== target){
    //             answer.push_back(i);
    //             answer.push_back(j);
    //             return answer;
    //         }
    //     }
    // }

    int i=0, j =n-1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            answer.push_back(i);
            answer.push_back(j);
            return answer;
        }
    }
    

}

int main(){
    vector<int> nums = {1, 2, 11, 15};
    int target= 26;

    vector<int> answer = pairSum(target, nums);
    cout<<answer[0]<<", "<<answer[1]<<endl;
    return 0;

}


