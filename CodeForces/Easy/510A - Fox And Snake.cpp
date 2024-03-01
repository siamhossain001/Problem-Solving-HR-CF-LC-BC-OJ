#include<iostream>
using namespace std;
int main(){

    int a,b,comander = 2;
    bool flag = true;
    cin>>a>>b;
    char snake[a][b];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if((i+1)%2!=0){
                snake[i][j]='#';
            }
            else {
                snake[i][j]='.';
            }
        }
        if((i+1)%2==0 && flag){
            snake[i][b-1]='#';
            flag = false;
        }
        else if((i+1)%2==0 && !flag){
            snake[i][0]='#';
            flag = true;
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<snake[i][j];
        }
        cout<<endl;
    }

}