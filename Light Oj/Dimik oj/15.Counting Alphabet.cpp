#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

void printer(vector<int> &alphabet,string input){
      for(int i=0;i<input.size();i++){
           if(alphabet[input[i]-'a']!=0){
               cout<<input[i]<<" = "<<alphabet[input[i]-'a']<<endl;
               alphabet[input[i]-'a'] = 0;
           }
      }
}
int main(){
   string input;
   int test;

   cin>>test;
   while(test--){
      cin>>input;
      vector<int> alphabet(26,0);
      for(int i=0;i<input.size();i++){
           if(input[i]>='a' && input[i]<='z'){
                alphabet[input[i]-'a']++;
           }
      }
      printer(alphabet,input);
      if(test>=1)cout<<endl;
   }  
    
   return 0;
}