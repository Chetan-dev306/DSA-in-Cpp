/*
 * Longest Palindrome
 * Given a string, determine the maximum length of a palindrome
 * that can be formed using its characters.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;
int longestPalindrome(string s) {
        vector<int>lower(26,0),upper(26,0);
        for(int i=0;i<s.size();i++){
            if(islower(s[i]))
              lower[s[i]-'a']++;
            else
               upper[s[i]-'A']++;
        }
        int count=0,odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0){
                count += lower[i];
            }else{
                count += lower[i]-1;
                odd =1;
            }
            if(upper[i]%2==0){
                count += upper[i];
            }else{
                count += upper[i]-1;
                odd=1;
            }
        }
      int ans =count+odd;
      return ans; 
    }
    int main(){
        string s= "abcccbadgc";
        cout<<"longest palindrome have "<< longestPalindrome(s)  << " character"<<endl;
        return 0;

    }