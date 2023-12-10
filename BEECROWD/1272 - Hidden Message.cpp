#include <iostream>
 
using namespace std;
 
int main() {
 
    
    string message;
    int test,comander;
    cin>>test;
    
    cin.ignore();
    while(test--){
        getline(cin,message);
        comander=0;// comander always print the first letter of the word
        for(int i=0;i<message.size();i++){
            if(message[i]>='a' && message[i]<='z' && comander==0){
                    cout<<message[i];
                    comander=1;
            }
            else if(message[i]==' ' && message[i+1]!=' '){
                comander=0;
            }
        }
        cout<<endl;
    }
    return 0;
}