#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main(){
    
    string input;
    int test;
    cin>>test;

    cin.ignore();
    while(test--){
        getline(cin,input);
    
         int wordCounter=1;
        if(input.size()){
             for(int i=0;i<input.size();i++){
                if(input[i]==' '){
                    wordCounter++;
                }
            }
             cout<<"Count = "<<wordCounter<<endl;
        }
        else {
            cout<<"Count = "<<int(0)<<endl;
         }
        }
    return 0;
}