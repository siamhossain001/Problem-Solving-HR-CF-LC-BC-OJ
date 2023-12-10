#include<iostream>
#include<vector>  

using namespace std;
int main(){
       
    int x,anton=0,danik=0;
    cin>>x;

    vector<char> arr(x);

    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    for(int i=0;i<x;i++){
        if(arr[i]=='A'){
            anton++;
        }
        else{
            danik++;
        }
    }

    if(anton>danik){
        cout<<"Anton"<<endl;
    }
    else if(anton<danik){
        cout<<"Danik"<<endl;
    }
    else {
        cout<<"Friendship"<<endl;
    }
    return 0;
}