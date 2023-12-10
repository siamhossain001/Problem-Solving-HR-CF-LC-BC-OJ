#include <iostream>
 
using namespace std;

bool possible(int a, int b, int c){
    if((a-b)==0){
        return true;
    }
    else if((a-c)==0){
        return true;
    }
    else if((b-c)==0){
        return true;
    }
    else if(((a+b)-c)==0){
        return true;
    }
    else if(((a+c)-b)==0){
        return true;
    }
    else if(((c+b)-a)==0){
        return true;
    }
    else {
        return false;
    }
} 
int main() {
 
    int a,b,c;
    
    cin>>a>>b>>c;
    if(possible(a,b,c)){
        cout<<"S"<<endl;
    }
    else {
        cout<<"N"<<endl;
    }
    return 0;
}