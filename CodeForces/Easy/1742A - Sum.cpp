#include <iostream>

using namespace std;

bool isture(int a,int b,int c){
    if((a+b)==c || (a+c)==b || (b+c)==a ){
        return true;
    }
    else{
        return false;
    }

}
int main() {
    int a,b,c,test;
    cin>>test;
    while(test--){
        cin>>a>>b>>c;
    
        if(isture(a,b,c)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
