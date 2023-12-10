#include<iostream>
#include<vector>  

using namespace std;

bool translate(string s1,string s2){
    int s1Size=s1.size()-1;
    for(int i=0;i<s2.size();i++){
        if(s1[s1Size]==s2[i]){
            s1Size--;
        }
        else {
            return false;
        }
    }
    return true;
}
int main(){
       
    string birlandish;
    string berlandish;

    cin>>birlandish>>berlandish;

    if(translate(birlandish,berlandish)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}