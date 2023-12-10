#include <iostream>

using namespace std;

int main(){
    int grams[]={300,1500,600,1000,150};
    int cassava[5];
    
    int total=0;
    for(int i=0;i<5;i++){
        cin>>cassava[i];
    }
    
    for(int i=0;i<5;i++){
        total+=cassava[i]*grams[i];
    }
    total+=225;
    
    cout<<total<<endl;
    return 0;
}
