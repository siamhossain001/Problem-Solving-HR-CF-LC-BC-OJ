#include <iostream>
 
using namespace std;
 
bool possible(int p, int j1, int j2, int r, int a){
    int sum = j1+j2;
    if((p==1 && sum%2==0) || (p==0 && sum%2==1)){
        if(r==1 && a==1){
            return false;
        }
        else {
        return true;
        }
    }
    else if((r==1 && a==0) || (r==0 && a==1)){
        return true;
    }
    else{
         return false;
    }
}
int main() {
 
    int p,j1,j2,r,a;
    cin>>p>>j1>>j2>>r>>a;
    
    if(possible(p,j1,j2,r,a)){
        cout<<"Jogador 1 ganha!"<<endl;
    }
    else {
        cout<<"Jogador 2 ganha!"<<endl;
    }
    
    return 0;
}