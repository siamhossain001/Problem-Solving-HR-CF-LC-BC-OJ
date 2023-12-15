#include <iostream>
 
using namespace std;
 
int main() {
    string input;
    int k=0;
    
   
    while(getline(cin,input)){
        for(int i=0;i<input.size();i++){
            if(input[i]==' '){
                 cout<<" ";
            }
            
            else if(k==0){
                cout<<char(toupper(input[i]));
                k=1;
            }
            else{
                 cout<<char(tolower(input[i]));
                 k=0;
            }
         }
        cout<<endl;
        k=0;
    }
    return 0;
}