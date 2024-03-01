#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    char flag;
    string word;
    cin>>word;
    
    vector<int> alphabet(26,0);
    for(int i=0;i<word.size();i++){
        alphabet[word[i]-'a']++;
    }
    for(int i=25;i>=0;i--){
        if(alphabet[i]!=0){
            flag=i+97;
            break;
        }
    }
    for(int i=0;i<alphabet[flag-'a'];i++){
        cout<<flag;
    }
    cout<<endl;
    

    return 0;
}