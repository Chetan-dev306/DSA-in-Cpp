#include<iostream>
#include<vector>
using namespace std;

    int trap (vector<int>&height){
        
        int leftmax=0, rightmax=0, water=0;
      int  maxheight=height[0],index=0;
      int n = height.size();
// max height of building
      for(int i=0;i<n;i++){
        if(height[i]>maxheight){
            maxheight = height[i];
            index=i;
        }
      }

     // right part

      for(int i=0;i<index;i++){
        if(leftmax > height[i])
        water += leftmax - height[i];
    else{
        leftmax = height[i];
    }

      }
      // left part

      for(int i=n-1;i>index;i--){
        if(rightmax > height[i]){
            water += rightmax-height[i];
        }
        else{
            rightmax = height[i];
        }
      }
      return water;
    }

    int main(){
         vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << trap(height);

    return 0;
    }

