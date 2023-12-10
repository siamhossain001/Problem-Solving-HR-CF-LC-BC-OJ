#include <iostream>
 
using namespace std;
bool isEasy(string names){
    int istrue = 0;

    //choto kore nilam fist letter tah
    names[0] = tolower(names[0]);

    for(int i=0;i<names.size();i++){
         if(names[i]=='a' || names[i]=='e' || names[i]=='i' || names[i]=='o' || names[i]=='u'){
            istrue = 0;
         }
         else{
            istrue++;
            if(istrue==3)return false;
         }
    }
    return true;
}
int main() {
 
    string surnames;
    int test;
    
    cin>>test;
    
    while(test--){
        cin>>surnames;
        if(isEasy(surnames)){
            cout<<surnames<<" eh facil"<<endl;
        }
        else {
            cout<<surnames<<" nao eh facil"<<endl;
        }
    }
    return 0;
}