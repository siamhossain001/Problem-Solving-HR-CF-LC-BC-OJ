#include <iostream>
#include<iomanip>
#include<vector>

using namespace std;
bool isHQ9(string input){

    for(int i=0;i<input.size();i++){
        if(input[i]=='H' || input[i]=='Q' || input[i]=='9'){
            return true;
        }
    }
    return false;
}
int main() {
   
    string input;
    cin>>input;

    if(isHQ9(input)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}