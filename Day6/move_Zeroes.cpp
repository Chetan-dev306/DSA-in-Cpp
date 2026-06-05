/*
Problem: Move Zeroes
Approach:
1. Copy all non-zero elements to the front.
2. Fill the remaining positions with zeroes.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;
void move_Zeroes(vector<int>&nums){
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
          nums[j]=nums[i];
          j++;
        }
    }

    while(j<nums.size()){
        nums[j]=0;
        j++;
    }

}

int main(){
    vector<int>nums={1,0,3,12,0,5};
    move_Zeroes(nums);
    for(int x:nums){
        cout<<x<<" ";
    }
    return 0;
}