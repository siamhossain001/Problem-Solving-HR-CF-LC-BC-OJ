#include<iostream>
using namespace std;

int main(){
    
    int test;
    cin>>test;
    int x=0,y=0,z=0;
    
    int VECTOR[1000][100];
    for(int i=0;i<test;i++){
        for(int j=0;j<3;j++){
            cin>>VECTOR[i][j];
        }
        x+=VECTOR[i][0];
        y+=VECTOR[i][1];
        z+=VECTOR[i][2];
    }

    if(x==0 && y==0 && z==0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}