#include<iostream>
using namespace std;
string defangingIPaddr(string address){
    int index =0;
    string ans;
    while(index<address.size()){
        if(address[index] == '.')
          ans += "[.]";
        else
           ans += address[index];

           index++;
    }
    return ans;
}

int main(){
    string address="1.1.1.1.1";
   cout << defangingIPaddr(address) <<endl;
    return 0;

}
