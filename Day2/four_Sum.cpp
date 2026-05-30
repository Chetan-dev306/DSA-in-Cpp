#include<iostream>
#include<algorithm>
using namespace std;
int find4Numbers (int A[],int n, int x){
    // sort
     sort(A,A+n);
    for(int i = 0; i < n - 3; i++) {

        for(int j = i + 1; j < n - 2; j++) {

            int left = j + 1;
            int right = n - 1;

            while(left < right) {

                int sum = A[i] + A[j] + A[left] + A[right];

                if(sum == x) {

                    cout << "Quadruplet: "
                         << A[i] << " "
                         << A[j] << " "
                         << A[left] << " "
                         << A[right] << endl;

                    return true;
                }
                else if(sum < x) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }

    cout << "No quadruplet found" << endl;
    return false;
}

int main() {

    int A[] = {1, 4, 45, 6, 10, 12};
    int n = sizeof(A) / sizeof(A[0]);
    int x = 21;

    find4Numbers(A, n, x);

    return 0;
}