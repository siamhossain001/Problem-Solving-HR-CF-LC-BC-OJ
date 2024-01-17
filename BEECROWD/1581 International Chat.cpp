#include <iostream>
#include<vector>

using namespace std;
string international(int N){
    int yes=1;
    vector<string> language(N);
    
    for(int i=0;i<N;i++){
        cin>>language[i];
    }
    for(int i=1;i<N;i++){
        if(language[0]!=language[i]){
            yes=0;
            break;
        }
    }
    if(yes==1){
        return language[0];
    }
    else {
        return "ingles";
    }

}
int main() {
    
    int test,N;
    string languageChat;
    cin>>test;
    while(test--){
        cin>>N;
        languageChat = international(N);
        cout<<languageChat<<endl;
    }


    return 0;
}