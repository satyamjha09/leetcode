#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {

    vector<int> result;

    for(int i = 0; i < nums.size(); i++){
        int index = abs(nums[i]) - 1;
        if(nums[index] > 0){
            continue;
        }

        nums[index] *= -1; 
    }

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            result.push_back(i);
        }
    }

    return result;

}


int main() {

    

}