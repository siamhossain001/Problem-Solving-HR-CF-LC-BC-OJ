#include<iostream>
using namespace std;

int main(){
    string input;
    string Dubstep="";
    cin>>input;

    for(int i=0;i<input.size();i++){
        if(input[i]=='W' &&  input[i+1]=='U' && input[i+2]=='B'){
            i+=2;
            if(Dubstep!=""){
                Dubstep+=' ';
            }
        }
        else{
            Dubstep+=input[i];
        }
    }
    cout<<Dubstep<<endl;
    return 0;
}
