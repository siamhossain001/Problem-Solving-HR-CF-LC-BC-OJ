#include<iostream>
#include<vector>

using namespace std;


int main(){
   
    int test;
    cin>>test;
    string input;
    string vowel="";
    string consonants="";
    while(test--)
    {
        cin>>input;
        for(int i=0;i<input.size();i++){
          if(input[i]>='a' && input[i]<='z'){
            if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'){
                vowel+=input[i];
            }
            else {
                consonants+=input[i];
            }
          }
        }

        cout<<vowel<<endl;
        cout<<consonants<<endl;
        
        vowel="";
        consonants="";
    }
   return 0;
}