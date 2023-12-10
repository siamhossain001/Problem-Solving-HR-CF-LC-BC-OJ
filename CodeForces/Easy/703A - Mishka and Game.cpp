#include<iostream>
#include<vector>

using namespace std;

int main(){
    int monkey=0,chris=0,dis1,dis2,test;
    
    cin>>test;
    while(test--){
        cin>>dis1>>dis2;
        if(dis1>dis2){
            monkey++;
        }
        else if(dis1<dis2){
            chris++;
        }
    }
    if(monkey>chris){
        cout<<"Mishka"<<endl;
    }
    else if(chris>monkey){
        cout<<"Chris"<<endl;
    }
    else {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}