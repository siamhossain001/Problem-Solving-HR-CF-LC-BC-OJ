#include <iostream>
#include<vector>

using namespace std;
int iscomplite(string name){
    vector<int> alphabet(26,0);
    int count=0;
    for(int i=0;i<name.size();i++){
        if(name[i]>='a' && name[i]<='z'){
            alphabet[name[i]-'a']++;
            
            if(alphabet[name[i]-'a']==1){
                count++;
            }
        }
    }
     
    if(count==26){
        return 3;
    }
    else if(count>=13){
        return 2;
    }
    else {
        return 1;
    }

}
int main() {
    
    int test,count=0;
    cin>>test;
    
    
    string name;
    cin.ignore();
    while(test--){
        getline(cin,name);   
        
        if(iscomplite(name)==3){
            cout<<"frase completa"<<endl;
        }
        else if(iscomplite(name)==2){
            cout<<"frase quase completa"<<endl;
        }
        else {
            cout<<"frase mal elaborada"<<endl;
        }
    }
    return 0;
}