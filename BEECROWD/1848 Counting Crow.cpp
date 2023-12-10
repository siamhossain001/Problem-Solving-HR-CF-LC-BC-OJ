#include <iostream>
#include <string>

using namespace std;
 
int main() {
    
    int sum=0;
    int ar[]={4,2,1};
    string input;
    
    while(getline(cin,input)){
        if(input=="caw caw"){
            cout<<sum<<endl;
            sum=0;
        }
        else{
               for(int i=0;i<input.size();i++){
                  if(input[i]=='*'){
                    sum+=ar[i];
                  }
               }
        }

    }
    return 0;
}