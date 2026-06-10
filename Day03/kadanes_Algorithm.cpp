/*
Problem: Maximum Sum Subarray (Kadane's Algorithm)
Approach: Dynamic Programming / Kadane's Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int largest_Sum(vector<int>arr){
    int n = arr.size();
    int maxi = INT_MIN;
    int currSum = 0;
    int start=0, end=0, tempstart=0;
    
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum > maxi){
            maxi = currSum;
            start = tempstart;
            end = i;
        }
        if(currSum<0){
            currSum = 0;
            tempstart = i+1;
        }
    }
    cout<<"maximum sum :"<<maxi<<endl;
    cout<<"Sub array :";
    for(int i=start;i<end;i++){
        cout<<arr[i]<<" ";
    }

    cout <<endl;
    return 0;
}

int main(){
    vector<int>arr ={3,4,-5,8,-12,7,6,2};
    cout<<largest_Sum(arr);
    return 0;
}
