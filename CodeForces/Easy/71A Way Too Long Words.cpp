#include<iostream>
#include<string>

using namespace std;

int main(){
   
    string word;
    int test;

    cin>>test;
    while(test--){
         cin>>word;
         if(word.length()<10){
            cout<<word<<endl;
         }
         else {
            cout<<word[0]<<word.length()-2<<word[word.length()-1]<<endl;
         }

    }

    return 0;
}