#include <iostream>
 
using namespace std;
 
string combiner(string s1, string  s2){
      int i=0;
      int j=0;
      string output = "";
      while(i<s1.length() && j<s2.length()){
          output += s1[i];
          output += s2[j];
          i++;
          j++;
      }
      while(i<s1.length()){
          output += s1[i];
          i++;
      }
      while(j<s2.length()){
          output += s2[j];
          j++;
      }
      return output;
}
int main() {
    
    int test;
    string input1;
    string input2;
    string output;
    
    cin>>test;
    while(test--){
    cin>>input1>>input2;
    output = combiner(input1, input2);
    cout<<output<<endl;   
    }   
    return 0;
}