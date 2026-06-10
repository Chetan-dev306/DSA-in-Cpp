/*Problem : Sort Vowels in a String

Approach:
1. Count frequencies of uppercase and lowercase vowels.
2. Replace vowel positions with a placeholder (#).
3. Generate a sorted vowel string using frequency arrays.
4. Refill the placeholders with sorted vowels.

Time Complexity  : O(n)
Space Complexity : O(v)
*/

#include<iostream>
#include<vector>
using namespace std;

string sortVowels(string s) {
      vector<int>lower(26,0);
      vector<int>upper(26,0);
      for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
      }
      string ans;
      // upper
      for(int i=0;i<26;i++){
        char c = 'A'+i;
        while(upper[i]){
            ans += c;
            upper[i]--;
        }
      }
      //lower 
       for(int i=0;i<26;i++){
        char c = 'a'+i;
        while(lower[i]){
            ans += c;
            lower[i]--;
        }
      } 
      int first=0,second=0;
      while(second<ans.size()){
        if(s[first]=='#'){
            s[first]=ans[second];
            second++;
        }
        first++;
      }
      return s;
    }

    int main(){
        string s="ghesimaotureega";
        cout<<sortVowels(s);
        return 0;
    }
