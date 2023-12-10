#include<iostream>
using namespace std;
void pattern1(char snake[][50] , int n,int m){
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            snake[i][j]='#';
        }
    }
}
void pattern2(char snake[][50],int n,int m){
    int possition=1,i,j;
    for(i=1;i<n;i+=2){
        for(j=0;j<m;j++){
            snake[i][j]='.';
        }
        if(possition==1){
            snake[i][m-1]='#';
            possition=0;
        }
        else{
            snake[i][0]='#';
            possition=1;
        }
    }
}
void printer(char snake[][50],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<snake[i][j];
        }
        cout<<endl;
    }
}
int main(){

   int n,m;
   cin>>n>>m;
   char snake[50][50];
   pattern1(snake,n,m);
   pattern2(snake,n,m);
   printer(snake,n,m);

    return 0;
}