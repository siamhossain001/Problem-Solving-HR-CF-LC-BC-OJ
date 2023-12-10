#include <iostream>
 
using namespace std;

int main() {

    int test;
    cin>>test;
    string number;
    int correct=0;

    while(test--){
        cin>>number;

        if(number.size()==5){
            cout<<int(3)<<endl;
        }
        else {
            
            if(number[0]=='t'){
                correct++;
            }
            if(number[1]=='w'){
                correct++;
            }
            if(number[2]=='o'){
                correct++;
            }

            if(correct>1){
                cout<<int(2)<<endl;
            }
            else {
                cout<<int(1)<<endl;
            }

        }
        correct=0;

    }
    return 0;
}