#include <iostream>
 
using namespace std;
 
int main() {
    
    int possition[]={5,4,3,2,1};
    int carry,step=0,i=0;
    long long int input;
    
    cin>>input;
    while(input>0){
        if(input>=possition[i]){
            step+=input/possition[i];
            input = input - (step*possition[i]);
        }
        else{
            i++;
        }
    }
    cout<<step<<endl;
    return 0;
}