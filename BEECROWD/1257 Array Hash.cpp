#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
int main(){

    int test,l,hashSum;
    cin>>test;
    
    string input;
    while(test--){
        cin>>l;
        hashSum=0;

        for(int i=0;i<l;i++){
            cin>>input;
            for(int j=0;j<input.size();j++){
                hashSum+=int(input[j]-'A')+i+j;         
            }
        }
        cout<<hashSum<<endl;
    }
    return 0;
}