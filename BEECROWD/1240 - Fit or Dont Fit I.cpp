#include <iostream>
 
using namespace std;
 
bool istrue(long long int a, long long int b){
    int carry1,carry2;
    if(b>a){
        return false;
    }
    else {
        while(b){
            carry1 = a%10;
            a = a/10;
            carry2 = b%10;
            b = b/10;
            if(carry1!=carry2){
                return false;
            }
        }
        return true;
    }
}
int main() {
    
    int t;
    long long int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(istrue(a,b)){
            cout<<"encaixa"<<endl;
        }
        else {
            cout<<"nao encaixa"<<endl;
        }
    }
    return 0;
}