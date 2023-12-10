#include<iostream>

using namespace std;

void Lowercase(string word){
     for(int i=0;i<word.size();i++){
         cout<<char(tolower(word[i]));
     }
     cout<<endl;
}
void Uppercase(string word){
    for(int i=0;i<word.size();i++){
        cout<<char(toupper(word[i]));
    }
    cout<<endl;
}
int main(){
    string word;
    cin>>word;

    int UpperLetter=0,LowerLetter=0;

    for(int i=0;i<word.size();i++){
        if(word[i]>='A' && word[i]<='Z'){
            UpperLetter++;
        }
        else {
            LowerLetter++;
        }
    }

    if(UpperLetter>LowerLetter){
        Uppercase(word);
    }
    else {
        Lowercase(word);
    }
    return 0;
}