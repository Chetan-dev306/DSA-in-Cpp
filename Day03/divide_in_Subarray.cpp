#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide2Subarray(vector<int>&arr){
    int prefix =0,n=arr.size();
    int totalsum =0;
    for(int i=0;i<n;i++){
        totalsum += arr[i];
    }
        for(int i=0;i<n-1;i++){
            prefix += arr[i];
            if(totalsum ==2 * prefix){
                return 1;
            }
            
        }
        return 0;

    }

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element in array :";
    for(int i=0;i<n;i++)
    cin>>v[i] ;
    
    if(divide2Subarray(v))
    cout << "Can be divided into two equal sum subarrays";
    else
        cout << "Cannot be divided into two equal sum subarrays";
}
