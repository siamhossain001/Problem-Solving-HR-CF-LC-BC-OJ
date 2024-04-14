#include<iostream>
#include<vector>

using namespace std;


int main(){
   
   int test,counter=0;
   string input;

   cin>>test;
   
   cin.ignore();
   while(test--){
      getline(cin,input);
      counter=0;
      for(int i=0;i<input.size();i++){
           if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u' || input[i]=='A' || input[i]=='E' || input[i]=='I' || input[i]=='O' || input[i]=='U'){
              counter++;
           }
      }   
      cout<<"Number of vowels = "<<counter<<endl;
      counter=0;
   }    
   return 0;
}