#include <iostream>

using namespace std;

int main(){
    int test;
    cin>>test;
    
    int doll=0,architescts=0,musicians=0,drawners=0;
    
    int hour;
    string name,type;
    while(test--){
        cin>>name>>type>>hour;
        
        if(type=="bonecos"){
            doll+=hour;
        }
        else if(type=="arquitetos"){
            architescts+=hour;
        }
        else if(type=="musicos"){
            musicians+=hour;
        }
        else {
            drawners+=hour;
        }
    }
    doll/=8;
    architescts/=4;
    musicians/=6;
    drawners/=12;
    
    cout<<doll+architescts+musicians+drawners<<endl;

    return 0;
}
