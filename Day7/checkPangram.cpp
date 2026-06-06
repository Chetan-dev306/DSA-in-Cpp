/*
Problem: Check if a Sentence Is Pangram

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;
bool check_Pangram(string sentence){
     vector<bool>alpha(26,0);
     for(int i=0;i<sentence.size();i++){
        alpha[sentence[i]-'a']=1;
     }
     for(int i=0;i<26;i++){
        if(alpha[i]==0){
            return 0;
        }
     }
     return 1;
}
int main(){
    string sentence="thequickbrownfoxjumpsoverthelazydog";
    cout<<check_Pangram(sentence);
    return 0;
}