#include<iostream>
#include<vector>

using namespace std;

int main(){
     
    int number,test,sum,cases=1;
    char opperator;
    
    while(true){
        cin>>test;
        
        if(test==0){
            break;
        }
        
        else{
            cin>>sum;
            for(int i=1;i<test;i++){
                cin>>opperator;
                cin>>number;
                if(opperator=='+'){
                    sum+=number;
                }
                else if(opperator=='-'){
                    sum-=number;
                }
            }
        }
        cout<<"Teste "<<cases++<<endl;
        cout<<sum<<endl;
        cout<<endl;

    }
    return 0;
}