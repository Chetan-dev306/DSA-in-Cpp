/*
Problem: Find a Triplet with Given Sum
Approach: Sorting + Two Pointers
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
#include<algorithm>
using namespace std;
int find3Numbers (int A[],int n, int x){
    // sort
     sort(A,A+n);
    for(int i=0;i<n-2;i++){

        int start = i+1, end = n-1;
        while(start<end)
        {
            int sum = A[i]+A[start]+A[end];
            if(sum==x){
                 cout << "Triplet: "
                     << A[i] << " "
                     << A[start] << " "
                     << A[end] << endl;
                return 1;
            }
            else if(sum>x){
            end--;
            }
        else {
            start++;
        }
        }
    }
    cout << "No triplet found" << endl;
    return 0;
}
int main() {

    int A[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(A) / sizeof(A[0]);
    int x = 22;

    find3Numbers(A,n,x);

    return 0;
}
