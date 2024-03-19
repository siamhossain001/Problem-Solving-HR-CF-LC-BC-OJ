#include<iostream>
#include<vector>

using namespace std;
int main(){
    int N,input,counter;
    cin>>N;
    
    int hired = 0;
    int crime = 0;

    counter = 0;
    while(N--){
        cin>>input;
        if(input>=1){
            hired=input;
        }
        else{
            if(hired>0 && input==-1){
               hired += input;
               
            }
            else{
                counter++;
            }
        }
    }
    cout<<counter<<endl;

}