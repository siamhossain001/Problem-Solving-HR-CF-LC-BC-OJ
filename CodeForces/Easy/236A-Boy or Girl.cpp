#include<iostream>
#include<vector>

using namespace std;
bool isfemale(vector<int> &alphabet){
    int distinct_characters=0;
    for(int i=0;i<alphabet.size();i++){
        if(alphabet[i]!=0){
            distinct_characters++;
        }
    }
    if(distinct_characters%2==0){
        return true;
    }
    return false;
}
int main(){
    
    vector<int> alphabet(26,0);
    string username;
    int carry;
    
    cin>>username;
    for(int i=0;i<username.size();i++){
        carry = username[i]-97;
        alphabet[carry]++;
    }
    if(isfemale(alphabet)){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    
     return 0;
}